
        
                    with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    
        def _call(self, x):
        ''''''
        o = self.act_fn(tf.matmul(x, self.W) + self.b)
        return o
    
        name = name or 'highway_conv2d'
    for i, kz in enumerate(kernel_size):
        x = highway_conv2d(x, kz, act_fn, strides, padding, carry_bias, name='{}-{}'.format(name, i))
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]
    
    # 如果一个 ngram 都没找到，gensim 会报错
#   其实可以返回一个 0 向量的，它内部实际上是从一个 0 向量开始累加的；
#   但返回时做了一个判断——如果依然是 0 向量，则报错
# print(model.wv['z'])
r'''
Traceback (most recent call last):
  File 'D:/OneDrive/workspace/github/DL-Notes-for-Interview/code/工具库/gensim/FastText.py', line 53, in <module>
    print(model.wv['z'])
  File 'D:\program\work\Python\Anaconda3\envs\tf\lib\site-packages\gensim\models\keyedvectors.py', line 336, in __getitem__
    return self.get_vector(entities)
  File 'D:\program\work\Python\Anaconda3\envs\tf\lib\site-packages\gensim\models\keyedvectors.py', line 454, in get_vector
    return self.word_vec(word)
  File 'D:\program\work\Python\Anaconda3\envs\tf\lib\site-packages\gensim\models\keyedvectors.py', line 1989, in word_vec
    raise KeyError('all ngrams for word %s absent from model' % word)
KeyError: 'all ngrams for word z absent from model'
'''
    
            logit_masks = [logit(y) for y in masks_ts]
        logit_masks = np.mean(logit_masks, axis=0)
        masks_c = 1.0 / (1.0 + np.exp(-logit_masks))
    else:
        raise NotImplementedError(
            'Heuristic {} not supported'.format(cfg.TEST.MASK_AUG.HEUR)
        )
    
    from detectron.core.config import cfg
from detectron.datasets.dataset_catalog import get_raw_dir
    
        current = roi_feat
    for i in range(cfg.FAST_RCNN.NUM_STACKED_CONVS):
        current = model.Conv(
            current, 'head_conv' + str(i + 1), dim_in, hidden_dim, 3,
            stride=1, pad=1,
            weight_init=('MSRAFill', {}),
            bias_init=('ConstantFill', {'value': 0.}),
            no_bias=0)
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
    
class GenerateProposalLabelsOp(object):
    
    ax = fig.add_axes((0.45, 0.1, 0.16, 0.8))
bar_data = [2.1, -00.8, 1.1, 2.5, -2.1, -0.5, -2.0, 1.5]
ax.set_ylim(-3, 3)
ax.set_xticks([])
ax.set_yticks([])
ax.bar(np.arange(len(bar_data)), bar_data)
    
    
def test_setitem_callable():
    # GH 12533
    s = pd.Series([1, 2, 3, 4], index=list('ABCD'))
    s[lambda x: 'A'] = -1
    tm.assert_series_equal(s, pd.Series([-1, 2, 3, 4], index=list('ABCD')))
    
    
@pytest.mark.parametrize('size,relative_to,resolved', [
    ('1em', None, '12pt'),
    ('1.0em', None, '12pt'),
    ('1.25em', None, '15pt'),
    ('1em', '16pt', '16pt'),
    ('1.0em', '16pt', '16pt'),
    ('1.25em', '16pt', '20pt'),
    ('1rem', '16pt', '12pt'),
    ('1.0rem', '16pt', '12pt'),
    ('1.25rem', '16pt', '15pt'),
    ('100%', None, '12pt'),
    ('125%', None, '15pt'),
    ('100%', '16pt', '16pt'),
    ('125%', '16pt', '20pt'),
    ('2ex', None, '12pt'),
    ('2.0ex', None, '12pt'),
    ('2.50ex', None, '15pt'),
    ('inherit', '16pt', '16pt'),
    
    
@pytest.mark.parametrize('input_color', [None, 'not-a-color'])
def test_css_to_excel_bad_colors(input_color):
    # see gh-18392
    css = ('border-top-color: {color}; '
           'border-right-color: {color}; '
           'border-bottom-color: {color}; '
           'border-left-color: {color}; '
           'background-color: {color}; '
           'color: {color}').format(color=input_color)
    
        with tm.ensure_clean() as path:
        df = pd.read_json('{'a': ['foo', 'bar', 'baz'], 'b': [4, 5, 6]}')
        df.to_json(path, orient='records', lines=True,
                   compression=compression)
    
    url = sys.argv[1]
content = open(url,'rb').read()
t1 = time.time()
words = '/ '.join(jieba.cut(content))
    
    from ..const import IS_WINDOWS_PLATFORM
    
            if docstring is None:
            raise NoSuchCommand(command, self)
    
    
class NetworkTest(DockerClientTestCase):
    def test_network_default_labels(self):
        net = Network(self.client, 'composetest', 'foonet')
        net.ensure()
        net_data = net.inspect()
        labels = net_data['Labels']
        assert labels[LABEL_NETWORK] == net.name
        assert labels[LABEL_PROJECT] == net.project
    
        def test_path_from_options(self):
        paths = ['one.yml', 'two.yml']
        opts = {'--file': paths}
        environment = Environment.from_env_file('.')
        assert get_config_path_from_options('.', opts, environment) == paths
    
        def test_tls_client_and_ca(self):
        options = {
            '--tlscert': self.client_cert, '--tlskey': self.key,
            '--tlsverify': True, '--tlscacert': self.ca_cert
        }
        result = tls_config_from_options(options)
        assert isinstance(result, docker.tls.TLSConfig)
        assert result.cert == (options['--tlscert'], options['--tlskey'])
        assert result.ca_cert == options['--tlscacert']
        assert result.verify is True
    
    
class TestHandleConnectionErrors(object):