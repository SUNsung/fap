
        
        from thefuck.utils import replace_command
from thefuck.specific.archlinux import get_pkgfile, archlinux_env
    
    
def archlinux_env():
    if utils.which('yay'):
        pacman = 'yay'
    elif utils.which('yaourt'):
        pacman = 'yaourt'
    elif utils.which('pacman'):
        pacman = 'sudo pacman'
    else:
        return False, None
    
        def test_get_history(self, history_lines, shell):
        history_lines(['- cmd: ls', '  when: 1432613911',
                       '- cmd: rm', '  when: 1432613916'])
        assert list(shell.get_history()) == ['ls', 'rm']
    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
        def _expand_aliases(self, command_script):
        aliases = self.get_aliases()
        binary = command_script.split(' ')[0]
        if binary in aliases and aliases[binary] != binary:
            return command_script.replace(binary, aliases[binary], 1)
        elif binary in aliases:
            return u'fish -ic '{}''.format(command_script.replace(''', r'\''))
        else:
            return command_script
    
    
def _get_used_executables(command):
    for script in get_valid_history_without_current(command):
        yield script.split(' ')[0]
    
            # Insert the import statement to setup.py if not present
        with open(setup_path, 'a+') as setup:
            setup.seek(0)
            setup_content = setup.read()
            if not 'import fastentrypoints' in setup_content:
                setup.seek(0)
                setup.truncate()
                setup.write('import fastentrypoints\n' + setup_content)
    
    
@pytest.mark.parametrize('command, result', [
    (Command('az providers list', misspelled_command), ['az provider list']),
    (Command('az provider lis', misspelled_subcommand), ['az provider list'])
])
def test_get_new_command(command, result):
    assert get_new_command(command) == result

    
    
@eager
def _parse_apt_operations(help_text_lines):
    is_commands_list = False
    for line in help_text_lines:
        line = line.decode().strip()
        if is_commands_list and line:
            yield line.split()[0]
        elif line.startswith('Basic commands:') \
                or line.startswith('Most used commands:'):
            is_commands_list = True
    
                        # look in current directory
                    with test_support.change_cwd(tmp_dir):
                        rv = find_executable(program)
                        self.assertEqual(rv, program)
    
        pl[nsstr('aDict')] = d = OrderedDict()
    d[nsstr('aFalseValue')] = False
    d[nsstr('aTrueValue')] = True
    d[nsstr('aUnicodeValue')] = 'M\xe4ssig, Ma\xdf'
    d[nsstr('anotherString')] = '<hello & 'hi' there!>'
    d[nsstr('deeperDict')] = dd = OrderedDict()
    dd[nsstr('a')] = 17
    dd[nsstr('b')] = 32.5
    dd[nsstr('c')] = a = NSMutableArray.alloc().init()
    a.append(1)
    a.append(2)
    a.append(nsstr('text'))
    
        def test_wait_for(self):
        cond = asyncio.Condition(loop=self.loop)
        presult = False
    
            # to check the ability to pass None as defaults
        self.checkequal(12, 'rrarrrrrrrrra', 'rindex', 'a')
        self.checkequal(12, 'rrarrrrrrrrra', 'rindex', 'a', 4)
        self.checkraises(ValueError, 'rrarrrrrrrrra', 'rindex', 'a', 4, 6)
        self.checkequal(12, 'rrarrrrrrrrra', 'rindex', 'a', 4, None)
        self.checkequal( 2, 'rrarrrrrrrrra', 'rindex', 'a', None, 6)
    
            a = array.array(self.typecode, self.example)
        a.extend(s)
        self.assertEqual(
            a,
            array.array(self.typecode, self.example+self.example)
        )
    
            a = [0, b'a']
        b = [0]
        with self.assertRaises(self.failureException):
            self.assertListEqual(a, b)
        with self.assertRaises(self.failureException):
            self.assertTupleEqual(tuple(a), tuple(b))
        with self.assertRaises(self.failureException):
            self.assertSequenceEqual(a, tuple(b))
        with self.assertRaises(self.failureException):
            self.assertSequenceEqual(tuple(a), b)
        with self.assertRaises(self.failureException):
            self.assertSetEqual(set(a), set(b))
    
        def test_numeric_terminator1(self):
        # check that ints & longs both work (since type is
        # explicitly checked in async_chat.handle_read)
        self.numeric_terminator_check(1)
    
    import sys
import types
import unittest
    
                # check that it's possible to cancel connect_pipe()
            task.cancel()
            with self.assertRaises(asyncio.CancelledError):
                self.loop.run_until_complete(task)
    
            self.assertEqual(_testcapi.docstring_with_invalid_signature.__doc__,
            'docstring_with_invalid_signature($module, /, boo)\n'
            '\n'
            'This docstring has an invalid signature.'
            )
        self.assertEqual(_testcapi.docstring_with_invalid_signature.__text_signature__, None)
    
            'License :: OSI Approved :: MIT License',
    
        def calc_gradient_t(self, t):
        '''
        计算每个时刻t权重的梯度
        '''
        h_prev = self.h_list[t-1].transpose()
        Wfh_grad = np.dot(self.delta_f_list[t], h_prev)
        bf_grad = self.delta_f_list[t]
        Wih_grad = np.dot(self.delta_i_list[t], h_prev)
        bi_grad = self.delta_f_list[t]
        Woh_grad = np.dot(self.delta_o_list[t], h_prev)
        bo_grad = self.delta_f_list[t]
        Wch_grad = np.dot(self.delta_ct_list[t], h_prev)
        bc_grad = self.delta_ct_list[t]
        return Wfh_grad, bf_grad, Wih_grad, bi_grad, \
               Woh_grad, bo_grad, Wch_grad, bc_grad
    
    
def get_test_data_set():
    '''
    获得测试数据集
    '''
    image_loader = ImageLoader('t10k-images-idx3-ubyte', 10000)
    label_loader = LabelLoader('t10k-labels-idx1-ubyte', 10000)
    return image_loader.load(), label_loader.load()
    
    
def data_set():
    x = [np.array([[1], [2], [3]]),
         np.array([[2], [3], [4]])]
    d = np.array([[1], [2]])
    return x, d
    
    '''
# NumPy 矩阵和数组的区别
NumPy存在2中不同的数据类型:
    1. 矩阵 matrix
    2. 数组 array
相似点：
    都可以处理行列表示的数字元素
不同点：
    1. 2个数据类型上执行相同的数据运算可能得到不同的结果。
    2. NumPy函数库中的 matrix 与 MATLAB中 matrices 等价。
'''
    
        # 所有输入到达后开始处理
    def map_final(self):  # 计算数据的平均值，平方的均值，并返回
        mn = self.inSum/self.inCount
        mnSq = self.inSqSum/self.inCount
        yield (1, [self.inCount, mn, mnSq])