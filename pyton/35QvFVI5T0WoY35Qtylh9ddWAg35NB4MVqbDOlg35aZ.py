
        
        def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)
    print('Generating prime q...')
    q = rabinMiller.generateLargePrime(keySize)
    n = p * q
    
            else:
            colision_resolution = self._colision_resolution(key, data)
            if colision_resolution is not None:
                self._set_value(colision_resolution, data)
            else:
                self.rehashing()
                self.insert_data(data)
    
            a *= a
        b >>= 1