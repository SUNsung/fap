    _TESTS = [{
        'url': 'http://southpark.cc.com/episodios-en-espanol/s01e01-cartman-consigue-una-sonda-anal#source=351c1323-0b96-402d-a8b9-40d01b2e9bde&position=1&sort=!airdate',
        'info_dict': {
            'title': 'Cartman Consigue Una Sonda Anal',
            'description': 'Cartman Consigue Una Sonda Anal',
        },
        'playlist_count': 4,
        'skip': 'Geo-restricted',
    }]
    
    import io
import optparse
import re
    
    lazy_extractors_filename = sys.argv[1]
if os.path.exists(lazy_extractors_filename):
    os.remove(lazy_extractors_filename)
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    from __future__ import unicode_literals
    
        app.register_blueprint(auth.bp)
    app.register_blueprint(blog.bp)
    
            :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
    
        The latest JSON standard (:rfc:`8259`) suggests that only UTF-8 is
    accepted. Older documents allowed 8, 16, or 32. 16 and 32 can be big
    or little endian. Some editors or libraries may prepend a BOM.
    
            ::
    
    
def test_context_refcounts(app, client):
    called = []
    
    
def test_config_from_envvar(monkeypatch):
    monkeypatch.setattr('os.environ', {})
    app = flask.Flask(__name__)
    with pytest.raises(RuntimeError) as e:
        app.config.from_envvar('FOO_SETTINGS')
        assert ''FOO_SETTINGS' is not set' in str(e.value)
    assert not app.config.from_envvar('FOO_SETTINGS', silent=True)
    
    
def test_main_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('main_app.py')
    app.write('import flask\n\napp = flask.Flask('__main__')')
    purge_module('main_app')
    
    __all__ = ['baomihua_download', 'baomihua_download_by_id']
    
            if title is None:
            self.title = '_'.join([i.text for i in self.tree.iterfind('video/videomarks/videomark/markdesc')])
        else:
            self.title = title
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
                print_info(site_info, title, type, size)
            if not info_only:
                download_urls([real_url], title, ext, size, output_dir, merge = merge)
    
    
def huomaotv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    room_id_pattern = r'huomao.com/(\d+)'
    room_id = match1(url, room_id_pattern)
    html = get_content(get_mobile_room_url(room_id))
    
        # construct list of tensors to checkpoint during forward pass, if not
    # given as input
    if type(checkpoints) is not list:
        if checkpoints == 'collection':
            checkpoints = tf.get_collection('checkpoints')
    
        def __init__(self, axis=-1,
                 gamma_init='one', beta_init='zero',
                 gamma_regularizer=None, beta_regularizer=None,
                 epsilon=1e-6,
                 group=32,
                 data_format=None,
                 **kwargs):
        self.beta = None
        self.gamma = None
        super(GroupNormalization, self).__init__(**kwargs)
    
            sorted_similarity transforms a distance matrix into a sorted distance matrix according to
        the order implied by the hierarchical tree (dendrogram)
        '''
        logger.info('Sorting face distances. Depending on your dataset this may take some time...')
        num_predictions = predictions.shape[0]
        result_linkage = linkage(predictions, method=method, preserve_input=False)
        result_order = self.seriation(result_linkage,
                                      num_predictions,
                                      num_predictions + num_predictions - 2)
    
            mask = self.build_mask()
        self.mask = self.merge_mask(mask)
        logger.trace('Initialized %s', self.__class__.__name__)
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
        def get_mask(self):
        ''' The box for every face will be identical, so set the mask just once
            As gaussian blur technically blurs both sides of the mask, reduce the mask ratio by
            half to give a more expected box '''
        logger.debug('Building box mask')
        mask_ratio = self.config['distance'] / 200
        facesize = self.dummy.shape[0]
        erode = slice(round(facesize * mask_ratio), -round(facesize * mask_ratio))
        mask = self.dummy[:, :, -1]
        mask[erode, erode] = 1.0
    
    
class Alignments():
    ''' Perform tasks relating to alignments file '''
    def __init__(self, arguments):
        logger.debug('Initializing %s: (arguments: '%s'', self.__class__.__name__, arguments)
        self.args = arguments
        set_system_verbosity(self.args.loglevel)
        self.alignments = self.load_alignments()
        logger.debug('Initialized %s', self.__class__.__name__)
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
        def extract_tags(self, sentence, topK=20, withWeight=False, allowPOS=(), withFlag=False):
        '''
        Extract keywords from sentence using TF-IDF algorithm.
        Parameter:
            - topK: return how many top keywords. `None` for all possible words.
            - withWeight: if True, return a list of (word, weight);
                          if False, return a list of words.
            - allowPOS: the allowed POS list eg. ['ns', 'n', 'vn', 'v','nr'].
                        if the POS of w is not in this list,it will be filtered.
            - withFlag: only work with allowPOS is not empty.
                        if True, return a list of pair(word, weight) like posseg.cut
                        if False, return a list of words
        '''
        if allowPOS:
            allowPOS = frozenset(allowPOS)
            words = self.postokenizer.cut(sentence)
        else:
            words = self.tokenizer.cut(sentence)
        freq = {}
        for w in words:
            if allowPOS:
                if w.flag not in allowPOS:
                    continue
                elif not withFlag:
                    w = w.word
            wc = w.word if allowPOS and withFlag else w
            if len(wc.strip()) < 2 or wc.lower() in self.stop_words:
                continue
            freq[w] = freq.get(w, 0.0) + 1.0
        total = sum(freq.values())
        for k in freq:
            kw = k.word if allowPOS and withFlag else k
            freq[k] *= self.idf_freq.get(kw, self.median_idf) / total
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
    
t0 = time.time()
print('training...')
    
    if len(sys.argv)>1:
    default_encoding = sys.argv[1]
    
    
content = open(file_name,'rb').read()
    
    # choose a random port to avoid colliding with TIME_WAIT sockets left over
# from previous runs.
define('min_port', type=int, default=8000)
define('max_port', type=int, default=9000)
    
        def finish_tree(self, tree, filename):
        if self.found_future_import:
            return
        if not isinstance(tree, pytree.Node):
            # Empty files (usually __init__.py) show up as a single Leaf
            # instead of a Node, so leave them alone
            return
        first_stmt = tree.children[0]
        if is_docstring(first_stmt):
            # Skip a line and add the import after the docstring
            tree.insert_child(1, Newline())
            pos = 2
        elif first_stmt.prefix:
            # No docstring, but an initial comment (perhaps a #! line).
            # Transfer the initial comment to a new blank line.
            newline = Newline()
            newline.prefix = first_stmt.prefix
            first_stmt.prefix = ''
            tree.insert_child(0, newline)
            pos = 1
        else:
            # No comments or docstring, just insert at the start
            pos = 0
        tree.insert_child(pos, self.new_future_import(None))
        tree.insert_child(pos + 1, Newline())  # terminates the import stmt

    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
            o = Object()
        answer = yield o.f()
        self.assertEqual(answer, 42)
    
        def test_url_unescape_unicode(self):
        tests = [
            ('%C3%A9', u'\u00e9', 'utf8'),
            ('%C3%A9', u'\u00c3\u00a9', 'latin1'),
            ('%C3%A9', utf8(u'\u00e9'), None),
        ]
        for escaped, unescaped, encoding in tests:
            # input strings to url_unescape should only contain ascii
            # characters, but make sure the function accepts both byte
            # and unicode strings.
            self.assertEqual(url_unescape(to_unicode(escaped), encoding), unescaped)
            self.assertEqual(url_unescape(utf8(escaped), encoding), unescaped)
    
            class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code