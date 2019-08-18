
        
        
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, names, result', [
    ('git diff', ['git', 'hub'], True),
    ('hub diff', ['git', 'hub'], True),
    ('hg diff', ['git', 'hub'], False)])
def test_for_app(script, names, result):
    @for_app(*names)
    def match(command):
        return True
    
    For example the `llc` program is in package `llvm` so this:
    yay -S llc
should be:
    yay -S llvm
'''
    
    import pytest
from thefuck.shells import Powershell
    
        def app_alias(self, alias_name):
        # It is VERY important to have the variables declared WITHIN the function
        return '''
            {name} () {{
                TF_PYTHONIOENCODING=$PYTHONIOENCODING;
                export TF_SHELL=zsh;
                export TF_ALIAS={name};
                TF_SHELL_ALIASES=$(alias);
                export TF_SHELL_ALIASES;
                TF_HISTORY='$(fc -ln -10)';
                export TF_HISTORY;
                export PYTHONIOENCODING=utf-8;
                TF_CMD=$(
                    thefuck {argument_placeholder} $@
                ) && eval $TF_CMD;
                unset TF_HISTORY;
                export PYTHONIOENCODING=$TF_PYTHONIOENCODING;
                {alter_history}
            }}
        '''.format(
            name=alias_name,
            argument_placeholder=ARGUMENT_PLACEHOLDER,
            alter_history=('test -n '$TF_CMD' && print -s $TF_CMD'
                           if settings.alter_history else ''))
    
    
@pytest.mark.parametrize('script, pyenv_cmd, result', [
    ('pyenv globe', 'globe', 'pyenv global'),
    ('pyenv intall 3.8.0', 'intall', 'pyenv install 3.8.0'),
    ('pyenv list', 'list', 'pyenv install --list'),
    ('pyenv remove 3.8.0', 'remove', 'pyenv uninstall 3.8.0'),
])
def test_get_new_command(script, pyenv_cmd, output, result):
    assert result in get_new_command(Command(script, output))

    
    
@sudo_support
@for_app('apt', 'apt-get', 'apt-cache')
def match(command):
    return 'E: Invalid operation' in command.output
    
    
@pytest.mark.parametrize('loss', ['squared_hinge', 'log'])
@pytest.mark.parametrize('X_label', ['sparse', 'dense'])
@pytest.mark.parametrize('Y_label', ['two-classes', 'multi-class'])
@pytest.mark.parametrize('intercept_label', ['no-intercept', 'fit-intercept'])
def test_l1_min_c(loss, X_label, Y_label, intercept_label):
    Xs = {'sparse': sparse_X, 'dense': dense_X}
    Ys = {'two-classes': Y1, 'multi-class': Y2}
    intercepts = {'no-intercept': {'fit_intercept': False},
                  'fit-intercept': {'fit_intercept': True,
                                    'intercept_scaling': 10}}
    
        def get_gradients(y_true, raw_predictions):
        # create gradients and hessians array, update inplace, and return
        gradients = np.empty_like(raw_predictions, dtype=G_H_DTYPE)
        hessians = np.empty_like(raw_predictions, dtype=G_H_DTYPE)
        loss.update_gradients_and_hessians(gradients, hessians, y_true,
                                           raw_predictions)
        return gradients
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
    # Define 'classifiers' to be used
classifiers = {
    'Empirical Covariance': EllipticEnvelope(support_fraction=1.,
                                             contamination=0.261),
    'Robust Covariance (Minimum Covariance Determinant)':
    EllipticEnvelope(contamination=0.261),
    'OCSVM': OneClassSVM(nu=0.261, gamma=0.05)}
colors = ['m', 'g', 'b']
legend1 = {}
legend2 = {}
    
    This example shows the effect of imposing a connectivity graph to capture
local structure in the data. The graph is simply the graph of 20 nearest
neighbors.
    
        def test_create(self):
        pl = self._create()
        self.assertEqual(pl['aString'], 'Doodah')
        self.assertEqual(pl['aDict']['aFalseValue'], False)
    
        seconds = datetime.datetime(2004, 10, 26, 10, 33, 33, tzinfo=datetime.timezone(datetime.timedelta(0))).timestamp()
    pl[nsstr('aBigInt')] = 2 ** 63 - 44
    pl[nsstr('aBigInt2')] = NSNumber.numberWithUnsignedLongLong_(2 ** 63 + 44)
    pl[nsstr('aDate')] = NSDate.dateWithTimeIntervalSince1970_(seconds)
    
        def test_types_coroutine(self):
        def gen():
            yield from ()
            return 'spam'
    
    if not hasattr(sys, 'addaudithook') or not hasattr(sys, 'audit'):
    raise unittest.SkipTest('test only relevant when sys.audit is available')
    
        def test_strict(self):
        for orig, expect in parse_strict_test_cases:
            # Test basic parsing
            d = do_test(orig, 'GET')
            self.assertEqual(d, expect, 'Error parsing %s method GET' % repr(orig))
            d = do_test(orig, 'POST')
            self.assertEqual(d, expect, 'Error parsing %s method POST' % repr(orig))
    
    
class BadNonceTest(unittest.TestCase):
    '''Tests for acme.errors.BadNonce.'''
    
        @nonce.decoder
    def nonce(value):  # pylint: disable=missing-docstring,no-self-argument
        try:
            return jose.decode_b64jose(value)
        except jose.DeserializationError as error:
            # TODO: custom error
            raise jose.DeserializationError('Invalid nonce: {0}'.format(error))
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
        @mock.patch('certbot.account.report_new_account')
    @mock.patch('certbot.client.display_ops.get_email')
    def test_email_retry(self, _rep, mock_get_email):
        from acme import messages
        self.config.noninteractive_mode = False
        msg = 'DNS problem: NXDOMAIN looking up MX for example.com'
        mx_err = messages.Error.with_code('invalidContact', detail=msg)
        with mock.patch('certbot.client.acme_client.BackwardsCompatibleClientV2') as mock_client:
            mock_client().external_account_required.side_effect = self._false_mock
            with mock.patch('certbot.eff.handle_subscription') as mock_handle:
                mock_client().new_account_and_tos.side_effect = [mx_err, mock.MagicMock()]
                self._call()
                self.assertEqual(mock_get_email.call_count, 1)
                self.assertTrue(mock_handle.called)
    
        This Authenticator uses the Google Cloud DNS API to fulfill a dns-01 challenge.
    '''
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        def update_displaybook(self, *args):  # pylint: disable=unused-argument
        ''' Set the display tabs based on executing task '''
        command = self.wrapper_var.get()
        self.remove_tabs()
        if not command or command not in ('extract', 'train', 'convert'):
            return
        self.command_display(command)

    
        def run(self, old_face, new_face, raw_mask):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing color adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(old_face, new_face, raw_mask)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed color adjustment')
        return new_face

    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
            logger.trace('Blending box')
        mask = np.expand_dims(self.mask, axis=-1)
        new_face = np.clip(np.concatenate((new_face, mask), axis=-1), 0.0, 1.0)
        logger.trace('Blended box')
        return new_face

    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face

    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
    
