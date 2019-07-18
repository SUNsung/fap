
        
            Returns:
        dict
    '''
    tokens = tokenizer.tokenize(txt)
    tokens = [word_clean(token) for token in tokens]
    
            if n_dim == 2:
            return tf.nn.softmax(x)
        else:
            e = tf.exp(x - tf.reduce_max(x, axis=axis, keepdims=True))
            s = tf.reduce_sum(e, axis=axis, keepdims=True)
            return e / s
    '''
    return tf.nn.softmax(x, axis=axis)
    
            Use attention **after** lstm:
            ```
            tf.reset_default_graph()
    
        return x
    
    References：
    [1509.01626] Character-level Convolutional Networks for Text Classification https://arxiv.org/abs/1509.01626
'''
    
    
def get_params_dict():
    '''以字典形式获取所有 trainable 参数'''
    param_dict = dict()
    for var in tf.trainable_variables():
        param_dict[var.name] = {'shape': list(map(int, var.shape)),
                                'number': int(reduce(mul, var.shape, 1))}
    return param_dict
    
        # list of integers
    result = s.iloc[[0, 2, 3, 4, 5]]
    expected = s.reindex(s.index[[0, 2, 3, 4, 5]])
    assert_series_equal(result, expected)
    
    
def make_data():
    return [decimal.Decimal(random.random()) for _ in range(100)]
    
    Note:
    
            sorted_df = frame.copy()
        sorted_df.sort_values(by='A', ascending=False, inplace=True)
        expected = frame.sort_values(by='A', ascending=False)
        assert_frame_equal(sorted_df, expected)
    
    
  def ComputeCandidatesInner( self, request_data ):
    if not self._omnifunc:
      return []
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ], ( 1, 6 ) ):
    ycm.SendCompletionRequest()
    assert_that(
      ycm.GetCompletionResponse(),
      has_entries( {
        'completions': [ { 'word': 'CDtEF', 'equal': 1 } ],
        'completion_start_column': 6
      } )
    )
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
      # Ignore 'contained' argument in first position.
  if words[ 0 ] == 'contained':
    words = words[ 1: ]
    
    
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
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__
