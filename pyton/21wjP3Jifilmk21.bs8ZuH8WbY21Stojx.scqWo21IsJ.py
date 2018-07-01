
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
    
class FlaskyStyle(Style):
    background_color = '#f8f8f8'
    default_style = ''
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
        def __getstate__(self):
        return dict((attr, getattr(self, attr, None)) for attr in
                    self.__attrs__)
    
        @pytest.mark.parametrize(
        'timeout', (
            None,
            Urllib3Timeout(connect=None, read=None)
        ))
    def test_none_timeout(self, httpbin, timeout):
        '''Check that you can set None as a valid timeout value.
    
    This module handles import compatibility issues between Python 2 and
Python 3.
'''
    
            cid = CaseInsensitiveDict()
        cid['Accept'] = 'application/json'
        cid['aCCEPT'] == 'application/json'  # True
        list(cid) == ['Accept']  # True
    
    
@keras_test
def test_locallyconnected_1d():
    num_samples = 2
    num_steps = 8
    input_dim = 5
    filter_length = 3
    filters = 4
    padding = 'valid'
    strides = 1
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
        for data_format in ['channels_first', 'channels_last']:
        if data_format == 'channels_first':
            shape = (3, 5, 5)
            target_shape = (5, 5, 3)
            prev_shape = (2, 3, 2)
            flip = lambda x: np.flip(np.flip(x, axis=2), axis=3)
            transpose = lambda x: np.transpose(x, (0, 2, 3, 1))
            target_data_format = 'channels_last'
        elif data_format == 'channels_last':
            shape = (5, 5, 3)
            target_shape = (3, 5, 5)
            prev_shape = (2, 2, 3)
            flip = lambda x: np.flip(np.flip(x, axis=1), axis=2)
            transpose = lambda x: np.transpose(x, (0, 3, 1, 2))
            target_data_format = 'channels_first'
    
    
def get_example_array():
    np.random.seed(3537)
    example_array = np.random.random((100, 100)) * 100. - 50.
    example_array[0, 0] = 0.  # 0 could possibly cause trouble
    return example_array
    
    
def test_hard_sigmoid():
    '''Test using a reference hard sigmoid implementation.
    '''
    def ref_hard_sigmoid(x):
        x = (x * 0.2) + 0.5
        z = 0.0 if x <= 0 else (1.0 if x >= 1 else x)
        return z
    hard_sigmoid = np.vectorize(ref_hard_sigmoid)
    
    
def ismount(path):
    '''Test whether a path is a mount point
    clone of os.path.ismount (from cpython Lib/posixpath.py)
    fixed to solve https://github.com/ansible/ansible-modules-core/issues/2186
    and workaround non-fixed http://bugs.python.org/issue2466
    this should be rewritten as soon as python issue 2466 is fixed
    probably check for python version and use os.path.ismount if fixed
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def test_max_delay_none(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=None)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 64])
    
            Using setter/getter methods is deprecated. Use o.line instead.'''
    
    And tree.TreeParser finally fetches its input from a tree.TreeNodeStream:
    
                    # not in range and not EOF/EOT, must be invalid symbol
                self.noViableAlt(s, input)
                return 0
    
        To avoid English-only error messages and to generally make things
    as flexible as possible, these exceptions are not created with strings,
    but rather the information necessary to generate an error.  Then
    the various reporting methods in Parser and Lexer can be overridden
    to generate a localized error message.  For example, MismatchedToken
    exceptions are built with the expected token type.
    So, don't expect getMessage() to return anything.