_DEFAULTS = {
    'format': {
        'default': 'png',
        'info': 'Image format to use:'
                '\n\t bmp: Windows bitmap'
                '\n\t jpg: JPEG format'
                '\n\t jp2: JPEG 2000 format'
                '\n\t png: Portable Network Graphics'
                '\n\t ppm: Portable Pixmap Format',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['bmp', 'jpg', 'jp2', 'png', 'ppm'],
        'gui_radio': True,
        'fixed': True,
    },
    'draw_transparent': {
        'default': False,
        'info': 'Place the swapped face on a transparent layer rather than the original frame.'
                '\nNB: This is only compatible with images saved in png format. If an '
                'incompatible format is selected then the image will be saved as a png.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'jpg_quality': {
        'default': 75,
        'info': '[jpg only] Set the jpg quality. 1 is worst 95 is best. Higher quality leads '
                'to larger file sizes.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 95),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'png_compress_level': {
        'default': 3,
        'info': '[png only] ZLIB compression level, 1 gives best speed, 9 gives best '
                'compression, 0 gives no compression at all.',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 9),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        def backwards(self, orm):
        # Removing unique constraint on 'Association', fields ['handle', 'server_url']
        db.delete_unique('social_auth_association', ['handle', 'server_url'])
    
        def forwards(self, orm):
        # Removing unique constraint on 'Association', fields ['server_url', 'handle']
        db.delete_unique(u'social_auth_association', ['server_url', 'handle'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'UserSocialAuth', fields ['provider', 'uid', 'user']
        db.delete_unique(u'social_auth_usersocialauth', ['provider', 'uid', 'user_id'])