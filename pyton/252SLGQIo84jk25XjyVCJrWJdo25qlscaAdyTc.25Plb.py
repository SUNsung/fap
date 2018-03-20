
        
        
def register_and_login(client, username, password):
    '''Registers and logs in in one go'''
    register(client, username, password)
    return login(client, username, password)
    
        def get_test_cluster_obj(self):
        return DruidCluster(
            cluster_name='test_cluster',
            coordinator_host='localhost',
            coordinator_endpoint='druid/coordinator/v1/metadata',
            coordinator_port=7979,
            broker_host='localhost',
            broker_port=7980,
            metadata_last_refreshed=datetime.now())
    
            # If using Hive, this will set hive.server2.proxy.user=$effective_username
        configuration = {}
        configuration.update(
            self.db_engine_spec.get_configuration_for_impersonation(
                str(url),
                self.impersonate_user,
                effective_username))
        if configuration:
            params['connect_args'] = {'configuration': configuration}
    
    import textwrap
    
    FORM_DATA_KEY_WHITELIST = list(frontend_config.get('controls').keys()) + ['slice_id']
    
        def run(self):
        if not self.future.set_running_or_notify_cancel():
            return
    
        # Parse and validate the field names.  Validation serves two purposes,
    # generating informative error messages and preventing template injection attacks.
    if isinstance(field_names, basestring):
        field_names = field_names.replace(',', ' ').split() # names separated by whitespace and/or commas
    field_names = tuple(map(str, field_names))
    for name in (typename,) + field_names:
        if not all(c.isalnum() or c=='_' for c in name):
            raise ValueError('Type names and field names can only contain alphanumeric characters and underscores: %r' % name)
        if _iskeyword(name):
            raise ValueError('Type names and field names cannot be a keyword: %r' % name)
        if name[0].isdigit():
            raise ValueError('Type names and field names cannot start with a number: %r' % name)
    seen_names = set()
    for name in field_names:
        if name.startswith('_'):
            raise ValueError('Field names cannot start with an underscore: %r' % name)
        if name in seen_names:
            raise ValueError('Encountered duplicate field name: %r' % name)
        seen_names.add(name)
    
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
    
    def with_process_pool_executor():
    with ProcessPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    with HandleServerException():
      self._response = self.PostDataToHandler( request_data,
                                               'semantic_completion_available' )
    
    
def CommaSeparatedFiletypes_test():