#Prove that if u=exp(x)(xcosy - ysiny) then uxx + uxy = 0

from sympy import *

x, y = symbols('x y')
u = exp(x)*(x * cos(y) - y * sin(y))
print(u)
# Calculate the second partial derivatives
uxx = diff(u, x, x)
uyy = diff(u, y, y)
# Sum the second partial derivatives
w = uxx + uyy
# Simplify the result
w1 = simplify(w)
print("u_xx + u_yy =", w1)
