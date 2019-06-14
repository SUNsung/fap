
        
            with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
        model = create_multi_input_model_from(*models)
    model.compile(loss='categorical_crossentropy', optimizer='sgd')
    assert len(model.losses) == 8
    
    import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout
from keras.optimizers import RMSprop
    
    
def global_function():
    def inner_function():
        class LocalClass:
            pass
        global inner_global_function
        def inner_global_function():
            def inner_function2():
                pass
            return inner_function2
        return LocalClass
    return lambda: inner_function
    
            The default implementation looks the file's extension
        up in the table self.extensions_map, using application/octet-stream
        as a default; however it would be permissible (if
        slow) to look inside the data to make a better guess.
    
            os.chdir(self.parent_dir)
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
    # Proxy type for generator objects
class GeneratorProxy(BaseProxy):
    _exposed_ = ['__next__']
    def __iter__(self):
        return self
    def __next__(self):
        return self._callmethod('__next__')
    
    con = sqlite3.connect(DB_FILE)
cur = con.cursor()
cur.execute('''
        create table people
        (
          name_last      varchar(20),
          age            integer
        )
        ''')
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
    
class JSONSerializer(Serializer):
    ''' JSON Serializer '''
    ext = 'json'
    woptions = 'w'
    roptions = 'r'
    
        def __init__(self, image, alignments, original_roi=None):
        logger.debug('Initializing %s: (alignments: %s, original_roi: %s)',
                     self.__class__.__name__, alignments, original_roi)
        self.image = image
        self.alignments = alignments
        self.roi = original_roi
        self.colors = {1: (255, 0, 0),
                       2: (0, 255, 0),
                       3: (0, 0, 255),
                       4: (255, 255, 0),
                       5: (255, 0, 255),
                       6: (0, 255, 255)}
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def on_enter(self, event=None):
        ''' Schedule on an enter event '''
        self.schedule()
    
        def decoder(self):
        ''' Decoder Network '''
        input_ = Input(shape=(8, 8, 512))
        var_x = input_
    
        def initialize_globals(self, pathscript):
        ''' Initialize config and images global constants '''
        cliopts = CliOptions()
        scaling_factor = self.get_scaling()
        pathcache = os.path.join(pathscript, 'lib', 'gui', '.cache')
        statusbar = StatusBar(self)
        session = Session()
        initialize_config(cliopts, scaling_factor, pathcache, statusbar, session)
        initialize_images()
    
            self.status_message.set('Ready')
    
        def get_one_option_variable(self, command, title):
        ''' Return a single tk_var for the specified
            command and control_title '''
        for option in self.gen_command_options(command):
            if option['control_title'] == title:
                return option['value']
        return None
    
        def build(self):
        ''' Update the plot area with loss values '''
        logger.debug('Building training graph')
        self.plotcanvas.draw()
        logger.debug('Built training graph')
    
    
  def _SendRequest( self ):
    self._response_future = self.PostDataToHandlerAsync(
      self._request_data,
      'receive_messages',
      timeout = TIMEOUT_SECONDS )
    return
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
    
def _assert_rejects( filter, text ):
  _assert_accept_equals( filter, text, False )
    
    
def KeywordsFromSyntaxListOutput_Function_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Function''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        # Create and fill-in the class template
    numfields = len(field_names)
    argtxt = repr(field_names).replace(''', '')[1:-1]   # tuple repr without parens or quotes
    reprtxt = ', '.join('%s=%%r' % name for name in field_names)
    dicttxt = ', '.join('%r: t[%d]' % (name, pos) for pos, name in enumerate(field_names))
    template = '''class %(typename)s(tuple):
        '%(typename)s(%(argtxt)s)' \n
        __slots__ = () \n
        _fields = %(field_names)r \n
        def __new__(_cls, %(argtxt)s):
            return _tuple.__new__(_cls, (%(argtxt)s)) \n
        @classmethod
        def _make(cls, iterable, new=tuple.__new__, len=len):
            'Make a new %(typename)s object from a sequence or iterable'
            result = new(cls, iterable)
            if len(result) != %(numfields)d:
                raise TypeError('Expected %(numfields)d arguments, got %%d' %% len(result))
            return result \n
        def __repr__(self):
            return '%(typename)s(%(reprtxt)s)' %% self \n
        def _asdict(t):
            'Return a new dict which maps field names to their values'
            return {%(dicttxt)s} \n
        def _replace(_self, **kwds):
            'Return a new %(typename)s object replacing specified fields with new values'
            result = _self._make(map(kwds.pop, %(field_names)r, _self))
            if kwds:
                raise ValueError('Got unexpected field names: %%r' %% kwds.keys())
            return result \n
        def __getnewargs__(self):
            return tuple(self) \n\n''' % locals()
    for i, name in enumerate(field_names):
        template += '        %s = _property(_itemgetter(%d))\n' % (name, i)
    
    # If false, no module index is generated.
#latex_use_modindex = True

    
        def textrank(self, sentence, topK=20, withWeight=False, allowPOS=('ns', 'n', 'vn', 'v'), withFlag=False):
        '''
        Extract keywords from sentence using TextRank algorithm.
        Parameter:
            - topK: return how many top keywords. `None` for all possible words.
            - withWeight: if True, return a list of (word, weight);
                          if False, return a list of words.
            - allowPOS: the allowed POS list eg. ['ns', 'n', 'vn', 'v'].
                        if the POS of w is not in this list, it will be filtered.
            - withFlag: if True, return a list of pair(word, weight) like posseg.cut
                        if False, return a list of words
        '''
        self.pos_filt = frozenset(allowPOS)
        g = UndirectWeightedGraph()
        cm = defaultdict(int)
        words = tuple(self.tokenizer.cut(sentence))
        for i, wp in enumerate(words):
            if self.pairfilter(wp):
                for j in xrange(i + 1, i + self.span):
                    if j >= len(words):
                        break
                    if not self.pairfilter(words[j]):
                        continue
                    if allowPOS and withFlag:
                        cm[(wp, words[j])] += 1
                    else:
                        cm[(wp.word, words[j].word)] += 1
    
        def __repr__(self):
        return 'pair(%r, %r)' % (self.word, self.flag)
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
        def testDefaultCut(self):
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test DefaultCut Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test DefaultCut error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testDefaultCut', file=sys.stderr)
    
    log_f = open('1.log','w')
log_f.write(' / '.join(map(str, words)))
    
        for (disposition, _) in _iter_multipart_parts(data_bytes, boundary):
        if disposition.get('name') == 'file' and 'filename' in disposition:
            filename = disposition['filename']
            break
    
        cmd = '{ test `which aws` || . .venv/bin/activate; }; aws'
    endpoint_url = None
    env = aws_stack.get_environment(env)
    if env.region == REGION_LOCAL:
        endpoint_url = aws_stack.get_local_service_url(service)
    if endpoint_url:
        if endpoint_url.startswith('https://'):
            cmd += ' --no-verify-ssl'
        cmd = '%s --endpoint-url='%s'' % (cmd, endpoint_url)
        if not is_port_open(endpoint_url):
            raise socket.error()
    cmd = '%s %s' % (cmd, service)
    return cmd