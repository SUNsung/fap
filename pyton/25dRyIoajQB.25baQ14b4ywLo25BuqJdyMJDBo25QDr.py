
        
                # reset stats on high iter-request times caused by client restarts
        if delta > 3: # seconds
            self._reset_stats()
            return ''
    
    from importlib import import_module
from os.path import join, dirname, abspath, exists, splitext
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
    
class HttpAuthMiddleware(object):
    '''Set Basic HTTP Authorization header
    (http_user and http_pass spider class attributes)'''
    
    from mrjob.job import MRJob
    
    
class SalesRanker(MRJob):
    
        def __init__(self, from_user_id, to_user_id, request_status, timestamp):
        self.from_user_id = from_user_id
        self.to_user_id = to_user_id
        self.request_status = request_status
        self.timestamp = timestamp
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
    def get_marker(line):
    matchlist = TAG_REGEX.findall(line)
    if matchlist:
        namematch = NAMED_A_TAG_REGEX.match(line)
        if namematch:
            return namematch.group(1) # group 0 is full match
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def setUp(cls):
        ''' Function/test case scope setup. '''
        cls.output = StringIO()
        cls.saved_stdout = sys.stdout
        sys.stdout = cls.output
    
    
class Action(object):
    
        def test_cat_greek_localization(self):
        self.assertEqual(self.g.get('cat'), 'γάτα')
    
    
class TestRunnerFacilities(unittest.TestCase):
    
    class TimeDisplay(object):
    
    from dft.parameter_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
            # simple test to validate param value
        if param in self._static_method_choices.keys():
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    from __future__ import print_function
import os
from os.path import lexists
    
            def callback(future):
            self.future = future
            raise Exception('callback')
    
        def open(self, *args, **kwargs):
        '''Invoked when a new WebSocket is opened.
    
    try:
    import ssl
except ImportError:
    # ssl is not available on Google App Engine
    ssl = None
    
        def render_string(self, path, **kwargs):
        '''Renders a template and returns it as a string.'''
        return self.handler.render_string(path, **kwargs)
    
        See `OptionParser.print_help`.
    '''
    return options.print_help(file)
    
        # IReactorThreads
    def callFromThread(self, f, *args, **kw):
        assert callable(f), '%s is not callable' % f
        with NullContext():
            # This NullContext is mainly for an edge case when running
            # TwistedIOLoop on top of a TornadoReactor.
            # TwistedIOLoop.add_callback uses reactor.callFromThread and
            # should not pick up additional StackContexts along the way.
            self._io_loop.add_callback(f, *args, **kw)