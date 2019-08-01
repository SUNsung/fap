
        
          The evaluation protocol is to rank the test interacted item (truth items)
  among the randomly chosen 999 items that are not interacted by the user.
  The performance of the ranked list is judged by Hit Ratio (HR) and Normalized
  Discounted Cumulative Gain (NDCG).
    
      The classic Hann window is defined as a raised cosine that starts and
  ends on zero, and where every value appears twice, except the middle
  point for an odd-length window.  Matlab calls this a 'symmetric' window
  and np.hanning() returns it.  However, for Fourier analysis, this
  actually represents just over one cycle of a period N-1 cosine, and
  thus is not compactly expressed on a length-N Fourier basis.  Instead,
  it's better to use a raised cosine that ends just before the final
  zero value - i.e. a complete cycle of a period-N cosine.  Matlab
  calls this a 'periodic' window. This routine calculates it.
    
    
class Postprocessor(object):
  '''Post-processes VGGish embeddings.
    
      # Process output directory.
  if tf.gfile.Exists(cmd_args.output_cluster_dir):
    raise RuntimeError(
        'output_cluster_dir = %s already exists. This may indicate that a '
        'previous run already wrote checkpoints in this directory, which would '
        'lead to incorrect training. Please re-run this script by specifying an'
        ' inexisting directory.' % cmd_args.output_cluster_dir)
  else:
    tf.gfile.MakeDirs(cmd_args.output_cluster_dir)
    
    
if __name__ == '__main__':
  parser = argparse.ArgumentParser()
  parser.register('type', 'bool', lambda v: v.lower() == 'true')
  parser.add_argument(
      '--aggregation_config_path',
      type=str,
      default='/tmp/aggregation_config.pbtxt',
      help='''
      Path to AggregationConfig proto text file with configuration to be used
      for extraction.
      ''')
  parser.add_argument(
      '--dataset_file_path',
      type=str,
      default='/tmp/gnd_roxford5k.mat',
      help='''
      Dataset file for Revisited Oxford or Paris dataset, in .mat format.
      ''')
  parser.add_argument(
      '--use_query_images',
      type=lambda x: (str(x).lower() == 'true'),
      default=False,
      help='''
      If True, processes the query images of the dataset. If False, processes
      the database (ie, index) images.
      ''')
  parser.add_argument(
      '--features_dir',
      type=str,
      default='/tmp/features',
      help='''
      Directory where image features are located, all in .delf format.
      ''')
  parser.add_argument(
      '--index_mapping_path',
      type=str,
      default='',
      help='''
      Optional CSV file which maps each .delf file name to the index image ID
      and detected box ID. If regional aggregation is performed, this should be
      set. Otherwise, this is ignored.
      Usually this file is obtained as an output from the
      `extract_index_boxes_and_features.py` script.
      ''')
  parser.add_argument(
      '--output_aggregation_dir',
      type=str,
      default='/tmp/aggregation',
      help='''
      Directory where aggregation output will be written to. Each image's
      features will be written to a file with same name, and extension replaced
      by one of
      ['.vlad', '.asmk', '.asmk_star', '.rvlad', '.rasmk', '.rasmk_star'].
      ''')
  cmd_args, unparsed = parser.parse_known_args()
  app.run(main=main, argv=[sys.argv[0]] + unparsed)

    
    Boxes are saved to <image_name>.boxes files. DELF features are extracted for the
entire image and saved into <image_name>.delf files. In addition, DELF features
are extracted for each high-confidence bounding box in the image, and saved into
files named <image_name>_0.delf, <image_name>_1.delf, etc.
    
      Returns:
    aggregated_descriptors: List containing #images items, each a 1D NumPy
      array.
    visual_words: If using VLAD aggregation, returns an empty list. Otherwise,
      returns a list containing #images items, each a 1D NumPy array.
  '''
  # Compose extension of aggregated descriptors.
  extension = '.'
  if config.use_regional_aggregation:
    extension += 'r'
  if config.aggregation_type == _VLAD:
    extension += _VLAD_EXTENSION_SUFFIX
  elif config.aggregation_type == _ASMK:
    extension += _ASMK_EXTENSION_SUFFIX
  elif config.aggregation_type == _ASMK_STAR:
    extension += _ASMK_STAR_EXTENSION_SUFFIX
  else:
    raise ValueError('Invalid aggregation type: %d' % config.aggregation_type)
    
      @parameterized.named_parameters(
      ('Max-1Min-1', -1, -1, [4, 2, 3], 1.0),
      ('Max2Min-1', 2, -1, [2, 1, 3], 0.5),
      ('Max8Min-1', 8, -1, [4, 2, 3], 1.0),
      ('Max-1Min1', -1, 1, [4, 2, 3], 1.0),
      ('Max-1Min8', -1, 8, [8, 4, 3], 2.0),
      ('Max16Min8', 16, 8, [8, 4, 3], 2.0),
      ('Max2Min2', 2, 2, [2, 1, 3], 0.5),
  )
  def testResizeImageWorks(self, max_image_size, min_image_size, expected_shape,
                           expected_scale_factor):
    # Construct image of size 4x2x3.
    image = np.array([[[0, 0, 0], [1, 1, 1]], [[2, 2, 2], [3, 3, 3]],
                      [[4, 4, 4], [5, 5, 5]], [[6, 6, 6], [7, 7, 7]]],
                     dtype='uint8')
    
    
