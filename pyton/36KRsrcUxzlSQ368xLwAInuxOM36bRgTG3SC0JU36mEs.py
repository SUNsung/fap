
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
    import os
import types
import errno
    
        def get_cookie_samesite(self, app):
        '''Return ``'Strict'`` or ``'Lax'`` if the cookie should use the
        ``SameSite`` attribute. This currently just returns the value of
        the :data:`SESSION_COOKIE_SAMESITE` setting.
        '''
        return app.config['SESSION_COOKIE_SAMESITE']
    
    
def render_template_string(source, **context):
    '''Renders a template from the given template source string
    with the given context. Template variables will be autoescaped.
    
        if release_date.date() != date.today():
        fail(
            'Release date is not today (%s != %s)',
            release_date.date(), date.today()
        )
    
    
def test_memory_consumption():
    app = flask.Flask(__name__)
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    This module provides the capabilities for the Requests hooks system.
    
        Usage::
    
    
class RetryError(RequestException):
    '''Custom retries logic failed'''
    
        def run_tests(self):
        import pytest
    
        @pytest.mark.parametrize(
        ('encoding', 'expected'), (
            ('utf-16-be', 'utf-16'),
            ('utf-16-le', 'utf-16'),
            ('utf-32-be', 'utf-32'),
            ('utf-32-le', 'utf-32')
        ))
    def test_guess_by_bom(self, encoding, expected):
        data = u'\ufeff{}'.encode(encoding)
        assert guess_json_utf(data) == expected
    
        to remove replace in this file ismount( -> os.path.ismount( and remove this
    function'''
    
        parser.add_argument('--key',
                        metavar='KEY',
                        default=api_key,
                        required=not api_key,
                        help='Shippable API key')
    
        The port number is an optional :NN suffix on an IPv4 address or host name,
    or a mandatory :NN suffix on any square-bracketed expression: IPv6 address,
    IPv4 address, or host name. (This means the only way to specify a port for
    an IPv6 address is to enclose it in square brackets.)
    '''
    
        if result is None:
        return '{}'
    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def on_open_shell(self):
        try:
            self._exec_cli_command(b'environment no more')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def test_max_delay(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=60)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 60])
    
        x = conv2d_bn(x, 80, 1, 1, padding='valid')
    x = conv2d_bn(x, 192, 3, 3, padding='valid')
    x = MaxPooling2D((3, 3), strides=(2, 2))(x)
    
    from ..models import Model
from ..layers import Flatten
from ..layers import Dense
from ..layers import Input
from ..layers import Conv2D
from ..layers import MaxPooling2D
from ..layers import GlobalAveragePooling2D
from ..layers import GlobalMaxPooling2D
from ..engine import get_source_inputs
from ..utils import layer_utils
from ..utils.data_utils import get_file
from .. import backend as K
from .imagenet_utils import decode_predictions
from .imagenet_utils import preprocess_input
from .imagenet_utils import _obtain_input_shape
    
    # Reference
    
            # train once so that the states change
        model.train_on_batch(np.ones((num_samples, timesteps)),
                             np.ones((num_samples, units)))
        out2 = model.predict(np.ones((num_samples, timesteps)))
    
            # save the images in the paths
        count = 0
        filenames = []
        for test_images in self.all_test_images:
            for im in test_images:
                # rotate image class
                im_class = count % num_classes
                # rotate subfolders
                classpaths = paths[im_class]
                filename = os.path.join(classpaths[count % len(classpaths)], 'image-{}.jpg'.format(count))
                filenames.append(filename)
                im.save(os.path.join(tmp_folder, filename))
                count += 1
    
        def get_config(self):
        config = {'lr': float(K.get_value(self.lr)),
                  'rho': float(K.get_value(self.rho)),
                  'decay': float(K.get_value(self.decay)),
                  'epsilon': self.epsilon}
        base_config = super(RMSprop, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
        # VAE loss = mse_loss or xent_loss + kl_loss
    if args.mse:
        reconstruction_loss = mse(inputs, outputs)
    else:
        reconstruction_loss = binary_crossentropy(inputs,
                                                  outputs)
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
            return 'MissingTokenException'
    __repr__ = __str__
    
        Errors from the lexer are never passed to the parser.  Either you want
    to keep going or you do not upon token recognition error.  If you do not
    want to continue lexing then you do not want to continue parsing.  Just
    throw an exception not under RecognitionException and Java will naturally
    toss you all the way out of the recognizers.  If you want to continue
    lexing then you should not throw an exception to the parser--it has already
    requested a token.  Keep lexing until you get a valid one.  Just report
    errors and keep going, looking for a valid token.
    '''
    
    def nextToken(self):
        '''Return a Token object from your input stream (usually a CharStream).
        
        Do not fail/return upon lexing error; keep chewing on the characters
        until you get a good one; errors are not passed through to the parser.
        '''
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    
    
    def load_url(url, timeout):
    kwargs = {'timeout': timeout} if sys.version_info >= (2, 6) else {}
    return urlopen(url, **kwargs).read()
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
    
def BuildYcmdLibs( args ):
  if not args.skip_build:
    subprocess.check_call( [
      sys.executable,
      p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    ] )