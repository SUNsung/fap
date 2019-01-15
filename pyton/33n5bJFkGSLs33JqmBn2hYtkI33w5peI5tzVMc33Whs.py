
        
        flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
        fname = os.path.join(FLAGS.save_dir, 'lstm_emb_step_%d.npy' % i)
    with tf.gfile.Open(fname, mode='w') as f:
      np.save(f, lstm_emb)
    sys.stderr.write('LSTM embedding step %d file saved\n' % i)
    
    import tensorflow as tf
    
      # Dictionary and reverse dictionry.
  if FLAGS.data_set == 'ptb':
    word_to_id = ptb_loader.build_vocab(
        os.path.join(FLAGS.data_dir, 'ptb.train.txt'))
  elif FLAGS.data_set == 'imdb':
    word_to_id = imdb_loader.build_vocab(
        os.path.join(FLAGS.data_dir, 'vocab.txt'))
  id_to_word = {v: k for k, v in word_to_id.iteritems()}
    
    
def print_and_log(log, id_to_word, sequence_eval, max_num_to_print=5):
  '''Helper function for printing and logging evaluated sequences.'''
  indices_eval = convert_to_indices(sequence_eval)
  indices_arr = np.asarray(indices_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, max_num_to_print)
    
      def decoder_fn(time, cell_state, cell_input, cell_output, context_state):
    '''Decoder function used in the `dynamic_rnn_decoder` for training.
    
            if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password))
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
    
@pytest.fixture
def client(app):
    '''A test client for the app.'''
    return app.test_client()
    
            :param name: the optional name of the global, otherwise the
                     function name will be used.
        '''
        def register_template(state):
            state.app.jinja_env.globals[name or f.__name__] = f
        self.record_once(register_template)
    
        Various helpers to make the development experience better.
    
        The following characters are escaped in strings:
    
        def __init__(self, serializer):
        '''Create a tagger for the given serializer.'''
        self.serializer = serializer
    
    from werkzeug.local import LocalProxy
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
        def _get_source_explained(self, environment, template):
        attempts = []
        trv = None
    
    
class FlaskCliRunner(CliRunner):
    '''A :class:`~click.testing.CliRunner` for testing a Flask app's
    CLI commands. Typically created using
    :meth:`~flask.Flask.test_cli_runner`. See :ref:`testing-cli`.
    '''
    def __init__(self, app, **kwargs):
        self.app = app
        super(FlaskCliRunner, self).__init__(**kwargs)
    
    
def parse_changelog():
    with open('CHANGES.rst') as f:
        lineiter = iter(f)
        for line in lineiter:
            match = re.search('^Version\s+(.*)', line.strip())
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    
misspelled_subcommand = '''\
usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
            def reset(path):
            os.mkdir('d')
            with tarfile.TarFile(path, 'w') as archive:
                for file in ('a', 'b', 'c', 'd/e'):
                    with open(file, 'w') as f:
                        f.write('*')
    
            return self.json(briefing)

    
            self._hass.bus.fire(EVENT_NAME, {
            EVENT_DATA_NAME: self.name,
            EVENT_DATA_ADDRESS: self.address,
            EVENT_DATA_QUEUED_TIME: time_diff,
            EVENT_DATA_TYPE: hass_click_type
        })
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_TYPE, default=DEFAULT_TYPE): cv.string,
})
    
    DOMAIN = 'dweet'
    
    
def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)  # select large prime number.
    e_1 = primitiveRoot(p)  # one primitive root on modulo p.
    d = random.randrange(3, p)  # private_key -> have to be greater than 2 for safety.
    e_2 = cryptoMath.findModInverse(pow(e_1, d, p), p)
    
    import os
import sys
import glob
import re
import markdown
import argparse
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
        Note that this only works using dt, custom POSTokenizer
    instances are not supported.
    '''
    global dt
    if jieba.pool is None:
        for w in dt.cut(sentence, HMM=HMM):
            yield w
    else:
        parts = strdecode(sentence).splitlines(True)
        if HMM:
            result = jieba.pool.map(_lcut_internal, parts)
        else:
            result = jieba.pool.map(_lcut_internal_no_hmm, parts)
        for r in result:
            for w in r:
                yield w
    
    file_name = args[0]
    
        def testPosseg_NOHMM(self):
        import jieba.posseg as pseg
        for content in test_contents:
            result = pseg.cut(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Posseg Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Posseg error on content: %s' % content
            print(' , '.join([w.word + ' / ' + w.flag for w in result]), file=sys.stderr)
        print('testPosseg_NOHMM', file=sys.stderr)
    
        def test_put_parameters(self):
        ssm_client = aws_stack.connect_to_service('ssm')
    
        # update stack information
    cloudformation_service = aws_stack.connect_to_service('cloudformation')
    if stack_exists(stack_name):
        cloudformation_service.update_stack(StackName=stack_name,
            TemplateBody=template)
    else:
        cloudformation_service.create_stack(StackName=stack_name,
            TemplateBody=template)
    
        # put notification config with single event type
    event = 's3:ObjectCreated:*'
    s3_client.put_bucket_notification_configuration(Bucket=TEST_BUCKET_NAME_WITH_NOTIFICATIONS,
        NotificationConfiguration={
            'QueueConfigurations': [{
                'Id': 'id123456',
                'QueueArn': queue_arn,
                'Events': [event]
            }]
        }
    )
    config = s3_client.get_bucket_notification_configuration(Bucket=TEST_BUCKET_NAME_WITH_NOTIFICATIONS)
    config = config['QueueConfigurations'][0]
    assert config['Events'] == [event]