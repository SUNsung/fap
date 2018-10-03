
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
      if bidx is not None:
    data_nxt = data_bxtxn[bidx,:,:].T
    params_nxt = model_vals['output_dist_params'][bidx,:,:].T
  else:
    data_nxt = np.mean(data_bxtxn, axis=0).T
    params_nxt = np.mean(model_vals['output_dist_params'], axis=0).T
  if output_dist == 'poisson':
    means_nxt = params_nxt
  elif output_dist == 'gaussian': # (means+vars) x time
    means_nxt = np.vsplit(params_nxt,2)[0] # get means
  else:
    assert 'NIY'
    
    DATA_DIR = '/tmp/rnn_synth_data_v1.0/'
DATA_FILENAME_STEM = 'chaotic_rnn_inputs_g1p5'
LFADS_SAVE_DIR = '/tmp/lfads_chaotic_rnn_inputs_g1p5/'
CO_DIM = 1
DO_CAUSAL_CONTROLLER = False
DO_FEED_FACTORS_TO_CONTROLLER = True
CONTROLLER_INPUT_LAG = 1
PRIOR_AR_AUTOCORRELATION = 10.0
PRIOR_AR_PROCESS_VAR = 0.1
DO_TRAIN_PRIOR_AR_ATAU = True
DO_TRAIN_PRIOR_AR_NVAR = True
CI_ENC_DIM = 128
CON_DIM = 128
CO_PRIOR_VAR_SCALE = 0.1
KL_INCREASE_STEPS = 2000
L2_INCREASE_STEPS = 2000
L2_GEN_SCALE = 2000.0
L2_CON_SCALE = 0.0
# scale of regularizer on time correlation of inferred inputs
CO_MEAN_CORR_SCALE = 0.0
KL_IC_WEIGHT = 1.0
KL_CO_WEIGHT = 1.0
KL_START_STEP = 0
L2_START_STEP = 0
IC_PRIOR_VAR_MIN = 0.1
IC_PRIOR_VAR_SCALE = 0.1
IC_PRIOR_VAR_MAX = 0.1
IC_POST_VAR_MIN = 0.0001      # protection from KL blowing up
    
      else:
    raise NotImplementedError
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    import pytest
from requests.compat import urljoin
    
                handler_result = self.handler(sock)
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            '<http:/.../front.jpeg>; rel=front; type='image/jpeg'',
            [{'url': 'http:/.../front.jpeg', 'rel': 'front', 'type': 'image/jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>;',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>; type='image/jpeg',<http://.../back.jpeg>;',
            [
                {'url': 'http:/.../front.jpeg', 'type': 'image/jpeg'},
                {'url': 'http://.../back.jpeg'}
            ]
        ),
        (
            '',
            []
        ),
    ))
def test_parse_header_links(value, expected):
    assert parse_header_links(value) == expected
    
    
def test_digestauth_only_on_4xx():
    '''Ensure we only send digestauth on 4xx challenges.
    
        if cryptography_version < [1, 3, 4]:
        warning = 'Old version of cryptography ({0}) may cause slowdown.'.format(cryptography_version)
        warnings.warn(warning, RequestsDependencyWarning)
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
            if opts.pdb:
            failure.startDebugMode()
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
    
    @implementer(IPolicyForHTTPS)
    class ScrapyClientContextFactory(BrowserLikePolicyForHTTPS):
        '''
        Non-peer-certificate verifying HTTPS context factory
    
    from scrapy.http import Response
from scrapy.responsetypes import responsetypes
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.python import to_bytes