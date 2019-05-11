
        
                print('None input')
        assert_raises(TypeError, insertion_sort.sort, None)
    
        def __len__(self):
        return len(self.array)
    
    # Sampling from about 20M text materials include literature and computer technology
#
# Japanese frequency table, applied to both S-JIS and EUC-JP
# They are sorted in order.
    
    Win1250HungarianModel = {
  'char_to_order_map': win1250HungarianCharToOrderMap,
  'precedence_matrix': HungarianLangModel,
  'typical_positive_ratio': 0.947368,
  'keep_english_letter': True,
  'charset_name': 'windows-1250',
  'language': 'Hungarian',
}

    
        def get_confidence(self):
        if self.state == ProbingState.NOT_ME:
            return 0.01
    
    UCS2LE_ST = (
          6,     6,     7,     6,     4,     3,MachineState.ERROR,MachineState.ERROR,#00-07
     MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,#08-0f
     MachineState.ITS_ME,MachineState.ITS_ME,     5,     5,     5,MachineState.ERROR,MachineState.ITS_ME,MachineState.ERROR,#10-17
          5,     5,     5,MachineState.ERROR,     5,MachineState.ERROR,     6,     6,#18-1f
          7,     6,     8,     8,     5,     5,     5,MachineState.ERROR,#20-27
          5,     5,     5,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,     5,     5,#28-2f
          5,     5,     5,MachineState.ERROR,     5,MachineState.ERROR,MachineState.START,MachineState.START #30-37
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
                    self.context_analyzer.feed(self._last_char[2 - char_len:],
                                               char_len)
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.context_analyzer.feed(byte_str[i + 1 - char_len:i + 3
                                                        - char_len], char_len)
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)
    
    def get_parallel_rotations():
    mult90 = [0, np.pi/2, -np.pi/2, np.pi]
    parallel_rotations = []
    for euler in itertools.product(mult90, repeat=3):
        canonical = mat2euler(euler2mat(euler))
        canonical = np.round(canonical / (np.pi / 2))
        if canonical[0] == -2:
            canonical[0] = 2
        if canonical[2] == -2:
            canonical[2] = 2
        canonical *= np.pi / 2
        if all([(canonical != rot).any() for rot in parallel_rotations]):
            parallel_rotations += [canonical]
    assert len(parallel_rotations) == 24
    return parallel_rotations

    
        def test_duplicatedinput_inputs(self):
        '''The duplicated_input env needs to generate strings with the appropriate
        amount of repetiion.'''
        env = alg.duplicated_input.DuplicatedInputEnv(duplication=2)
        input_tape = env.generate_input_data(4)
        self.assertEqual(len(input_tape), 4)
        self.assertEqual(input_tape[0], input_tape[1])
        self.assertEqual(input_tape[2], input_tape[3])
        # If requested input size isn't a multiple of duplication, go lower
        input_tape = env.generate_input_data(3)
        self.assertEqual(len(input_tape), 2)
        self.assertEqual(input_tape[0], input_tape[1])
        # If requested input size is *less than* duplication, go up
        input_tape = env.generate_input_data(1)
        self.assertEqual(len(input_tape), 2)
        self.assertEqual(input_tape[0], input_tape[1])
        
        env = alg.duplicated_input.DuplicatedInputEnv(duplication=3)
        input_tape = env.generate_input_data(6)
        self.assertEqual(len(input_tape), 6)
        self.assertEqual(input_tape[0], input_tape[1])
        self.assertEqual(input_tape[1], input_tape[2])