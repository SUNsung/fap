
        
            def get_app_kwargs(self):
        return dict(static_path='.')
    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
    from concurrent.futures import ThreadPoolExecutor
from tornado import gen
from tornado.ioloop import IOLoop
from tornado.platform.asyncio import (
    AsyncIOLoop,
    to_asyncio_future,
    AnyThreadEventLoopPolicy,
)
from tornado.testing import AsyncTestCase, gen_test
    
            print('Test: One element stack')
        sorted_stack = self.get_sorted_stack(stack, [1])
        assert_equal(sorted_stack.pop(), 1)
    
    		elif current.rightChild is None:
			if current is self.root:
				self.root = current.rightChild
			elif isLeft:
				parent.lChild = current.rightChild
			else:
				parent.rightChild = current.rightChild
    
    		print('Test: insert checking with post order traversal')
		expectVal = [7, 25, 10, 38, 40, 30, 60, 80, 70, 50]
		assert_equal(myTree.printPostOrder(), expectVal)
		expectVal = [91, 81, 71, 61, 51, 41, 31, 21, 11, 1]
		assert_equal(myTree2.printPostOrder(), expectVal)
    
            print('Test: remove on a key that doesn't exist')
        assert_raises(KeyError, hash_table.remove, -1)
    
    class SJISContextAnalysis(JapaneseContextAnalysis):
    def __init__(self):
        super(SJISContextAnalysis, self).__init__()
        self._charset_name = 'SHIFT_JIS'
    
    # Character Mapping Table:
Latin2_HungarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 28, 40, 54, 45, 32, 50, 49, 38, 39, 53, 36, 41, 34, 35, 47,
 46, 71, 43, 33, 37, 57, 48, 64, 68, 55, 52,253,253,253,253,253,
253,  2, 18, 26, 17,  1, 27, 12, 20,  9, 22,  7,  6, 13,  4,  8,
 23, 67, 10,  5,  3, 21, 19, 65, 62, 16, 11,253,253,253,253,253,
159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,
175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,
191,192,193,194,195,196,197, 75,198,199,200,201,202,203,204,205,
 79,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,
221, 51, 81,222, 78,223,224,225,226, 44,227,228,229, 61,230,231,
232,233,234, 58,235, 66, 59,236,237,238, 60, 69, 63,239,240,241,
 82, 14, 74,242, 70, 80,243, 72,244, 15, 83, 77, 84, 30, 76, 85,
245,246,247, 25, 73, 42, 24,248,249,250, 31, 56, 29,251,252,253,
)
    
        @property
    def charset_name(self):
        raise NotImplementedError
    
    EUCKR_CLS  = (
    1,1,1,1,1,1,1,1,  # 00 - 07
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    1,1,1,1,1,1,1,1,  # 40 - 47
    1,1,1,1,1,1,1,1,  # 48 - 4f
    1,1,1,1,1,1,1,1,  # 50 - 57
    1,1,1,1,1,1,1,1,  # 58 - 5f
    1,1,1,1,1,1,1,1,  # 60 - 67
    1,1,1,1,1,1,1,1,  # 68 - 6f
    1,1,1,1,1,1,1,1,  # 70 - 77
    1,1,1,1,1,1,1,1,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,3,3,3,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,3,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    2,2,2,2,2,2,2,2,  # e0 - e7
    2,2,2,2,2,2,2,2,  # e8 - ef
    2,2,2,2,2,2,2,2,  # f0 - f7
    2,2,2,2,2,2,2,0   # f8 - ff
)
    
        @property
    def language(self):
        if self._name_prober:
            return self._name_prober.language
        else:
            return self._model.get('language')
    
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
    
    
def robot_get_obs(sim):
    '''Returns all joint positions and velocities associated with
    a robot.
    '''
    if sim.data.qpos is not None and sim.model.joint_names:
        names = [n for n in sim.model.joint_names if n.startswith('robot')]
        return (
            np.array([sim.data.get_joint_qpos(name) for name in names]),
            np.array([sim.data.get_joint_qvel(name) for name in names]),
        )
    return np.zeros(0), np.zeros(0)
    
        return a
    
    import sys, gym, time