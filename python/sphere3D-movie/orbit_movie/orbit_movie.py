# orbit_movie.py

""" 
Create a movie of two rotating, checkered, 3d spheres  
in orbit around their common center of mass

"""

import numpy as np
from mayavi import mlab

def sphere(t, omega, r, theta, phi, xcm, ycm, zcm):
  x = xcm + r*np.sin(theta)*np.cos(phi + omega*t)
  y = ycm + r*np.sin(theta)*np.sin(phi + omega*t)
  z = zcm + r*np.cos(theta)
  return x, y, z

def draw_frame(t):
  ## color switch
  black = (0.0, 0.0, 0.0)
  white = (1.0, 1.0, 1.0)
  colors = [black,white]
  c = np.array([1,1])
  # plot sphere 1 with b&w patches
  for i in range(len(latitude)-1):
    theta1 = latitude[i]
    theta2 = latitude[i+1]
    for j in range(len(longitude)-1):
      phi1 = longitude[j]
      phi2 = longitude[j+1]
      patchTheta, patchPhi = np.mgrid[theta1:theta2:resolution, phi1:phi2:resolution]
      patchX, patchY, patchZ = sphere(t, angFreq, radius, patchTheta, patchPhi)
      patchColor=colors[(c[0]-c[1])/2]
      mlab.mesh(patchX, patchY, patchZ, color=patchColor)
      c *= [1,-1] 
    c *= [-1,1]

## sphere radii
radius1 = 2
radius2 = 2
## rotation rates (angular frequency)
omega1 = 0.5
omega2 = 0.5
## latitude lines
numberOfLatLines = 2
latitude = np.linspace(0, np.pi, numberOfLatLines+2)
## longitude lines
numberOfMeridians = 2
longitude = np.linspace(0 , 2*np.pi, 2*numberOfMeridians+1)
## resolution of patches
resolution = 20j #non-zero complex number

## time frames
tInitial = 0
tFinal = 1000
tStep = 1
t = np.arange(tInitial, tFinal, tStep)

for k in range(len(t)):
  file_name='_temp%05d.png' % k
  draw_frame(t[k])
  mlab.savefig(file_name)
  mlab.clf()

import os
os.system("rm 3dsphere.avi")
os.system("ffmpeg -r 25 " +
        " -i _temp%05d.png -b:v 1800 3dsphere.avi")
os.system("rm _temp*.png")
