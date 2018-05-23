## write output to file ##
set terminal postscript eps color font 14
set output 'shm.eps'
load 'shm.gp'

## rest output to screen ##
set terminal x11
set output

