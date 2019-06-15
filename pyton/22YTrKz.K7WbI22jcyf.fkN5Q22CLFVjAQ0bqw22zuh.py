
        
        
def test_for_generic_shell(shell, logs):
    shell.how_to_configure.return_value = None
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
    
def test_get_new_command():
    new_command = get_new_command(Command('apt list --upgradable', match_output))
    assert new_command == 'apt upgrade'
    
        def test_merge_sort(self):
        merge_sort = MergeSort()
    
            print('Test: More than one element')
        stack = Stack()
        stack.push(1)
        stack.push(2)
        stack.push(3)
        assert_equal(stack.pop(), 3)
        assert_equal(stack.peek(), 2)
        assert_equal(stack.pop(), 2)
        assert_equal(stack.peek(), 1)
        assert_equal(stack.is_empty(), False)
        assert_equal(stack.pop(), 1)
        assert_equal(stack.peek(), None)
        assert_equal(stack.is_empty(), True)
    
    		def PreOrder (node):
			if node is not None:
				preOrder.append(node.data)
				PreOrder(node.leftChild)
				PreOrder(node.rightChild)
    
    
class PriorityQueueNode(object):
    
    UCS2BE_ST  = (
          5,     7,     7,MachineState.ERROR,     4,     3,MachineState.ERROR,MachineState.ERROR,#00-07
     MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,#08-0f
     MachineState.ITS_ME,MachineState.ITS_ME,     6,     6,     6,     6,MachineState.ERROR,MachineState.ERROR,#10-17
          6,     6,     6,     6,     6,MachineState.ITS_ME,     6,     6,#18-1f
          6,     6,     6,     6,     5,     7,     7,MachineState.ERROR,#20-27
          5,     8,     6,     6,MachineState.ERROR,     6,     6,     6,#28-2f
          6,     6,     6,     6,MachineState.ERROR,MachineState.ERROR,MachineState.START,MachineState.START #30-37
)
    
            charset_name = self._model['charset_name']
        if self.state == ProbingState.DETECTING:
            if self._total_seqs > self.SB_ENOUGH_REL_THRESHOLD:
                confidence = self.get_confidence()
                if confidence > self.POSITIVE_SHORTCUT_THRESHOLD:
                    self.logger.debug('%s confidence = %s, we have a winner',
                                      charset_name, confidence)
                    self._state = ProbingState.FOUND_IT
                elif confidence < self.NEGATIVE_SHORTCUT_THRESHOLD:
                    self.logger.debug('%s confidence = %s, below negative '
                                      'shortcut threshhold %s', charset_name,
                                      confidence,
                                      self.NEGATIVE_SHORTCUT_THRESHOLD)
                    self._state = ProbingState.NOT_ME
    
        def __init__(self, lang_filter=LanguageFilter.ALL):
        self._esc_charset_prober = None
        self._charset_probers = []
        self.result = None
        self.done = None
        self._got_data = None
        self._input_state = None
        self._last_char = None
        self.lang_filter = lang_filter
        self.logger = logging.getLogger(__name__)
        self._has_win_bytes = None
        self.reset()
    
        def get_confidence(self):
        unlike = 0.99
        if self._num_mb_chars < 6:
            unlike *= self.ONE_CHAR_PROB ** self._num_mb_chars
            return 1.0 - unlike
        else:
            return unlike

    
    from .charsetprober import CharSetProber
from .enums import ProbingState, MachineState
from .codingstatemachine import CodingStateMachine
from .mbcssm import UTF8_SM_MODEL
    
        def save_complete(self):
        if self.steps is not None:
            self.episode_lengths.append(self.steps)
            self.episode_rewards.append(float(self.rewards))
            self.timestamps.append(time.time())
    
        if modified:
        logger.info('Writing new rollout file to {}'.format(ROLLOUT_FILE))
        with open(ROLLOUT_FILE, 'w') as outfile:
            json.dump(rollout_dict, outfile, indent=2, sort_keys=True)
    else:
        logger.info('No modifications needed.')
    
    class TestInputGeneration(unittest.TestCase):
    '''Test random input generation.
    '''
    def test_tape_inputs(self):
        for env_kls in ALL_TAPE_ENVS:
            env = env_kls()
            for size in range(2,5):
                input_tape = env.generate_input_data(size)
                self.assertTrue(all(0<=x<=env.base for x in input_tape),
                'Invalid input tape from env {}: {}'.format(env_kls, input_tape))
                # DuplicatedInput needs to generate inputs with even length,
                # so it may be short one
                self.assertLessEqual(len(input_tape), size)
    
        def parse(self, argv):
        command_help = getdoc(self.command_class)
        options = docopt_full_help(command_help, argv, **self.options)
        command = options['COMMAND']
    
        def format(self, record):
        if isinstance(record.msg, six.binary_type):
            record.msg = record.msg.decode('utf-8')
        message = super(ConsoleWarningFormatter, self).format(record)
        return '{0}{1}'.format(self.get_level_message(record), message)

    
    from .testcases import DockerClientTestCase
from compose.config.errors import ConfigurationError
from compose.const import LABEL_NETWORK
from compose.const import LABEL_PROJECT
from compose.network import Network
    
        def test_api_error_version_other_unicode_explanation(self, mock_logging):
        msg = u'Something broke!'
        with pytest.raises(errors.ConnectionError):
            with handle_connection_errors(mock.Mock(api_version='1.22')):
                raise APIError(None, None, msg)
    
        def assert_produces(self, reader, expectations):
        split = split_buffer(reader())
    
    
@pytest.fixture
def mock_client():
    return mock.create_autospec(docker.APIClient)