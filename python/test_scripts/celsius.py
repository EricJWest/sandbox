# celsius.py

""" Print Celsius-to-Fahrenheit conversion table """

LOWER=-20	#lower limit of celsius
UPPER=80	#upper limit of celsius 
STEP=10 	#step size in celsius

print "Celsius to Fahrenheit conversion table:\n"
print " C      F" 
print "---   -----"

celsius = LOWER
while (celsius <= UPPER):
    fahr = (9.0/5.0)*celsius + 32.0;
    print celsius," ",fahr
    celsius = celsius + STEP
