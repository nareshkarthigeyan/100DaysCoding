# To plot a four leaved rose, r = 2|Cos(theta)|

from pylab import *
import numpy as np
theta = linspace(0, 2*np.pi, 1000)
r1 = 2*abs(cos(2*theta))
polar(theta,r1,'g')
show()
