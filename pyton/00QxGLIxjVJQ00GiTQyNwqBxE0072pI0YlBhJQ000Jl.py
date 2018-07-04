
        
        ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    import sys
import inspect
    
                if isinstance(self.input, TokenStream):
                self.token = self.input.LT(1)
                self.line = self.token.line
                self.charPositionInLine = self.token.charPositionInLine
    
            path = os.path.join(self.tempdir, 'file.ini')
        dns_test_common.write({'nsone_api_key': API_KEY}, path)
    
            self.client.deploy_certificate(
            ['foo.bar'], 'key', 'cert', 'chain', 'fullchain')
        installer.deploy_cert.assert_called_once_with(
            cert_path=os.path.abspath('cert'),
            chain_path=os.path.abspath('chain'),
            domain='foo.bar',
            fullchain_path='fullchain',
            key_path=os.path.abspath('key'))
        self.assertEqual(installer.save.call_count, 2)
        installer.restart.assert_called_once_with()
    
    def download_urls_with_executor(urls, executor, timeout=60):
    try:
        url_to_content = {}
        future_to_url = dict((executor.submit(load_url, url, timeout), url)
                             for url in urls)
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: a diagnostic IsAllowed() ONLY if NO filters match it
    for filterMatches in self._filters:
      if filterMatches( diagnostic ):
        return False
    
      try:
    filepath = os.path.join( DIR_OF_YCMD, 'PYTHON_USED_DURING_BUILDING' )
    return utils.ReadFile( filepath ).strip()
  # We need to check for IOError for Python2 and OSError for Python3
  except ( IOError, OSError ):
    return None
    
    
  def All_Fields_test( self ):
    self._Check( 0, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
# Emulates Vim buffer
# Used to store buffer related information like diagnostics, latest parse
# request. Stores buffer change tick at the parse request moment, allowing
# to effectively determine whether reparse is needed for the buffer.
class Buffer( object ):