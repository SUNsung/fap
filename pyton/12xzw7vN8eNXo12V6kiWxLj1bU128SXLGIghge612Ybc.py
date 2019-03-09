
        
            def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
      Args:
    values_t_bxn: The length T list of BxN numpy tensors.
    
          scorings.append(dict(
          correctness=correctness,
          sentence=sentence,
          joint_prob=joint_prob,
          word_probs=word_probs))
    scoring_mode = 'full' if self.test_data_name == 'pdp60' else 'partial'
    return utils.compare_substitutions(
        self.question_ids, scorings, scoring_mode)
    
          for n in xrange(FLAGS.number_epochs):
        print('Epoch number: %d' % n)
        # print('Percent done: %.2f' % float(n) / float(FLAGS.number_epochs))
        iterator = get_iterator(data)
        for x, y, _ in iterator:
          if FLAGS.eval_language_model:
            is_present_rate = 0.
          else:
            is_present_rate = FLAGS.is_present_rate
          tf.logging.info(
              'Evaluating on is_present_rate=%.3f.' % is_present_rate)
    
      ## Load Generator weights from MaskGAN checkpoint.
  if FLAGS.maskgan_ckpt:
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    init_saver = tf.train.Saver(var_list=gen_vars)
    init_savers['init_saver'] = init_saver
    
    try:
    input = raw_input
except NameError:
    pass
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    
if __name__ == '__main__':
    unittest.main()

    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
    
try:
    _DEV_NULL = subprocess.DEVNULL
except AttributeError:
    _DEV_NULL = open(os.devnull, 'wb')
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
def test_unicode_json_item_verbose(httpbin):
    r = http('--verbose', '--json',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    
def _get_token(host, username, password):
    '''Get authentication token for the given host+username+password.'''
    url = 'http://{}/cgi-bin/luci/api/xqsystem/login'.format(host)
    data = {'username': username, 'password': password}
    try:
        res = requests.post(url, data=data, timeout=5)
    except requests.exceptions.Timeout:
        _LOGGER.exception('Connection to the router timed out')
        return
    if res.status_code == 200:
        try:
            result = res.json()
        except ValueError:
            # If JSON decoder could not parse the response
            _LOGGER.exception('Failed to parse response from mi router')
            return
        try:
            return result['token']
        except KeyError:
            error_message = 'Xiaomi token cannot be refreshed, response from '\
                            + 'url: [%s] \nwith parameter: [%s] \nwas: [%s]'
            _LOGGER.exception(error_message, url, data, result)
            return
    else:
        _LOGGER.error('Invalid response: [%s] at url: [%s] with data [%s]',
                      res, url, data)
