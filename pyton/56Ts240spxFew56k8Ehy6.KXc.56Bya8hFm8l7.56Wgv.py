
        
            def __init__(self):
        self.name = 'unaccent'

    
    KEY_PREFIX = 'django.contrib.sessions.cache'
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
            cid = CaseInsensitiveDict()
        cid['Accept'] = 'application/json'
        cid['aCCEPT'] == 'application/json'  # True
        list(cid) == ['Accept']  # True
    
            with open(filename, 'rb', 0) as fp1:
            fd1 = fp1.fileno()
            with open(filename, 'rb', 0) as fp2:
                fd2 = fp2.fileno()
                self.assertTrue(self.pathmodule.sameopenfile(fd1, fd2))
    
    document = '''\
<slideshow>
<title>Demo slideshow</title>
<slide><title>Slide title</title>
<point>This is a demo</point>
<point>Of a program for processing slides</point>
</slide>
    
            try:
            print(pool.map(f, list(range(10))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.map()')
        else:
            raise AssertionError('expected ZeroDivisionError')