
        
            Args:
      initial_dictionary: Optional dictionary or ConfigDict containing initial
        parameters.
    '''
    if initial_dictionary:
      for field, value in initial_dictionary.items():
        initial_dictionary[field] = _maybe_convert_dict(value)
    super(ConfigDict, self).__init__(initial_dictionary)
    
      Returns:
    A dict of metric values from the evaluation. May be empty, e.g. if the
    training job has not yet saved a checkpoint or the checkpoint is deleted by
    the time the TPU worker initializes.
  '''
  values = {}  # Default return value if evaluation fails.
    
      eval_file_path = os.path.join(FLAGS.data_dir, EVAL_FILE)
  _download_and_clean_file(eval_file_path, EVAL_URL)
    
    
if __name__ == '__main__':
  parser = argparse.ArgumentParser()
  parser.add_argument(
      '--data-dir',
      type=str,
      default='',
      help='Directory to download and extract CIFAR-10 to.')
    
      def Conversion3dTestWithType(self, dtype):
    original_data = np.arange(24).reshape(2, 3, 4).astype(dtype)
    serialized = datum_io.SerializeToString(original_data)
    retrieved_data = datum_io.ParseFromString(serialized)
    self.assertTrue(np.array_equal(original_data, retrieved_data))
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
            server = Server.basic_response_server(requests_to_handle=requests_to_handle)
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
class RetryError(RequestException):
    '''Custom retries logic failed'''
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
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

    
    
class TestIsIPv4Address:
    
            #: A case-insensitive dictionary of headers to be sent on each
        #: :class:`Request <Request>` sent from this
        #: :class:`Session <Session>`.
        self.headers = default_headers()
    
    print('Starting autogeneration.')
for page_data in PAGES:
    blocks = []
    classes = page_data.get('classes', [])
    for module in page_data.get('all_module_classes', []):
        module_classes = []
        for name in dir(module):
            if name[0] == '_' or name in EXCLUDE:
                continue
            module_member = getattr(module, name)
            if inspect.isclass(module_member):
                cls = module_member
                if cls.__module__ == module.__name__:
                    if cls not in module_classes:
                        module_classes.append(cls)
        module_classes.sort(key=lambda x: id(x))
        classes += module_classes
    
    # LSTM
lstm_output_size = 70
    
    
@keras_test
def test_non_neg():
    non_neg_instance = constraints.non_neg()
    normed = non_neg_instance(K.variable(get_example_array()))
    assert(np.all(np.min(K.eval(normed), axis=1) == 0.))
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))
    
    MIN_TOKEN_TYPE = UP+1
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
            self.assertRaises(OverflowError, (256).to_bytes, 1, 'big', signed=False)
        self.assertRaises(OverflowError, (256).to_bytes, 1, 'big', signed=True)
        self.assertRaises(OverflowError, (256).to_bytes, 1, 'little', signed=False)
        self.assertRaises(OverflowError, (256).to_bytes, 1, 'little', signed=True)
        self.assertRaises(OverflowError, (-1).to_bytes, 2, 'big', signed=False)
        self.assertRaises(OverflowError, (-1).to_bytes, 2, 'little', signed=False)
        self.assertEqual((0).to_bytes(0, 'big'), b'')
        self.assertEqual((1).to_bytes(5, 'big'), b'\x00\x00\x00\x00\x01')
        self.assertEqual((0).to_bytes(5, 'big'), b'\x00\x00\x00\x00\x00')
        self.assertEqual((-1).to_bytes(5, 'big', signed=True),
                         b'\xff\xff\xff\xff\xff')
        self.assertRaises(OverflowError, (1).to_bytes, 0, 'big')
    
        The harmonic mean, sometimes called the subcontrary mean, is the
    reciprocal of the arithmetic mean of the reciprocals of the data,
    and is often appropriate when averaging quantities which are rates
    or ratios, for example speeds. Example:
    
        def newgroups(self, date, *, file=None):
        '''Process a NEWGROUPS command.  Arguments:
        - date: a date or datetime object
        Return:
        - resp: server response if successful
        - list: list of newsgroup names
        '''
        if not isinstance(date, (datetime.date, datetime.date)):
            raise TypeError(
                'the date parameter must be a date or datetime object, '
                'not '{:40}''.format(date.__class__.__name__))
        date_str, time_str = _unparse_datetime(date, self.nntp_version < 2)
        cmd = 'NEWGROUPS {0} {1}'.format(date_str, time_str)
        resp, lines = self._longcmdstring(cmd, file)
        return resp, self._grouplist(lines)
    
        def assertClose(self, x, y, eps=1e-9):
        '''Return true iff complexes x and y 'are close'.'''
        self.assertCloseAbs(x.real, y.real, eps)
        self.assertCloseAbs(x.imag, y.imag, eps)
    
        expect_without_sort_keys = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'field': 'yes',
            'morefield': false
        }
    ]
    ''')
    
        def test_contains(self):
        r = range(10)
        self.assertIn(0, r)
        self.assertIn(1, r)
        self.assertIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
        r = range(9, -1, -1)
        self.assertIn(0, r)
        self.assertIn(1, r)
        self.assertIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
        r = range(0, 10, 2)
        self.assertIn(0, r)
        self.assertNotIn(1, r)
        self.assertNotIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
        r = range(9, -1, -2)
        self.assertNotIn(0, r)
        self.assertIn(1, r)
        self.assertIn(5.0, r)
        self.assertNotIn(5.1, r)
        self.assertNotIn(-1, r)
        self.assertNotIn(10, r)
        self.assertNotIn('', r)
    
        def test_string(self):
        self.assertIs('xyz'.endswith('z'), True)
        self.assertIs('xyz'.endswith('x'), False)
        self.assertIs('xyz0123'.isalnum(), True)
        self.assertIs('@#$%'.isalnum(), False)
        self.assertIs('xyz'.isalpha(), True)
        self.assertIs('@#$%'.isalpha(), False)
        self.assertIs('0123'.isdigit(), True)
        self.assertIs('xyz'.isdigit(), False)
        self.assertIs('xyz'.islower(), True)
        self.assertIs('XYZ'.islower(), False)
        self.assertIs('0123'.isdecimal(), True)
        self.assertIs('xyz'.isdecimal(), False)
        self.assertIs('0123'.isnumeric(), True)
        self.assertIs('xyz'.isnumeric(), False)
        self.assertIs(' '.isspace(), True)
        self.assertIs('\xa0'.isspace(), True)
        self.assertIs('\u3000'.isspace(), True)
        self.assertIs('XYZ'.isspace(), False)
        self.assertIs('X'.istitle(), True)
        self.assertIs('x'.istitle(), False)
        self.assertIs('XYZ'.isupper(), True)
        self.assertIs('xyz'.isupper(), False)
        self.assertIs('xyz'.startswith('x'), True)
        self.assertIs('xyz'.startswith('z'), False)
    
        g.plugins.load_plugins(config)
    config['r2.plugins'] = g.plugins
    g.startup_timer.intermediate('plugins')
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
    
class ExtensionMiddleware(object):
    ext_pattern = re.compile(r'\.([^/]+)\Z')
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass