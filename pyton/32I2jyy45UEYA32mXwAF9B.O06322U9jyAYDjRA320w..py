
        
            # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    def test():
    PROCESSES = 4
    print('Creating pool with %d processes\n' % PROCESSES)
    
    def convert_point(s):
    x, y = list(map(float, s.split(b';')))
    return Point(x, y)
    
    def generateLargePrime(keysize = 1024):
    while True:
        num = random.randrange(2 ** (keysize - 1), 2 ** (keysize))
        if isPrime(num):
            return num
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function