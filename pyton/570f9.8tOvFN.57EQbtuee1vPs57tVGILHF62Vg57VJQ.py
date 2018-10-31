
        
            Returns:
      The test predictions along with their scores.
    '''
    test_pred = [0] * len(inputs)
    
    def plot_time_series(vals_bxtxn, bidx=None, n_to_plot=np.inf, scale=1.0,
                     color='r', title=None):
    
    # Pull out some commonly used parameters.
# These are user parameters (configuration)
rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
S = FLAGS.S
input_magnitude = FLAGS.input_magnitude
nreplications = FLAGS.nreplications
E = nreplications * C         # total number of trials
# S is the number of measurements in each datasets, w/ each
# dataset having a different set of observations.
ndatasets = N/S                 # ok if rounded down
train_percentage = FLAGS.train_percentage
ntime_steps = int(T / FLAGS.dt)
# End of user parameters
    
      if do_bias:
    return tf.matmul(x, W) + b
  else:
    return tf.matmul(x, W)
    
      sess, t = _LoadModel(FLAGS.pbtxt, FLAGS.ckpt)
    
    EOS_INDEX = 88892
    
      word_to_id = build_vocab(train_path)
  train_data = _file_to_word_ids(train_path, word_to_id)
  valid_data = _file_to_word_ids(valid_path, word_to_id)
  test_data = _file_to_word_ids(test_path, word_to_id)
  vocabulary = len(word_to_id)
  return train_data, valid_data, test_data, vocabulary
    
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
    
            headers = dict(self._orig.headers)
        if 'Host' not in self._orig.headers:
            headers['Host'] = url.netloc.split('@')[-1]
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
def long_description():
    with codecs.open('README.rst', encoding='utf8') as f:
        return f.read()
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_POST_with_data_auto_JSON_headers(self, httpbin):
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
        @pytest.mark.parametrize('header, expected_filename', [
        ('attachment; filename=hello-WORLD_123.txt', 'hello-WORLD_123.txt'),
        ('attachment; filename='.hello-WORLD_123.txt'', 'hello-WORLD_123.txt'),
        ('attachment; filename='white space.txt'', 'white space.txt'),
        (r'attachment; filename='\'quotes\'.txt'', ''quotes'.txt'),
        ('attachment; filename=/etc/hosts', 'hosts'),
        ('attachment; filename=', None)
    ])
    def test_Content_Disposition_parsing(self, header, expected_filename):
        assert filename_from_content_disposition(header) == expected_filename
    
    
class TestLineEndings:
    '''
    Test that CRLF is properly used in headers
    and as the headers/body separator.
    
    def _print_commands(settings, inproject):
    _print_header(settings, inproject)
    print('Usage:')
    print('  scrapy <command> [options] [args]\n')
    print('Available commands:')
    cmds = _get_commands_dict(settings, inproject)
    for cmdname, cmdclass in sorted(cmds.items()):
        print('  %-13s %s' % (cmdname, cmdclass.short_desc()))
    if not inproject:
        print()
        print('  [ more ]      More commands available when run from project directory')
    print()
    print('Use 'scrapy <command> -h' to see more info about a command')
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
        def check_parsing_errors(self, lens):
        '''Verify Augeas can parse all of the lens files.
    
    AUGEAS_LENS_DIR = pkg_resources.resource_filename(
    'certbot_apache', 'augeas_lens')
'''Path to the Augeas lens directory'''
    
            self.assertEqual(len(self.parser.filter_args_num(matches, 1)), 3)
        self.assertEqual(len(self.parser.filter_args_num(matches, 2)), 2)
        self.assertEqual(len(self.parser.filter_args_num(matches, 3)), 1)
    
    from certbot_apache import configurator
from certbot_apache import entrypoint
    
    
@app.route('/', methods=['GET', 'POST'])
def upload_image():
    # Check if a valid image file was uploaded
    if request.method == 'POST':
        if 'file' not in request.files:
            return redirect(request.url)
    
        :param known_face_encodings: A list of known face encodings
    :param face_encoding_to_check: A single face encoding to compare against the list
    :param tolerance: How much distance between faces to consider it a match. Lower is more strict. 0.6 is typical best performance.
    :return: A list of True/False values indicating which known_face_encodings match the face encoding to check
    '''
    return list(face_distance(known_face_encodings, face_encoding_to_check) <= tolerance)

    
        for face_location in face_locations:
        print_result(image_to_check, face_location)
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))