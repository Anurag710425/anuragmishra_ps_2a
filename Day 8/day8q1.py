import math
a =float(input("enter coffecient a"))
b =float(input("enter coffecient b"))
c =float(input("enter coffecient c"))
d=b *b -4 *a *c
if(d>0):
    r1=(-b - math.sqrt(d)) / (2*a)
    r2=(-b +  math.sqrt(d)) / (2*a)
    print("roots are real and unequal",r1,r2)
elif(d==0):
    r1=-b / (2*a)
    print("roots are real and equal",r1)
else:
    print("roots are imaginary")





    
