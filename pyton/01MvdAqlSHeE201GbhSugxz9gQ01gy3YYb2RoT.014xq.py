
        
                self.client = _DNSimpleLexiconClient(TOKEN, 0)
    
    
# -- Options for manual page output ---------------------------------------
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:*')
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#html_short_title = None
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-nginx', u'certbot-nginx Documentation',
     [author], 1)
]
    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
    The interface is file-like.  The implemented methods are:
read, close, seek, tell, isatty.
Extra methods are: skip() (called by close, skips to the end of the chunk),
getname() (returns the name (ID) of the chunk)
    
                # test that the path returns unchanged
            p1 = P('~/My Documents')
            p2 = P('~alice/My Documents')
            p3 = P('~bob/My Documents')
            p4 = P('/~/My Documents')
            p5 = P('d:~/My Documents')
            p6 = P('')
            self.assertRaises(RuntimeError, p1.expanduser)
            self.assertRaises(RuntimeError, p2.expanduser)
            self.assertRaises(RuntimeError, p3.expanduser)
            self.assertEqual(p4.expanduser(), p4)
            self.assertEqual(p5.expanduser(), p5)
            self.assertEqual(p6.expanduser(), p6)
    
    
def read_binary(package: Package, resource: Resource) -> bytes:
    '''Return the binary contents of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    with open_binary(package, resource) as fp:
        return fp.read()
    
        def __init__(self):
        self.experts = []
        self.common_state = {
            'problems': 0,
            'suggestions': 0,
            'contributions': [],
            'progress': 0   # percentage, if 100 -> task is finished
        }
    
        @classmethod
    def setUpClass(cls):
        ''' Class scope setup. '''
        cls.p = Proxy()
    
        '''def test_object(queue):
           queue_object = QueueObject(queue, True)
           print('Inside func: {}'.format(queue_object.object))'''
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def setup(self):
        print('Setting up the Test')
        time.sleep(0.1)
        self._tm.prepareReporting()
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)
    
        def __init__(self, one, other):
        self._one = one
        self._other = other