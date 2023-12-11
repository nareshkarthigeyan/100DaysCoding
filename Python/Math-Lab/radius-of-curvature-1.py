#Find the radius of curvature of r = 4(1+cost) at t = pi/2

from sympy import *
t, r = symbols('t r')
r1 = Derivative(r,t).doit()
r2 = Derivative(r1,t).doit()
rho = (r**2 + r1 ** 2)**(1.5)/(r**2+2*r1**2-r*r2)
rho1 = rho.subs(t, pi/2)
print("The radius of curvature is: ")
rho_simplified = simplify(rho)
print(rho_simplified)