if __name__ == '__main__':
  parser = argparse.ArgumentParser()
  parser.register('type', 'bool', lambda v: v.lower() == 'true')
  parser.add_argument(
      '--predictions_path',
      type=str,
      default='/tmp/predictions.csv',
      help='''
      Path to CSV predictions file, formatted with columns 'id,landmarks' (the
      file should include a header).
      ''')
  parser.add_argument(
      '--solution_path',
      type=str,
      default='/tmp/solution.csv',
      help='''
      Path to CSV solution file, formatted with columns 'id,landmarks,Usage'
      (the file should include a header).
      ''')
  cmd_args, unparsed = parser.parse_known_args()
  app.run(main=main, argv=[sys.argv[0]] + unparsed)

    
        # Loop over predicted images, keeping track of those which were already
    # used (duplicates are skipped).
    already_predicted = set()
    num_correct = 0
    for i in range(max_predictions):
      if i < len(prediction):
        if prediction[i] not in already_predicted:
          if prediction[i] in retrieval_solution[key]:
            num_correct += 1
          already_predicted.add(prediction[i])
      precisions[count_test_images, i] = num_correct / (i + 1)
    count_test_images += 1
    
                def url_repl(proto, suffix):
                return re.sub(
                    r'(?:hls|dash|hss)([.-])', proto + r'\1', re.sub(
                        r'\.ism/(?:[^.]*\.(?:m3u8|mpd)|[Mm]anifest)',
                        '.ism/' + suffix, manifest_url))
    
    
class SouthParkNlIE(SouthParkIE):
    IE_NAME = 'southpark.nl'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.nl/(?:clips|(?:full-)?episodes|collections)/(?P<id>.+?)(\?|#|$))'
    _FEED_URL = 'http://www.southpark.nl/feeds/video-player/mrss/'
    
        def _extract_video_info(self, content_id, site='cbs', mpx_acc=2198311517):
        items_data = self._download_xml(
            'http://can.cbs.com/thunder/player/videoPlayerService.php',
            content_id, query={'partner': site, 'contentId': content_id})
        video_data = xpath_element(items_data, './/item')
        title = xpath_text(video_data, 'videoTitle', 'title', True)
        tp_path = 'dJ5BDC/media/guid/%d/%s' % (mpx_acc, content_id)
        tp_release_url = 'http://link.theplatform.com/s/' + tp_path
    
    EXTRA_ARGS = {
    'recode-video': ['--arguments', 'mp4 flv ogg webm mkv', '--exclusive'],
    }
    
    secret_msg = b'Secret message goes here'
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
            '''
        try:
            return super(AuthCredentialsArgType, self).__call__(string)
        except ArgumentTypeError:
            # No password provided, will prompt for it later.
            return self.key_value_class(
                key=string,
                value=None,
                sep=SEP_CREDENTIALS,
                orig=string
            )
    
    
class HTTPResponse(HTTPMessage):
    '''A :class:`requests.models.Response` wrapper.'''
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_POST_explicit_JSON_auto_JSON_accept(self, httpbin):
        r = http('--json', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        # Make sure Content-Type gets set even with no data.
        # https://github.com/jakubroztocil/httpie/issues/137
        assert 'application/json' in r.json['headers']['Content-Type']
    
    from httpie import ExitStatus
from httpie.core import main
    
        @abc.abstractproperty
    def is_eager_to_contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
        def check_range(self, request):
        start, end = self.get_interval_from_db()
        if start <= request < end:
            print('request {} handled in handler 2'.format(request))
            return True
    
    This pattern aims to decouple the senders of a request from its
receivers by allowing request to move through chained
receivers until it is handled.
    
    
class AmState(State):
    def __init__(self, radio):
        self.radio = radio
        self.stations = ['1250', '1380', '1510']
        self.pos = 0
        self.name = 'AM'
    
    *TL;DR
Defines the skeleton of a base algorithm, deferring definition of exact
steps to subclasses.
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects
    
        def do_something(self, something):
        return 'Doing %s' % something
    
    ### OUTPUT ###
# PRODUCT LIST:
# (Fetching from Data Store)
# cheese
# eggs
# milk
#
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Cheese, Price: 2.00, Quantity: 10
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Eggs, Price: 0.20, Quantity: 100
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Milk, Price: 1.50, Quantity: 10
# (Fetching from Data Store)
# That product 'arepas' does not exist in the records

    
    *Where is the pattern used practically?
The Grok framework uses adapters to make objects work with a
particular API without modifying the objects themselves:
http://grok.zope.org/doc/current/grok_overview.html#adapters
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
            self.s_int = pd.Series(np.random.randint(0, ncats, size=N))
        self.s_int_cat = pd.Series(self.s_int, dtype='category')
        with warnings.catch_warnings(record=True):
            int_cat_type = pd.CategoricalDtype(set(self.s_int), ordered=True)
            self.s_int_cat_ordered = self.s_int.astype(int_cat_type)
    
            # axis
        for axis in [0, None, 'index']:
            tm.assert_series_equal(left.eq(right, axis=axis), left == right)
            tm.assert_series_equal(left.ne(right, axis=axis), left != right)
            tm.assert_series_equal(left.le(right, axis=axis), left < right)
            tm.assert_series_equal(left.lt(right, axis=axis), left <= right)
            tm.assert_series_equal(left.gt(right, axis=axis), left > right)
            tm.assert_series_equal(left.ge(right, axis=axis), left >= right)