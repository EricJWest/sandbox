reset

## set graph appearances ##
set xrange [0:10]
set yrange [-4:4]
set xtics 0,1,10
set xzeroaxis lt 1 lc rgb 'black'
unset grid
set xlabel 'Time'
set ylabel 'Displacement'
set title 'A Bunch of Sinusoids
set key box inside top right opaque

## define line styles ##
set style line 1 lt 1 lc rgb "red" lw 2
set style line 2 lt 2 lc rgb "blue" lw 2
set style line 3 lt 5 lc rgb "green" lw 2
set style line 4 lt 4 lc rgb "orange" lw 2

## print output to screen (using above linestyles, ls) ##
plot 4*sin((2*pi/4)*x + 0*pi/4) ls 1 title "plot 1", \
3*cos((2*pi/4)*x + 1*pi/4) ls 2 title "plot 2", \
2*sin((2*pi/4)*x + 2*pi/2) ls 3 title "plot 3", \
1*cos((2*pi/4)*x + 3*pi/4) ls 4 title "plot 4"

## write output to file ##
set terminal postscript eps color font 14
set output 'sinusoids.eps'
replot

## reset output to screen ##
unset output
set terminal x11


