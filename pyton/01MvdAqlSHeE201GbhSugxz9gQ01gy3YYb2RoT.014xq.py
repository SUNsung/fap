
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
        @property
    def encoding(self):
        return 'utf8'
    
        if env.stdout_isatty and resp_b:
        # Ensure a blank line after the response body.
        # For terminal output only.
        output.append([b'\n\n'])
    
            '''
        return content

    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
setup(
    name='httpie',
    version=httpie.__version__,
    description=httpie.__doc__.strip(),
    long_description=long_description(),
    url='http://httpie.org/',
    download_url='https://github.com/jakubroztocil/httpie',
    author=httpie.__author__,
    author_email='jakub@roztocil.co',
    license=httpie.__licence__,
    packages=find_packages(),
    entry_points={
        'console_scripts': [
            'http = httpie.__main__:main',
        ],
    },
    extras_require=extras_require,
    install_requires=install_requires,
    tests_require=tests_require,
    cmdclass={'test': PyTest},
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.1',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Environment :: Console',
        'Intended Audience :: Developers',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: BSD License',
        'Topic :: Internet :: WWW/HTTP',
        'Topic :: Software Development',
        'Topic :: System :: Networking',
        'Topic :: Terminals',
        'Topic :: Text Processing',
        'Topic :: Utilities'
    ],
)

    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        def add(self, graphic):
        self.graphics.append(graphic)
    
        def handle(self, request):
        '''
        Handle request and stop.
        If can't - call next handler in chain.
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
        def execute(self):
        if not self._bProblem:
            print('Executing the test')
            time.sleep(0.1)
        else:
            print('Problem in setup. Test not executed.')
    
    ###  OUTPUT ###
# Before subclassing:
# BaseRegisteredClass
# After subclassing:
# BaseRegisteredClass
# ClassRegistree

    
        root_specification = UserSpecification().and_specification(SuperUserSpecification())
    
    *What does this example do?
In this example queue.Queue is used to create the pool (wrapped in a
custom ObjectPool object to use with the with statement), and it is
populated with strings.
As we can see, the first string object put in 'yam' is USED by the
with statement. But because it is released back into the pool
afterwards it is reused by the explicit call to sample_queue.get().
Same thing happens with 'sam', when the ObjectPool created insided the
function is deleted (by the GC) and the object is returned.
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
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