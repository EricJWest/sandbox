reset

## set plot properties ##
set xrange [*:*]
set yrange [*:*]
set xtics axis
set ytics axis
set xzeroaxis lt 1 lc rgb 'black'
set yzeroaxis lt 1 lc rgb 'black'
set xlabel 'z'
set ylabel 'field value'
set title 'Scalar field profile along extra dimension'
set key inside top right opaque

## define linestyles ##
set style line 1 lt 2 lc rgb "red" lw 2
set style line 2 lt 3 lc rgb "blue" lw 2

## print output to screen ##
set terminal x11
plot 'plotdata.dat' using 1:2 with lines ls 1 title 'phi(z)',\
'plotdata.dat' using 1:6 with lines ls 2 title 'chi(z)'

## write output to file ##
set terminal postscript eps color font 14
set output 'plotdata.eps'
replot

## reset output to screen ##
unset output
set terminal x11
