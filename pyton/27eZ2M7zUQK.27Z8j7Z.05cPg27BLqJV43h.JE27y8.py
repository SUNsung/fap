
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    from .common import InfoExtractor
from ..utils import (
    int_or_none,
    parse_duration,
    unified_strdate,
)
    
        # by setting the `trainable` argument, in Model
    x = Input(shape=(1,))
    layer = Dense(2)
    y = layer(x)
    model = Model(x, y)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
    from __future__ import print_function
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    # the data, shuffled and split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    
def test_sigmoid():
    '''Test using a numerically stable reference sigmoid implementation.
    '''
    def ref_sigmoid(x):
        if x >= 0:
            return 1 / (1 + np.exp(-x))
        else:
            z = np.exp(x)
            return z / (1 + z)
    sigmoid = np.vectorize(ref_sigmoid)
    
    model = Sequential()
model.add(Dense(512, activation='relu', input_shape=(784,)))
model.add(Dropout(0.2))
model.add(Dense(512, activation='relu'))
model.add(Dropout(0.2))
model.add(Dense(num_classes, activation='softmax'))
    
            try:
            # use repr so that we can distinguish between -0.0 and 0.0
            expected = repr(truediv(a, b))
        except OverflowError:
            expected = 'overflow'
        except ZeroDivisionError:
            expected = 'zerodivision'
    
        def test_secure_httponly_true_if_have_value(self):
        # This isn't really valid, but demonstrates what the current code
        # is expected to do in this case.
        C = cookies.SimpleCookie()
        C.load('eggs=scrambled; httponly=foo; secure=bar; Path=/bacon')
        self.assertTrue(C['eggs']['httponly'])
        self.assertTrue(C['eggs']['secure'])
        # Here is what it actually does; don't depend on this behavior.  These
        # checks are testing backward compatibility for issue 16611.
        self.assertEqual(C['eggs']['httponly'], 'foo')
        self.assertEqual(C['eggs']['secure'], 'bar')
    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
    
class Test_pygettext(unittest.TestCase):
    '''Tests for the pygettext.py tool'''
    
        >>> diff = ndiff('one\ntwo\nthree\n'.splitlines(keepends=True),
    ...              'ore\ntree\nemu\n'.splitlines(keepends=True))
    >>> diff = list(diff)
    >>> print(''.join(restore(diff, 1)), end='')
    one
    two
    three
    >>> print(''.join(restore(diff, 2)), end='')
    ore
    tree
    emu
    '''
    try:
        tag = {1: '- ', 2: '+ '}[int(which)]
    except KeyError:
        raise ValueError('unknown delta choice (must be 1 or 2): %r'
                           % which) from None
    prefixes = ('  ', tag)
    for line in delta:
        if line[:2] in prefixes:
            yield line[2:]
    
        Returns a tuple of the decoded string and the index of the character in s
    after the end quote.'''
    chunks = []
    _append = chunks.append
    begin = end - 1
    while 1:
        chunk = _m(s, end)
        if chunk is None:
            raise JSONDecodeError('Unterminated string starting at', s, begin)
        end = chunk.end()
        content, terminator = chunk.groups()
        # Content is contains zero or more unescaped string characters
        if content:
            _append(content)
        # Terminator is the end of string, a literal control character,
        # or a backslash denoting that an escape sequence follows
        if terminator == ''':
            break
        elif terminator != '\\':
            if strict:
                #msg = 'Invalid control character %r at' % (terminator,)
                msg = 'Invalid control character {0!r} at'.format(terminator)
                raise JSONDecodeError(msg, s, end)
            else:
                _append(terminator)
                continue
        try:
            esc = s[end]
        except IndexError:
            raise JSONDecodeError('Unterminated string starting at',
                                  s, begin) from None
        # If not a unicode escape sequence, must be in the lookup table
        if esc != 'u':
            try:
                char = _b[esc]
            except KeyError:
                msg = 'Invalid \\escape: {0!r}'.format(esc)
                raise JSONDecodeError(msg, s, end)
            end += 1
        else:
            uni = _decode_uXXXX(s, end)
            end += 5
            if 0xd800 <= uni <= 0xdbff and s[end:end + 2] == '\\u':
                uni2 = _decode_uXXXX(s, end + 1)
                if 0xdc00 <= uni2 <= 0xdfff:
                    uni = 0x10000 + (((uni - 0xd800) << 10) | (uni2 - 0xdc00))
                    end += 6
            char = chr(uni)
        _append(char)
    return ''.join(chunks), end
    
        def _statparse(self, resp):
        '''Internal: parse the response line of a STAT, NEXT, LAST,
        ARTICLE, HEAD or BODY command.'''
        if not resp.startswith('22'):
            raise NNTPReplyError(resp)
        words = resp.split()
        art_num = int(words[1])
        message_id = words[2]
        return resp, art_num, message_id
    
        FILTER_ACCEPT = 1
    FILTER_REJECT = 2
    FILTER_SKIP = 3
    FILTER_INTERRUPT = 4
    
    
@cpython_only
class FastCallTests(unittest.TestCase):
    # Test calls with positional arguments
    CALLS_POSARGS = (
        # (func, args: tuple, result)