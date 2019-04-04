
        
            # I and J are used interchangeably to allow
    # us to use a 5x5 table (25 letters)
    alphabet = 'ABCDEFGHIKLMNOPQRSTUVWXYZ'
    # we're using a list instead of a '2d' array because it makes the math 
    # for setting up the table and doing the actual encoding/decoding simpler
    table = []
    
        def bulk_insert(self, values):
        i = 1
        self.__aux_list = values
        for value in values:
            self.insert_data(value)
            self._step_by_step(i)
            i += 1
    
            print('****************** Testing Edit Distance DP Algorithm ******************')
        print()
    
    '''
The number of partitions of a number n into at least k parts equals the number of partitions into exactly k parts
plus the number of partitions into at least k-1 parts. Subtracting 1 from each part of a partition of n into k parts
gives a partition of n-k into k parts. These two facts together are used for this algorithm.
'''
def partition(m):
	memo = [[0 for _ in xrange(m)] for _ in xrange(m+1)]
	for i in xrange(m+1):
		memo[i][0] = 1
    
    	TEMPORARY_ARRAY = [ element for element in ARRAY[1:] if element >= PIVOT ]
	TEMPORARY_ARRAY = [PIVOT] + longestSub(TEMPORARY_ARRAY)
	if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
		return TEMPORARY_ARRAY
	else:
		return LONGEST_SUB
    
    
class SubArray:
    
    def reformatHex(i):
	'''[summary]
	Converts the given integer into 8-digit hex number.
    
    * @author chinmoy159
* @version 1.0 dated 10/08/2017
'''
    
    letters = [letter for letter in string.ascii_letters]
digits = [digit for digit in string.digits]
symbols = [symbol for symbol in string.punctuation]
chars = letters + digits + symbols
random.shuffle(chars)