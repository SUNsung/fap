
        
                # Retrieve list of modified files
        # Note: Noop saves can cause the file to be listed twice, I used a
        # set to remove this possibility. This is a known augeas 0.10 error.
        save_paths = self.aug.match('/augeas/events/saved')
    
        def test_select_no_input(self):
        self.assertFalse(select_vhost_multiple([]))
    
            self.addr_defined = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
        return o

    
    
# TODO(huay): char_cnn_embedding
def char_cnn_embedding(x, c_embed_size=8, share_cnn_weights=True, name='char_cnn_embedding', reuse=None):
    '''
    In:  [N, max_n_word, max_n_char]
    Out: [N, max_n_word, c_embed_size]
    
        References:
        K.repeat()
        tf.tile()
    '''
    assert x.get_shape().ndims == 2
    x = tf.expand_dims(x, axis=1)  # -> [batch_size, 1, n_input]
    return tf.tile(x, [1, n, 1])  # -> [batch_size, n, n_input]
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
          f = _base.Future()
      w = _WorkItem( f, fn, args, kwargs )
    
            # Make the call queue slightly larger than the number of processes to
        # prevent the worker processes from idling. But don't make it too big
        # because futures in the call queue cannot be cancelled.
        self._call_queue = multiprocessing.Queue(self._max_workers +
                                                 EXTRA_QUEUED_CALLS)
        self._result_queue = multiprocessing.Queue()
        self._work_ids = queue.Queue()
        self._queue_management_thread = None
        self._processes = set()
    
    def _worker(executor_reference, work_queue):
    try:
        while True:
            work_item = work_queue.get(block=True)
            if work_item is not None:
                work_item.run()
                continue
            executor = executor_reference()
            # Exit if:
            #   - The interpreter is shutting down OR
            #   - The executor that owns the worker has been collected OR
            #   - The executor that owns the worker has been shutdown.
            if _shutdown or executor is None or executor._shutdown:
                # Notice other workers
                work_queue.put(None)
                return
            del executor
    except BaseException:
        _base.LOGGER.critical('Exception in worker', exc_info=True)