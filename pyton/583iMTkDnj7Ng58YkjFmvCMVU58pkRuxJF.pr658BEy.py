
        
            def __init__(self, operators, supervisors, directors):
        self.operators = operators
        self.supervisors = supervisors
        self.directors = directors
        self.queued_calls = deque()
    
        def __init__(self, cards):
        self.cards = cards
    
        def can_fit_in_spot(self, spot):
        return spot.size in (VehicleSize.LARGE, VehicleSize.COMPACT)
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, documentclass
# [howto/manual]).
latex_documents = [
    ('index', 'face_recognition.tex',
     u'Face Recognition Documentation',
     u'Adam Geitgey', 'manual'),
]
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
            file = request.files['file']
    
    frames = []
frame_count = 0
    
    # Show the picture
pil_image.show()

    
    # This is a demo of running face recognition on live video from your webcam. It's a little more complicated than the
# other example, but it includes some basic performance tweaks to make things run a lot faster:
#   1. Process each video frame at 1/4 resolution (though still display it at full resolution)
#   2. Only detect faces in every other frame of video.
    
    # Load an image with an unknown face
unknown_image = face_recognition.load_image_file('two_people.jpg')
    
        def test_on_specialized_type_by_int(self, any_real_dtype):
        # see gh-13936
        dtype = np.dtype(any_real_dtype).type
    
    from pandas.compat import is_platform_windows
import pandas.util._test_decorators as td
    
    
@pytest.mark.parametrize('indexer', [lambda s: s[2000, 3], lambda s: s.loc[2000, 3]])
def test_series_getitem(multiindex_year_month_day_dataframe_random_data, indexer):
    s = multiindex_year_month_day_dataframe_random_data['A']
    expected = s.reindex(s.index[42:65])
    expected.index = expected.index.droplevel(0).droplevel(0)
    
    
def test_loc_getitem_int_raises_exception(frame_random_data_integer_multi_index):
    df = frame_random_data_integer_multi_index
    with pytest.raises(KeyError, match=r'^3$'):
        df.loc[3]
    
            # assert codes NOT in index
        assert 0 not in c
        assert 1 not in c
    
        def test_frame_double_encoded_labels(self):
        df = DataFrame(
            [['a', 'b'], ['c', 'd']],
            index=['index ' 1', 'index / 2'],
            columns=['a \\ b', 'y / z'],
        )
    
            # axis
        for axis in [0, None, 'index']:
            tm.assert_series_equal(left.eq(right, axis=axis), left == right)
            tm.assert_series_equal(left.ne(right, axis=axis), left != right)
            tm.assert_series_equal(left.le(right, axis=axis), left < right)
            tm.assert_series_equal(left.lt(right, axis=axis), left <= right)
            tm.assert_series_equal(left.gt(right, axis=axis), left > right)
            tm.assert_series_equal(left.ge(right, axis=axis), left >= right)
    
        Parameters
    ----------
    obj : object
        The object to hash.
    '''
    if not isinstance(obj, Index):
        a = hash_pandas_object(obj, index=True)
        b = hash_pandas_object(obj, index=False)
    
    
if __name__ == '__main__':
    main()

    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
    
# The fact that json_encode wraps json.dumps is an implementation detail.
# Please see https://github.com/tornadoweb/tornado/pull/706
# before sending a pull request that adds **kwargs to this function.
def json_encode(value: Any) -> str:
    '''JSON-encodes the given Python object.'''
    # JSON permits but does not require forward slashes to be escaped.
    # This is useful when json data is emitted in a <script> tag
    # in HTML, as it prevents </script> tags from prematurely terminating
    # the javascript.  Some json libraries do this escaping by default,
    # although python's standard library does not, so we do it here.
    # http://stackoverflow.com/questions/1580647/json-why-are-forward-slashes-escaped
    return json.dumps(value).replace('</', '<\\/')
    
                    if self._mode == 'page':
                    self.page.append(line)
                elif self._mode == 'mask':
                    self.mask.append(line)
                elif self._mode == 'code':
                    self.mask.append(line)
    
    class UnknownPages(InternalPages):
    
        def _get_list(self, prefix=None):
        return ['latencies']
    
    Configuration parameters: