
        
            def _dispatch_call(self, call, employees):
        for employee in employees:
            if employee.call is None:
                employee.take_call(call)
                return employee
        return None
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
            Emit key value pairs of the form:
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    import re
import sys
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
        def _is_tar(self, response):
        archive = BytesIO(response.body)
        try:
            tar_file = tarfile.open(name=mktemp(), fileobj=archive)
        except tarfile.ReadError:
            return
    
    _byte = chr if sys.version_info < (3,) else lambda i: bytes([i])
    
    
def create_spinner(*args, **kwargs):
    nospin = kwargs.pop('nospin', False)
    use_yaspin = kwargs.pop('use_yaspin', not nospin)
    if nospin or not use_yaspin:
        return DummySpinner(*args, **kwargs)
    return VistirSpinner(*args, **kwargs)

    
    This can be set to a version string, e.g. ``3.6``, or a path. Default is to use
whatever Python Pipenv is installed under (i.e. ``sys.executable``). Command
line flags (e.g. ``--python``, ``--three``, and ``--two``) are prioritized over
this configuration.
'''
    
    win1250HungarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 28, 40, 54, 45, 32, 50, 49, 38, 39, 53, 36, 41, 34, 35, 47,
 46, 72, 43, 33, 37, 57, 48, 64, 68, 55, 52,253,253,253,253,253,
253,  2, 18, 26, 17,  1, 27, 12, 20,  9, 22,  7,  6, 13,  4,  8,
 23, 67, 10,  5,  3, 21, 19, 65, 62, 16, 11,253,253,253,253,253,
161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,
177,178,179,180, 78,181, 69,182,183,184,185,186,187,188,189,190,
191,192,193,194,195,196,197, 76,198,199,200,201,202,203,204,205,
 81,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,
221, 51, 83,222, 80,223,224,225,226, 44,227,228,229, 61,230,231,
232,233,234, 58,235, 66, 59,236,237,238, 60, 70, 63,239,240,241,
 84, 14, 75,242, 71, 82,243, 73,244, 15, 85, 79, 86, 30, 77, 87,
245,246,247, 25, 74, 42, 24,248,249,250, 31, 56, 29,251,252,253,
)
    
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
    
    # To be accurate, the length of class 6 can be either 2 or 4.
# But it is not necessary to discriminate between the two since
# it is used for frequency analysis only, and we are validating
# each code range there as well. So it is safe to set it to be
# 2 here.
GB2312_CHAR_LEN_TABLE = (0, 1, 1, 1, 1, 1, 2)
    
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
                    self.context_analyzer.feed(self._last_char[2 - char_len:],
                                               char_len)
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.context_analyzer.feed(byte_str[i + 1 - char_len:i + 3
                                                        - char_len], char_len)
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)