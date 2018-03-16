
        
                                with K.name_scope(metric_name):
                            metric_result = weighted_metric_fn(y_true, y_pred,
                                                               weights=weights,
                                                               mask=masks[i])
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
        num_train, num_test = x_train.shape[0], x_test.shape[0]
    
        @classmethod
    def get_all_datasources(cls, session):
        datasources = []
        for source_type in ConnectorRegistry.sources:
            datasources.extend(
                session.query(ConnectorRegistry.sources[source_type]).all())
        return datasources
    
    
def export_schema_to_dict(back_references):
    '''Exports the supported import/export schema to a dictionary'''
    databases = [Database.export_schema(recursive=True,
                 include_parent_ref=back_references)]
    clusters = [DruidCluster.export_schema(recursive=True,
                include_parent_ref=back_references)]
    data = dict()
    if databases:
        data[DATABASES_KEY] = databases
    if clusters:
        data[DRUID_CLUSTERS_KEY] = clusters
    return data
    
    
def downgrade():
    with op.batch_alter_table('sql_metrics') as batch_op_sql_metrics:
        batch_op_sql_metrics.drop_column('warning_text')
    with op.batch_alter_table('metrics') as batch_op_metrics:
        batch_op_metrics.drop_column('warning_text')

    
    '''
    
      from ycmd import server_utils as su
  su.AddNearestThirdPartyFoldersToSysPath( DIR_OF_CURRENT_SCRIPT )
  # We need to import ycmd's third_party folders as well since we import and
  # use ycmd code in the client.
  su.AddNearestThirdPartyFoldersToSysPath( su.__file__ )
    
            If the future has been cancelled (cancel() was called and returned
        True) then any threads waiting on the future completing (though calls
        to as_completed() or wait()) are notified and False is returned.
    
    # The name of an image file (relative to this directory) to place at the top
# of the sidebar.
#html_logo = None
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
    
    
  # This is the blocking version of the method. See below for async.
  # |timeout| is num seconds to tolerate no response from server before giving
  # up; see Requests docs for details (we just pass the param along).
  @staticmethod
  def PostDataToHandler( data, handler, timeout = _READ_TIMEOUT_SEC ):
    return JsonFromFuture( BaseRequest.PostDataToHandlerAsync( data,
                                                               handler,
                                                               timeout ) )
    
    from ycm.client.base_request import ( BaseRequest, BuildRequestData,
                                      HandleServerException )
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
        @YouCompleteMeInstance( { 'log_level': 'debug',
                              'keep_logfiles': 1 } )
    def Debug_test( ycm ):
        ...
  '''
  def Decorator( test ):
    @functools.wraps( test )
    def Wrapper( *args, **kwargs ):
      ycm = YouCompleteMe( MakeUserOptions( custom_options ) )
      WaitUntilReady()
      ycm.CheckIfServerIsReady()
      try:
        test( ycm, *args, **kwargs )
      finally:
        StopServer( ycm )
    return Wrapper
  return Decorator
