
        
        
httpie_info = packages.pop('httpie')
print('''
  url '{url}'
  sha256 '{sha256}'
'''.format(**httpie_info))
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    
class Downloader(object):
    
    import pygments.lexer
import pygments.token
import pygments.styles
import pygments.lexers
import pygments.style
from pygments.formatters.terminal import TerminalFormatter
from pygments.formatters.terminal256 import Terminal256Formatter
from pygments.lexers.special import TextLexer
from pygments.lexers.text import HttpLexer as PygmentsHttpLexer
from pygments.util import ClassNotFound
    
        def test_cert_file_not_found(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', '/__not_found__',
                 error_exit_ok=True)
        assert r.exit_status == ExitStatus.ERROR
        assert 'No such file or directory' in r.stderr
    
    
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
    
    import os
    
      def setUp(self):
    self._string_data = '\n'.join(
        [' hello there i am',
         ' rain as day',
         ' want some cheesy puffs ?'])
    
    py_binary(
    name = 'cifar10_eval',
    srcs = [
        'cifar10_eval.py',
    ],
    srcs_version = 'PY2AND3',
    visibility = ['//tensorflow:__subpackages__'],
    deps = [
        ':cifar10',
    ],
)
    
        # Loads mapping from string UID to human-readable string
    proto_as_ascii_lines = tf.gfile.GFile(uid_lookup_path).readlines()
    uid_to_human = {}
    p = re.compile(r'[n\d]*[ \S,]*')
    for line in proto_as_ascii_lines:
      parsed_items = p.findall(line)
      uid = parsed_items[0]
      human_string = parsed_items[2]
      uid_to_human[uid] = human_string
    
    py_library(
    name = 'rnn_cell',
    srcs = [
        'rnn_cell.py',
    ],
    srcs_version = 'PY2AND3',
    deps = [
        ':linear',
        '//tensorflow:tensorflow_py',
    ],
)