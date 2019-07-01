
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        infile, outfile = args
    
    import io
import sys
import re
    
        return ret
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
    
def setup(app):
    app.add_role('gh', github_link)

    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
    
def get_primes(n):
    '''Return list of all primes less than n,
    Using sieve of Eratosthenes.
    '''
    if n <= 0:
        raise ValueError(''n' must be a positive integer.')
    # If x is even, exclude x from list (-1):
    sieve_size = (n // 2 - 1) if n % 2 == 0 else (n // 2)
    sieve = [True for _ in range(sieve_size)]   # Sieve
    primes = []      # List of Primes
    if n >= 2:
        primes.append(2)      # 2 is prime by default
    for i in range(sieve_size):
        if sieve[i]:
            value_at_i = i*2 + 3
            primes.append(value_at_i)
            for j in range(i, sieve_size, value_at_i):
                sieve[j] = False
    return primes

    
        def pow2_factor(num):
        '''factor n into a power of 2 times an odd number'''
        power = 0
        while num % 2 == 0:
            num /= 2
            power += 1
        return power, num
    
        def random_vector():
        import random
        vector = [0 for _ in range(vector_length)]
        for i in random.sample(range(vector_length), nozero_counut):
            vector[i] = random.random()
        return vector
    
    
class PriorityQueue:
    def __init__(self, items=None, priorities=None):
        '''Create a priority queue with items (list or iterable).
        If items is not passed, create empty priority queue.'''
        self.priority_queue_list = []
        if items is None:
            return
        if priorities is None:
            priorities = itertools.repeat(None)
        for item, priority in zip(items, priorities):
            self.push(item, priority=priority)