
        
            auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
    
@bp.route('/<int:id>/update', methods=('GET', 'POST'))
@login_required
def update(id):
    '''Update a post if the current user is the author.'''
    post = get_post(id)
    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name
    
    
  def _ThreadMain( self ):
    while True:
      time.sleep( self._ping_interval_seconds )
    
          current_group = SyntaxGroup( match.group( 'group_name' ),
                                   [ match.group( 'content' ).strip() ] )
    else:
      if looking_for_group:
        continue
    
    
  def done( self ):
    return self._done
    
    def _python_exit():
    global _shutdown
    _shutdown = True
    items = list(_threads_queues.items())
    for t, q in items:
        q.put(None)
    for t, q in items:
        t.join()
    
    def sequential():
    return list(map(is_prime, PRIMES))