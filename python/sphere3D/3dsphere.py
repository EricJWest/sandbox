# 3dsphere.py

"""Plot a sphere in 3D"""

import numpy as np

# parametric equations for a sphere
theta, phi = np.mgrid[0:np.pi:20j, 0:2*np.pi:20j]
radius = 2
x = radius*np.sin(theta)*np.cos(phi)
y = radius*np.sin(theta)*np.sin(phi)
z = radius*np.cos(theta)

# uncomment the following block to plot with mplot3d (via matplotlib)
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
plt.ion
fig = plt.figure()
ax = Axes3D(fig) #fig.add_subplot(111, projection='3d')
ax.set_aspect("equal")
ax.plot_surface(x, y, z, rstride=1, cstride=1, color='black')
plt.show()
#fig.savefig('3dsphere.pdf')
	
# uncomment the following block to plot with mlab (via mayavi)
# in this case one must also launch python with the --gui=wx flag
#from mayavi import mlab
#mlab.mesh(x, y, z, color=(0.0, 0.0, 1.0))
#mlab.savefig('3dsphere.pdf') 

