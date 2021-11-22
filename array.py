import numpy as np

A = np.array([1,2,3,4,5])

B=A.copy()
print(B)

B[0]=2
print(A)