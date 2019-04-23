
        
        
class ArrayMinLengthValidator(MinLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no fewer than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no fewer than %(limit_value)d.',
        'limit_value')
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def __len__(self):
        return len(self._store)
    
        def test_copy(self):
        copy = self.case_insensitive_dict.copy()
        assert copy is not self.case_insensitive_dict
        assert copy == self.case_insensitive_dict
    
    from .models import Response
from .compat import urlparse, basestring
from .utils import (DEFAULT_CA_BUNDLE_PATH, extract_zipped_paths,
                    get_encoding_from_headers, prepend_scheme_if_needed,
                    get_auth_from_url, urldefragauth, select_proxy)
from .structures import CaseInsensitiveDict
from .cookies import extract_cookies_to_jar
from .exceptions import (ConnectionError, ConnectTimeout, ReadTimeout, SSLError,
                         ProxyError, RetryError, InvalidSchema, InvalidProxyURL,
                         InvalidURL)
from .auth import _basic_auth_str
    
        :rtype: list
    '''
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      # Start the next poll (only if the last poll didn't raise an exception)
  return True

    
    from ycm.client.base_request import BaseRequest
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def KeywordsFromSyntaxListOutput_ContainedArgAllowed_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
phpFunctions   xxx contained gzclose yaz_syntax html_entity_decode fbsql_read_blob png2wbmp mssql_init cpdf_set_title gztell fbsql_insert_id empty cpdf_restore mysql_field_type closelog swftext ldap_search curl_errno gmp_div_r mssql_data_seek getmyinode printer_draw_pie mcve_initconn ncurses_getmaxyx defined
                   contained replace_child has_attributes specified insertdocument assign node_name hwstat addshape get_attribute_node html_dump_mem userlist
                   links to Function''' ), # noqa
              has_items( 'gzclose', 'userlist', 'ldap_search' ) )
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
    
        def test_del_shutdown(self):
        executor = futures.ThreadPoolExecutor(max_workers=5)
        executor.map(abs, range(-5, 5))
        threads = executor._threads
        del executor