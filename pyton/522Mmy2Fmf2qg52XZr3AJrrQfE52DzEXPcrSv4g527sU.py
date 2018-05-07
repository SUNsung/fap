
        
        import reader
    
      def test_parsing_9x9(self):
    self.assertEqual(coords.from_sgf('aa'), (0, 0))
    self.assertEqual(coords.from_sgf('ac'), (2, 0))
    self.assertEqual(coords.from_sgf('ca'), (0, 2))
    self.assertEqual(coords.from_sgf(''), None)
    self.assertEqual(coords.to_sgf(None), '')
    self.assertEqual('aa', coords.to_sgf(coords.from_sgf('aa')))
    self.assertEqual('sa', coords.to_sgf(coords.from_sgf('sa')))
    self.assertEqual((1, 17), coords.from_sgf(coords.to_sgf((1, 17))))
    self.assertEqual(coords.from_kgs(utils_test.BOARD_SIZE, 'A1'), (8, 0))
    self.assertEqual(coords.from_kgs(utils_test.BOARD_SIZE, 'A9'), (0, 0))
    self.assertEqual(coords.from_kgs(utils_test.BOARD_SIZE, 'C2'), (7, 2))
    self.assertEqual(coords.from_kgs(utils_test.BOARD_SIZE, 'J2'), (7, 8))
    self.assertEqual(coords.from_pygtp(utils_test.BOARD_SIZE, (1, 1)), (8, 0))
    self.assertEqual(coords.from_pygtp(utils_test.BOARD_SIZE, (1, 9)), (0, 0))
    self.assertEqual(coords.from_pygtp(utils_test.BOARD_SIZE, (3, 2)), (7, 2))
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (8, 0)), (1, 1))
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (0, 0)), (1, 9))
    self.assertEqual(coords.to_pygtp(utils_test.BOARD_SIZE, (7, 2)), (3, 2))
    
      def test_train(self):
    with tempfile.TemporaryDirectory() as working_dir, \
        tempfile.NamedTemporaryFile() as tf_record:
      preprocessing.make_dataset_from_sgf(
          utils_test.BOARD_SIZE, 'example_game.sgf', tf_record.name)
      dualnet.train(
          working_dir, [tf_record.name], 1, model_params.DummyMiniGoParams())
    
      Yields:
    The go.PositionWithContext instances.
  '''
  collection = sgf.parse(sgf_contents)
  game = collection.children[0]
  props = game.root.properties
  assert int(sgf_prop(props.get('GM', ['1']))) == 1, 'Not a Go SGF!'
    
      def test_make_sgf(self):
    all_pwcs = list(replay_sgf(utils_test.BOARD_SIZE, NO_HANDICAP_SGF))
    second_last_position, last_move, _ = all_pwcs[-1]
    last_position = second_last_position.play_move(last_move)
    
        # Compute logits (1 per class).
    logits = tf.layers.dense(net, params['n_classes'], activation=None)
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
    #----------------------------------------------------------------------
def sina_xml_to_url_list(xml_data):
    '''str->list
    Convert XML to URL List.
    From Biligrab.
    '''
    rawurl = []
    dom = parseString(xml_data)
    for node in dom.getElementsByTagName('durl'):
        url = node.getElementsByTagName('url')[0]
        rawurl.append(url.childNodes[0].data)
    return rawurl
    
    from ..common import *
    
    from ..common import *
    
    site = MusicPlayOn()
download = site.download_by_url
# TBD: implement download_playlist

    
    from ..common import *
from ..extractor import VideoExtractor