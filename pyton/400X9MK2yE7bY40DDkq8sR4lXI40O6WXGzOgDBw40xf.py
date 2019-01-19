
        
          def __init__(self, zs, prior_zs):
    '''Create a lower bound in three parts, normalized reconstruction
    cost, normalized KL divergence cost, and their sum.
    
          if self.hps.co_dim > 0:
        controller_outputs[es_idx,:,:] = model_values['controller_outputs']
      gen_states[es_idx,:,:] = model_values['gen_states']
      factors[es_idx,:,:] = model_values['factors']
      out_dist_params[es_idx,:,:] = model_values['output_dist_params']
      costs[es_idx] = model_values['costs']
      nll_bound_vaes[es_idx] = model_values['nll_bound_vaes']
      nll_bound_iwaes[es_idx] = model_values['nll_bound_iwaes']
      train_steps[es_idx] = model_values['train_steps']
      print('bound nll(vae): %.3f, bound nll(iwae): %.3f' \
            % (nll_bound_vaes[es_idx], nll_bound_iwaes[es_idx]))
    
    import numpy as np
import tensorflow as tf
    
      def encode(self, sentence):
    word_ids = [self.word_to_id(cur_word) for cur_word in sentence.split()]
    return np.array([self.bos] + word_ids + [self.eos], dtype=np.int32)
    
    ## Sample Generation.
## Binary and setup FLAGS.
tf.app.flags.DEFINE_enum('sample_mode', 'TRAIN',
                         [SAMPLE_TRAIN, SAMPLE_VALIDATION],
                         'Dataset to sample from.')
tf.app.flags.DEFINE_string('output_path', '/tmp', 'Model output directory.')
tf.app.flags.DEFINE_boolean(
    'output_masked_logs', False,
    'Whether to display for human evaluation (show masking).')
tf.app.flags.DEFINE_integer('number_epochs', 1,
                            'The number of epochs to produce.')
    
      wasserstein_loss = real_avg - fake_avg
  return wasserstein_loss
    
      for n in xrange(num_batches):
    indices_batch = indices[n]
    new_arr_batch = new_arr[n]
    
      return missing_ce_loss
    
    from six.moves import xrange
    
      Further usage can be found in the `kernel_tests/seq2seq_test.py`.
    
        def iter_body(self):
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
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
    
        if K.image_data_format() == 'channels_last':
        x_train = x_train.transpose(0, 2, 3, 1)
        x_test = x_test.transpose(0, 2, 3, 1)
    
        # Arguments
        model: Keras model instance.
        line_length: Total length of printed lines
            (e.g. set this to adapt the display to different
            terminal window sizes).
        positions: Relative or absolute positions of log elements in each line.
            If not provided, defaults to `[.33, .55, .67, 1.]`.
        print_fn: Print function to use.
            It will be called on each line of the summary.
            You can set it to a custom function
            in order to capture the string summary.
            It defaults to `print` (prints to stdout).
    '''
    if print_fn is None:
        print_fn = print
    
    
def test_decode_predictions():
    x = np.zeros((2, 1000))
    x[0, 372] = 1.0
    x[1, 549] = 1.0
    outs = utils.decode_predictions(x, top=1)
    scores = [out[0][2] for out in outs]
    assert scores[0] == scores[1]
    
    Settings: rotation = 30.0
----------------------------------------------------------------------------
Epoch     | ImageGenerator | ImageGenerator | AugmentLayer  | Augment Layer
Number    | %Accuracy      | Performance    | %Accuracy     | Performance
----------------------------------------------------------------------------
1         | 43.46          | 15ms/step      | 42.21         | 334us/step
2         | 48.95          | 11ms/step      | 48.06         | 282us/step
8         | 63.59          | 11ms/step      | 61.35         | 290us/step
25        | 72.25          | 12ms/step      | 71.08         | 287us/step
100       | 76.35          | 11ms/step      | 74.62         | 286us/step
---------------------------------------------------------------------------
(Corner process and rotation precision by `ImageGenerator` and `AugmentLayer`
are slightly different.)
'''
    
        def rollback_checkpoints(self, rollback=1):
        '''Rollback saved checkpoints.
    
        def get_sni_addr(self, port):
        '''Returns the least specific address that resolves on the port.
    
        def test_recovery_routine_error(self):
        self.config.reverter.recovery_routine = mock.Mock(
            side_effect=errors.ReverterError)
    
    from certbot_apache import configurator
from certbot_apache import entrypoint
    
            # Make sure calls made to mocked function were correct
        self.assertEqual(
            mock_setup_cert.call_args_list[0], mock.call(self.achalls[0]))
        self.assertEqual(
            mock_setup_cert.call_args_list[1], mock.call(self.achalls[1]))
    
    # If true, show URL addresses after external links.
#latex_show_urls = False
    
    
def read_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> str:
    '''Return the decoded string of the resource.
    
    import smtplib
    
    
def main():
    parser = ArgumentParser(description='''\
Send the contents of a directory as a MIME message.
Unless the -o option is given, the email is sent by forwarding to your local
SMTP server, which then does the normal delivery process.  Your local machine
must be running an SMTP server.
''')
    parser.add_argument('-d', '--directory',
                        help='''Mail the contents of the specified directory,
                        otherwise use the current directory.  Only the regular
                        files in the directory are sent, and we don't recurse to
                        subdirectories.''')
    parser.add_argument('-o', '--output',
                        metavar='FILE',
                        help='''Print the composed message to FILE instead of
                        sending the message to the SMTP server.''')
    parser.add_argument('-s', '--sender', required=True,
                        help='The value of the From: header (required)')
    parser.add_argument('-r', '--recipient', required=True,
                        action='append', metavar='RECIPIENT',
                        default=[], dest='recipients',
                        help='A To: header value (at least one required)')
    args = parser.parse_args()
    directory = args.directory
    if not directory:
        directory = '.'
    # Create the message
    msg = EmailMessage()
    msg['Subject'] = 'Contents of directory %s' % os.path.abspath(directory)
    msg['To'] = ', '.join(args.recipients)
    msg['From'] = args.sender
    msg.preamble = 'You will not see this in a MIME-aware mail reader.\n'
    
    #
# Function used to calculate result
#