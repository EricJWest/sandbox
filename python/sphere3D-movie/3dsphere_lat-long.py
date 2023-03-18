# 3dsphere_lat-long.py

""" plot a 3d sphere with lines of latitude and longitude """

import numpy as np

# equations for a sphere
surfaceResolution=100j
theta, phi = np.mgrid[0:np.pi:surfaceResolution, 0:2*np.pi:surfaceResolution]
radius = 2
x = radius*np.sin(theta)*np.cos(phi)
y = radius*np.sin(theta)*np.sin(phi)
z = radius*np.cos(theta)

# latitude, longitude
numberOfLatLines = 17 #non-negative integer
numberOfMeridians = 12 #non-negative integer
latitude = np.linspace(0, np.pi, numberOfLatLines+2)
longitude = np.linspace(0 , 2*np.pi, 2*numberOfMeridians+1)

# uncomment the following block to plot with mplot3d (via matplotlib)
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
plt.ion
fig = plt.figure()
ax = Axes3D(fig)
ax.set_aspect("equal")
## plot surface
surfaceColor = 'white'
ax.plot_surface(x, y, z, rstride=1, cstride=1, color=surfaceColor, linewidth=0, alpha=1)
## plot lines of latitude
for i in range(len(latitude)-1):
  latResolution = 100
  latPhi = np.linspace(0,2*np.pi,latResolution)
  latTheta = latitude[i]*np.ones_like(latPhi)
  latX = radius*np.sin(latTheta)*np.cos(latPhi)
  latY = radius*np.sin(latTheta)*np.sin(latPhi)
  latZ = radius*np.cos(latTheta)
  latColor = 'blue'
  ax.plot(latX, latY, latZ, color=latColor, linewidth=0.5)
## plot lines of longitude
for i in range(len(longitude)-1):
  longResolution = 100
  longTheta = np.linspace(0,np.pi,longResolution)
  longPhi = longitude[i]*np.ones_like(longTheta)
  longX = radius*np.sin(longTheta)*np.cos(longPhi)
  longY = radius*np.sin(longTheta)*np.sin(longPhi)
  longZ = radius*np.cos(longTheta)
  longColor = 'red'
  ax.plot(longX, longY, longZ, color=longColor, linewidth=0.5)
plt.show()
## save image
#fig.savefig('3dsphere_lat-long.pdf')


# uncomment the following block to plot with mlab (via mayavi)
# in this case one must also launch python with the --gui=wx flag
#from mayavi import mlab
## plot surface
#surfaceColor = (1.0, 1.0, 1.0)
#mlab.mesh(x, y, z, color=surfaceColor)
## plot lines of latitude
#for i in range(len(latitude)-1):
#  latResolution = 100
#  latPhi = np.linspace(0,2*np.pi,latResolution)
#  latTheta = latitude[i]*np.ones_like(latPhi)
#  latX = radius*np.sin(latTheta)*np.cos(latPhi)
#  latY = radius*np.sin(latTheta)*np.sin(latPhi)
#  latZ = radius*np.cos(latTheta)
#  latColor = (0.0, 0.0, 0.0)
#  mlab.plot3d(latX, latY, latZ, color=latColor, line_width=0.5)
## plot lines of longitude
#for i in range(len(longitude)-1):
#  longResolution = 100
#  longTheta = np.linspace(0,np.pi,longResolution)
#  longPhi = longitude[i]*np.ones_like(longTheta)
#  longX = radius*np.sin(longTheta)*np.cos(longPhi)
#  longY = radius*np.sin(longTheta)*np.sin(longPhi)
#  longZ = radius*np.cos(longTheta)
#  longColor = (0.0, 0.0, 0.0) 
#  mlab.plot3d(longX, longY, longZ, color=longColor, line_width=0.5)
#
## save image
#mlab.savefig('3dsphere_lat-long.pdf') 
