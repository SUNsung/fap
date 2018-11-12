
        
            if check_author and post['author_id'] != g.user['id']:
        abort(403)
    
        # test that successful login redirects to the index page
    response = auth.login()
    assert response.headers['Location'] == 'http://localhost/'
    
        The following characters are escaped in strings:
    
    
class HasKey(PostgresSimpleLookup):
    lookup_name = 'has_key'
    operator = '?'
    prepare_rhs = False
    
    
class CITextExtension(CreateExtension):
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        def test_distant_exception(self):
        def f():
            1/0
        def g():
            f()
        def h():
            g()
        def i():
            h()
        def j(p):
            i()
        f_ident = ident(f)
        g_ident = ident(g)
        h_ident = ident(h)
        i_ident = ident(i)
        j_ident = ident(j)
        self.check_events(j, [(1, 'call', j_ident),
                              (2, 'call', i_ident),
                              (3, 'call', h_ident),
                              (4, 'call', g_ident),
                              (5, 'call', f_ident),
                              (5, 'return', f_ident),
                              (4, 'return', g_ident),
                              (3, 'return', h_ident),
                              (2, 'return', i_ident),
                              (1, 'return', j_ident),
                              ])
    
        return p[:0], p
    
            * Some platforms report ASCII as ANSI_X3.4-1968
        * Some platforms report ASCII as US-ASCII
        * Some platforms report UTF-8 instead of utf-8
        '''
        data = data.replace(b'ANSI_X3.4-1968', b'ascii')
        data = data.replace(b'US-ASCII', b'ascii')
        data = data.lower()
        return data
    
            if MS_WINDOWS:
            expected = 'utf-8/surrogatepass'
        else:
            expected = 'utf-8/surrogateescape'
    
        def testSeekPostEnd(self):
        self.createTempFile()
        with BZ2File(self.filename) as bz2f:
            bz2f.seek(150000)
            self.assertEqual(bz2f.tell(), len(self.TEXT))
            self.assertEqual(bz2f.read(), b'')
    
        def persistent_load(self, pid):
        # This method is invoked whenever a persistent ID is encountered.
        # Here, pid is the tuple returned by DBPickler.
        cursor = self.connection.cursor()
        type_tag, key_id = pid
        if type_tag == 'MemoRecord':
            # Fetch the referenced record from the database and return it.
            cursor.execute('SELECT * FROM memos WHERE key=?', (str(key_id),))
            key, task = cursor.fetchone()
            return MemoRecord(key, task)
        else:
            # Always raises an error if you cannot return the correct object.
            # Otherwise, the unpickler will think None is the object referenced
            # by the persistent ID.
            raise pickle.UnpicklingError('unsupported persistent object')
    
        with open(args.msgfile, 'rb') as fp:
        msg = email.message_from_binary_file(fp, policy=default)
    
    <slide><title>Another demo slide</title>
<point>It is important</point>
<point>To have more than</point>
<point>one slide</point>
</slide>
</slideshow>
'''
    
        it = manager.baz()
    for i in it:
        print('<%d>' % i, end=' ')
    print()
    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
        requests *= 10000
    client1_delegate = timeit(client1.delegate)
    client2_delegate = timeit(client2.delegate)
    with suppress_stdout():
        client1_delegate(requests)
        client2_delegate(requests)
    # lets check which is faster
    print(client1_delegate._time, client2_delegate._time)
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
    print()
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        strat2 = StrategyExample(execute_replacement2)
    strat2.name = 'Strategy Example 2'
    
        # A Shop that sells only cats
    cat_shop = PetShop(Cat)
    cat_shop.show_pet()
    print('')
    
    In other programming languages, a more complex arrangement is sometimes
necessary. In particular, you cannot have polymorphic behaviour in a constructor in C++ -
see https://stackoverflow.com/questions/1453131/how-can-i-get-polymorphic-behavior-in-a-c-constructor
- which means this Python technique will not work. The polymorphism
required has to be provided by an external, already constructed
instance of a different class.
    
    
def lazy_property2(fn):
    attr = '_lazy__' + fn.__name__
    
        def find_all_path(self, start, end, path=None):
        path = path or []
        path.append(start)
        if start == end:
            return [path]
        paths = []
        for node in self.graph.get(start, []):
            if node not in path:
                newpaths = self.find_all_path(node, end, path[:])
                paths.extend(newpaths)
        return paths