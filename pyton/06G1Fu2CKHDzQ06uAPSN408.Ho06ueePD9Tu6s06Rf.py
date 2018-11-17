
        
        versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    **youtube-dl** \[OPTIONS\] URL [URL...]
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
]
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
      # Long type names may be broken across multiple lines, usually in one
  # of these forms:
  #   LongType
  #       ::LongTypeContinued &identifier
  #   LongType::
  #       LongTypeContinued &identifier
  #   LongType<
  #       ...>::LongTypeContinued &identifier
  #
  # If we detected a type split across two lines, join the previous
  # line to current line so that we can match const references
  # accordingly.
  #
  # Note that this only scans back one line, since scanning back
  # arbitrary number of lines would be expensive.  If you have a type
  # that spans more than 2 lines, please use a typedef.
  if linenum > 1:
    previous = None
    if Match(r'\s*::(?:[\w<>]|::)+\s*&\s*\S', line):
      # previous_line\n + ::current_line
      previous = Search(r'\b((?:const\s*)?(?:[\w<>]|::)+[\w<>])\s*$',
                        clean_lines.elided[linenum - 1])
    elif Match(r'\s*[a-zA-Z_]([\w<>]|::)+\s*&\s*\S', line):
      # previous_line::\n + current_line
      previous = Search(r'\b((?:const\s*)?(?:[\w<>]|::)+::)\s*$',
                        clean_lines.elided[linenum - 1])
    if previous:
      line = previous.group(1) + line.lstrip()
    else:
      # Check for templated parameter that is split across multiple lines
      endpos = line.rfind('>')
      if endpos > -1:
        (_, startline, startpos) = ReverseCloseExpression(
            clean_lines, linenum, endpos)
        if startpos > -1 and startline < linenum:
          # Found the matching < on an earlier line, collect all
          # pieces up to current line.
          line = ''
          for i in xrange(startline, linenum + 1):
            line += clean_lines.elided[i].strip()
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
                last_results.append(Device(mac.upper(), name))
    
    
def get_scanner(hass, config):
    '''Return the Swisscom device scanner.'''
    scanner = SwisscomDeviceScanner(config[DOMAIN])
    
    _LOGGER = logging.getLogger(__name__)
    
            Return the list if successful.
        '''
        _LOGGER.info('Refreshing device list')
        result = _retrieve_list(self.host, self.token)
        if result:
            return result
    
        @Throttle(MIN_TIME_BETWEEN_UPDATES)
    def update(self):
        '''Update the order state and refreshes the store.'''
        from pizzapi.address import StoreException
        try:
            self.dominos.update_closest_store()
        except StoreException:
            self._orderable = False
            return
    
    DOMAIN = 'downloader'
DOWNLOAD_FAILED_EVENT = 'download_failed'
DOWNLOAD_COMPLETED_EVENT = 'download_completed'
    
        entities = []
    core = None
    heating = None
    hotwater = None
    light = None
    sensor = None
    switch = None
    weather = None
    attributes = None
    
        def __call__(self, method):
        '''Decorate a function.'''
        @wraps(method)
        async def wrapper(view, request, *args, **kwargs):
            '''Wrap a request handler with data validation.'''
            data = None
            try:
                data = await request.json()
            except ValueError:
                if not self._allow_empty or \
                   (await request.content.read()) != b'':
                    _LOGGER.error('Invalid JSON received.')
                    return view.json_message('Invalid JSON.', 400)
                data = {}
    
    
def main():
    print('Making key files...')
    makeKeyFiles('elgamal', 2048)
    print('Key files generation successful')
    
        def _set_value(self, key, data):
        self.values[key] = data
        self._keys[key] = data
    
                return self.dp[x][y]
    
        return res
    
        >>> isEnglish('llold HorWd')
    False
    '''
    wordsMatch = getEnglishCount(message) * 100 >= wordPercentage
    numLetters = len(removeNonLetters(message))
    messageLettersPercentage = (float(numLetters) / len(message)) * 100
    lettersMatch = messageLettersPercentage >= letterPercentage
    return wordsMatch and lettersMatch