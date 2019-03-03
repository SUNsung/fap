
        
          labels = tf.squeeze(curr_features['rel_id'], [-1])
  return labels
    
      # Save the path embeddings
  path_vector_filename = os.path.join(
      embeddings_base_path, '%d_path_vectors' % model.lstm_output_dim)
  with open(path_vector_filename, 'w') as f_out:
    np.save(f_out, path_matrix)
    
      # Visualize this in the morning.
  all_data_nxtc = np.zeros([nchannels_all, ntime * nconditions_all])
  for name, dataset in datasets.items():
    cidx_s = channel_idxs[name][0]
    cidx_f = channel_idxs[name][1]
    for cname in conditions_all[name]:
      cidxs = np.argwhere(all_conditions_list == cname)
      if cidxs.shape[0] > 0:
        cidx = cidxs[0][0]
        all_tidxs = np.arange(0, ntime+1) + cidx*ntime
        all_data_nxtc[cidx_s:cidx_f, all_tidxs[0]:all_tidxs[-1]] = \
            avg_data_all[name][cname].T
    
      Returns:
    In the equation, y = x W + b, returns the pair (W, b).
  '''
    
      def encode_chars(self, sentence):
    chars_ids = [self.word_to_char_ids(cur_word)
                 for cur_word in sentence.split()]
    return np.vstack([self.bos_chars] + chars_ids + [self.eos_chars])
    
      for batch in range(num_batches):
    x = np.zeros([batch_size, num_steps], dtype=np.int32)
    y = np.zeros([batch_size, num_steps], dtype=np.int32)
    w = np.zeros([batch_size, num_steps], dtype=np.float)
    
    
def wasserstein_discriminator_loss(real_values, fake_values):
  '''Wasserstein discriminator loss.
    
      And the policy for Generator G is the log-probability of taking action x2
  given the past context.
    
    
class HTTPieHTTPAdapter(HTTPAdapter):
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
    
def get_stream_type(env, args):
    '''Pick the right stream type based on `env` and `args`.
    Wrap it in a partial with the type-specific args so that
    we don't need to think what stream we are dealing with.
    
        def get_auth(self, username=None, password=None):
        '''
        If `auth_parse` is set to `True`, then `username`
        and `password` contain the parsed credentials.
    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
        def test_POST_no_data_no_auto_headers(self, httpbin):
        # JSON headers shouldn't be automatically set for POST with no data.
        r = http('POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Accept': '*/*'' in r
        assert ''Content-Type': 'application/json' not in r
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def run(self):
        while not self._should_stop.is_set():
            if self.status.has_finished:
                self.sum_up()
                break
    
                    _filename = newfilename
    
    
root = Root()
factory = Site(root)
reactor.listenTCP(8880, factory)
reactor.run()

    
            if opts.loglevel:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_LEVEL', opts.loglevel, priority='cmdline')
    
                        if not cb:
                        logger.error('Cannot find a rule that matches %(url)r in spider: %(spider)s',
                                 {'url': response.url, 'spider': spider.name})
                        return
                else:
                    cb = 'parse'
    
    
class ReturnsContract(Contract):
    ''' Contract to check the output of a callback
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]
    
    # 你需要一个2代以上的树莓派，并在树莓派上安装face_recognition，并连接上picamera摄像头
# 并确保picamera这个模块已经安装（树莓派一般会内置安装）
# 你可以参考这个教程配制你的树莓派：
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65