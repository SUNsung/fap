
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
@click.command('init-db')
@with_appcontext
def init_db_command():
    '''Clear existing data and create new tables.'''
    init_db()
    click.echo('Initialized the database.')
    
        if words is None:
        words = url
    
                appid = random.choice(self.working_appid_list)
            return str(appid)
        else:
            for _ in xrange(0, 10):
                appid = self.public_appid.get()
                if appid in self.out_of_quota_appids or appid in self.not_exist_appids:
                    continue
                else:
                    return appid
            return None
    
            self._checking_lock.acquire()
        self._checking_num += 1
        self._checking_lock.release()
    
    
def rc4crypt(data, key):
    return _Crypto_Cipher_ARC4_new(key).encrypt(data) if key else data
    
                        s = snext
                    input.consume()
                    continue
    
            elif self.mismatchIsMissingToken(input, follow):
            raise MissingTokenException(ttype, input, None)
    
    
    def setTokenTypeChannel(self, ttype, channel):
        '''
        A simple filter mechanism whereby you can tell this token stream
        to force all tokens of type ttype to be on channel.  For example,
        when interpreting, we cannot exec actions so we need to tell
        the stream to force all WS and NEWLINE to be a different, ignored
        channel.
	'''
        
        self.channelOverrideMap[ttype] = channel
    
        This implementation does not copy the text from the input stream upon
    creation, but keeps start/stop pointers into the stream to avoid
    unnecessary copy operations.
    
    VALID_UNITS = [
    LENGTH_KILOMETERS,
    LENGTH_MILES,
    LENGTH_FEET,
    LENGTH_METERS,
]
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerResponse ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      post_vim_message.assert_has_exact_calls( [
        call( 'Exception: message', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': contains( has_entries( {
            'word': 'insertion_text',
            'abbr': 'menu_text',
            'menu': 'extra_menu_info',
            'info': 'detailed_info\ndoc_string',
            'kind': 'k',
            'dup': 1,
            'empty': 1
          } ) ),
          'completion_start_column': 3
        } )
      )
    
        Args:
        max_workers: The maximum number of threads that can be used to
            execute the given calls.
    '''
    self._max_workers = max_workers
    self._work_queue = queue.Queue()
    self._threads = set()
    self._shutdown = False
    self._shutdown_lock = threading.Lock()
    
                if work_item.future.set_running_or_notify_cancel():
                call_queue.put(_CallItem(work_id,
                                         work_item.fn,
                                         work_item.args,
                                         work_item.kwargs),
                               block=True)
            else:
                del pending_work_items[work_id]
                continue
    
    # If true, sectionauthor and moduleauthor directives will be shown in the
# output. They are ignored by default.
#show_authors = False
    
        return getattr(command_class, command)
    
            result = getattr(self.obj, call_name)(*args, **kwargs)
        self.log.info('%s %s -> %s',
                      self.obj_name,
                      call_name,
                      format_return(result, self.max_lines))
        return result

    
        >>> timeparse('1m24s')
    84
    >>> timeparse('1.2 minutes')
    72
    >>> timeparse('1.2 seconds')
    1.2
    '''
    match = re.match(r'\s*' + TIMEFORMAT + r'\s*$', sval, re.I)
    if not match or not match.group(0).strip():
        return
    
            with pytest.raises(ConfigurationError):
            net.ensure()
    
    
def crash(*args, **kwargs):
    raise Crash()

    
        def test_sort_service_dicts_2(self):
        services = [
            {
                'links': ['redis', 'postgres'],
                'name': 'web'
            },
            {
                'name': 'postgres',
                'links': ['redis']
            },
            {
                'name': 'redis'
            }
        ]
    
    
def test_invalid_with_space():
    assert timeparse.timeparse('5h 34m 56s') is None
    
        def test_remove_external_volume(self, mock_client):
        vol = volume.Volume(mock_client, 'foo', 'project', external=True)
        vol.remove()
        assert not mock_client.remove_volume.called
