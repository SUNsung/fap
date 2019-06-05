
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
    
class RemoveDuplicateUrls(MRJob):
    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
        return out
    
        def test_copy(self):
        copy = self.case_insensitive_dict.copy()
        assert copy is not self.case_insensitive_dict
        assert copy == self.case_insensitive_dict
    
            except ClosedPoolError as e:
            raise ConnectionError(e, request=request)
    
    
def _implementation():
    '''Return a dict with the Python implementation and version.
    
        if total_length is None:
        total_length = 0
    
            return self.state
    
            if self.state == ProbingState.DETECTING:
            if (self.distribution_analyzer.got_enough_data() and
                    (self.get_confidence() > self.SHORTCUT_THRESHOLD)):
                self._state = ProbingState.FOUND_IT
    
        @property
    def charset_name(self):
        raise NotImplementedError
    
    UTF8_SM_MODEL = {'class_table': UTF8_CLS,
                 'class_factor': 16,
                 'state_table': UTF8_ST,
                 'char_len_table': UTF8_CHAR_LEN_TABLE,
                 'name': 'UTF-8'}

    
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
    
        @property
    def charset_name(self):
        return self.context_analyzer.charset_name
    
                self._got_data = True
            if self.result['encoding'] is not None:
                self.done = True
                return