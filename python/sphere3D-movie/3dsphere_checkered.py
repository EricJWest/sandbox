# 3dsphere_checkered.py

""" plot a checkered 3d sphere  """

import numpy as np

# radius of sphere
radius = 2

# latitude, longitude
numberOfLatLines = 5 #non-negative integer
numberOfMeridians = 2 #non-negative integer
latitude = np.linspace(0, np.pi, numberOfLatLines+2)
longitude = np.linspace(0 , 2*np.pi, 2*numberOfMeridians+1)

## uncomment the following block to plot with mplot3d (via matplotlib)
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
plt.ion
fig = plt.figure()
ax = Axes3D(fig)
ax.set_aspect("equal")
## color switch
colors = ['red','white']
c = np.array([1,1])
## resolution of patches
resolution = 20j #non-zero complex number
## plot sphere
for i in range(len(latitude)-1):
  theta1 = latitude[i]
  theta2 = latitude[i+1]
  for j in range(len(longitude)-1):
    phi1 = longitude[j]
    phi2 = longitude[j+1]
    patchTheta, patchPhi = np.mgrid[theta1:theta2:resolution, phi1:phi2:resolution]
    patchX = radius*np.sin(patchTheta)*np.cos(patchPhi)
    patchY = radius*np.sin(patchTheta)*np.sin(patchPhi)
    patchZ = radius*np.cos(patchTheta)
    patchColor=colors[(c[0]-c[1])/2]
    ax.plot_surface(patchX, patchY, patchZ, rstride=1, cstride=1, color=patchColor, linewidth=0)
    c *= [1,-1] 
  c *= [-1,1]
plt.show()
## save image
fig.savefig('3dsphere_checkered.pdf')
    
## uncomment the following block to plot with mlab (via mayavi)
## in this case one must also launch python with the --gui=wx flag
#from mayavi import mlab
## color switch
#black = (0.0, 0.0, 0.0)
#white = (1.0, 1.0, 1.0)
#colors = [black,white]
#c = np.array([1,1])
## resolution of patches
#resolution = 100j #non-zero complex number
## plot sphere
#for i in range(len(latitude)-1):
#  theta1 = latitude[i]
#  theta2 = latitude[i+1]
#  for j in range(len(longitude)-1):
#    phi1 = longitude[j]
#    phi2 = longitude[j+1]
#    patchTheta, patchPhi = np.mgrid[theta1:theta2:resolution, phi1:phi2:resolution]
#    patchX = radius*np.sin(patchTheta)*np.cos(patchPhi)
#    patchY = radius*np.sin(patchTheta)*np.sin(patchPhi)
#    patchZ = radius*np.cos(patchTheta)
#    patchColor=colors[(c[0]-c[1])/2]
#    mlab.mesh(patchX, patchY, patchZ, color=patchColor)
#    c *= [1,-1] 
#  c *= [-1,1]

## save image
#mlab.savefig('3dsphere_checkered.pdf') 
#mlab.savefig('3dsphere_checkered.obj') 
