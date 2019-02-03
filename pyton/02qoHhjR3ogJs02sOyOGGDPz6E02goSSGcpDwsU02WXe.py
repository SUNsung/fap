
        
          Args:
    tensor_bxtxn: The BxTxN numpy tensor.
    
        Args:
      filepattern: Dataset file pattern.
      vocab: Vocabulary.
    '''
    self._vocab = vocab
    self._all_shards = tf.gfile.Glob(filepattern)
    tf.logging.info('Found %d shards at %s', len(self._all_shards), filepattern)
    
    '''Losses for Generator and Discriminator.'''
    
            outputs_train, state_train = seq2seq.dynamic_rnn_decoder(...)
        logits_train = output_fn(outputs_train)
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def test_request_body_from_file_by_path_no_field_name_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=True)
        r = http('POST', httpbin.url + '/post', 'field-name@' + FILE_PATH_ARG,
                 env=env, error_exit_ok=True)
        assert 'perhaps you meant --form?' in r.stderr
    
                    # Update the previous file
                if _filename:
                    with open(_filename, 'w') as _file:
                        _file.write(_contents)
    
        def __init__(self):
        self.settings = None  # set in scrapy.cmdline
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
        def short_desc(self):
        return 'Edit spider'
    
            if opts.meta:
            try:
                opts.meta = json.loads(opts.meta)
            except ValueError:
                raise UsageError('Invalid -m/--meta value, pass a valid json string to -m or --meta. ' \
                                'Example: --meta='{\'foo\' : \'bar\'}'', print_help=False)
    
        # https://en.wikipedia.org/wiki/Playfair_cipher#Description
    for char1, char2 in chunker(ciphertext, 2):
        row1, col1 = divmod(table.index(char1), 5)
        row2, col2 = divmod(table.index(char2), 5)
    
        for trials in range(5):
        a = random.randrange(2, num - 1)
        v = pow(a, s, num)
        if v != 1:
            i = 0
            while v != (num - 1):
                if i == t - 1:
                    return False
                else:
                    i = i + 1
                    v = (v ** 2) % num
    return True
    
    The problem is :
Given two strings A and B. Find the minimum number of operations to string B such that A = B. The permitted operations are removal,  insertion, and substitution.
'''
from __future__ import print_function
    
    The problem is  :
Given an ARRAY, to find the longest and increasing sub ARRAY in that given ARRAY and return it.
Example: [10, 22, 9, 33, 21, 50, 41, 60, 80] as input will return [10, 22, 33, 41, 60, 80] as output
'''
from __future__ import print_function
    
        def observe(call=None):
        '''Observe three entities.'''
        random_see('demo_paulus', 'Paulus')
        random_see('demo_anne_therese', 'Anne Therese')
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_TYPE, default=DEFAULT_TYPE): cv.string,
})
    
        def get_extra_attributes(self, device):
        '''Return the IP of the given device.'''
        filter_ip = next((
            result.ip for result in self.last_results
            if result.mac == device), None)
        return {'ip': filter_ip}
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
    _LOGGER = logging.getLogger(__name__)
    
        def startup(self, event):
        '''Start the watcher.'''
        self._observer.start()
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_PORT): cv.string,
        vol.Optional(CONF_EXCLUDE_NAMES): vol.All(cv.ensure_list, [cv.string]),
        vol.Optional(CONF_INCLUDE_SWITCHES, default=False): cv.boolean
    })
}, extra=vol.ALLOW_EXTRA)