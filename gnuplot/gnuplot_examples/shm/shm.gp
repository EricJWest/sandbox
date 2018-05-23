## set graph appearance (ALL) ##
set key off
unset grid
set xzeroaxis lt 1 lc rgb 'black'

## define line styles ##
set style line 1 lt 1 lc rgb "red" lw 2
set style line 2 lt 2 lc rgb "blue" lw 2
set style line 3 lt 5 lc rgb "green" lw 2
set style line 4 lt 4 lc rgb "orange" lw 2

## print output to screen ##
set multiplot layout 2,2 rowsfirst title 'Motion of an Oscillator'
# plot 1,1
set xrange [0:10]
set yrange [-6:6]
set xtics 0,1,10
set xlabel 'Time [s]'
set ylabel 'Position [m]'
set title 'Position of Oscillator'
plot 5*cos(3*x) ls 1
#plot 1,2
set xrange [0:10]
set yrange [0:5]
set xtics 0,1,10
set xlabel 'Time [s]'
set ylabel 'Kinetic Energy [J]'
set title 'Kinetic Energy of Oscillator'
plot 5*sin(3*x)**2 ls 2
#plot 2,1
set xrange [0:20]
set yrange [-16:16]
set xtics 0,2,20
set xlabel 'Time [s]'
set ylabel 'Velocity [m/s]'
set title 'Velocity of Oscillator'
plot 15*sin(3*x) ls 3
#plot 2,2
set xrange [0:5]
set yrange [0:25]
set xtics 0,0.5,5
set xlabel 'Time [s]'
set ylabel 'Potential Energy [J]'
set title 'Potential Energy of Oscillator'
plot 25*cos(3*x)**2 ls 4
unset multiplot
