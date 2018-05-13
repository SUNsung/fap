
        
            def __init__(self):
        self.people = {}  # key: person_id, value: person
    
        def __init__(self):
        self.head = None
        self.tail = None
    
        try:
        for future in finished:
            yield future
    
    def _python_exit():
    global _shutdown
    _shutdown = True
    items = list(_threads_queues.items())
    for t, q in items:
        q.put(None)
    for t, q in items:
        t.join()
    
    # -- General configuration -----------------------------------------------------
    
            self.assertTrue(f3.cancel())
        self.assertEqual(f3._state, CANCELLED)
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
class CommandTest(unittest.TestCase):
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
    from __future__ import print_function
    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
    if __name__ == '__main__':
    
        def _handle(self, request):
        print('end of chain, no handler for {}'.format(request))
        return True
    
        def rename(self, src, dest):
        print(u'renaming %s to %s' % (src, dest))
        os.rename(src, dest)