
        
        - name: set the memory to 16GB and cpu to 8 core on a lust if servers
  clc_modify_server:
    server_ids:
        - UC1TESTSVR01
        - UC1TESTSVR02
    cpu: 8
    memory: 16
    state: present
'''
    
    import random
import threading
import time
import os
from front_base.random_get_slice import RandomGetSlice
    
        if 'Content-Encoding' in headers:
        if headers['Content-Encoding'] == 'deflate':
            payload = zlib.decompress(payload, -zlib.MAX_WBITS)
            headers['Content-Length'] = str(len(payload))
            del headers['Content-Encoding']
    
                if isinstance(self.input, TokenStream):
                self.token = self.input.LT(1)
                self.line = self.token.line
                self.charPositionInLine = self.token.charPositionInLine
    
            if isinstance(e, UnwantedTokenException):
            tokenName = '<unknown>'
            if e.expecting == EOF:
                tokenName = 'EOF'
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
        entry_points={
        'console_scripts': [
            'certbot = certbot.main:main',
        ],
        'certbot.plugins': [
            'manual = certbot.plugins.manual:Authenticator',
            'null = certbot.plugins.null:Installer',
            'standalone = certbot.plugins.standalone:Authenticator',
            'webroot = certbot.plugins.webroot:Authenticator',
        ],
    },
)

    
            # _query_soa | pylint: disable=protected-access
        result = self.rfc2136_client._query_soa(DOMAIN)
    
        # list of integers
    result = s.iloc[[0, 2, 3, 4, 5]]
    expected = s.reindex(s.index[[0, 2, 3, 4, 5]])
    assert_series_equal(result, expected)
    
        def test_pi_offset_errors(self):
        idx = PeriodIndex(
            ['2011-01-01', '2011-02-01', '2011-03-01', '2011-04-01'],
            freq='D',
            name='idx',
        )
        ser = pd.Series(idx)
    
            if allow_fill and fill_value is None:
            fill_value = self.dtype.na_value
    
    
class TestArithmeticOps(BaseDecimal, base.BaseArithmeticOpsTests):
    def check_opname(self, s, op_name, other, exc=None):
        super().check_opname(s, op_name, other, exc=None)
    
            # needed to add this check for the Series constructor
        if isinstance(dtype, type(self.dtype)) and dtype == self.dtype:
            if copy:
                return self.copy()
            return self
        return np.array([dict(x) for x in self], dtype=dtype, copy=copy)
    
        # all NA case
    if has_skipna:
        all_na = frame * np.NaN
        r0 = getattr(all_na, opname)(axis=0)
        r1 = getattr(all_na, opname)(axis=1)
        if opname == 'any':
            assert not r0.any()
            assert not r1.any()
        else:
            assert r0.all()
            assert r1.all()
    
            # mixed non-null / full null column
        df = DataFrame(
            {
                'a': [
                    pd.Timestamp('2012-01-01'),
                    pd.Timestamp('2012-01-02'),
                    pd.Timestamp('2012-01-03'),
                ],
                'b': [pd.NaT, pd.NaT, pd.NaT],
            }
        )
    
        # If not a dictionary or a list, the response is necessarily a
    # scalar: boolean, number, string, etc. In this case, we print
    # it to the user.
    if not isinstance( self._response, ( dict, list ) ):
      return self._HandleBasicResponse()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
        lut = {}
    for value in values:
        k, v = keyval(value)
        try:
            s = lut[k]
        except KeyError:
            if use_lists:
                s = lut[k] = list()
            else:
                s = lut[k] = set()
        if use_lists:
            s.append(v)
        else:
            s.add(v)
    return dict(lut)
    
        path = _get_path(path)
    if path is None:
        raise TypeError('expected a valid path to encode')
    if isinstance(path, six.text_type):
        if six.PY2:
            return b''.join(
                (
                    _byte(ord(c) - 0xDC00)
                    if 0xDC00 <= ord(c) <= 0xDCFF
                    else c.encode(_fs_encoding, _fs_encode_errors)
                )
                for c in path
            )
        return path.encode(_fs_encoding, _fs_encode_errors)
    return path
    
    
class PipfileException(PipenvFileError):
    def __init__(self, hint=None, **kwargs):
        from .core import project
    
    from pytest import mark
    
    
def test_expansion_in_nested_schema():
    schema = {'detroit': {'schema': {'anyof_regex': ['^Aladdin', 'Sane$']}}}
    v = Validator(schema)
    assert v.schema['detroit']['schema'] == {
        'anyof': [{'regex': '^Aladdin'}, {'regex': 'Sane$'}]
    }
    
        Parameters
    ----------
    complete_options : bool
        always complete the options, even when the user hasn't typed a first dash (Default value = False)
    match_incomplete : func
        a function with two parameters choice and incomplete. Must return True
        if incomplete is a correct match for choice, False otherwise.
    '''
    global _initialized
    if not _initialized:
        _patch()
        completion_configuration.complete_options = complete_options
        if match_incomplete is not None:
            completion_configuration.match_incomplete = match_incomplete
        _initialized = True
    
            :param req: The request to send.
        :return: The HTTP response from PyPI (a standard library HTTPResponse).
        '''
        handlers = []
        if self.password_handler:
            handlers.append(self.password_handler)
        if self.ssl_verifier:
            handlers.append(self.ssl_verifier)
        opener = build_opener(*handlers)
        return opener.open(req)
    
        def seed(self, seed=None):
        self.np_random, seed = seeding.np_random(seed)
        return [seed]
    
                                if action == 0:
                                new_row = min(row + 1, max_row)
                            elif action == 1:
                                new_row = max(row - 1, 0)
                            if action == 2 and self.desc[1 + row, 2 * col + 2] == b':':
                                new_col = min(col + 1, max_col)
                            elif action == 3 and self.desc[1 + row, 2 * col] == b':':
                                new_col = max(col - 1, 0)
                            elif action == 4:  # pickup
                                if (pass_idx < 4 and taxi_loc == locs[pass_idx]):
                                    new_pass_idx = 4
                                else: # passenger not at location
                                    reward = -10
                            elif action == 5:  # dropoff
                                if (taxi_loc == locs[dest_idx]) and pass_idx == 4:
                                    new_pass_idx = dest_idx
                                    done = True
                                    reward = 20
                                elif (taxi_loc in locs) and pass_idx == 4:
                                    new_pass_idx = locs.index(taxi_loc)
                                else: # dropoff at wrong location
                                    reward = -10
                            new_state = self.encode(
                                new_row, new_col, new_pass_idx, dest_idx)
                            P[state][action].append(
                                (1.0, new_state, reward, done))
        initial_state_distrib /= initial_state_distrib.sum()
        discrete.DiscreteEnv.__init__(
            self, num_states, num_actions, P, initial_state_distrib)
    
    class MemorizeDigits(gym.Env):
    metadata = {
        'render.modes': ['human', 'rgb_array'],
        'video.frames_per_second' : 60,
        'video.res_w' : FIELD_W,
        'video.res_h' : FIELD_H,
    }