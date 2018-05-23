# soliton_movie.py

"""Create a movie of a propagating soliton wave"""

import numpy as np
import matplotlib.pyplot as plt

def sol(t,x):
    return 0.5/np.cosh(0.5*(x - t))**2

def draw_frame(t,x):
    """Draw a frame. """
    plt.plot(x, sol(t,x))
    plt.axis([0,60.0,0,0.5])
    plt.xlabel('x')
    plt.ylabel('y')
    plt.title('Soliton wave at t = %5.1f' % t)

x = np.linspace(0, 60.0, 1001)
t = np.linspace(-10, 70, 50)

for i in range(len(t)):
    file_name='_temp%05d.png' % i
    draw_frame(t[i],x)
    plt.savefig(file_name)
    plt.clf()

import os
os.system("rm soliton.avi")
os.system("ffmpeg -r 25 " +
        " -i _temp%05d.png -b:v 1800 soliton.avi")
os.system("rm _temp*.png")
