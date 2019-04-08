
        
        
    {        Generic:                   '#000000',        # class: 'g'
        Generic.Deleted:           '#a40000',        # class: 'gd'
        Generic.Emph:              'italic #000000', # class: 'ge'
        Generic.Error:             '#ef2929',        # class: 'gr'
        Generic.Heading:           'bold #000080',   # class: 'gh'
        Generic.Inserted:          '#00A000',        # class: 'gi'
        Generic.Output:            '#888',           # class: 'go'
        Generic.Prompt:            '#745334',        # class: 'gp'
        Generic.Strong:            'bold #000000',   # class: 'gs'
        Generic.Subheading:        'bold #800080',   # class: 'gu'
        Generic.Traceback:         'bold #a40000',   # class: 'gt'
    }

    
            raise KeyError('name=%r, domain=%r, path=%r' % (name, domain, path))
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    # Import encoding now, to avoid implicit import later.
# Implicit import within threads may cause LookupError when standard library is in a ZIP,
# such as in Embedded Python. See https://github.com/requests/requests/issues/3578.
import encodings.idna
    
    random_state = 2  # to control the random selection of anomalies in SA
    
        revision is a git commit reference (hash or name)
    
            if not in_exercise_region or linestrip.startswith('#'):
            output_file.write(line)
    
    # Anisotropicly distributed data
random_state = 170
X, y = datasets.make_blobs(n_samples=n_samples, random_state=random_state)
transformation = [[0.6, -0.6], [-0.4, 0.8]]
X_aniso = np.dot(X, transformation)
aniso = (X_aniso, y)
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessages_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' },
                                      { 'message': 'this is another one' } ] ,
                                    None ),
               equal_to( True ) )
    
      def _adjust_thread_count( self ):
    # When the executor gets lost, the weakref callback will wake up
    # the worker threads.
    def weakref_cb( _, q=self._work_queue ):
      q.put( None )
    # TODO(bquinlan): Should avoid creating new threads if there are more
    # idle threads than items in the work queue.
    if len( self._threads ) < self._max_workers:
      t = threading.Thread( target=_worker,
                            args=( weakref.ref( self, weakref_cb ),
                                   self._work_queue ) )
      t.daemon = True
      t.start()
      self._threads.add( t )
    
    # Possible future states (for internal use by the futures package).
PENDING = 'PENDING'
RUNNING = 'RUNNING'
# The future was cancelled by the user...
CANCELLED = 'CANCELLED'
# ...and _Waiter.add_cancelled() was called by a worker.
CANCELLED_AND_NOTIFIED = 'CANCELLED_AND_NOTIFIED'
FINISHED = 'FINISHED'
    
    from concurrent.futures import (as_completed, ThreadPoolExecutor,
                                ProcessPoolExecutor)
    
    # If not '', a 'Last updated on:' timestamp is inserted at every page bottom,
# using the given strftime format.
#html_last_updated_fmt = '%b %d, %Y'
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
    def produce_group_chat(core, msg):
    r = re.match('(@[0-9a-z]*?):<br/>(.*)$', msg['Content'])
    if r:
        actualUserName, content = r.groups()
        chatroomUserName = msg['FromUserName']
    elif msg['FromUserName'] == core.storageClass.userName:
        actualUserName = core.storageClass.userName
        content = msg['Content']
        chatroomUserName = msg['ToUserName']
    else:
        msg['ActualUserName'] = core.storageClass.userName
        msg['ActualNickName'] = core.storageClass.nickName
        msg['IsAt'] = False
        utils.msg_formatter(msg, 'Content')
        return
    chatroom = core.storageClass.search_chatrooms(userName=chatroomUserName)
    member = utils.search_dict_list((chatroom or {}).get(
        'MemberList') or [], 'UserName', actualUserName)
    if member is None:
        chatroom = core.update_chatroom(chatroomUserName)
        member = utils.search_dict_list((chatroom or {}).get(
            'MemberList') or [], 'UserName', actualUserName)
    if member is None:
        logger.debug('chatroom member fetch failed with %s' % actualUserName)
        msg['ActualNickName'] = ''
        msg['IsAt'] = False
    else:
        msg['ActualNickName'] = member.get('DisplayName', '') or member['NickName']
        atFlag = '@' + (chatroom['Self'].get('DisplayName', '') or core.storageClass.nickName)
        msg['IsAt'] = (
            (atFlag + (u'\u2005' if u'\u2005' in msg['Content'] else ' '))
            in msg['Content'] or msg['Content'].endswith(atFlag))
    msg['ActualUserName'] = actualUserName
    msg['Content']        = content
    utils.msg_formatter(msg, 'Content')
    
    
def docker_client(environment, version=None, tls_config=None, host=None,
                  tls_version=None):
    '''
    Returns a docker-py client configured using environment variables
    according to the same logic as the official Docker client.
    '''
    try:
        kwargs = kwargs_from_env(environment=environment, ssl_version=tls_version)
    except TLSParameterError:
        raise UserError(
            'TLS configuration is invalid - make sure your DOCKER_TLS_VERIFY '
            'and DOCKER_CERT_PATH are set correctly.\n'
            'You might need to run `eval \'$(docker-machine env default)\'`')
    
        def test_api_error_version_mismatch_unicode_explanation(self, mock_logging):
        with pytest.raises(errors.ConnectionError):
            with handle_connection_errors(mock.Mock(api_version='1.22')):
                raise APIError(None, None, u'client is newer than server')
    
        def test_format_unicode_warn(self):
        message = b'\xec\xa0\x95\xec\x88\x98\xec\xa0\x95'
        output = self.formatter.format(make_log_record(logging.WARN, message))
        expected = colors.yellow('WARNING') + ': '
        assert output == '{0}{1}'.format(expected, message.decode('utf-8'))