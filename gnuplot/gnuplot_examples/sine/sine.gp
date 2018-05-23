reset

## set graph appearances ##
set xrange [0:20]
set yrange [-1.2:1.2]
set xtics 0,1,20
set xzeroaxis lt 1 lc rgb 'black'
set grid
set xlabel 'x'
set ylabel 'sin(x)'
set title 'A Lonely Sine Curve'
set key nobox inside top right

## print output to screen ##
plot sin(x) linetype 1 linecolor rgb "red" linewidth 2 title "sin(x)"

## write output to file ##
set terminal postscript eps color font 14
set output 'sine.eps'
replot

## reset output to screen ##
unset output
set terminal x11
