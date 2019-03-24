
        
            return render_template('blog/update.html', post=post)
    
        yield app
    
        assert 'closed' in str(e)
    
    
#: Log messages to :func:`~flask.logging.wsgi_errors_stream` with the format
#: ``[%(asctime)s] %(levelname)s in %(module)s: %(message)s``.
default_handler = logging.StreamHandler(wsgi_errors_stream)
default_handler.setFormatter(logging.Formatter(
    '[%(asctime)s] %(levelname)s in %(module)s: %(message)s'
))
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
            import subprocess
        subprocess.check_call(
            [sys.executable, 'setup.py', 'bdist_egg'],
            cwd=str(modules_tmpdir)
        )
        egg_path, = modules_tmpdir.join('dist/').listdir()
        monkeypatch.syspath_prepend(str(egg_path))
        return egg_path
    
        By default, it represents the actual environment.
    All of the attributes can be overwritten though, which
    is used by the test suite to simulate various scenarios.
    
    
def write_stream(stream, outfile, flush):
    '''Write the output stream.'''
    try:
        # Writing bytes so we use the buffer interface (Python 3).
        buf = outfile.buffer
    except AttributeError:
        buf = outfile
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
        def cut(self, sentence, HMM=True):
        for w in self.__cut_internal(sentence, HMM=HMM):
            yield w
    
            for y in obs_states:
            prob, state = max((V[t - 1][y0] + trans_p[y0].get(y, MIN_INF) +
                               emit_p[y].get(obs[t], MIN_FLOAT), y0) for y0 in prev_states)
            V[t][y] = prob
            mem_path[t][y] = state
    
    while True:
    line = sys.stdin.readline()
    if line=='':
        break
    line = line.strip()
    for word in jieba.cut(line):
        print(word)
    
    print('speed %s bytes/second' % (len(content)/tm_cost))
    
    JIS_TYPICAL_DISTRIBUTION_RATIO = 3.0
    
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
    
    EUCTW_SM_MODEL = {'class_table': EUCTW_CLS,
                'class_factor': 7,
                'state_table': EUCTW_ST,
                'char_len_table': EUCTW_CHAR_LEN_TABLE,
                'name': 'x-euc-tw'}
    
        @property
    def language(self):
        return ''
    
        def _get_page(self, topic, request_options=None):
        if topic.endswith('/:list') or topic.lstrip('/') == ':list':
            return self._get_list_answer(topic)
    
        def __init__(self):
        Adapter.__init__(self)
        self._rosetta_code_name = self._load_rosetta_code_names()

    
        answer_data = {
        'query': query,
        'keyword': keyword,
        'answers': answers,
        }
    
    import re
import ansiwrap
import colored
    
        if _REDIS_PREFIX:
        key = _REDIS_PREFIX + key
    
            if search_mode and topic != 'LIMITED':
            if not highlight:
                result += '\n[%s]\n' % topic
            else:
                result += '\n%s%s %s %s%s\n' % (
                    colored.bg('dark_gray'), colored.attr('res_underlined'),
                    topic,
                    colored.attr('res_underlined'), colored.attr('reset'))