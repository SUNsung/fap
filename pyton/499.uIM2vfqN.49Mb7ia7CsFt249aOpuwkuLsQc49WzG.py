
        
            '''
    req_h = OUT_REQ_HEAD in output_options
    req_b = OUT_REQ_BODY in output_options
    resp_h = OUT_RESP_HEAD in output_options
    resp_b = OUT_RESP_BODY in output_options
    req = req_h or req_b
    resp = resp_h or resp_b
    
    error_msg = None
    
        '''
)
troubleshooting.add_argument(
    '--version',
    action='version',
    version=__version__,
    help='''
    Show version and exit.
    
            # --json, -j
        self.explicit_json = explicit_json
    
        def test_verify_no_OK(self, httpbin_secure):
        r = http(httpbin_secure.url + '/get', '--verify=no')
        assert HTTP_OK in r
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
    
class SessionNameValidator(object):
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        def __iter__(self):
        '''Allows you to use a response as an iterator.'''
        return self.iter_content(128)
    
    _init()

    
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

    
        if C is not None:
        assert(sx == sy)

    
        return _scan_once
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)
    
        def _encrypt_on(sock, context, hostname):
        '''Wrap a socket in SSL/TLS. Arguments:
        - sock: Socket to wrap
        - context: SSL context to use for the encrypted connection
        Returns:
        - sock: New, encrypted socket.
        '''
        # Generate a default SSL context if none was passed.
        if context is None:
            context = ssl._create_stdlib_context()
        return context.wrap_socket(sock, server_hostname=hostname)
    
        def _set_async(self, flag):
        if flag:
            raise xml.dom.NotSupportedErr(
                'asynchronous document loading is not supported')
    
        def iter_builtins(self):
        '''
        Yield a sequence of (name,value) pairs of PyObjectPtr instances, for
        the builtin variables
        '''
        if self.is_optimized_out():
            return ()
    
        def test_getnewargs(self):
        self.assertEqual((1+2j).__getnewargs__(), (1.0, 2.0))
        self.assertEqual((1-2j).__getnewargs__(), (1.0, -2.0))
        self.assertEqual((2j).__getnewargs__(), (0.0, 2.0))
        self.assertEqual((-0j).__getnewargs__(), (0.0, -0.0))
        self.assertEqual(complex(0, INF).__getnewargs__(), (0.0, INF))
        self.assertEqual(complex(INF, 0).__getnewargs__(), (INF, 0.0))