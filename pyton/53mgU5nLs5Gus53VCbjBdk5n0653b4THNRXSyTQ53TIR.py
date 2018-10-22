
        
        
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_bashrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'bash')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    
class TestLookupDict:
    
            # If response is not 4xx, do not auth
        # See https://github.com/requests/requests/issues/3772
        if not 400 <= r.status_code < 500:
            self._thread_local.num_401_calls = 1
            return r
    
    # -------
# Pythons
# -------
    
    This module provides the capabilities for the Requests hooks system.
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme,
    long_description_content_type='text/markdown',
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.7, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ],
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': ['pyOpenSSL >= 0.14', 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and python_version == '2.7'': ['win_inet_pton'],
    },
)

    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
        # Returns
        List of input tensors.
    '''
    if not hasattr(tensor, '_keras_history'):
        return tensor
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape)(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x[np.newaxis])[0]
    x2 = np.transpose(x, (2, 0, 1))
    inputs2 = Input(shape=x2.shape)
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape)(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2[np.newaxis])[0]
    assert_allclose(out1, out2.transpose(1, 2, 0))
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    from .network import Network
from .base_layer import Layer
from .training_utils import collect_metrics
from .training_utils import check_array_length_consistency
from .training_utils import check_loss_and_target_compatibility
from .training_utils import standardize_class_weights
from .training_utils import standardize_input_data
from .training_utils import standardize_sample_weights
from .training_utils import standardize_weights
from .training_utils import weighted_masked_objective
from . import training_arrays
from . import training_generator
from .. import backend as K
from .. import optimizers
from .. import losses
from .. import metrics as metrics_module
from ..utils.generic_utils import slice_arrays
from ..utils.generic_utils import to_list
from ..utils.generic_utils import unpack_singleton
from ..legacy import interfaces
    
        Example 3 - Training models with weights merge on GPU (recommended for NV-link)
    
            last_output, outputs, states = K.rnn(step,
                                             inputs,
                                             initial_state,
                                             constants=constants,
                                             go_backwards=self.go_backwards,
                                             mask=mask,
                                             input_length=timesteps)
        if self.stateful:
            updates = []
            for i in range(len(states)):
                updates.append((self.states[i], states[i]))
            self.add_update(updates, inputs)
    
    
  def _SendRequest( self ):
    self._response_future = self.PostDataToHandlerAsync(
      self._request_data,
      'receive_messages',
      timeout = TIMEOUT_SECONDS )
    return
    
    
# Not caching the result of this function; users shouldn't have to restart Vim
# after running the install script or setting the
# `g:ycm_server_python_interpreter` option.
def PathToPythonInterpreter():
  # Not calling the Python interpreter to check its version as it significantly
  # impacts startup time.
  from ycmd import utils
    
    
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

    
      eq_( len( results ), len( expected_results ) )
  for result, expected_result in zip( results, expected_results ):
    assert_that( result, expected_result )

    
    from ycm.tests import PathToTestFile, YouCompleteMeInstance
from ycmd.responses import ServerError
    
    
def LevelErrors_test():
  opts = _JavaFilter( { 'level' : 'error' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
    
def MockAsyncServerResponseInProgress():
  '''Return a fake future object that is incomplete. Suitable for mocking a
  response future within a client request. For example:
    
    
def GetCompletionsUserMayHaveCompleted_DontReturnMatchIfNoExactMatchesAndPartial_test(): # noqa
  info = [ 'NS', 'Test', 'Abbr', 'Menu', 'Info', 'Kind' ]
  completions = [ BuildCompletion( insertion_text = info[ 0 ] ),
                  BuildCompletion( insertion_text = 'TestTest' ) ]
  with _SetupForCsharpCompletionDone( completions ) as request:
    with patch( 'ycm.vimsupport.GetVariableValue',
                GetVariableValue_CompleteItemIs( *info[ 1: ] ) ):
      eq_( request._GetCompletionsUserMayHaveCompleted(), [] )
    
      diagnostics = [
    {
      'kind': 'ERROR',
      'text': 'error text in current buffer',
      'location': {
        'filepath': '/current',
        'line_num': 1,
        'column_num': 1
      },
      'location_extent': {
        'start': {
          'filepath': '/current',
          'line_num': 1,
          'column_num': 1,
        },
        'end': {
          'filepath': '/current',
          'line_num': 1,
          'column_num': 1,
        }
      },
      'ranges': []
    },
    {
      'kind': 'ERROR',
      'text': 'error text in hidden buffer',
      'location': {
        'filepath': '/has_diags',
        'line_num': 4,
        'column_num': 2
      },
      'location_extent': {
        'start': {
          'filepath': '/has_diags',
          'line_num': 4,
          'column_num': 2,
        },
        'end': {
          'filepath': '/has_diags',
          'line_num': 4,
          'column_num': 2,
        }
      },
      'ranges': []
    },
    {
      'kind': 'ERROR',
      'text': 'error text in buffer not open in Vim',
      'location': {
        'filepath': '/not_open',
        'line_num': 8,
        'column_num': 4
      },
      'location_extent': {
        'start': {
          'filepath': '/not_open',
          'line_num': 8,
          'column_num': 4,
        },
        'end': {
          'filepath': '/not_open',
          'line_num': 8,
          'column_num': 4,
        }
      },
      'ranges': []
    }
  ]
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    
def Main():
  ( parsed_args, nosetests_args ) = ParseArguments()
  if not parsed_args.no_flake8:
    RunFlake8()
  BuildYcmdLibs( parsed_args )
  NoseTests( parsed_args, nosetests_args )