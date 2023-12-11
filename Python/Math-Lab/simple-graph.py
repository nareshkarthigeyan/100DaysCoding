import matplotlib.pyplot as plt 
import numpy as np 

x = np.linspace(0, 2, 100)
plt.plot(x,x**2,label = "Quadratic")
plt.plot(x,x**3,label = "Cubic")
plt.xlabel("X lablel")
plt.ylabel("Y lablel")

plt.title("Simple plot")
plt.legend()
plt.show()

