
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_upload_ok(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG, 'foo=bar')
        assert HTTP_OK in r
        assert 'Content-Disposition: form-data; name='foo'' in r
        assert 'Content-Disposition: form-data; name='test-file';' \
               ' filename='%s'' % os.path.basename(FILE_PATH) in r
        assert FILE_CONTENT in r
        assert ''foo': 'bar'' in r
        assert 'Content-Type: text/plain' in r
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%d,%d,%d,%d' % (publicKey[0], publicKey[1], publicKey[2], publicKey[3]))
    
        for trials in range(5):
        a = random.randrange(2, num - 1)
        v = pow(a, s, num)
        if v != 1:
            i = 0
            while v != (num - 1):
                if i == t - 1:
                    return False
                else:
                    i = i + 1
                    v = (v ** 2) % num
    return True
    
            print('Enter the first string: ', end='')
        S1 = raw_input().strip()
    
    
if __name__ == '__main__':
    whole_array = input('please input some numbers:')
    array = SubArray(whole_array)
    re = array.solve_sub_array()
    print(('the results is:', re))
    
    def sum32(a,b):
	return (a + b) % 2**32
    
            '''
        this section is to check that the inputs conform to our dimensionality constraints
        '''
        if X.ndim != 1:
            print('Error: Input data set must be one dimensional')
            return
        if len(X) != len(y):
            print('Error: X and y have different lengths')
            return
        if y.ndim != 1:
            print('Error: Data set labels must be one dimensional')
            return
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''
