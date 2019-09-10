
        
                # 'MODE READER' is sometimes necessary to enable 'reader' mode.
        # However, the order in which 'MODE READER' and 'AUTHINFO' need to
        # arrive differs between some NNTP servers. If _setreadermode() fails
        # with an authorization failed error, it will set this to True;
        # the login() routine will interpret that as a request to try again
        # after performing its normal function.
        # Enable only if we're not already in READER mode anyway.
        self.readermode_afterauth = False
        if readermode and 'READER' not in self._caps:
            self._setreadermode()
            if not self.readermode_afterauth:
                # Capabilities might have changed after MODE READER
                self._caps = None
                self.getcapabilities()
    
        def test_many_threads(self):
        # Test multiple concurrent put() and get()
        N = 50
        q = self.q
        inputs = list(range(10000))
        results = self.run_threads(N, N, q, inputs, self.feed, self.consume)
    
            'mixed_text_message_rfc822': (
            (None, None, 1),
            (2,),
            (1, 2),
            textwrap.dedent('''\
                To: foo@example.com
                MIME-Version: 1.0
                Content-Type: multipart/mixed; boundary='==='
    
    
class SizeofTest:
    
        def setUp(self):
        self.cx = sqlite.connect(':memory:')
        cu = self.cx.cursor()
        cu.execute('create table test(id integer primary key, name text)')
        cu.execute('insert into test(name) values (?)', ('foo',))
    
        try:
        _strptime = sys.modules['_strptime']
    except KeyError:
        pass
    else:
        _strptime._regex_cache.clear()
    
    
def _test():
    ''''''
    file_path = r'./data.txt'
    
    
# def get_all_subset(tokens: list):
#     '''获取 tokens 的所有非空子集'''
#     tokens = set(tokens)
#
#     ret = []
#     for i in range(1, len(tokens) + 1):
#         ret.extend(list(combinations(tokens, i)))
#
#     return ret
    
    
def relu(x):
    '''ReLU
    `o = max(0., x)`
    '''
    return tf.nn.relu(x)
    
                # Input shape: [128, 5, 32]
            x = tf.constant(np.arange(10240, dtype=np.float32).reshape([128, 16, 5]))
    
    
def highway_conv2d(x, kernel_size,
                   act_fn=relu,
                   strides=1,
                   padding='SAME',
                   carry_bias=-1.0,
                   name=None):
    '''用于 conv2d 的 highway
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, in_h, in_w, in_channels]
    
    
'''预定义好的正则化器
'''
l1_regularizer = L1L2Regularizer(l1=0.01)
    
        References:
        K.permute_dimensions()
    '''
    return tf.transpose(x, perm)
    
        # test slice is a view
    result[:] = 0
    assert (s[1:3] == 0).all()
    
            to_convert = to_convert.insert(0, breaks[0])
        expected = expected.insert(0, float(breaks[0].value))
        result = index._maybe_convert_i8(to_convert)
        tm.assert_index_equal(result, expected)
    
                # see gh-10483
            datetime_series.to_csv(path, header=True)
            ts_h = self.read_csv(path, header=0)
            assert ts_h.name == 'ts'
    
        def drop_table(self, name, schema=None):
        drop_sql = 'DROP TABLE {name}'.format(name=_get_valid_sqlite_name(name))
        self.execute(drop_sql)
    
        :param int n: Number of unique groups
    :param iter iterable: An iterable to split up
    :return: a list of new iterables derived from the original iterable
    :rtype: list
    '''
    
    
def test_allow_unknown_with_of_rules():
    # https://github.com/pyeve/cerberus/issues/251
    schema = {
        'test': {
            'oneof': [
                {
                    'type': 'dict',
                    'allow_unknown': True,
                    'schema': {'known': {'type': 'string'}},
                },
                {'type': 'dict', 'schema': {'known': {'type': 'string'}}},
            ]
        }
    }
    # check regression and that allow unknown does not cause any different
    # than expected behaviour for one-of.
    document = {'test': {'known': 's'}}
    assert_fail(
        document,
        schema,
        error=('test', ('test', 'oneof'), errors.ONEOF, schema['test']['oneof']),
    )
    # check that allow_unknown is actually applied
    document = {'test': {'known': 's', 'unknown': 'asd'}}
    assert_success(document, schema)
    
        Returns
    -------
    str
        The code to be evaluated by the shell
    '''
    from jinja2 import Environment, FileSystemLoader
    if shell in [None, 'auto']:
        shell = get_auto_shell()
    if not isinstance(shell, Shell):
        shell = Shell[shell]
    prog_name = prog_name or click.get_current_context().find_root().info_name
    env_name = env_name or '_%s_COMPLETE' % prog_name.upper().replace('-', '_')
    extra_env = extra_env if extra_env else {}
    env = Environment(loader=FileSystemLoader(os.path.dirname(__file__)))
    template = env.get_template('%s.j2' % shell.name)
    return template.render(prog_name=prog_name, complete_var=env_name, extra_env=extra_env)
    
    tf.flags.DEFINE_string(
    'tpu_name', None,
    'The Cloud TPU to use for training. This should be either the name '
    'used when creating the Cloud TPU, or a grpc://ip.address.of.tpu:8470 '
    'url.')
    
            return {
            'masked_lm_accuracy': masked_lm_accuracy,
            'masked_lm_loss': masked_lm_mean_loss,
            'next_sentence_accuracy': next_sentence_accuracy,
            'next_sentence_loss': next_sentence_mean_loss,
        }