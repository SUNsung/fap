
        
        
def auto_parallel(metagraph, model):
  from tensorflow.python.grappler import tf_optimizer
  rewriter_config = rewriter_config_pb2.RewriterConfig()
  rewriter_config.optimizers.append('autoparallel')
  rewriter_config.auto_parallel.enable = True
  rewriter_config.auto_parallel.num_replicas = FLAGS.num_gpus
  optimized_graph = tf_optimizer.OptimizeGraph(rewriter_config, metagraph)
  metagraph.graph_def.CopyFrom(optimized_graph)
  UpdateCollection(metagraph, model)

    
        # Create a HashTable mapping label strings to integer ids.
    table_initializer = tf.contrib.lookup.KeyValueTensorInitializer(
        keys=list(input_config.label_map.keys()),
        values=list(input_config.label_map.values()),
        key_dtype=tf.string,
        value_dtype=tf.int32)
    label_to_id = tf.contrib.lookup.HashTable(
        table_initializer, default_value=-1)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      This function assumes the directory structure of the Mikulski Archive for
  Space Telescopes (http://archive.stsci.edu/pub/kepler/lightcurves).
  Specifically, the filenames for a particular Kepler target star have the
  following format:
    
      Args:
    time: 1D numpy array of time values.
    period: A positive real scalar; the period to fold over.
    t0: The center of the resulting folded vector; this value is mapped to 0.
    
    
def compute_path_embeddings(model, session, instances):
  '''Compute the path embeddings for all the distinct paths.
    
    
def ArrayToDatum(arr):
  '''Converts numpy array to DatumProto.
    
        old_layer = keras.layers.MaxPooling2D((2, 2), 2, 'valid', name='maxpool2d')
    new_layer = keras.layers.MaxPool2D(pool_size=2, strides=2, padding='valid', name='maxpool2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
@keras_test
def test_locallyconnected_2d():
    num_samples = 5
    filters = 3
    stack_size = 4
    num_row = 6
    num_col = 8
    padding = 'valid'
    
        # learn the alphabet with stacked LSTM
    model = Sequential([
        layers.LSTM(16, return_sequences=True, input_shape=(sequence_length, number_of_chars)),
        layers.LSTM(16, return_sequences=False),
        layers.Dense(number_of_chars, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy', optimizer='adam')
    model.fit(x, y, batch_size=1, epochs=60, verbose=1)
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
    
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
    
                self._pending_work_items[self._queue_count] = w
            self._work_ids.put(self._queue_count)
            self._queue_count += 1
            # Wake up queue management thread
            self._result_queue.put(None)
    
    def with_process_pool_executor():
    with ProcessPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))
    
        def test_done_callback_already_cancelled(self):
        was_cancelled = [None]
        def fn(callback_future):
            was_cancelled[0] = callback_future.cancelled()
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
    
def EndsWithPython_Bad( path ):
  ok_( not _EndsWithPython( path ),
       'Path {0} does end with a Python name.'.format( path ) )
    
    
def ParseArguments():
  parser = argparse.ArgumentParser()
  parser.add_argument( '--skip-build', action = 'store_true',
                       help = 'Do not build ycmd before testing' )
  parser.add_argument( '--coverage', action = 'store_true',
                       help = 'Enable coverage report' )
  parser.add_argument( '--no-flake8', action = 'store_true',
                       help = 'Do not run flake8' )
    
    If the `~functools.singledispatch` library is available (standard in
Python 3.4, available via the `singledispatch
<https://pypi.python.org/pypi/singledispatch>`_ package on older
versions), additional types of objects may be yielded. Tornado includes
support for ``asyncio.Future`` and Twisted's ``Deferred`` class when
``tornado.platform.asyncio`` and ``tornado.platform.twisted`` are imported.
See the `convert_yielded` function to extend this mechanism.
    
        '''
    def __init__(self, async_client_class=None, **kwargs):
        # Initialize self._closed at the beginning of the constructor
        # so that an exception raised here doesn't lead to confusing
        # failures in __del__.
        self._closed = True
        self._io_loop = IOLoop(make_current=False)
        if async_client_class is None:
            async_client_class = AsyncHTTPClient
        # Create the client while our IOLoop is 'current', without
        # clobbering the thread's real current IOLoop (if any).
        self._async_client = self._io_loop.run_sync(
            gen.coroutine(lambda: async_client_class(**kwargs)))
        self._closed = False
    
        .. testoutput::
    
    from tornado.concurrent import (Future, return_future, ReturnValueIgnoredError,
                                run_on_executor, future_set_result_unless_cancelled)
from tornado.escape import utf8, to_unicode
from tornado import gen
from tornado.ioloop import IOLoop
from tornado.iostream import IOStream
from tornado.log import app_log
from tornado import stack_context
from tornado.tcpserver import TCPServer
from tornado.testing import AsyncTestCase, ExpectLog, bind_unused_port, gen_test
from tornado.test.util import unittest, skipBefore35, exec_test, ignore_deprecation