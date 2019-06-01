
        
        
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    
        # login request set the user_id in the session
    # check that the user is loaded from the session
    with client:
        client.get('/')
        assert session['user_id'] == 1
        assert g.user['username'] == 'test'
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = [
            'You tried to access the file '%s' in the request.files '
            'dictionary but it does not exist.  The mimetype for the request '
            'is '%s' instead of 'multipart/form-data' which means that no '
            'file contents were transmitted.  To fix this error you should '
            'provide enctype='multipart/form-data' in your form.'
            % (key, request.mimetype)
        ]
        if form_matches:
            buf.append(
                '\n\nThe browser instead transmitted some file names. '
                'This was submitted: %s' % ', '.join(''%s'' % x for x in form_matches)
            )
        self.msg = ''.join(buf)
    
            idx = 0
        while True:
            url = urls[idx % len(urls)]
            yield Request(url, dont_filter=True)
            idx += 1
    
        def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
        def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
    if twisted_version >= (14, 0, 0):
    # ClientTLSOptions requires a recent-enough version of Twisted.
    # Not having ScrapyClientTLSOptions should not matter for older
    # Twisted versions because it is not used in the fallback
    # ScrapyClientContextFactory.
    
            # set Content-Length based len of body
        if self.body is not None:
            self.headers['Content-Length'] = len(self.body)
            # just in case a broken http/1.1 decides to keep connection alive
            self.headers.setdefault('Connection', 'close')
        # Content-Length must be specified in POST method even with no body
        elif self.method == b'POST':
            self.headers['Content-Length'] = 0
    
        def _has_ajax_crawlable_variant(self, response):
        '''
        Return True if a page without hash fragment could be 'AJAX crawlable'
        according to https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
        '''
        body = response.text[:self.lookup_bytes]
        return _has_ajaxcrawlable_meta(body)
    
    
class BadNonceTest(unittest.TestCase):
    '''Tests for acme.errors.BadNonce.'''
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    
# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
sys.path.insert(0, os.path.abspath(os.path.join(here, '..')))
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
    
    log.basicConfig(format='%(message)s', level=log.INFO)
    
        '''
    max_sentence_len, max_word_len, char_vocab_size = get_shape(x)[1:]
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
        References:
        K.repeat()
        tf.tile()
    '''
    assert x.get_shape().ndims == 2
    x = tf.expand_dims(x, axis=1)  # -> [batch_size, 1, n_input]
    return tf.tile(x, [1, n, 1])  # -> [batch_size, n, n_input]
    
        @classmethod
    def threshold(cls, severity):
        threshold = cls.SEVERITY_LEVELS[severity]
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
            # Adding unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.create_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'key_id', 'value_id'])
    
    
class Migration(SchemaMigration):
    
    
def get_tty_width():
    tty_size = os.popen('stty size 2> /dev/null', 'r').read().split()
    if len(tty_size) != 2:
        return 0
    _, width = tty_size
    return int(width)
    
    
def human_readable_file_size(size):
    suffixes = ['B', 'kB', 'MB', 'GB', 'TB', 'PB', 'EB', ]
    order = int(math.log(size, 2) / 10) if size else 0
    if order >= len(suffixes):
        order = len(suffixes) - 1
    
        return ''.join(lines[i + 2:j - 1])
    
        def test_format_unicode_info(self):
        message = b'\xec\xa0\x95\xec\x88\x98\xec\xa0\x95'
        output = self.formatter.format(make_log_record(logging.INFO, message))
        assert output == message.decode('utf-8')
    
    from compose.config.errors import ConfigurationError
from compose.config.types import parse_extra_hosts
from compose.config.types import ServicePort
from compose.config.types import VolumeFromSpec
from compose.config.types import VolumeSpec
from compose.const import COMPOSEFILE_V1 as V1
from compose.const import COMPOSEFILE_V2_0 as V2_0