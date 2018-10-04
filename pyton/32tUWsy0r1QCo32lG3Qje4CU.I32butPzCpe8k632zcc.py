
        
        FLAGS = flags.FLAGS
    
    rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
rnn_rngs = [np.random.RandomState(seed=FLAGS.synth_data_seed+1),
            np.random.RandomState(seed=FLAGS.synth_data_seed+2)]
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
nreplications = FLAGS.nreplications
E = nreplications * C
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
    
      Returns:
    The dataset structures, with the field alignment_matrix_cxf added.
    This is # channels x npcs dimension
'''
  nchannels_all = 0
  channel_idxs = {}
  conditions_all = {}
  nconditions_all = 0
  for name, dataset in datasets.items():
    cidxs = np.where(dataset['P_sxn'])[1] # non-zero entries in columns
    channel_idxs[name] = [cidxs[0], cidxs[-1]+1]
    nchannels_all += cidxs[-1]+1 - cidxs[0]
    conditions_all[name] = np.unique(dataset['condition_labels_train'])
    
      dataset_dict = {}
  fnames = os.listdir(data_path)
    
    
FLAGS = tf.app.flags.FLAGS
    
    
_SPECIAL_CHAR_MAP = {
    '\xe2\x80\x98': '\'',
    '\xe2\x80\x99': '\'',
    '\xe2\x80\x9c': ''',
    '\xe2\x80\x9d': ''',
    '\xe2\x80\x93': '-',
    '\xe2\x80\x94': '-',
    '\xe2\x88\x92': '-',
    '\xce\x84': '\'',
    '\xc2\xb4': '\'',
    '`': '\''
}
    
        # Create the supervisor.  It will take care of initialization, summaries,
    # checkpoints, and recovery.
    sv = tf.Supervisor(
        logdir=log_dir,
        is_chief=is_chief,
        saver=model.saver,
        global_step=model.global_step,
        recovery_wait_secs=30,
        summary_op=None,
        init_fn=init_fn)
    
    
def create_masked_cross_entropy_loss(targets, present, logits):
  '''Calculate the cross entropy loss matrices for the masked tokens.'''
  cross_entropy_losses = losses.cross_entropy_loss_matrix(targets, logits)
    
      elif FLAGS.mask_strategy == 'contiguous':
    masked_length = int((1 - FLAGS.is_present_rate) * FLAGS.sequence_length) - 1
    # Determine location to start masking.
    start_mask = np.random.randint(
        1, FLAGS.sequence_length - masked_length + 1, size=FLAGS.batch_size)
    p = np.full([FLAGS.batch_size, FLAGS.sequence_length], True, dtype=bool)
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
setup(
    name='httpie',
    version=httpie.__version__,
    description=httpie.__doc__.strip(),
    long_description=long_description(),
    url='http://httpie.org/',
    download_url='https://github.com/jakubroztocil/httpie',
    author=httpie.__author__,
    author_email='jakub@roztocil.co',
    license=httpie.__licence__,
    packages=find_packages(),
    entry_points={
        'console_scripts': [
            'http = httpie.__main__:main',
        ],
    },
    extras_require=extras_require,
    install_requires=install_requires,
    tests_require=tests_require,
    cmdclass={'test': PyTest},
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.1',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Environment :: Console',
        'Intended Audience :: Developers',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: BSD License',
        'Topic :: Internet :: WWW/HTTP',
        'Topic :: Software Development',
        'Topic :: System :: Networking',
        'Topic :: Terminals',
        'Topic :: Text Processing',
        'Topic :: Utilities'
    ],
)

    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    from utils import TESTS_ROOT
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_GET(httpbin_both):
    r = http('GET', httpbin_both + '/get')
    assert HTTP_OK in r
    
    
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
    
        An instance can be used either as a decorator or as a context manager.