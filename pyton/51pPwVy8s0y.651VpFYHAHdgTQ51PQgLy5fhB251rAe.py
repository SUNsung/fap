
        
        
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
            for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
    
def test_unicode_json_item_verbose(httpbin):
    r = http('--verbose', '--json',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    import requests.auth
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
                plugin.raw_auth = self.args.auth
            self.args.auth_plugin = plugin
            already_parsed = isinstance(self.args.auth, AuthCredentials)
    
    +----------+     +----------+       +--------+     +-----------+    +---------+
|          |  => | Work Ids |    => |        |  => | Call Q    | => |         |
|          |     +----------+       |        |     +-----------+    |         |
|          |     | ...      |       |        |     | ...       |    |         |
|          |     | 6        |       |        |     | 5, call() |    |         |
|          |     | 7        |       |        |     | ...       |    |         |
| Process  |     | ...      |       | Local  |     +-----------+    | Process |
|  Pool    |     +----------+       | Worker |                      |  #1..n  |
| Executor |                        | Thread |                      |         |
|          |     +----------- +     |        |     +-----------+    |         |
|          | <=> | Work Items | <=> |        | <=  | Result Q  | <= |         |
|          |     +------------+     |        |     +-----------+    |         |
|          |     | 6: call()  |     |        |     | ...       |    |         |
|          |     |    future  |     |        |     | 4, result |    |         |
|          |     | ...        |     |        |     | 3, except |    |         |
+----------+     +------------+     +--------+     +-----------+    +---------+
    
    # If true, sectionauthor and moduleauthor directives will be shown in the
# output. They are ignored by default.
#show_authors = False
    
    
def BuildServerConf():
  '''Builds a dictionary mapping YCM Vim user options to values. Option names
  don't have the 'ycm_' prefix.'''
  # We only evaluate the keys of the vim globals and not the whole dictionary
  # to avoid unicode issues.
  # See https://github.com/Valloric/YouCompleteMe/pull/2151 for details.
  keys = vimsupport.GetVimGlobalsKeys()
  server_conf = {}
  for key in keys:
    if not key.startswith( YCM_VAR_PREFIX ):
      continue
    new_key = key[ len( YCM_VAR_PREFIX ): ]
    new_value = vimsupport.VimExpressionToPythonType( 'g:' + key )
    server_conf[ new_key ] = new_value
    
    
def Main():
  ( parsed_args, nosetests_args ) = ParseArguments()
  if not parsed_args.no_flake8:
    RunFlake8()
  BuildYcmdLibs( parsed_args )
  NoseTests( parsed_args, nosetests_args )