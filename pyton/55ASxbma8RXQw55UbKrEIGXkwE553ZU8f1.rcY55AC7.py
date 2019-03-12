
        
            def __init__(self, first_user, second_user):
        super(PrivateChat, self).__init__()
        self.users.append(first_user)
        self.users.append(second_user)
    
    
class VehicleSize(Enum):
    
        def test_continuation(self):
        # Balancing continuation
        self.check_roundtrip('a = (3,4, \n'
                             '5,6)\n'
                             'y = [3, 4,\n'
                             '5]\n'
                             'z = {'a': 5,\n'
                             ''b':15, 'c':True}\n'
                             'x = len(y) + 5 - a[\n'
                             '3] - a[2]\n'
                             '+ len(z) - z[\n'
                             ''b']\n')
    
    def capture(*args, **kw):
    '''capture all positional and keyword arguments'''
    return args, kw
    
        def test_basic_exception(self):
        def f(p):
            1/0
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
        Note that not all entries are resources.  Specifically, directories are
    not considered resources.  Use `is_resource()` on each entry returned here
    to check if it is a resource or not.
    '''
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.contents()
    # Is the package a namespace package?  By definition, namespace packages
    # cannot have resources.  We could use _check_location() and catch the
    # exception, but that's extra work, so just inline the check.
    elif package.__spec__.origin is None or not package.__spec__.has_location:
        return ()
    else:
        package_directory = Path(package.__spec__.origin).parent
        return os.listdir(package_directory)

    
                env = os.environ.copy()
            # C locale gives ASCII locale encoding, but Python uses UTF-8
            # to parse the command line arguments on Mac OS X and Android.
            env['LC_ALL'] = 'C'
    
    # In a real program you'd get the filename from the arguments.
with open('outgoing.msg', 'rb') as fp:
    msg = BytesParser(policy=policy.default).parse(fp)