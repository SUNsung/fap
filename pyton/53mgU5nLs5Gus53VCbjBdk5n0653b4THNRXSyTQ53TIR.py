
        
            if not now:
        now = datetime.datetime.utcnow()
    
        elif state == 'update':
        if not module.params.get('firewall_policy'):
            module.fail_json(
                msg=''firewall_policy' parameter is required to update a firewall policy.')
        try:
            (changed, firewall_policy) = update_firewall_policy(module, oneandone_conn)
        except Exception as e:
            module.fail_json(msg=str(e))
    
    
def protocol_to_type(protocol):
    try:
        protocols = ProtocolsType()
        setattr(protocols, protocol, True)
        return protocols
    except AttributeError:
        raise VcaError('The value in protocol is not valid')
    
        # Send the data to airbrake
    data = urlencode(params)
    response, info = fetch_url(module, url, data=data)
    if info['status'] == 200:
        module.exit_json(changed=True)
    else:
        module.fail_json(msg='HTTP result code: %d connecting to %s' % (info['status'], url))
    
    def main():
    
        By default this will get the strings from the blns.txt file
    
            if _executable_exists('xclip'):
            return init_xclip_clipboard()
        if _executable_exists('xsel'):
            return init_xsel_clipboard()
        if _executable_exists('klipper') and _executable_exists('qdbus'):
            return init_klipper_clipboard()
    
    
def pack(o, stream, **kwargs):
    '''
    Pack object `o` and write it to `stream`
    
    ABCSeries = create_pandas_abc_type('ABCSeries', '_typ', ('series', ))
ABCDataFrame = create_pandas_abc_type('ABCDataFrame', '_typ', ('dataframe', ))
ABCSparseDataFrame = create_pandas_abc_type('ABCSparseDataFrame', '_subtyp',
                                            ('sparse_frame', ))
ABCPanel = create_pandas_abc_type('ABCPanel', '_typ', ('panel',))
ABCSparseSeries = create_pandas_abc_type('ABCSparseSeries', '_subtyp',
                                         ('sparse_series',
                                          'sparse_time_series'))
ABCSparseArray = create_pandas_abc_type('ABCSparseArray', '_subtyp',
                                        ('sparse_array', 'sparse_series'))
ABCCategorical = create_pandas_abc_type('ABCCategorical', '_typ',
                                        ('categorical'))
ABCDatetimeArray = create_pandas_abc_type('ABCDatetimeArray', '_typ',
                                          ('datetimearray'))
ABCTimedeltaArray = create_pandas_abc_type('ABCTimedeltaArray', '_typ',
                                           ('timedeltaarray'))
ABCPeriodArray = create_pandas_abc_type('ABCPeriodArray', '_typ',
                                        ('periodarray', ))
ABCPeriod = create_pandas_abc_type('ABCPeriod', '_typ', ('period', ))
ABCDateOffset = create_pandas_abc_type('ABCDateOffset', '_typ',
                                       ('dateoffset',))
ABCInterval = create_pandas_abc_type('ABCInterval', '_typ', ('interval', ))
ABCExtensionArray = create_pandas_abc_type('ABCExtensionArray', '_typ',
                                           ('extension',
                                            'categorical',
                                            'periodarray',
                                            'datetimearray',
                                            'timedeltaarray',
                                            ))
ABCPandasArray = create_pandas_abc_type('ABCPandasArray',
                                        '_typ',
                                        ('npy_extension',))
    
            result = take(data, indexer, fill_value=fill_value,
                      allow_fill=allow_fill)
        return self._from_sequence(result)
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name
    
        def __init__(self):
        super(_AsCompletedWaiter, self).__init__()
        self.lock = threading.Lock()
    
            Args:
            max_workers: The maximum number of processes that can be used to
                execute the given calls. If None or not given then as many
                worker processes will be created as the machine has processors.
        '''
        _check_system_limits()
    
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
    
    
def reap_threads(func):
    '''Use this function when threads are being used.  This will
    ensure that the threads are cleaned up even when the test fails.
    If threading is unavailable this function does nothing.
    '''
    @functools.wraps(func)
    def decorator(*args): 
        key = test_support.threading_setup()
        try:
            return func(*args)
        finally:
            test_support.threading_cleanup(*key)
    return decorator
    
    UCS2BE_CHAR_LEN_TABLE = (2, 2, 2, 0, 2, 2)