
        
        
def test_messages(client, app):
    '''Test that messages work'''
    login(client, app.config['USERNAME'],
          app.config['PASSWORD'])
    rv = client.post('/add', data=dict(
        title='<Hello>',
        text='<strong>HTML</strong> allowed here'
    ), follow_redirects=True)
    assert b'No entries here so far' not in rv.data
    assert b'&lt;Hello&gt;' in rv.data
    assert b'<strong>HTML</strong> allowed here' in rv.data

    
        A microblogging application written with Flask and sqlite3.
    
    
@pytest.fixture()
def chdir(tmpdir):
    '''Change to pytest-provided temporary directory'''
    tmpdir.chdir()

    
        def run(self):
        if not self.future.set_running_or_notify_cancel():
            return
    
    def _add_call_item_to_queue(pending_work_items,
                            work_ids,
                            call_queue):
    '''Fills call_queue with _WorkItems from pending_work_items.
    
      current_filepath = vimsupport.GetBufferFilepath( current_buffer )
  line, column = vimsupport.CurrentLineAndColumn()
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
          with HandleServerException( display = False ):
        BaseRequest.GetDataFromHandler( 'healthy' )

    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def restore():
        obj.__dict__.clear()
        obj.__dict__.update(state)