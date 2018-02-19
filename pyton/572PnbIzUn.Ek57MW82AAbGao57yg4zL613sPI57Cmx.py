import blueprintexample
    
        with app.app_context():
        init_db()
        yield app
    
        A simple application that shows how Flask and jQuery get along.
    
    
def add_message(client, text):
    '''Records a message'''
    rv = client.post('/add_message', data={'text': text},
                     follow_redirects=True)
    if text:
        assert b'Your message was recorded' in rv.data
    return rv
    
      Args:
    raw_data: one of the raw data outputs from ptb_raw_data.
    batch_size: int, the batch size.
    num_steps: int, the number of unrolls.
    name: the name of this operation (optional).
    
    
class ResnetArgParser(argparse.ArgumentParser):
  '''Arguments for configuring and running a Resnet Model.
  '''
    
      def testWriteAndReadToFile(self):
    data = np.array([[[-1.0, 125.0, -2.5], [14.5, 3.5, 0.0]],
                     [[20.0, 0.0, 30.0], [25.5, 36.0, 42.0]]])
    tmpdir = tf.test.get_temp_dir()
    filename = os.path.join(tmpdir, 'test.datum')
    datum_io.WriteToFile(data, filename)
    data_read = datum_io.ReadFromFile(filename)
    self.assertAllEqual(data_read, data)
    
        Args:
      attention_feature_map: Potentially normalized feature map that will
        be aggregated with attention score map.
      feature_map: Unnormalized feature map that will be used to compute
        attention score map.
      attention_nonlinear: Type of non-linearity that will be applied to
        attention value.
      kernel: Convolutional kernel to use in attention layers (eg: 1, [3, 3]).
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    import cifar10_input
    
                method = getattr(self, self.request.method.lower())
            result = method(*self.path_args, **self.path_kwargs)
            if result is not None:
                result = yield result
            if self._auto_finish and not self._finished:
                self.finish()
        except Exception as e:
            try:
                self._handle_request_exception(e)
            except Exception:
                app_log.error('Exception in exception handler', exc_info=True)
            finally:
                # Unset result to avoid circular references
                result = None
            if (self._prepared_future is not None and
                    not self._prepared_future.done()):
                # In case we failed before setting _prepared_future, do it
                # now (to unblock the HTTP server).  Note that this is not
                # in a finally block to avoid GC issues prior to Python 3.4.
                self._prepared_future.set_result(None)
    
    
@unittest.skipIf(pycurl is None, 'pycurl module not present')
class CurlHTTPClientTestCase(AsyncHTTPTestCase):
    def setUp(self):
        super(CurlHTTPClientTestCase, self).setUp()
        self.http_client = self.create_client()
    
        def call_wrapped(self, count):
        '''Wraps and calls a function at each level of stack depth
        to measure the overhead of the wrapped function.
        '''
        # This queue is analogous to IOLoop.add_callback, but lets us
        # benchmark the stack_context in isolation without system call
        # overhead.
        queue = collections.deque()
        self.call_wrapped_inner(queue, count)
        while queue:
            queue.popleft()()
    
    import logging
import tornado.escape
import tornado.ioloop
import tornado.web
import os.path
import uuid
    
    class ConstructorInjectionTest(unittest.TestCase):
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(production_code_time_provider), expected_time)
    
    '''
*TL;DR80
Encapsulates all information needed to perform an action or trigger an event.
'''
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
        def __init__(self, value):
        self.value = value