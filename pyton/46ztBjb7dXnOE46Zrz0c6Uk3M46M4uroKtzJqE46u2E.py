
        
            :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    frame = frame[:, :, ::-1]
    
    
    # Display the results
    for (top, right, bottom, left), name in zip(face_locations, face_names):
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    
if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)

    
        # Start to show video
    last_num = 1
    fps_list = []
    tmp_time = time.time()
    while not Global.is_exit:
        while Global.write_num != last_num:
            last_num = int(Global.write_num)
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]
    
        def test_timestamp_in_columns(self):
        df = pd.DataFrame(
            [[1, 2]], columns=[pd.Timestamp('2016'), pd.Timedelta(10, unit='s')]
        )
        result = df.to_json(orient='table')
        js = json.loads(result)
        assert js['schema']['fields'][1]['name'] == 1451606400000
        assert js['schema']['fields'][2]['name'] == 10000
    
    
def test_readjson_chunks_from_file():
    with ensure_clean('test.json') as path:
        df = pd.DataFrame({'A': [1, 2, 3], 'B': [4, 5, 6]})
        df.to_json(path, lines=True, orient='records')
        chunked = pd.concat(pd.read_json(path, lines=True, chunksize=1))
        unchunked = pd.read_json(path, lines=True)
        assert_frame_equal(unchunked, chunked)
    
        def test_to_csv_path_is_none(self):
        # GH 8215
        # Make sure we return string for consistency with
        # Series.to_csv()
        csv_str = self.frame.to_csv(path_or_buf=None)
        assert isinstance(csv_str, str)
        recons = pd.read_csv(StringIO(csv_str), index_col=0)
        assert_frame_equal(self.frame, recons)
    
        def test_get_item(self, closed):
        i = IntervalIndex.from_arrays((0, 1, np.nan), (1, 2, np.nan), closed=closed)
        assert i[0] == Interval(0.0, 1.0, closed=closed)
        assert i[1] == Interval(1.0, 2.0, closed=closed)
        assert isna(i[2])
    
                # can't roundtrip intervalindex via read_csv so check string repr (GH 23595)
            expected = s.copy()
            expected.index = expected.index.astype(str)
    
    
@YouCompleteMeInstance( { 'g:ycm_cache_omnifunc': 1,
                          'g:ycm_semantic_triggers': TRIGGERS } )
def OmniCompleter_GetCompletions_Cache_ListFilter_test( ycm ):
  def Omnifunc( findstart, base ):
    if findstart:
      return 5
    return [ 'a', 'b', 'cdef' ]
    
      return qf_item

    
        with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'ft=ycm:ident', 'GoTo' ], '', False, 1, 1 )
      send_request.assert_called_once_with( *expected_args )
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    DoneAndNotDoneFutures = namedtuple(
        'DoneAndNotDoneFutures', 'done not_done')
def wait(fs, timeout=None, return_when=ALL_COMPLETED):
    '''Wait for the futures in the given sequence to complete.
    
    
def do_run():
    # Only run the tests if the $TEST_ERROR_INJECTION environment variable is set. This is to reduce the
    # testing time, because the injected errors result in retries and timeouts that slow down the tests overall.
    return os.environ.get('TEST_ERROR_INJECTION') in ('true', '1')

    
        def _list_stack_names(self):
        client = aws_stack.connect_to_service('cloudformation')
        stack_names = [s['StackName'] for s in client.list_stacks()['StackSummaries']]
        return stack_names