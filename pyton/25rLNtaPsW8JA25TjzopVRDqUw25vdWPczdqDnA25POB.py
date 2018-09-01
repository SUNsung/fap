
        
            ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
        @property
    def encoding(self):
        return 'utf8'
    
        def __init__(self, env, explicit_json=False,
                 color_scheme=DEFAULT_STYLE, **kwargs):
        super(ColorFormatter, self).__init__(**kwargs)
        if not env.colors:
            self.enabled = False
            return
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        urls = []
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      words = line.split()
  if not words:
    return []
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
@YouCompleteMeInstance()
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ResponseContainingError_test( ycm, post_vim_message ):
  current_buffer = VimBuffer( 'buffer' )
    
    
def EndsWithPython_Python2Paths_test():
  python_paths = [
    'python',
    'python2',
    '/usr/bin/python2.7',
    '/home/user/.pyenv/shims/python2.7',
    r'C:\Python27\python.exe',
    '/Contents/MacOS/Python'
  ]
    
        def get_allowed_warnings(self):
        return [
            # We can't set a non-heuristic freshness at the framework level,
            # so just ignore this warning
            rs.FRESHNESS_HEURISTIC,
            # For our small test responses the Content-Encoding header
            # wipes out any gains from compression
            rs.CONNEG_GZIP_BAD,
        ]
    
    
class AuthLogoutHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    def get(self):
        self.clear_cookie('fbdemo_user')
        self.redirect(self.get_argument('next', '/'))
    
        def on_message(self, message):
        logging.info('got message %r', message)
        parsed = tornado.escape.json_decode(message)
        chat = {
            'id': str(uuid.uuid4()),
            'body': parsed['body'],
        }
        chat['html'] = tornado.escape.to_basestring(
            self.render_string('message.html', message=chat))
    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
    
@gen.coroutine
def c2():
    pass
    
    tmpl = Template('''\
<!doctype html>
<html>
  <head>
    <title>{{ page_title }}</title>
  </head>
  <body>
    <div class='header'>
      <h1>{{ page_title }}</h1>
    </div>
    <ul class='navigation'>
    {% for href, caption in [ \
        ('index.html', 'Index'), \
        ('downloads.html', 'Downloads'), \
        ('products.html', 'Products') \
      ] %}
      <li><a href='{{ href }}'>{{ caption }}</a></li>
    {% end %}
    </ul>
    <div class='table'>
      <table>
      {% for row in table %}
        <tr>
        {% for cell in row %}
          <td>{{ cell }}</td>
        {% end %}
        </tr>
      {% end %}
      </table>
    </div>
  </body>
</html>\
''')
    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
    extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.coverage',
    'sphinx.ext.doctest',
    'sphinx.ext.intersphinx',
    'sphinx.ext.viewcode',
]
    
    
if __name__ == '__main__':
    IOLoop.instance().run_sync(main)
