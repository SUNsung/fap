
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
                if match is None:
                continue
    
    def rabinMiller(num):
    s = num - 1
    t = 0
    
        context['show_on_github_url'] = show_url
    context['edit_on_github_url'] = edit_url
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/notify.clickatell/
'''
import logging
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/notify.file/
'''
import logging
import os
    
            _LOGGER.debug('Attempting to call Flock at %s', self._url)
    
    REQUIREMENTS = ['freesms==0.1.2']
    
            if method not in ATTR_METHOD_ALLOWED:
            _LOGGER.error('Unknown method %s', method)
            return
    
        def feed(self, byte_str):
        for i in range(len(byte_str)):
            coding_state = self.coding_sm.next_state(byte_str[i])
            if coding_state == MachineState.ERROR:
                self.logger.debug('%s %s prober hit error at byte %s',
                                  self.charset_name, self.language, i)
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                char_len = self.coding_sm.get_current_charlen()
                if i == 0:
                    self._last_char[1] = byte_str[0]
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)
    
            return self.state
    
    EUCTW_CHAR_LEN_TABLE = (0, 0, 1, 2, 2, 2, 3)
    
    EUCKR_SM_MODEL = {'class_table': EUCKR_CLS,
                'class_factor': 4,
                'state_table': EUCKR_ST,
                'char_len_table': EUCKR_CHAR_LEN_TABLE,
                'name': 'EUC-KR'}
    
        def __init__(self, model, reversed=False, name_prober=None):
        super(SingleByteCharSetProber, self).__init__()
        self._model = model
        # TRUE if we need to reverse every pair in the model lookup
        self._reversed = reversed
        # Optional auxiliary prober for name decision
        self._name_prober = name_prober
        self._last_order = None
        self._seq_counters = None
        self._total_seqs = None
        self._total_char = None
        self._freq_char = None
        self.reset()
    
    from .mbcharsetprober import MultiByteCharSetProber
from .codingstatemachine import CodingStateMachine
from .chardistribution import SJISDistributionAnalysis
from .jpcntx import SJISContextAnalysis
from .mbcssm import SJIS_SM_MODEL
from .enums import ProbingState, MachineState
    
            # If we've seen escape sequences, use the EscCharSetProber, which
        # uses a simple state machine to check for known escape sequences in
        # HZ and ISO-2022 encodings, since those are the only encodings that
        # use such sequences.
        if self._input_state == InputState.ESC_ASCII:
            if not self._esc_charset_prober:
                self._esc_charset_prober = EscCharSetProber(self.lang_filter)
            if self._esc_charset_prober.feed(byte_str) == ProbingState.FOUND_IT:
                self.result = {'encoding':
                               self._esc_charset_prober.charset_name,
                               'confidence':
                               self._esc_charset_prober.get_confidence(),
                               'language':
                               self._esc_charset_prober.language}
                self.done = True
        # If we've seen high bytes (i.e., those with values greater than 127),
        # we need to do more complicated checks using all our multi-byte and
        # single-byte probers that are left.  The single-byte probers
        # use character bigram distributions to determine the encoding, whereas
        # the multi-byte probers use a combination of character unigram and
        # bigram distributions.
        elif self._input_state == InputState.HIGH_BYTE:
            if not self._charset_probers:
                self._charset_probers = [MBCSGroupProber(self.lang_filter)]
                # If we're checking non-CJK encodings, use single-byte prober
                if self.lang_filter & LanguageFilter.NON_CJK:
                    self._charset_probers.append(SBCSGroupProber())
                self._charset_probers.append(Latin1Prober())
            for prober in self._charset_probers:
                if prober.feed(byte_str) == ProbingState.FOUND_IT:
                    self.result = {'encoding': prober.charset_name,
                                   'confidence': prober.get_confidence(),
                                   'language': prober.language}
                    self.done = True
                    break
            if self.WIN_BYTE_DETECTOR.search(byte_str):
                self._has_win_bytes = True
    
        def __init__(self):
        super(UTF8Prober, self).__init__()
        self.coding_sm = CodingStateMachine(UTF8_SM_MODEL)
        self._num_mb_chars = None
        self.reset()
    
        nonce = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(9))
    filename = topic_name.replace('/', '.') + '.' + nonce
    filename = os.path.join(PATH_CHEAT_SHEETS_SPOOL, filename)
    
    if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
    PALETTES = {
    0: {
        1: Fore.WHITE,
        2: Style.DIM,
    },
    1: {
        1: Fore.CYAN,
        2: Fore.GREEN,
        3: colored.fg('orange_3'),
        4: Style.DIM,
        5: Style.DIM,
    },
    2: {
        1: Fore.RED,
        2: Style.DIM,
    },
}
    
    if os.environ.get('REDIS_HOST', '').lower() != 'none':
    _REDIS = redis.StrictRedis(host=REDISHOST, port=6379, db=0)
else:
    _REDIS = None