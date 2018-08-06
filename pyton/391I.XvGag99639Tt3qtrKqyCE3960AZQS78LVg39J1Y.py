
        
            def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def can_fit_in_spot(self, spot):
        return True
    
        def reject_friend_request(self, friend_id):
        pass
    
    
class Graph(object):
    
        def __init__(self, key, value):
        self.key = key
        self.value = value
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
    import pytest
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        This argument can be omitted in which case HTTPie will use POST if there
    is some data to be sent, otherwise GET:
    
    
class TestDownloadUtils:
    def test_Content_Range_parsing(self):
        parse = parse_content_range
    
    
def test_json_input_preserve_order(httpbin_both):
    r = http('PATCH', httpbin_both + '/patch',
             'order:={'map':{'1':'first','2':'second'}}')
    assert HTTP_OK in r
    assert r.json['data'] == \
        '{'order': {'map': {'1': 'first', '2': 'second'}}}'

    
        args = parser.parse_args()
    
    AnsibleConstructor.add_constructor(u'!vault-encrypted', AnsibleConstructor.construct_vault_encrypted_unicode)

    
    
class FullJitterBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _full_jitter_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
        def test_globals_2_8(self):
        ajvars = AnsibleJ2Vars(self.mock_templar, {'foo': 'bar', 'blip': [1, 2, 3]})
        res28 = self._dict_jinja28(ajvars)
        self._assert_globals(res28)
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
        def _start_queue_management_thread(self):
        # When the executor gets lost, the weakref callback will wake up
        # the queue management thread.
        def weakref_cb(_, q=self._result_queue):
            q.put(None)
        if self._queue_management_thread is None:
            self._queue_management_thread = threading.Thread(
                    target=_queue_management_worker,
                    args=(weakref.ref(self, weakref_cb),
                          self._processes,
                          self._pending_work_items,
                          self._work_ids,
                          self._call_queue,
                          self._result_queue))
            self._queue_management_thread.daemon = True
            self._queue_management_thread.start()
            _threads_queues[self._queue_management_thread] = self._result_queue
    
    import functools
import time
import timeit
import sys
    
    # General information about the project.
project = u'futures'
copyright = u'2009-2011, Brian Quinlan'
    
            file_handle = msvcrt.get_osfhandle( file_object.fileno() )
        windll.kernel32.SetHandleInformation( file_handle,
                                              HANDLE_FLAG_INHERIT,
                                              0 )
    
    
  def __missing__( self, key ):
    # Python does not allow to return assignment operation result directly
    new_value = self[ key ] = Buffer(
      key,
      self._user_options,
      any( x in DIAGNOSTIC_UI_ASYNC_FILETYPES
           for x in vimsupport.GetBufferFiletypes( key ) ) )