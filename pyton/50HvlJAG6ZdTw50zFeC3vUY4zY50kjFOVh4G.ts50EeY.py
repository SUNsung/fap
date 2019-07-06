
        
            def dispatch_call(self, call):
        if call.rank not in (Rank.OPERATOR, Rank.SUPERVISOR, Rank.DIRECTOR):
            raise ValueError('Invalid call rank: {}'.format(call.rank))
        employee = None
        if call.rank == Rank.OPERATOR:
            employee = self._dispatch_call(call, self.operators)
        if call.rank == Rank.SUPERVISOR or employee is None:
            employee = self._dispatch_call(call, self.supervisors)
        if call.rank == Rank.DIRECTOR or employee is None:
            employee = self._dispatch_call(call, self.directors)
        if employee is None:
            self.queued_calls.append(call)
    
        def __init__(self, license_plate):
        super(Bus, self).__init__(VehicleSize.LARGE, license_plate, spot_size=5)
    
        def __init__(self, key, value):
        self.key = key
        self.value = value
    
        def __init__(self, db):
        self.db = db
        pass
    
    # TODO: ensure that history changes.

    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    dynamodb                                 | dynamodbstreams
ec2                                      | ecr
    
    # (filename as typed by the user, unquoted filename, quoted filename as per shells.quote)
parametrize_filename = pytest.mark.parametrize('filename, unquoted, quoted', [
    ('foo{}', 'foo{}', 'foo{}'),
    (''foo bar{}'', 'foo bar{}', ''foo bar{}'')])
    
    
class UnaccentExtension(CreateExtension):
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
        @classmethod
    def get_model_class(cls):
        # Avoids a circular import and allows importing SessionStore when
        # django.contrib.sessions is not in INSTALLED_APPS.
        from django.contrib.sessions.models import Session
        return Session
    
        The headers and data are separated by a blank line.
    
            loader = unittest.TestLoader()
        loader.sortTestMethodsUsing = reversed_cmp
    
    NAME_MAPPING.update({
    ('__builtin__', 'basestring'): ('builtins', 'str'),
    ('exceptions', 'StandardError'): ('builtins', 'Exception'),
    ('UserDict', 'UserDict'): ('collections', 'UserDict'),
    ('socket', '_socketobject'): ('socket', 'SocketType'),
})
    
    
def getctime(filename):
    '''Return the metadata change time of a file, reported by os.stat().'''
    return os.stat(filename).st_ctime
    
    
Package = Union[str, ModuleType]
Resource = Union[str, os.PathLike]
    
    import os
import email
import mimetypes
    
    def plus(a, b):
    time.sleep(0.5 * random.random())
    return a + b
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()
    
    cur.execute('insert into test(p) values (?)', (p,))
cur.execute('select p from test')
print('with declared types:', cur.fetchone()[0])
cur.close()
con.close()
    
        To extract all the way down to the ndarray, pass ``extract_numpy=True``.
    
    from pandas import Series
from pandas.util.testing import assert_almost_equal, assert_series_equal
    
    
from .pandas_vb_common import setup  # noqa: F401

    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
      AddToGroupMap( 'Conditional', statement_group )
  AddToGroupMap( 'Repeat'     , statement_group )
  AddToGroupMap( 'Label'      , statement_group )
  AddToGroupMap( 'Operator'   , statement_group )
  AddToGroupMap( 'Keyword'    , statement_group )
  AddToGroupMap( 'Exception'  , statement_group )
    
        Args:
        max_workers: The maximum number of threads that can be used to
            execute the given calls.
    '''
    self._max_workers = max_workers
    self._work_queue = queue.Queue()
    self._threads = set()
    self._shutdown = False
    self._shutdown_lock = threading.Lock()
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
                if work_item.future.set_running_or_notify_cancel():
                call_queue.put(_CallItem(work_id,
                                         work_item.fn,
                                         work_item.args,
                                         work_item.kwargs),
                               block=True)
            else:
                del pending_work_items[work_id]
                continue
    
    def main():
    for name, fn in [('sequential',
                      functools.partial(download_urls_sequential, URLS)),
                     ('processes',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ProcessPoolExecutor(10))),
                     ('threads',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ThreadPoolExecutor(10)))]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        url_map = fn()
        sys.stdout.write('%.2f seconds (%d of %d downloaded)\n' %
                         (time.time() - start, len(url_map), len(URLS)))
    
    if PY2:
    text_type = unicode
    string_types = (str, unicode)
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
    for topic_idx, topic in enumerate(nmf.components_):
    print('Topic #%d:' % topic_idx)
    print(' '.join([feature_names[i]
                    for i in topic.argsort()[:-n_top_words - 1:-1]]))
    print('')

    
        def testSetDictionary(self):
        jieba.set_dictionary('foobar.txt')
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test SetDictionary Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test SetDictionary error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testSetDictionary', file=sys.stderr)
    
    