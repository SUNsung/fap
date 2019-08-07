
        
            Various helpers to make the development experience better.
    
        :param s: JSON string to deserialize.
    :param app: App instance to use to configure the JSON decoder.
        Uses ``current_app`` if not given, and falls back to the default
        encoder when not in an app context.
    :param kwargs: Extra arguments passed to :func:`json.dumps`.
    
    
def test_template_test_with_template(app, client):
    bp = flask.Blueprint('bp', __name__)
    
        with pytest.raises(AttributeError):
        import unimportable  # noqa: F401

    
        headers['Accept'] = 'application/json'
    headers['Content-Type'] = 'application/json'
    
    
def main():
    '''
    The main function.  Instantiates the module and calls process_request.
    :return: none
    '''
    module = AnsibleModule(
        argument_spec=ClcFirewallPolicy._define_module_argument_spec(),
        supports_check_mode=True)
    
        def _ensure_aa_policy_present(
            self, server, server_params):
        '''
        ensures the server is updated with the provided anti affinity policy
        :param server: the CLC server object
        :param server_params: the dictionary of server parameters
        :return: (changed, group) -
            changed: Boolean whether a change was made
            result: The result from the CLC API call
        '''
        changed = False
        acct_alias = self.clc.v2.Account.GetAlias()
    
        elif module.params['state'] == 'absent' and instance is None:
        module.exit_json(changed=False, instance={})
    
    
def present(dest, username, password, crypt_scheme, create, check_mode):
    ''' Ensures user is present
    
    MATRIX_IMP_ERR = None
try:
    from matrix_client.client import MatrixClient
except ImportError:
    MATRIX_IMP_ERR = traceback.format_exc()
    matrix_found = False
else:
    matrix_found = True
    
    EXAMPLES = r'''
- name: Power down server
  imc_rest:
    hostname: '{{ imc_hostname }}'
    username: '{{ imc_username }}'
    password: '{{ imc_password }}'
    validate_certs: no
    content: |
      <configConfMo><inConfig>
        <computeRackUnit dn='sys/rack-unit-1' adminPower='down'/>
      </inConfig></configConfMo>
  delegate_to: localhost
    
            # test if we're actually logged in
        if password or login_token:
            gh_obj.me()
    except github3.exceptions.AuthenticationFailed as e:
        module.fail_json(msg='Failed to connect to GitHub: %s' % to_native(e),
                         details='Please check username and password or token '
                                 'for repository %s' % repo)
    
    Note that this accuracy of this l1-penalized linear model is significantly
below what can be reached by an l2-penalized linear model or a non-linear
multi-layer perceptron model on this dataset.
    
        xx = np.arange(100, 100 + n * step, step)
    plt.figure('scikit-learn vs. glmnet benchmark results')
    plt.title('Regression in high dimensional spaces (%d samples)' % n_samples)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
                gc.collect()
            print('- benchmarking RidgeRegression')
            clf = Ridge(alpha=alpha, fit_intercept=False)
            tstart = time()
            clf.fit(X_train, y_train)
            ridge_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                        y_test)
            ridge_results[i, j, 1] = time() - tstart
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
    For each class of models we make the model complexity vary through the choice
of relevant model parameters and measure the influence on both computational
performance (latency) and predictive power (MSE or Hamming Loss).
'''
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
        plt.imshow(avg_dist, interpolation='nearest', cmap=plt.cm.gnuplot2,
               vmin=0)
    plt.xticks(range(n_clusters), labels, rotation=45)
    plt.yticks(range(n_clusters), labels)
    plt.colorbar()
    plt.suptitle('Interclass %s distances' % metric, size=18)
    plt.tight_layout()
    
        if len(sys.argv) > 2:
        top_domain = sys.argv[2]
    else:
        top_domain = None
    
    
pteredor_is_running = False
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
    
class FixedTest(unittest.TestCase):
    '''Tests for acme.fields.Fixed.'''
    
    # The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set 'language' from the command line for these cases.
language = 'en'
    
        # Default config is pebble
    directory_url = os.environ.get('SERVER', PEBBLE_DIRECTORY_URL)
    http_01_port = int(os.environ.get('HTTP_01_PORT', HTTP_01_PORT))
    tls_alpn_01_port = int(os.environ.get('TLS_ALPN_01_PORT', TLS_ALPN_01_PORT))
    
            face = cv2.resize(face,  # pylint:disable=no-member
                          dsize=(self.input_size, self.input_size),
                          interpolation=interpolation)
        return face
    
            mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        logger.debug('Built box mask. Shape: %s', mask.shape)
        return mask
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
    from plugins.convert._config import Config
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def write(self, filename, image):
        logger.trace('Outputting: (filename: '%s'', filename)
        filename = self.output_filename(filename)
        try:
            with open(filename, 'wb') as outfile:
                outfile.write(image)
        except Exception as err:  # pylint: disable=broad-except
            logger.error('Failed to save image '%s'. Original Error: %s', filename, err)
    
    
_HELPTEXT = (
    'Options for outputting converted frames to a series of images using OpenCV\n'
    'OpenCV can be faster than other image writers, but lacks some configuration '
    'options and formats.'
)
    
        def get_save_kwargs(self):
        ''' Return the save parameters for the file format '''
        filetype = self.config['format']
        kwargs = dict()
        if filetype in ('gif', 'jpg', 'png'):
            kwargs['optimize'] = self.config['optimize']
        if filetype == 'gif':
            kwargs['interlace'] = self.config['gif_interlace']
        if filetype == 'png':
            kwargs['compress_level'] = self.config['png_compress_level']
        if filetype == 'tif':
            kwargs['compression'] = self.config['tif_compression']
        logger.debug(kwargs)
        return kwargs