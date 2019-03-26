
        
                print('Writing data for %s data and kind %s.' % (data_name, data_kind))
        if push_mean:
          model_runs = self.eval_model_runs_push_mean(data_name, data_extxd,
                                                      ext_input_extxi)
        else:
          model_runs = self.eval_model_runs_avg_epoch(data_name, data_extxd,
                                                      ext_input_extxi)
        full_fname = os.path.join(hps.lfads_save_dir, fname)
        write_data(full_fname, model_runs, compression='gzip')
        print('Done.')
    
      def get_batch(self, batch_size, num_steps, pad=False, forever=True):
    return get_batch(self._get_sentence(forever), batch_size, num_steps,
                     self.vocab.max_word_length, pad=pad)
    
      Returns:
    values:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.baseline_method == 'critic':
    if FLAGS.discriminator_model == 'seq2seq_vd':
      values = critic_vd.critic_seq2seq_vd_derivative(
          hparams, sequence, is_training, reuse=reuse)
    else:
      raise NotImplementedError
  else:
    raise NotImplementedError
  return values

    
          for s in xrange(t, FLAGS.sequence_length):
        cum_advantage += reward_missing_list[s] * np.power(gamma, (s - t)) * (
            rewards_list[s] - baselines[s])
      # Clip advantages.
      cum_advantage = tf.clip_by_value(cum_advantage, -FLAGS.advantage_clipping,
                                       FLAGS.advantage_clipping)
      advantages.append(reward_missing_list[t] * cum_advantage)
      final_gen_objective += tf.multiply(
          log_probability,
          reward_missing_list[t] * tf.stop_gradient(cum_advantage))
    
      Returns:
    attention_score_fn: to compute similarity between key and target states.
  '''
  with tf.variable_scope(name, reuse=reuse):
    if attention_option == 'bahdanau':
      query_w = tf.get_variable('attnW', [num_units, num_units], dtype=dtype)
      score_v = tf.get_variable('attnV', [num_units], dtype=dtype)
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    import io
import optparse
    
    make_valid_template = '''
    @classmethod
    def _make_valid_url(cls):
        return {valid_url!r}
'''
    
    import io
import sys
import re
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['nl']))
        self.assertEqual(md5(subtitles['nl']), 'fc6435027572b63fb4ab143abd5ad3f4')
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('https://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
    
http_proxies = {'http': 'http://http.proxy',
                'http://some.host': 'http://some.host.proxy'}
all_proxies = {'all': 'socks5://http.proxy',
               'all://some.host': 'socks5://some.host.proxy'}
mixed_proxies = {'http': 'http://http.proxy',
                 'http://some.host': 'http://some.host.proxy',
                 'all': 'socks5://http.proxy'}
@pytest.mark.parametrize(
    'url, expected, proxies', (
        ('hTTp://u:p@Some.Host/path', 'http://some.host.proxy', http_proxies),
        ('hTTp://u:p@Other.Host/path', 'http://http.proxy', http_proxies),
        ('hTTp:///path', 'http://http.proxy', http_proxies),
        ('hTTps://Other.Host', None, http_proxies),
        ('file:///etc/motd', None, http_proxies),
    
    from .structures import LookupDict
    
        value = value.strip(replace_chars)
    if not value:
        return links
    
            # In general, we want to try IDNA encoding the hostname if the string contains
        # non-ASCII characters. This allows users to automatically get the correct IDNA
        # behaviour. For strings containing only ASCII characters, we need to also verify
        # it doesn't start with a wildcard (*), before allowing the unencoded hostname.
        if not unicode_is_ascii(host):
            try:
                host = self._get_idna_encoded_host(host)
            except UnicodeError:
                raise InvalidURL('URL has an invalid label.')
        elif host.startswith(u'*'):
            raise InvalidURL('URL has an invalid label.')
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
        # Plot results
    i = 0
    m = len(list_n_features)
    plt.figure('scikit-learn SGD regression benchmark results',
               figsize=(5 * 2, 4 * m))
    for j in range(m):
        plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 0]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 0]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 0]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 0]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('RMSE')
        plt.title('Test error - %d features' % list_n_features[j])
        i += 1
    
    Typical output
--------------
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    plt.axis('tight')
plt.axis('off')
plt.suptitle('Ground truth', size=20)
    
    from sklearn.cluster import KMeans
from sklearn.datasets import make_blobs
    
    random_state = np.random.RandomState(0)
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        # Round in the units appropriate
    if precision == PRECISION_HALVES:
        temperature = round(temperature * 2) / 2.0
    elif precision == PRECISION_TENTHS:
        temperature = round(temperature, 1)
    # Integer as a fall back (PRECISION_WHOLE)
    else:
        temperature = round(temperature)
    
    
def run(args):
    '''Handle ensure config commandline script.'''
    parser = argparse.ArgumentParser(
        description=('Ensure a Home Assistant config exists, '
                     'creates one if necessary.'))
    parser.add_argument(
        '-c', '--config',
        metavar='path_to_config_dir',
        default=config_util.get_default_config_dir(),
        help='Directory that contains the Home Assistant configuration')
    parser.add_argument(
        '--script',
        choices=['ensure_config'])