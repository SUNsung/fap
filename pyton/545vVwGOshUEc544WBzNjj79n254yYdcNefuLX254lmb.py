
        
            if w == 0:
      return data_bxtxd
    
    
def spikify_data(data_e, rng, dt=1.0, max_firing_rate=100):
  ''' Apply spikes to a continuous dataset whose values are between 0.0 and 1.0
  Args:
    data_e: nexamples length list of NxT trials
    dt: how often the data are sampled
    max_firing_rate: the firing rate that is associated with a value of 1.0
  Returns:
    spikified_e: a list of length b of the data represented as spikes,
    sampled from the underlying poisson process.
    '''
    
        self._max_word_length = max_word_length
    chars_set = set()
    
    
def imdb_raw_data(data_path=None):
  '''Load IMDB raw data from data directory 'data_path'.
  Reads IMDB tf record files containing integer ids,
  and performs mini-batching of the inputs.
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data)
    where each of the data objects can be passed to IMDBIterator.
  '''
    
    '''Model optimization.'''
    
          elif FLAGS.generator_model == 'seq2seq_nas':
        # Encoder.
        gen_encoder_variable_maps = variable_mapping.gen_encoder_seq2seq_nas(
            hparams)
        gen_encoder_init_saver = tf.train.Saver(
            var_list=gen_encoder_variable_maps)
        # Decoder.
        gen_decoder_variable_maps = variable_mapping.gen_decoder_seq2seq_nas(
            hparams)
        gen_decoder_init_saver = tf.train.Saver(
            var_list=gen_decoder_variable_maps)
        init_savers['gen_encoder_init_saver'] = gen_encoder_init_saver
        init_savers['gen_decoder_init_saver'] = gen_decoder_init_saver
    
    
def construct_ngrams_dict(ngrams_list):
  '''Construct a ngram dictionary which maps an ngram tuple to the number
  of times it appears in the text.'''
  counts = {}
    
      Returns:
    variable_mapping:  Dictionary with Key: ckpt_name, Value: model_varself.
  '''
  assert FLAGS.discriminator_model == 'seq2seq_vd'
  assert hparams.dis_num_layers == 2
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
        out = bug_text + dev_text
    
        outfile, = args
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    from __future__ import unicode_literals
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
            if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'UPDATE post SET title = ?, body = ? WHERE id = ?', (title, body, id)
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
    from flask import has_request_context
from flask import url_for
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          callbacks=[tensorboard],
          epochs=epochs,
          verbose=1,
          validation_data=(x_test, y_test))
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])
    
    # create two datasets one with digits below 5 and one with 5 and above
x_train_lt5 = x_train[y_train < 5]
y_train_lt5 = y_train[y_train < 5]
x_test_lt5 = x_test[y_test < 5]
y_test_lt5 = y_test[y_test < 5]
    
    
def test_conv_input_length():
    assert conv_utils.conv_input_length(None, 7, 'same', 1) is None
    assert conv_utils.conv_input_length(112, 7, 'same', 1) == 112
    assert conv_utils.conv_input_length(112, 7, 'same', 2) == 223
    assert conv_utils.conv_input_length(28, 5, 'valid', 1) == 32
    assert conv_utils.conv_input_length(14, 5, 'valid', 2) == 31
    assert conv_utils.conv_input_length(36, 5, 'full', 1) == 32
    assert conv_utils.conv_input_length(18, 5, 'full', 2) == 31
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        @property
    def encoding(self):
        return 'utf8'
    
            if converter:
            self.mime, body = converter.convert(body)
    
    
class AuthPlugin(BasePlugin):
    '''
    Base auth plugin class.
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        def __getattr__(self, item):
        return self[item]
    
        @property
    def auth(self):
        auth = self.get('auth', None)
        if not auth or not auth['type']:
            return
    
        def test_latin1_header(self):
        self.con.request('LATINONEHEADER', '/', headers={
            'X-Special-Incoming':       'Ärger mit Unicode'
        })
        res = self.con.getresponse()
        self.assertEqual(res.getheader('X-Special'), 'Dängerous Mind')
        self.assertEqual(res.read(), 'Ärger mit Unicode'.encode('utf-8'))
    
            readline = self.get_readline((b'\xef\xbb\xbf',))
        encoding, consumed_lines = detect_encoding(readline)
        self.assertEqual(encoding, 'utf-8-sig')
        self.assertEqual(consumed_lines, [])
    
    
def open_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> TextIO:
    '''Return a file-like object opened for text reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return TextIOWrapper(reader.open_resource(resource), encoding, errors)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='r', encoding=encoding, errors=errors)
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return TextIOWrapper(BytesIO(data), encoding, errors)
    
    from argparse import ArgumentParser
    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
    def handleSlideshow(slideshow):
    print('<html>')
    handleSlideshowTitle(slideshow.getElementsByTagName('title')[0])
    slides = slideshow.getElementsByTagName('slide')
    handleToc(slides)
    handleSlides(slides)
    print('</html>')
    
            try:
            print(list(pool.imap(f, list(range(10)))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from list(pool.imap())')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
    # Register the converter
sqlite3.register_converter('point', convert_point)
    
        @web.middleware
    async def mock_real_ip(request, handler):
        '''Mock Real IP middleware.'''
        nonlocal ip_to_mock