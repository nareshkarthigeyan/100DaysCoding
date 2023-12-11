# Plot a cartoid, r = a + cos(theta) & r = a - acos(theta)

from pylab import *
import numpy as np
theta = linspace(0, 2*np.pi, 1000)
r1 = 4 + 4 * cos(theta)
r2 = 5 - 5 * cos(theta)
polar(theta, r1, 'g--')
polar(theta, r2, 'r--')
show()
