
        
            def __delitem__(self, key):
        del self._store[key.lower()]
    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme + '\n\n' + history,
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.6, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=(
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ),
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': ['pyOpenSSL>=0.14', 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and (python_version == '2.7' or python_version == '2.6')': ['win_inet_pton'],
    },
)

    
    
def print_host(host):
    data = get_landscape_members_data()
    meta = get_meta(data)
    print(json.dumps(meta['hostvars'][host]))
    
    
def ismount(path):
    '''Test whether a path is a mount point
    clone of os.path.ismount (from cpython Lib/posixpath.py)
    fixed to solve https://github.com/ansible/ansible-modules-core/issues/2186
    and workaround non-fixed http://bugs.python.org/issue2466
    this should be rewritten as soon as python issue 2466 is fixed
    probably check for python version and use os.path.ismount if fixed
    
    
if __name__ == '__main__':
    main()

    
        'ipv6': re.compile(
        r'''^
            (?:{0}:){{7}}{0}|           # uncompressed: 1:2:3:4:5:6:7:8
            (?:{0}:){{1,6}}:|           # compressed variants, which are all
            (?:{0}:)(?::{0}){{1,6}}|    # a::b for various lengths of a,b
            (?:{0}:){{2}}(?::{0}){{1,5}}|
            (?:{0}:){{3}}(?::{0}){{1,4}}|
            (?:{0}:){{4}}(?::{0}){{1,3}}|
            (?:{0}:){{5}}(?::{0}){{1,2}}|
            (?:{0}:){{6}}(?::{0})|      # ...all with 2 <= a+b <= 7
            :(?::{0}){{1,6}}|           # ::ffff(:ffff...)
            {0}?::|                     # ffff::, ::
                                        # ipv4-in-ipv6 variants
            (?:0:){{6}}(?:{0}\.){{3}}{0}|
            ::(?:ffff:)?(?:{0}\.){{3}}{0}|
            (?:0:){{5}}ffff:(?:{0}\.){{3}}{0}
            $
        '''.format(ipv6_component), re.X | re.I
    ),
    
    import re
    
    
class TerminalModule(TerminalBase):
    
        return results

    
    # If true, do not generate a @detailmenu in the 'Top' node's menu.
#texinfo_no_detailmenu = False
    
        # Implement all methods from IInstaller, remembering to add
    # 'self' as first argument, e.g. def get_all_names(self)...

    
        def askfilename(self, filetypes, initdir, initfile):  # htest #
        # Extracted from browse_file so can mock for unittests.
        # Cannot unittest as cannot simulate button clicks.
        # Test by running htest, such as by running this file.
        return filedialog.Open(parent=self, filetypes=filetypes)\
               .show(initialdir=initdir, initialfile=initfile)
    
    for prec in [9, 19]:
    print('\nPrecision: %d decimal digits\n' % prec)
    for func in to_benchmark:
        start = time.time()
        if C is not None:
            C.getcontext().prec = prec
        P.getcontext().prec = prec
        for i in range(10000):
            x = func()
        print('%s:' % func.__name__.replace('pi_', ''))
        print('result: %s' % str(x))
        print('time: %fs\n' % (time.time()-start))
    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
        def last(self):
        '''Process a LAST command.  No arguments.  Return as for STAT.'''
        return self._statcmd('LAST')
    
    def get_custom_entry_point(subsystem):
    try:
        return subsystem_details[subsystem][:2]
    except KeyError:
        raise ValueError('The subsystem %s is not known' % subsystem) from None
    
            a = -sys.maxsize
        b = sys.maxsize
        expected_len = b - a
        x = range(a, b)
        self.assertIn(a, x)
        self.assertNotIn(b, x)
        self.assertRaises(OverflowError, len, x)
        self.assertTrue(x)
        self.assertEqual(_range_len(x), expected_len)
        self.assertEqual(x[0], a)
        idx = sys.maxsize+1
        self.assertEqual(x[idx], a+idx)
        self.assertEqual(x[idx:idx+1][0], a+idx)
        with self.assertRaises(IndexError):
            x[-expected_len-1]
        with self.assertRaises(IndexError):
            x[expected_len]
    
        # __set__ and __get__ should raise a TypeError in case their self
    # argument is not a ctype instance.
    def test___set__(self):
        class MyCStruct(Structure):
            _fields_ = (('field', c_int),)
        self.assertRaises(TypeError,
                          MyCStruct.field.__set__, 'wrong type self', 42)