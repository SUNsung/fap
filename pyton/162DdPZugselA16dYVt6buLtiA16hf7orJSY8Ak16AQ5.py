
        
            def _call(self, req):
        if isinstance(req, compat_basestring):
            req = sanitized_Request(req)
        # Authorizing manually since GitHub does not response with 401 with
        # WWW-Authenticate header set (see
        # https://developer.github.com/v3/#basic-authentication)
        b64 = base64.b64encode(
            ('%s:%s' % (self._username, self._password)).encode('utf-8')).decode('ascii')
        req.add_header('Authorization', 'Basic %s' % b64)
        response = self._opener.open(req).read().decode('utf-8')
        return json.loads(response)
    
    
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    import io
import sys
import re
    
    
if __name__ == '__main__':
    main()

    
    py2exe_options = {
    'bundle_files': 1,
    'compressed': 1,
    'optimize': 2,
    'dist_dir': '.',
    'dll_excludes': ['w9xpopen.exe', 'crypt32.dll'],
}
    
        return diag_gaussian_log_likelihood(z, self.mean, self.logvar)
    
    # KL DISTRIBUTIONS
# If you don't know what you are donig here, please leave alone, the
# defaults should be fine for most cases, irregardless of other parameters.
#
# If you don't want the prior variance to be learned, set the
# following values to the same thing: ic_prior_var_min,
# ic_prior_var_scale, ic_prior_var_max.  The prior mean will be
# learned regardless.
flags.DEFINE_float('ic_prior_var_min', IC_PRIOR_VAR_MIN,
                   'Minimum variance in posterior h0 codes.')
flags.DEFINE_float('ic_prior_var_scale', IC_PRIOR_VAR_SCALE,
                   'Variance of ic prior distribution')
flags.DEFINE_float('ic_prior_var_max', IC_PRIOR_VAR_MAX,
                   'Maximum variance of IC prior distribution.')
# If you really want to limit the information from encoder to decoder,
# Increase ic_post_var_min above 0.0.
flags.DEFINE_float('ic_post_var_min', IC_POST_VAR_MIN,
                   'Minimum variance of IC posterior distribution.')
flags.DEFINE_float('co_prior_var_scale', CO_PRIOR_VAR_SCALE,
                   'Variance of control input prior distribution.')
    
      if FLAGS.noise_type == 'poisson':
    noisy_data = spikify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  elif FLAGS.noise_type == 'gaussian':
    noisy_data = gaussify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  else:
    raise ValueError('Only noise types supported are poisson or gaussian')
    
    from utils import write_datasets
from synthetic_data_utils import normalize_rates
from synthetic_data_utils import get_train_n_valid_inds, nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
    
      def evaluate(self):
    '''Evaluate the current ensemble.'''
    # Attach word probabilities and correctness label to each substitution
    ensembled_probs = sum(self.all_probs) / len(self.all_probs)
    scorings = []
    for i, sentence in enumerate(self.sentences):
      correctness = self.labels[i]
      word_probs = ensembled_probs[i, :len(sentence)]
      joint_prob = np.prod(word_probs, dtype=np.float64)
    
    
def convert_to_indices(sequences):
  '''Convert a list of size [batch_size, sequence_length, vocab_size] to
  a list of size [batch_size, sequence_length] where the vocab element is
  denoted by the index.
  '''
  batch_of_indices = []
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
    
def attention_decoder_fn_train(encoder_state,
                               attention_keys,
                               attention_values,
                               attention_score_fn,
                               attention_construct_fn,
                               name=None):
  '''Attentional decoder function for `dynamic_rnn_decoder` during training.
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
    from httpie.compat import is_windows
from httpie.config import DEFAULT_CONFIG_DIR, Config
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    Does two benchmarks
    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
        return results
    
    
def get_data(N, D, dataset='dense'):
    if dataset == 'dense':
        np.random.seed(0)
        return np.random.random((N, D))
    elif dataset == 'digits':
        X = datasets.load_digits().data
        i = np.argsort(X[0])[::-1]
        X = X[:, i]
        return X[:N, :D]
    else:
        raise ValueError('invalid dataset: %s' % dataset)
    
    '''
from __future__ import division
from __future__ import print_function
    
    
if __name__ == '__main__':
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []