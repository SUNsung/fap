
        
                When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def spot_freed(self):
        self.available_spots += 1
    
    
seller_category_map = {}
seller_category_map['Exxon'] = DefaultCategories.GAS
seller_category_map['Target'] = DefaultCategories.SHOPPING
    
    
class RemoveDuplicateUrls(MRJob):
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
        outfile, = args
    
        if not releases:
        break
    
        classifiers=[
        'Topic :: Multimedia :: Video',
        'Development Status :: 5 - Production/Stable',
        'Environment :: Console',
        'License :: Public Domain',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    
    
def assertGreaterEqual(self, got, expected, msg=None):
    if not (got >= expected):
        if msg is None:
            msg = '%r not greater than or equal to %r' % (got, expected)
        self.assertTrue(got >= expected, msg)
    
            def get_info(params={}):
            params.setdefault('simulate', True)
            ydl = YDL(params)
            ydl.report_warning = lambda *args, **kargs: None
            return ydl.process_video_result(info_dict, download=False)
    
          while cur_pos < num_steps:
        if cur_stream[i] is None or len(cur_stream[i][0]) <= 1:
          try:
            cur_stream[i] = list(generator.next())
          except StopIteration:
            # No more data, exhaust current streams and quit
            no_more_data = True
            break
    
    
def _convert_to_partial(scoring1, scoring2):
  '''Convert full scoring into partial scoring.'''
  mask1, mask2 = _substitution_mask(
      scoring1['sentence'], scoring2['sentence'])
    
    
def get_iterator(data):
  '''Return the data iterator.'''
  if FLAGS.data_set == 'ptb':
    iterator = ptb_loader.ptb_iterator(data, FLAGS.batch_size,
                                       FLAGS.sequence_length,
                                       FLAGS.epoch_size_override)
  elif FLAGS.data_set == 'imdb':
    iterator = imdb_loader.imdb_iterator(data, FLAGS.batch_size,
                                         FLAGS.sequence_length)
  return iterator
    
    
def cross_entropy_loss_matrix(gen_labels, gen_logits):
  '''Computes the cross entropy loss for G.
    
          Args:
        query: A Tensor of shape [batch_size, num_units].
        keys: A Tensor of shape [batch_size, attention_length, num_units].
        values: A Tensor of shape [batch_size, attention_length, num_units].
    
        cmd = cmds[cmdname]
    parser.usage = 'scrapy %s %s' % (cmdname, cmd.syntax())
    parser.description = cmd.long_desc()
    settings.setdict(cmd.default_settings, priority='command')
    cmd.settings = settings
    cmd.add_options(parser)
    opts, args = parser.parse_args(args=argv[1:])
    _run_print_help(parser, cmd.process_options, args, opts)
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    
class CheckNetwork(object):
    def __init__(self, type='IPv4'):
        self.type = type
        self.urls = []
        self._checking_lock = threading.Lock()
        self._checking_num = 0
        self.network_stat = 'unknown'
        self.last_check_time = 0
        self.continue_fail_count = 0
    
    try:
    from io import BytesIO
except ImportError:
    from cStringIO import StringIO as BytesIO
try:
    from google.appengine.api import urlfetch
    from google.appengine.runtime import apiproxy_errors
except ImportError:
    urlfetch = None
try:
    import sae
except ImportError:
    sae = None
try:
    import bae.core.wsgi
except ImportError:
    bae = None
try:
    import socket
    import select
except ImportError:
    socket = None
try:
    import OpenSSL
except ImportError:
    OpenSSL = None
    
            Terence implemented packed table initializers, because Java has a
        size restriction on .class files and the lookup tables can grow
        pretty large. The generated JavaLexer.java of the Java.g example
        would be about 15MB with uncompressed array initializers.
    
            if self.mismatchIsUnwantedToken(input, ttype):
            raise UnwantedTokenException(ttype, input)
    
        
    def __init__(self, data):
        '''
        @param data This should be a unicode string holding the data you want
           to parse. If you pass in a byte string, the Lexer will choke on
           non-ascii data.
           
        '''
        
        CharStream.__init__(self)
        
  	# The data being scanned
        self.strdata = unicode(data)
        self.data = [ord(c) for c in self.strdata]
        
	# How many characters are actually in the buffer
        self.n = len(data)
    
    # The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set 'language' from the command line for these cases.
language = 'en'
    
            # Force reload if files were modified
        # This is needed to recalculate augeas directive span
        if save_files:
            for sf in save_files:
                self.aug.remove('/files/'+sf)
            self.aug.load()
        if title and not temporary:
            self.finalize_checkpoint(title)
    
            .. todo:: Handle _default_
    
        def test_invalid_variable_parsing(self):
        del self.parser.variables['tls_port']
    
      This function will output warnings to make sure you are including the headers
  necessary for the stl containers and functions that you use. We only give one
  reason to include a header. For example, if you use both equal_to<> and
  less<> in a .h file, only one (the latter in the file) of these will be
  reported as a reason to include the <functional>.