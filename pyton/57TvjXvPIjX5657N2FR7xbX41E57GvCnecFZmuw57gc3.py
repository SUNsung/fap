
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
        def test_socks5(self):
        self.assertTrue(isinstance(self._get_ip('socks5'), compat_str))
    
            title = self._html_search_regex(
            r'<div[^>]+style='float:left'[^>]*>\s*<h2>(.+?)</h2>', webpage, 'title')
        description = self._html_search_regex(
            r'>Description:</span>(.+?)</div>', webpage, 'description', default=None)
    
            info_dict = self._extract_from_id(mvp_id, webpage)
        info_dict['display_id'] = display_id
    
            return {
            '_type': 'url_transparent',
            'display_id': display_id,
            'url': 'kaltura:%s:%s' % (partner_id, entry_id),
            'ie_key': 'Kaltura',
            'title': title
        }

    
            title = metadata['Title']
        description = metadata.get('Description')
        duration = float_or_none(metadata.get('Duration'))
        timestamp = parse_iso8601(metadata.get('DateCreated'))
    
    https://github.com/Homebrew/homebrew-core/blob/master/Formula/httpie.rb
    
    from httpie import ExitStatus
from httpie.core import main
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        Suggestions and bug reports are greatly appreciated:
    
    from httpie import __version__
from httpie.compat import is_windows
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
        model.train_on_batch(x_train[:32], y_train[:32],
                         sample_weight=sample_weight[:32])
    model.test_on_batch(x_train[:32], y_train[:32],
                        sample_weight=sample_weight[:32])
    
        if K.backend() == 'tensorflow' or K.backend() == 'cntk':
        inputs = Input(shape=(10, 20, 20, 1))
    else:
        inputs = Input(shape=(10, 1, 20, 20))
    td_conv = TimeDistributed(Conv2D(15, (5, 5)))(inputs)
    bi_convlstm2d = Bidirectional(ConvLSTM2D(10, (3, 3)), merge_mode='concat')(td_conv)
    model = Model(inputs=inputs, outputs=bi_convlstm2d)
    
                    assert_allclose(np_output, expected_out)
    
            # Sample a token
        sampled_token_index = np.argmax(output_tokens[0, -1, :])
        sampled_char = reverse_target_char_index[sampled_token_index]
        decoded_sentence += sampled_char
    
    path = get_file('nietzsche.txt', origin='https://s3.amazonaws.com/text-datasets/nietzsche.txt')
with io.open(path, encoding='utf-8') as f:
    text = f.read().lower()
print('corpus length:', len(text))
    
        def __init__(self, db):
        self.db = db
        pass
    
    
class Node(object):
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
            elif isinstance(e, MismatchedRangeException):
            msg = 'mismatched character ' \
                  + self.getCharErrorDisplay(e.c) \
                  + ' expecting set ' \
                  + self.getCharErrorDisplay(e.a) \
                  + '..' \
                  + self.getCharErrorDisplay(e.b)
    
    
class MismatchedSetException(RecognitionException):
    '''@brief The next token does not match a set of expected types.'''
    
            result_item = result_queue.get(block=True)
        if result_item is not None:
            work_item = pending_work_items[result_item.work_id]
            del pending_work_items[result_item.work_id]
    
    from ycm.client.debug_info_request import FormatDebugInfoResponse
    
    
def BuildServerConf():
  '''Builds a dictionary mapping YCM Vim user options to values. Option names
  don't have the 'ycm_' prefix.'''
  # We only evaluate the keys of the vim globals and not the whole dictionary
  # to avoid unicode issues.
  # See https://github.com/Valloric/YouCompleteMe/pull/2151 for details.
  keys = vimsupport.GetVimGlobalsKeys()
  server_conf = {}
  for key in keys:
    if not key.startswith( YCM_VAR_PREFIX ):
      continue
    new_key = key[ len( YCM_VAR_PREFIX ): ]
    new_value = vimsupport.VimExpressionToPythonType( 'g:' + key )
    server_conf[ new_key ] = new_value
    
        try:
      eq_( expected_vim_data, vim_data )
    except Exception:
      print( 'Expected:\n'{0}'\nwhen parsing:\n'{1}'\nBut found:\n'{2}''.format(
          expected_vim_data,
          completion_data,
          vim_data ) )
      raise
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
            python -m tornado.testing tornado.test.stack_context_test
    
    
def run_with_stack_context(context, func):
    '''Run a coroutine ``func`` in the given `StackContext`.
    
        @gen_test
    def test_future_interface(self):
        addrinfo = yield self.resolver.resolve('localhost', 80,
                                               socket.AF_UNSPEC)
        self.assertIn((socket.AF_INET, ('127.0.0.1', 80)),
                      addrinfo)