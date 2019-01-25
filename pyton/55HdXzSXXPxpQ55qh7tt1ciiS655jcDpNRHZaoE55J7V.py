
        
        # read in SQL for populating test data
with open(os.path.join(os.path.dirname(__file__), 'data.sql'), 'rb') as f:
    _data_sql = f.read().decode('utf8')
    
        # test that successful login redirects to the index page
    response = auth.login()
    assert response.headers['Location'] == 'http://localhost/'
    
        auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
    
class UnexpectedUnicodeError(AssertionError, UnicodeError):
    '''Raised in places where we want some better error reporting for
    unexpected unicode or binary data.
    '''
    
            # on exit we want to clean up earlier.  Normally the request context
        # stays preserved until the next request in the same thread comes
        # in.  See RequestGlobals.push() for the general behavior.
        top = _request_ctx_stack.top
        if top is not None and top.preserved:
            top.pop()
    
            app.add_url_rule('/hello/<name>', view_func=MyView.as_view('myview'))
    
    from werkzeug.exceptions import BadRequest
from werkzeug.wrappers import Request as RequestBase, Response as ResponseBase
    
    
def testSignedInt():
    check(b'\x99\xd0\x00\xd0\x80\xd0\xff\xd1\x00\x00\xd1\x80\x00'
          b'\xd1\xff\xff\xd2\x00\x00\x00\x00\xd2\x80\x00\x00\x00'
          b'\xd2\xff\xff\xff\xff', (0,
                                    -128,
                                    -1,
                                    0,
                                    -32768,
                                    -1,
                                    0,
                                    -2147483648,
                                    -1, ))
    
            Parameters
        ----------
        declarations_str : str
            A list of CSS declarations
        inherited : dict, optional
            Atomic properties indicating the inherited style context in which
            declarations_str is to be resolved. ``inherited`` should already
            be resolved, i.e. valid output of this method.
    
        expected = pd.Series([1, 2, inc, 4])
    tm.assert_series_equal(s, expected)

    
    # 0 : illegal
# 1 : very unlikely
# 2 : normal
# 3 : very likely
Latin1ClassModel = (
# UDF OTH ASC ASS ACV ACO ASV ASO
    0,  0,  0,  0,  0,  0,  0,  0,  # UDF
    0,  3,  3,  3,  3,  3,  3,  3,  # OTH
    0,  3,  3,  3,  3,  3,  3,  3,  # ASC
    0,  3,  3,  3,  1,  1,  3,  3,  # ASS
    0,  3,  3,  3,  1,  2,  1,  2,  # ACV
    0,  3,  3,  3,  3,  3,  3,  3,  # ACO
    0,  3,  1,  3,  1,  1,  1,  3,  # ASV
    0,  3,  1,  3,  1,  1,  3,  3,  # ASO
)
    
    FREQ_CAT_NUM = 4
    
            return self.state
    
    UTF8_SM_MODEL = {'class_table': UTF8_CLS,
                 'class_factor': 16,
                 'state_table': UTF8_ST,
                 'char_len_table': UTF8_CHAR_LEN_TABLE,
                 'name': 'UTF-8'}

    
    from .mbcharsetprober import MultiByteCharSetProber
from .codingstatemachine import CodingStateMachine
from .chardistribution import SJISDistributionAnalysis
from .jpcntx import SJISContextAnalysis
from .mbcssm import SJIS_SM_MODEL
from .enums import ProbingState, MachineState
    
        def feed(self, byte_str):
        for c in byte_str:
            coding_state = self.coding_sm.next_state(c)
            if coding_state == MachineState.ERROR:
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                if self.coding_sm.get_current_charlen() >= 2:
                    self._num_mb_chars += 1