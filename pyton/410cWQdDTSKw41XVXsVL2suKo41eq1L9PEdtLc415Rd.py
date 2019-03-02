
        
                if datasets and 'alignment_bias_c' in datasets[name].keys():
          dataset = datasets[name]
          align_bias_c = dataset['alignment_bias_c'].astype(np.float32)
          align_bias_1xc = np.expand_dims(align_bias_c, axis=0)
    
      # Convert from figure to an numpy array width x height x 3 (last for RGB)
  f.canvas.draw()
  data = np.fromstring(f.canvas.tostring_rgb(), dtype=np.uint8, sep='')
  data_wxhx3 = data.reshape(f.canvas.get_width_height()[::-1] + (3,))
  plt.close()
    
    # CONTROLLER
# This parameter critically controls whether or not there is a controller
# (along with controller encoders placed into the LFADS graph.  If CO_DIM >
# 1, that means there is a 1 dimensional controller outputs, if equal to 0,
# then no controller.
flags.DEFINE_integer('co_dim', CO_DIM,
    'Number of control net outputs (>0 builds that graph).')
    
      Args:
    dataset: LM1BDataset object.
  '''
  sess, t = _LoadModel(FLAGS.pbtxt, FLAGS.ckpt)
    
    
def _substitution_mask(sent1, sent2):
  '''Binary mask identifying substituted part in two sentences.
    
    
def create_dis_loss(fake_predictions, real_predictions, targets_present):
  '''Compute Discriminator loss across real/fake.'''
    
    import tensorflow as tf
    
    
class Environment(object):
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
        '''
    color = b'\x1b['
    encoding = outfile.encoding
    for chunk in stream:
        if color in chunk:
            outfile.write(chunk.decode(encoding))
        else:
            outfile.buffer.write(chunk)
        if flush:
            outfile.flush()
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        return inner
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def _get_most_recent_snapshot(snapshots, max_snapshot_age_secs=None, now=None):
    '''
    Gets the most recently created snapshot and optionally filters the result
    if the snapshot is too old
    :param snapshots: list of snapshots to search
    :param max_snapshot_age_secs: filter the result if its older than this
    :param now: simulate time -- used for unit testing
    :return:
    '''
    if len(snapshots) == 0:
        return None
    
        if module.params['repo']:
        params['deploy[repository]'] = module.params['repo']
    
    
def follow_log(module, le_path, logs, name=None, logtype=None):
    ''' Follows one or more logs if not already followed. '''
    
                sum_info.SetProperty(msilib.PID_TITLE, 'a' * 1000)
            title = sum_info.GetProperty(msilib.PID_TITLE)
            self.assertEqual(title, b'a' * 1000)
    
        def test_distant_exception(self):
        def f():
            1/0
        def g():
            f()
        def h():
            g()
        def i():
            h()
        def j(p):
            i()
        f_ident = ident(f)
        g_ident = ident(g)
        h_ident = ident(h)
        i_ident = ident(i)
        j_ident = ident(j)
        self.check_events(j, [(1, 'call', j_ident),
                              (2, 'call', i_ident),
                              (3, 'call', h_ident),
                              (4, 'call', g_ident),
                              (5, 'call', f_ident),
                              (5, 'return', f_ident),
                              (4, 'return', g_ident),
                              (3, 'return', h_ident),
                              (2, 'return', i_ident),
                              (1, 'return', j_ident),
                              ])
    
        If a name, the module is imported.  If the passed or imported module
    object is not a package, raise an exception.
    '''
    if hasattr(package, '__spec__'):
        if package.__spec__.submodule_search_locations is None:
            raise TypeError('{!r} is not a package'.format(
                package.__spec__.name))
        else:
            return package
    else:
        module = import_module(package)
        if module.__spec__.submodule_search_locations is None:
            raise TypeError('{!r} is not a package'.format(package))
        else:
            return module
    
    # Now the header items can be accessed as a dictionary, and any non-ASCII will
# be converted to unicode:
print('To:', msg['to'])
print('From:', msg['from'])
print('Subject:', msg['subject'])
    
    '''Unpack a MIME message into a directory of files.'''