
        
        def download_urls_sequential(urls, timeout=60):
    url_to_content = {}
    for url in urls:
        try:
            url_to_content[url] = load_url(url, timeout=timeout)
        except:
            pass
    return url_to_content
    
    # If true, the index is split into individual pages for each letter.
#html_split_index = False
    
        def test_result_with_cancel(self):
        # TODO(brian@sweetapp.com): This test is timing dependant.
        def notification():
            # Wait until the main thread is waiting for the result.
            time.sleep(1)
            f1.cancel()
    
        for test in tests:
      yield test[ 0 ], test[ 1 ], test[ 2 ]

    
    
@YouCompleteMeInstance()
def SendCommandRequest_BuildRange_VisualMarks_test( ycm, *args ):
  current_buffer = VimBuffer( 'buffer',
                              contents = [ 'first line',
                                           'second line' ],
                              visual_start = [ 1, 4 ],
                              visual_end = [ 2, 8 ] )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'GoTo' ], 'python', 'tab', True, 1, 2 )
      send_request.assert_called_once_with(
        [ 'GoTo' ],
        'python',
        'tab',
        {
          'options': {
            'tab_size': 2,
            'insert_spaces': True
          },
          'range': {
            'start': {
              'line_num': 1,
              'column_num': 5
            },
            'end': {
              'line_num': 2,
              'column_num': 9
            }
          }
        }
      )

    
    
def ConvertVimDataToCompletionData( vim_data ):
  # see :h complete-items for a description of the dictionary fields
  completion_data = {}