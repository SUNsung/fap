
        
        
class AdminForm:
    def __init__(self, form, fieldsets, prepopulated_fields, readonly_fields=None, model_admin=None):
        self.form, self.fieldsets = form, fieldsets
        self.prepopulated_fields = [{
            'field': form[field_name],
            'dependencies': [form[f] for f in dependencies]
        } for field_name, dependencies in prepopulated_fields.items()]
        self.model_admin = model_admin
        if readonly_fields is None:
            readonly_fields = ()
        self.readonly_fields = readonly_fields
    
        @property
    def layer_name(self):
        'Return the name of the layer for the feature.'
        name = capi.get_feat_name(self._layer._ldefn)
        return force_str(name, self.encoding, strings_only=True)
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_L_* routines are relevant here.
class Layer(GDALBase):
    'A class that wraps an OGR Layer, needs to be instantiated from a DataSource object.'
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
        mime, ext, size = url_info(real_url)
    
                print_info(site_info, title, type, size)
            if not info_only:
                download_urls([real_url], title, ext, size, output_dir, merge = merge)
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
        def test_more_info(self):
        # pylint: disable=no-member
        self.assertTrue(isinstance(self.auth.more_info(), six.string_types))
    
            self.eg_order.authorizations = authzr
        self.client.auth_handler.handle_authorizations.return_value = authzr
    
            # Request an access token from the metadata server.
        http = httplib2.Http()
        r, content = http.request(url, headers=METADATA_HEADERS)
        if r.status != 200:
            raise ValueError('Invalid status code: {0}'.format(r))
    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``, waiting 30 seconds
             for DNS propagation
    
        def __str__(self):
        lines = [
            '* {0}'.format(self.name),
            'Description: {0}'.format(self.plugin_cls.description),
            'Interfaces: {0}'.format(', '.join(
                iface.__name__ for iface in zope.interface.implementedBy(
                    self.plugin_cls))),
            'Entry point: {0}'.format(self.entry_point),
        ]
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise
    
        def _format_attrs(self):
        attrs = [('closed', repr(self.closed))]
        if self.name is not None:
            attrs.append(('name', default_pprint(self.name)))
        attrs.append(('dtype', ''{dtype}''.format(dtype=self.dtype)))
        return attrs
    
        def matcher( key ):
      return ( ToUnicode( completed_item.get( key, '' ) ) ==
               ToUnicode( item.get( key, '' ) ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
@YouCompleteMeInstance()
@patch( 'ycm.client.base_request._logger', autospec = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ErrorFromServer_test( ycm,
                                                post_vim_message,
                                                logger ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerError( 'Server error' ) ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      logger.exception.assert_called_with( 'Error while handling server '
                                           'response' )
      post_vim_message.assert_has_exact_calls( [
        call( 'Server error', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': empty(),
          'completion_start_column': -1
        } )
      )

    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )

    
    
def _worker( executor_reference, work_queue ):
  try:
    while True:
      work_item = work_queue.get( block=True )
      if work_item is not None:
        work_item.run()
        continue
      executor = executor_reference()
      # Exit if:
      #   - The executor that owns the worker has been collected OR
      #   - The executor that owns the worker has been shutdown.
      if executor is None or executor._shutdown:
        # Notice other workers
        work_queue.put( None )
        return
      del executor
  except BaseException:
    _base.LOGGER.critical( 'Exception in worker', exc_info=True )
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
    Local worker thread:
- reads work ids from the 'Work Ids' queue and looks up the corresponding
  WorkItem from the 'Work Items' dict: if the work item has been cancelled then
  it is simply removed from the dict, otherwise it is repackaged as a
  _CallItem and put in the 'Call Q'. New _CallItems are put in the 'Call Q'
  until 'Call Q' is full. NOTE: the size of the 'Call Q' is kept small because
  calls placed in the 'Call Q' can no longer be cancelled with Future.cancel().
- reads _ResultItems from 'Result Q', updates the future stored in the
  'Work Items' dict and deletes the dict entry