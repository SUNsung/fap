
        
            def _escalate_call(self):
        self.call.state = CallState.READY
        call = self.call
        self.call = None
        self.call_center.notify_call_escalated(call)
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        pass
    
            RESULT = 'porn' in webpage.lower()
    
        def create_asset(self, release_id, asset):
        asset_name = os.path.basename(asset)
        url = self._UPLOADS_URL % (release_id, asset_name)
        # Our files are small enough to be loaded directly into memory.
        data = open(asset, 'rb').read()
        req = sanitized_Request(url, data)
        mime_type, _ = mimetypes.guess_type(asset_name)
        req.add_header('Content-Type', mime_type or 'application/octet-stream')
        return self._call(req)
    
    import json
import sys
import hashlib
import os.path
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
FORM_CONTENT_TYPE = 'application/x-www-form-urlencoded; charset=utf-8'
JSON_CONTENT_TYPE = 'application/json'
JSON_ACCEPT = '{0}, */*'.format(JSON_CONTENT_TYPE)
DEFAULT_UA = 'HTTPie/%s' % __version__
    
    from utils import http, add_auth, HTTP_OK, MockEnvironment
import httpie.input
import httpie.cli
    
    
def test_DELETE(httpbin_both):
    r = http('DELETE', httpbin_both + '/delete')
    assert HTTP_OK in r
    
    
class PostgresSimpleLookup(Lookup):
    def as_sql(self, qn, connection):
        lhs, lhs_params = self.process_lhs(qn, connection)
        rhs, rhs_params = self.process_rhs(qn, connection)
        params = lhs_params + rhs_params
        return '%s %s %s' % (lhs, self.operator, rhs), params
    
        def __init__(self):
        self.name = 'citext'
    
    
class ArrayMinLengthValidator(MinLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no fewer than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no fewer than %(limit_value)d.',
        'limit_value')
    
        def save(self, must_create=False):
        '''
        Save the session data. If 'must_create' is True, create a new session
        object (or raise CreateError). Otherwise, only update an existing
        object and don't create one (raise UpdateError if needed).
        '''
        raise NotImplementedError('subclasses of SessionBase must provide a save() method')
    
        def _get_session_from_db(self):
        try:
            return self.model.objects.get(
                session_key=self.session_key,
                expire_date__gt=timezone.now()
            )
        except (self.model.DoesNotExist, SuspiciousOperation) as e:
            if isinstance(e, SuspiciousOperation):
                logger = logging.getLogger('django.security.%s' % e.__class__.__name__)
                logger.warning(str(e))
            self._session_key = None
    
        def get_decoded(self):
        session_store_class = self.get_session_store_class()
        return session_store_class().decode(self.session_data)

    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
    
def print_summary(model, line_length=None, positions=None, print_fn=None):
    '''Prints a summary of a model.
    
    
def test_objective_shapes_3d():
    y_a = K.variable(np.random.random((5, 6, 7)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (5, 6)
    
    
def get_data():
    (x_train, y_train), _ = test_utils.get_test_data(
        num_train=batch_size,
        num_test=batch_size,
        input_shape=(data_dim,),
        classification=True,
        num_classes=num_classes)
    y_train = np_utils.to_categorical(y_train, num_classes)
    
    # The default options which are only relevant to the client, not the server and
# thus are not part of default_options.json, but are required for a working
# YouCompleteMe object.
DEFAULT_CLIENT_OPTIONS = {
  'g:ycm_server_python_interpreter': '',
  'g:ycm_log_level': 'info',
  'g:ycm_keep_logfiles': 0,
  'g:ycm_extra_conf_vim_data': [],
  'g:ycm_show_diagnostics_ui': 1,
  'g:ycm_echo_current_diagnostic': 1,
  'g:ycm_enable_diagnostic_signs': 1,
  'g:ycm_enable_diagnostic_highlighting': 0,
  'g:ycm_always_populate_location_list': 0,
}
    
        with MockCurrentColumnAndLineContents( 5, 'føo ' ):
      ok_( base.CurrentIdentifierFinished() )
    
      current_buffer = VimBuffer( 'buffer', filetype = 'cpp' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with patch( 'ycm.client.event_notification.EventNotification.Response',
                return_value = {} ):
      ycm.ShowDiagnostics()
    
    
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