
        
            def test_youtube(self):
        self._assert_restricted('07FYdnEawAQ', '07FYdnEawAQ.mp4', 10)
    
        def test_tumblr(self):
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430/orphan-black-dvd-extra-behind-the-scenes', ['Tumblr'])
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430', ['Tumblr'])
    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
    
import errno
import io
import json
import re
import subprocess
    
            webpage = self._download_webpage(url, video_id)
        key = self._search_regex(
            r'src=['\']https?://[^/]+/embed/([A-Za-z0-9_-]+)', webpage, 'key')
    
    
class AudiomackIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?audiomack\.com/song/(?P<id>[\w/-]+)'
    IE_NAME = 'audiomack'
    _TESTS = [
        # hosted on audiomack
        {
            'url': 'http://www.audiomack.com/song/roosh-williams/extraordinary',
            'info_dict':
            {
                'id': '310086',
                'ext': 'mp3',
                'uploader': 'Roosh Williams',
                'title': 'Extraordinary'
            }
        },
        # audiomack wrapper around soundcloud song
        {
            'add_ie': ['Soundcloud'],
            'url': 'http://www.audiomack.com/song/hip-hop-daily/black-mamba-freestyle',
            'info_dict': {
                'id': '258901379',
                'ext': 'mp3',
                'description': 'mamba day freestyle for the legend Kobe Bryant ',
                'title': 'Black Mamba Freestyle [Prod. By Danny Wolf]',
                'uploader': 'ILOVEMAKONNEN',
                'upload_date': '20160414',
            }
        },
    ]
    
            webpage = self._download_webpage(url, display_id)
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    import os
import re
import sys
from datetime import date, datetime
from subprocess import PIPE, Popen
    
    
def test_appcontext_signals():
    app = flask.Flask(__name__)
    recorded = []
    
        if i < len(seq) - 1:
      # Encoder
      ts.set_token(seq[i].token)
    elif i == len(seq) - 1:
      # Transition step
      ts.set_token(seq[i].token)
      ts.set_label(seq[0].token)
      ts.set_weight(1.0)
    else:
      # Decoder
      ts.set_token(seq[i % len(seq)].token)
      ts.set_label(seq[(i + 1) % len(seq)].token)
      ts.set_weight(1.0)
    
    flags = tf.app.flags
    
      def testPtbRawData(self):
    tmpdir = tf.test.get_temp_dir()
    for suffix in 'train', 'valid', 'test':
      filename = os.path.join(tmpdir, 'ptb.%s.txt' % suffix)
      with tf.gfile.GFile(filename, 'w') as fh:
        fh.write(self._string_data)
    # Smoke test
    output = reader.ptb_raw_data(tmpdir)
    self.assertEqual(len(output), 4)
    
      def add_stone(self, color, c):
    assert self.group_index[c] == MISSING_GROUP_ID
    captured_stones = set()
    opponent_neighboring_group_ids = set()
    friendly_neighboring_group_ids = set()
    empty_neighbors = set()
    
    
def parse_message(message):
  message = gtp.pre_engine(message).strip()
  first, rest = (message.split(' ', 1) + [None])[:2]
  if first.isdigit():
    message_id = int(first)
    if rest is not None:
      command, arguments = (rest.split(' ', 1) + [None])[:2]
    else:
      command, arguments = None, None
  else:
    message_id = None
    command, arguments = first, rest
    
      def test_add_child_idempotency(self):
    root = MCTSNode(utils_test.BOARD_SIZE, go.Position(utils_test.BOARD_SIZE))
    child = root.maybe_add_child(17)
    current_children = copy.copy(root.children)
    child2 = root.maybe_add_child(17)
    self.assertEqual(child, child2)
    self.assertEqual(current_children, root.children)
    
          for _ in batches:
        preprocessing.write_tf_examples(
            rewritten_file.name, all_batches, serialize=False)
    
      # The strategy is to spend the maximum time possible using seconds_per_move,
  # and then switch to an exponentially decaying time usage, calibrated so that
  # we have enough time for an infinite number of moves.
    
    # Fetch and store Training and Test dataset files
PATH_DATASET = PATH + os.sep + 'dataset'
FILE_TRAIN = PATH_DATASET + os.sep + 'iris_training.csv'
FILE_TEST = PATH_DATASET + os.sep + 'iris_test.csv'
URL_TRAIN = 'http://download.tensorflow.org/data/iris_training.csv'
URL_TEST = 'http://download.tensorflow.org/data/iris_test.csv'
    
    # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    