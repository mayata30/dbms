import numpy as np
import matplotlib.pyplot as plt
x= np.array([1,2,6,18])
y=np.array([3,10,12,20])
x1=np.array([2,3,7,19])
y1=np.array([4,11,13,20])
plt.plot(x,y, marker = 'o', ms = 20, mec = 'r')
plt.plot(x1,y1,marker = 'o', ms = 20, mec = 'r')
plt.title('two lines graph')
plt.legend()
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.show()
