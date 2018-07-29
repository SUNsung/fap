
        
            def __init__(self):
        Resource.__init__(self)
        self.concurrent = 0
        self.tail = deque(maxlen=100)
        self._reset_stats()
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
    
# contracts
class UrlContract(Contract):
    ''' Contract to set the url of the request (mandatory)
        @url http://scrapy.org
    '''
    
        class _v19_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, method, bucket, key, headers, *args, **kwargs):
            return headers
    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth

    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
            ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    def sequential():
    return list(map(is_prime, PRIMES))
    
        vim_eval.assert_has_exact_calls( [
      call( 'setqflist( {0} )'.format( json.dumps( expected_qf_list ) ) )
    ] )
    vim_command.assert_has_exact_calls( [
      call( 'botright copen' ),
      call( 'au WinLeave <buffer> q' ),
      call( 'doautocmd User YcmQuickFixOpened' )
    ] )
    set_fitting_height.assert_called_once_with()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  @staticmethod
  def CreateFromOptions( user_options ):
    all_filters = dict( user_options.get( 'filter_diagnostics', {} ) )
    compiled_by_type = {}
    for type_spec, filter_value in iteritems( dict( all_filters ) ):
      filetypes = [ type_spec ]
      if type_spec.find( ',' ) != -1:
        filetypes = type_spec.split( ',' )
      for filetype in filetypes:
        compiled_by_type[ filetype ] = _CompileFilters( filter_value )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      if 'word' in vim_data:
    completion_data[ 'insertion_text' ] = vim_data[ 'word' ]
  if 'abbr' in vim_data:
    completion_data[ 'menu_text' ] = vim_data[ 'abbr' ]
  if 'menu' in vim_data:
    completion_data[ 'extra_menu_info' ] = vim_data[ 'menu' ]
  if 'kind' in vim_data:
    completion_data[ 'kind' ] = [ vim_data[ 'kind' ] ]
  if 'info' in vim_data:
    completion_data[ 'detailed_info' ] = vim_data[ 'info' ]