# fahrenheit.py

""" Print Fahrenheit-to-Celsius conversion table """

LOWER=-20	#lower limit of farhenheit
UPPER=80	#upper limit of fahrenheit 
STEP=10 	#step size in fahrenheit

print "Fahrenheit to Celsius conversion table:\n"
print " F      C" 
print "---   -----"

fahr = LOWER
while (fahr <= UPPER):
    celsius = (5.0/9.0)*(fahr - 32.0);
    print fahr," ",celsius
    fahr = fahr + STEP
