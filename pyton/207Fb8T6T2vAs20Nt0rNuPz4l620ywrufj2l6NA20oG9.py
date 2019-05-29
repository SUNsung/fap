
        
        We are going to make an array of: x / 2 - 1 if number is even, else x / 2
(The -1 with even number it's to exclude the number itself)
Because we just need numbers [from 3..x if x is odd]
    
        # size in bits of p and q need to add up to the size of n
    p_size = k / 2
    q_size = k - p_size
    
    e = gen_prime(k, seed)  # in many cases, e is also chosen to be a small constant
    
    while True:
        p = gen_prime(p_size, seed)
        if p % e != 1:
            break
    
    while True:
        q = gen_prime(q_size, seed)
        if q % e != 1:
            break
    
    n = p * q
    l = (p - 1) * (q - 1)  # calculate totient function
    d = modinv(e, l)
    
    return int(n), int(e), int(d)