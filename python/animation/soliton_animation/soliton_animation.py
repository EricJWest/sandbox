# soliton_animation.py

"""In situ animation of a propagating soliton wave"""

import numpy as np
import matplotlib.pyplot as plt
import time

def soliton(t,x):
    return 0.5/np.cosh(0.5*(x - t))**2

x = np.linspace(0,60.0,1001)

tInitial = 0
tFinal = 60.0
dt = 0.1

plt.ion()
plt.xlabel('x')
plt.ylabel('y')
line,=plt.plot(x, soliton(0,x))

for t in np.arange(tInitial, tFinal, dt): 
  line.set_ydata(soliton(t,x))
  plt.draw()
  plt.title('Soliton wave at t = %5.1f' % t)
  time.sleep(0.01)
