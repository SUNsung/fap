
        
        
class Rank(Enum):
    
    
class HashTable(object):
    
        def create_signature(self):
        # Create signature based on url and contents
        pass
    
      Returns:
    The revised list where some of the words are <UNK>ed.
  '''
  # Create the mask: (-1) to drop, 1 to keep
  prob = tf.random_uniform(tf.shape(words), 0, 1)
  condition = tf.less(prob, (1 - input_keep_prob))
  mask = tf.where(condition,
                  tf.negative(tf.ones_like(words)), tf.ones_like(words))
    
        def makelambda(v):          # Used with tf.case
      return lambda: v
    
    with tf.Session() as sess:
  # restore the latest model ckpt
  if FLAGS.checkpoint_path == 'SAMPLE_CHECKPOINT':
    dir_path = os.path.dirname(os.path.realpath(__file__))
    model_checkpoint_path = os.path.join(dir_path, 'trained_itb/model-65000')
  else:
    model_checkpoint_path = FLAGS.checkpoint_path
  try:
    saver.restore(sess, model_checkpoint_path)
    print ('Model restored from', model_checkpoint_path)
  except:
    assert False, ('No checkpoints to restore from, is the path %s correct?'
                   %model_checkpoint_path)
    
        Args:
      filepattern: Dataset file pattern.
      vocab: Vocabulary.
    '''
    self._vocab = vocab
    self._all_shards = tf.gfile.Glob(filepattern)
    tf.logging.info('Found %d shards at %s', len(self._all_shards), filepattern)
    
      def evaluate(self):
    '''Evaluate the current ensemble.'''
    # Attach word probabilities and correctness label to each substitution
    ensembled_probs = sum(self.all_probs) / len(self.all_probs)
    scorings = []
    for i, sentence in enumerate(self.sentences):
      correctness = self.labels[i]
      word_probs = ensembled_probs[i, :len(sentence)]
      joint_prob = np.prod(word_probs, dtype=np.float64)
    
        for i in range(batch_size):
      data_index = batch * batch_size + i
      example = raw_data[data_index]
    
        baselines = []
    for r in rewards_list:
      baselines.append(ema.average(r))
    
    import tensorflow as tf
    
        Raises:
      ValueError: if cell_input is not None.
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
        infile, outfile = args
    
    import io
import optparse
import os
import sys
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
            def print_skipping(reason):
            print('Skipping %s: %s' % (test_case['name'], reason))
        if not ie.working():
            print_skipping('IE marked as not _WORKING')
            return
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
        @property
    def encoding(self):
        return 'utf8'
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
    
tests_require = [
    # Pytest needs to come last.
    # https://bitbucket.org/pypa/setuptools/issue/196/
    'pytest-httpbin',
    'pytest',
    'mock',
]
    
        class Plugin(AuthPlugin):
        auth_type = 'test-parse-false'
        auth_parse = False
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_POST_form_auto_Content_Type(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/x-www-form-urlencoded' in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
            if response.status not in self.config.check_ip_accept_status:
            return False
    
            raise NotImplementedError
    
    
    def getCharPositionInLine(self):
        '''@brief Get the column of the tokens first character,
        
        Columns are numbered 0..n-1
        
        Using setter/getter methods is deprecated. Use o.charPositionInLine instead.'''
    
    HSTS_ARGS = ['\'max-age=31536000\'', ' ', 'always']
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        def test_include_fullpath_trailing_slash(self):
        self.verify_fnmatch(self.config_path + '//')
    
            self.vhosts.append(
            obj.VirtualHost(
                'path', 'aug_path', set([obj.Addr.fromstring('*:80')]),
                False, False,
                'wildcard.com', set(['*.wildcard.com'])))
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
    from acme.magic_typing import Set  # pylint: disable=unused-import, no-name-in-module
from certbot.plugins import common
from certbot.errors import PluginError, MissingCommandlineFlag
    
        def test_raise_twice(self):
        def f(p):
            try: 1/0
            except: 1/0
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
        If the resource does not already exist on its own on the file system,
    a temporary file will be created. If the file was created, the file
    will be deleted upon exiting the context manager (no exception is
    raised if the file was deleted prior to the context manager
    exiting).
    '''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        try:
            yield Path(reader.resource_path(resource))
            return
        except FileNotFoundError:
            pass
    else:
        _check_location(package)
    # Fall-through for both the lack of resource_path() *and* if
    # resource_path() raises FileNotFoundError.
    package_directory = Path(package.__spec__.origin).parent
    file_path = package_directory / resource
    if file_path.exists():
        yield file_path
    else:
        with open_binary(package, resource) as fp:
            data = fp.read()
        # Not using tempfile.NamedTemporaryFile as it leads to deeper 'try'
        # blocks due to the need to close the temporary file to work on
        # Windows properly.
        fd, raw_path = tempfile.mkstemp()
        try:
            os.write(fd, data)
            os.close(fd)
            yield Path(raw_path)
        finally:
            try:
                os.remove(raw_path)
            except FileNotFoundError:
                pass
    
        def test_closed_stdout(self):
        # Issue #13444: if stdout has been explicitly closed, we should
        # not attempt to flush it at shutdown.
        code = 'import sys; sys.stdout.close()'
        rc, out, err = assert_python_ok('-c', code)
        self.assertEqual(b'', err)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
    import os
import email
import mimetypes
    
        # Get and print results
    print('Unordered results:')
    for i in range(len(TASKS1)):
        print('\t', done_queue.get())
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
                if stream_id not in self.streams:
                log.e('[Error] Invalid video format.')
                log.e('Run \'-i\' command with no specific video format to view all available formats.')
                exit(2)
        else:
            # Extract stream with the best quality
            stream_id = self.streams_sorted[0]['id']
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
        video_url = match1(html, r'filepath=(.+)&sec')
    video_url = video_url.replace('&mid', '?mid')
    
            if 'title' not in kwargs:
            url = 'http://pv.funshion.com/v5/video/profile/?id={}&cl=mweb&uc=111'.format(self.vid)
            meta = json.loads(get_content(url))
            self.title = meta['name']
        else:
            self.title = kwargs['title']
    
                if title is None:
                response = request.urlopen(request.Request(real_url))
                if response.headers['content-disposition']:
                    filename = parse.unquote(r1(r'filename='?(.+)'?', response.headers['content-disposition'])).split('.')
                    title = ''.join(filename[:-1])
        except: pass