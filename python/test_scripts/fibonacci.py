# fibonacci.py

""" Module fibonacci: lists Fibonacci numbers
    Contains one function fibonacci(n) """

def fibonacci(n):
    """ Return's the nth Fibonacci number. """
    a,b=0,1
    for i in range(n):
        a,b=b,a+b
    return a

##############################################################

if __name__ == "__main__":
    fibmax=10
    print "Printing the first",fibmax,"Fibonacci numbers...\n"
    for i in range(fibmax+1):
        print "fibonacci(",i,") = ",fibonacci(i)
