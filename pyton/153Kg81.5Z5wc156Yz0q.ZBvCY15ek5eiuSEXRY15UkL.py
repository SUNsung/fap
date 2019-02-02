
        
            if num in lowPrimes:
        return True
    
        print('Generating e that is relatively prime to (p - 1) * (q - 1)...')
    while True:
        e = random.randrange(2 ** (keySize - 1), 2 ** (keySize))
        if cryptoMath.gcd(e, (p - 1) * (q - 1)) == 1:
            break
    
    	return memo[m][m-1]
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function
    
    	startLength = len(bitString)
	bitString += '1'
	while len(bitString) % 512 != 448:
		bitString += '0'
	lastPart = format(startLength,'064b')
	bitString += rearrange(lastPart[32:]) + rearrange(lastPart[:32]) 
	return bitString
    
    from matplotlib import pyplot as plt
def plot_heterogeneity(heterogeneity, k):
    plt.figure(figsize=(7,4))
    plt.plot(heterogeneity, linewidth=4)
    plt.xlabel('# Iterations')
    plt.ylabel('Heterogeneity')
    plt.title('Heterogeneity of clustering over time, K={0:d}'.format(k))
    plt.rcParams.update({'font.size': 16})
    plt.show()
    
    
def b_expo(a, b):
    res = 0
    while b > 0:
        if b&1:
            res += a