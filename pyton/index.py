
        
        containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
    # Workers are created as daemon threads. This is done to allow the interpreter
# to exit when there are still idle threads in a ThreadPoolExecutor's thread
# pool (i.e. shutdown() was not called). However, allowing workers to die with
# the interpreter has two undesirable properties:
#   - The workers would still be running during interpretor shutdown,
#     meaning that they would fail in unpredictable ways.
#   - The workers could be killed while evaluating a work item, which could
#     be bad if the callable being evaluated has external side-effects e.g.
#     writing to a file.
#
# To work around this problem, an exit handler is installed which tells the
# workers to exit when their work queues are empty and then waits until the
# threads finish.
    
    def download_urls_with_executor(urls, executor, timeout=60):
    try:
        url_to_content = {}
        future_to_url = dict((executor.submit(load_url, url, timeout), url)
                             for url in urls)
    
    if __name__ == '__main__':
    main()

    
    _HEADERS = {'content-type': 'application/json'}
_CONNECT_TIMEOUT_SEC = 0.01
# Setting this to None seems to screw up the Requests/urllib3 libs.
_READ_TIMEOUT_SEC = 30
_HMAC_HEADER = 'x-ycm-hmac'
_logger = logging.getLogger( __name__ )
    
          # When the user rejects the extra conf, we reject it
      with patch( 'ycm.vimsupport.PresentDialog',
                  return_value = 1,
                  new_callable = ExtendedMock ) as present_dialog:
        ycm.OnFileReadyToParse()
        ok_( ycm.FileParseRequestReady() )
        ycm.HandleFileParseRequest()
    
      If the test fails (for the correct reason), then it is marked as skipped.
  If it fails for any other reason, it is marked as failed.
  If the test passes, then it is also marked as failed.'''
  def decorator( test ):
    @functools.wraps( test )
    def Wrapper( *args, **kwargs ):
      try:
        test( *args, **kwargs )
      except Exception as test_exception:
        # Ensure that we failed for the right reason
        test_exception_message = ToUnicode( test_exception )
        try:
          for matcher in exception_matchers:
            assert_that( test_exception_message, matcher )
        except AssertionError:
          # Failed for the wrong reason!
          import traceback
          print( 'Test failed for the wrong reason: ' + traceback.format_exc() )
          # Real failure reason is the *original* exception, we're only trapping
          # and ignoring the exception that is expected.
          raise test_exception
    
        # If not a dictionary or a list, the response is necessarily a
    # scalar: boolean, number, string, etc. In this case, we print
    # it to the user.
    if not isinstance( self._response, ( dict, list ) ):
      return self._HandleBasicResponse()
    
    
class DebugInfoRequest( BaseRequest ):
  def __init__( self, extra_data = None ):
    super( DebugInfoRequest, self ).__init__()
    self._extra_data = extra_data
    self._response = None
    
    import os
import subprocess
import sys
import os.path as p
import glob
    
    from ycm.client.base_request import ( BaseRequest, BuildRequestData,
                                      HandleServerException )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
       Unlike the standard library's `queue` module, the classes defined here
   are *not* thread-safe. To use these queues from another thread,
   use `.IOLoop.add_callback` to transfer control to the `.IOLoop` thread
   before calling any queue methods.
'''
    
            server = client = None
        try:
            sock, port = bind_unused_port()
            with NullContext():
                server = TestServer()
                server.add_socket(sock)
            client = IOStream(socket.socket())
            with ExpectLog(app_log, 'Exception in callback'):
                yield client.connect(('localhost', port))
                yield client.write(b'hello')
                yield client.read_until_close()
                yield gen.moment
        finally:
            if server is not None:
                server.stop()
            if client is not None:
                client.close()
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        def on_operator_inservice(self):
        super(Suspect, self).abort_diagnostics()
        super(Suspect, self).on_operator_inservice()  # message ignored
    
        def test_sales_manager_shall_respond_through_proxy_with_delay(cls):
        cls.p.busy = 'Yes'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager is busy\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
            def __init__(self, *args, **kwargs):
            pass
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
    class TimeDisplay(object):
    
    
def main():
    '''
    >>> c = Catalog('param_value_1').main_method()
    executed method 1!
    >>> Catalog('param_value_2').main_method()
    executed method 2!
    '''
    
    
class Transaction(object):
    '''A transaction guard.
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)