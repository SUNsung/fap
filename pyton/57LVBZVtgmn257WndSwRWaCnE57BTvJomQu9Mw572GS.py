
        
        
def test_urls(client):
    r = client.get('/')
    assert r.status_code == 200
    
    
@bp.route('/login', methods=['GET', 'POST'])
def login():
    error = None
    if request.method == 'POST':
        if request.form['username'] != current_app.config['USERNAME']:
            error = 'Invalid username'
        elif request.form['password'] != current_app.config['PASSWORD']:
            error = 'Invalid password'
        else:
            session['logged_in'] = True
            flash('You were logged in')
            return redirect(url_for('flaskr.show_entries'))
    return render_template('login.html', error=error)
    
        def test_basic_response(self):
        '''the basic response server returns an empty http response'''
        with Server.basic_response_server() as (host, port):
            r = requests.get('http://{0}:{1}'.format(host, port))
            assert r.status_code == 200
            assert r.text == u''
            assert r.headers['Content-Length'] == '0'
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
    _proxy_combos = []
for prefix, schemes in _schemes_by_var_prefix:
    for scheme in schemes:
        _proxy_combos.append(('{0}_proxy'.format(prefix), scheme))
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
        def test_del_shutdown(self):
        executor = futures.ProcessPoolExecutor(max_workers=5)
        list(executor.map(abs, range(-5, 5)))
        queue_management_thread = executor._queue_management_thread
        processes = executor._processes
        del executor
    
    
  # This returns a future! Use JsonFromFuture to get the value.
  # |method| is either 'POST' or 'GET'.
  # |timeout| is num seconds to tolerate no response from server before giving
  # up; see Requests docs for details (we just pass the param along).
  @staticmethod
  def _TalkToHandlerAsync( data,
                           handler,
                           method,
                           timeout = _READ_TIMEOUT_SEC ):
    request_uri = _BuildUri( handler )
    if method == 'POST':
      sent_data = _ToUtf8Json( data )
      return BaseRequest.Session().post(
          request_uri,
          data = sent_data,
          headers = BaseRequest._ExtraHeaders( method,
                                               request_uri,
                                               sent_data ),
          timeout = ( _CONNECT_TIMEOUT_SEC, timeout ) )
    return BaseRequest.Session().get(
        request_uri,
        headers = BaseRequest._ExtraHeaders( method, request_uri ),
        timeout = ( _CONNECT_TIMEOUT_SEC, timeout ) )
    
    
  def SubsetForTypes( self, filetypes ):
    # check cache
    cache_key = ','.join( filetypes )
    cached = self._cache.get( cache_key )
    if cached is not None:
      return cached
    
      opts = _JavaFilter( { 'regex' : '.*taco.*',
                        'level' : 'warning' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
        def setUp(self):
        self.e, self.g = get_localizer(language='English'), \
                         get_localizer(language='Greek')
    
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
    
    ### OUTPUT ###
# request 2 handled in handler 1
# request 5 handled in handler 1
# request 14 handled in handler 2
# request 22 handled in handler 3
# request 18 handled in handler 2
# request 3 handled in handler 1
# end of chain, no handler for 35
# request 27 handled in handler 3
# request 20 handled in handler 2
# ------------------------------
# request 2 handled in coroutine 1
# request 5 handled in coroutine 1
# request 14 handled in coroutine 2
# request 22 handled in coroutine 3
# request 18 handled in coroutine 2
# request 3 handled in coroutine 1
# end of chain, no coroutine for 35
# request 27 handled in coroutine 3
# request 20 handled in coroutine 2
# (0.2369999885559082, 0.16199994087219238)

    
        def commit(self):
        self.states = [memento(target, self.deep) for target in self.targets]