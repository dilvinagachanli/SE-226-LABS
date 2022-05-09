import math
from functools import reduce



a = int (input("Enter your number:"))

x = lambda a: (a-3)/(a*a)
list1 = []
def summation(a):
    while a>=1:
        list1.append(x(a))
        a-=1
    b = sum(list1)
    return print(b)

summation(a)

y = lambda a2: ((a2)/(a2+2))-10
a2 = int (input("Enter your number again:"))

list2 =[]
def product(a2):


product(a)










