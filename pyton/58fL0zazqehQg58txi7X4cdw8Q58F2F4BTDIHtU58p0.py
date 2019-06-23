
        
        def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)
    print('Generating prime q...')
    q = rabinMiller.generateLargePrime(keySize)
    n = p * q
    
        def _colision_resolution(self, key, data=None):
        i = 1
        new_key = self.hash_function(key + i*i)
    
    '''
The number of partitions of a number n into at least k parts equals the number of partitions into exactly k parts
plus the number of partitions into at least k-1 parts. Subtracting 1 from each part of a partition of n into k parts
gives a partition of n-k into k parts. These two facts together are used for this algorithm.
'''
def partition(m):
	memo = [[0 for _ in xrange(m)] for _ in xrange(m+1)]
	for i in xrange(m+1):
		memo[i][0] = 1
    
    The problem is  :
Given an ARRAY, to find the longest and increasing sub ARRAY in that given ARRAY and return it.
Example: [10, 22, 9, 33, 21, 50, 41, 60, 80] as input will return [10, 22, 33, 41, 60, 80] as output
'''
from __future__ import print_function
    
        return diff

    
            'Intended Audience :: Developers',
        'Topic :: Software Development :: Libraries :: Python Modules',
    
    def load_messages(core):
    core.send_raw_msg = send_raw_msg
    core.send_msg     = send_msg
    core.upload_file  = upload_file
    core.send_file    = send_file
    core.send_image   = send_image
    core.send_video   = send_video
    core.send         = send
    core.revoke       = revoke