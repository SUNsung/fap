
        
        options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
    
def expect_warnings(ydl, warnings_re):
    real_warning = ydl.report_warning
    
        def test_keywords(self):
        self.assertMatch(':ytsubs', ['youtube:subscriptions'])
        self.assertMatch(':ytsubscriptions', ['youtube:subscriptions'])
        self.assertMatch(':ythistory', ['youtube:history'])
    
    
class TestSocks(unittest.TestCase):
    _SKIP_SOCKS_TEST = True
    
        def _real_extract(self, url):
        playlist_id = self._match_id(url)
    
            duration = parse_duration(self._search_regex(
            r'<b>Duration:</b> (?:<q itemprop='duration'>)?(\d+:\d+)', webpage, 'duration', fatal=False))
        view_count = int_or_none(self._html_search_regex(
            r'<b>Views:</b> (\d+)', webpage, 'view count', fatal=False))
    
    from werkzeug.local import LocalProxy
    
        def get_cookie_secure(self, app):
        '''Returns True if the cookie should be secure.  This currently
        just returns the value of the ``SESSION_COOKIE_SECURE`` setting.
        '''
        return app.config['SESSION_COOKIE_SECURE']
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
            if 'methods' not in d:
            methods = set()
    
    
def test_explicit_instance_paths(modules_tmpdir):
    with pytest.raises(ValueError) as excinfo:
        flask.Flask(__name__, instance_path='instance')
    assert 'must be absolute' in str(excinfo.value)
    
        class CustomFlask(flask.Flask):
        session_interface = FailingSessionInterface()
    
        app.add_template_filter(my_reverse)
    assert 'my_reverse' in app.jinja_env.filters.keys()
    assert app.jinja_env.filters['my_reverse'] == my_reverse
    assert app.jinja_env.filters['my_reverse']('abcd') == 'dcba'
    
    tf_proto_library_py(
    name = 'data_pb2',
    srcs = ['data.proto'],
)
    
    py_library(
    name = 'spec_builder',
    srcs = ['spec_builder.py'],
    deps = [
        ':lexicon',
        '//dragnn/protos:spec_pb2_py',
        '//syntaxnet:parser_ops',
        '//syntaxnet/util:check',
        '@org_tensorflow//tensorflow:tensorflow_py',
    ],
)
    
      Args:
    comp: ComponentBuilder object with respect to which the feature is to be
        fetched
    network_states: dictionary of NetworkState objects
    feature_spec: FeatureSpec proto for the linked feature to be looked up
    
      def testCombineArcAndRootPotentials(self):
    with self.test_session():
      arcs = tf.constant([[[1, 2, 3],
                           [2, 3, 4],
                           [3, 4, 5]],
                          [[3, 4, 5],
                           [2, 3, 4],
                           [1, 2, 3]]], tf.float32)  # pyformat: disable
      roots = tf.constant([[6, 7, 8],
                           [8, 7, 6]], tf.float32)  # pyformat: disable
    
      Returns:
    Dict mapping from shortened resource path to original resource path.
  '''
  for component_spec in master_spec.component:
    for feature_spec in component_spec.fixed_feature:
      feature_spec.ClearField('pretrained_embedding_matrix')
      feature_spec.ClearField('vocab')
    
    
def main(args_list):
    args = get_args(args_list)
    if args.list:
        print_list()
    if args.host:
        print_host(args.host)
    
    
def secure_hash_s(data, hash_func=sha1):
    ''' Return a secure hash hex digest of data. '''
    
    try:
    import json
except ImportError:
    import simplejson as json
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
    import matplotlib.pyplot as plt
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
            cmap_group = Tk.Frame(fm)
        Tk.Radiobutton(cmap_group, text='Hyperplanes',
                       variable=controller.surface_type, value=0,
                       command=controller.refit).pack(anchor=Tk.W)
        Tk.Radiobutton(cmap_group, text='Surface',
                       variable=controller.surface_type, value=1,
                       command=controller.refit).pack(anchor=Tk.W)
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    from sklearn.linear_model import LogisticRegression
from sklearn.svm import SVC
from sklearn.gaussian_process import GaussianProcessClassifier
from sklearn.gaussian_process.kernels import RBF
from sklearn import datasets
    
    
def sqr(x):
    return np.sign(np.cos(x))
    
    np.random.seed(0)
###############################################################################
n_features = 100
# simulation covariance matrix (AR(1) process)
r = 0.1
real_cov = toeplitz(r ** np.arange(n_features))
coloring_matrix = cholesky(real_cov)
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_wrong_redirect_code(self, mock_get_request):
        mock_get_request.return_value = create_response(
            303, {'location': 'https://test.com'})
        self.assertFalse(self.validator.redirect('test.com'))
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_smtp_failure(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
    
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
    
    
def _get_homehub_data(url):
    '''Return mock homehub data.'''
    return '''
    [
        {
            'mac': 'AA:BB:CC:DD:EE:FF,
            'hostname': 'hostname',
            'ip': '192.168.1.43',
            'ipv6': '',
            'name': 'hostname',
            'activity': '1',
            'os': 'Unknown',
            'device': 'Unknown',
            'time_first_seen': '2016/06/05 11:14:45',
            'time_last_active': '2016/06/06 11:33:08',
            'dhcp_option': '39043T90430T9TGK0EKGE5KGE3K904390K45GK054',
            'port': 'wl0',
            'ipv6_ll': 'fe80::gd67:ghrr:fuud:4332',
            'activity_ip': '1',
            'activity_ipv6_ll': '0',
            'activity_ipv6': '0',
            'device_oui': 'NA',
            'device_serial': 'NA',
            'device_class': 'NA'
        }
    ]
    '''