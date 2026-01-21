import numpy as np
## ndim to find the number of dimentions in numpy array
array = np.array('A')
print(array.ndim)

twodimarr =np.array([['A','B','C'],
                    ['D','E','F'],
                    ['G','H','I']])
print(twodimarr.ndim)

multidinarr =np.array([[['A','B','C'],['D','E','F'],['G','H','I']],
                      [['A','B','C'],['D','E','F'],['G','H','I']],
                      [['A','B','C'],['D','E','F'],['G','H','I']]])
print(multidinarr.ndim)


##shape
twodimarr =np.array([['A','B','C'],
                    ['D','E','F'],
                    ['G','H','I']])
print(twodimarr.shape)


## multidemantional indexing 
multidinarr =np.array([[['A','B','C'],['D','E','F'],['G','H','I']],
                      [['A','B','C'],['D','E','F'],['G','H','I']],
                      [['A','B','C'],['D','E','F'],['G','H','I']]])
print(0,0,1)