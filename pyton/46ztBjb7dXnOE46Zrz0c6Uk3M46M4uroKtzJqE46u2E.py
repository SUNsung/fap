
        
            def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    .. code-block:: bash
   :caption: To acquire a single certificate for both ``example.com`` and
             ``www.example.com``
    
        assert bump_version(Version('0.56.3'), 'dev') == Version('0.57.0.dev0')
    assert bump_version(Version('0.56.0b3'), 'dev') == Version('0.57.0.dev0')
    assert bump_version(Version('0.56.0.dev0'), 'dev') == \
        Version('0.56.0.dev1')
    
    
def hard_sigmoid(x):
    '''
    x = 0.                  x < -2.5
      = 1.                  x > 2.5
      = 0.2 * x + 0.5       otherwise
    '''
    x = (0.2 * x) + 0.5
    x = tf.clip_by_value(x, 0., 1.)
    return x
    
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
    
    
class OutOfData(UnpackException):
    pass
    
    from matplotlib import pyplot as plt
from matplotlib import rcParams
import numpy as np
    
    
ABCGeneric = _ABCGeneric('ABCGeneric', tuple(), {})

    
    
@pytest.fixture
def frame(seriesd):
    return DataFrame(seriesd)
    
    
@pytest.mark.parametrize('grps', [
    ['qux'], ['qux', 'quux']])
@pytest.mark.parametrize('vals', [
    [2, 2, np.nan, 8, 2, 6, np.nan, np.nan],
    [pd.Timestamp('2018-01-02'), pd.Timestamp('2018-01-02'), np.nan,
     pd.Timestamp('2018-01-08'), pd.Timestamp('2018-01-02'),
     pd.Timestamp('2018-01-06'), np.nan, np.nan]
])
@pytest.mark.parametrize('ties_method,ascending,na_option,pct,exp', [
    ('average', True, 'keep', False,
        [2., 2., np.nan, 5., 2., 4., np.nan, np.nan]),
    ('average', True, 'keep', True,
        [0.4, 0.4, np.nan, 1.0, 0.4, 0.8, np.nan, np.nan]),
    ('average', False, 'keep', False,
        [4., 4., np.nan, 1., 4., 2., np.nan, np.nan]),
    ('average', False, 'keep', True,
        [.8, 0.8, np.nan, 0.2, 0.8, 0.4, np.nan, np.nan]),
    ('min', True, 'keep', False,
        [1., 1., np.nan, 5., 1., 4., np.nan, np.nan]),
    ('min', True, 'keep', True,
        [0.2, 0.2, np.nan, 1.0, 0.2, 0.8, np.nan, np.nan]),
    ('min', False, 'keep', False,
        [3., 3., np.nan, 1., 3., 2., np.nan, np.nan]),
    ('min', False, 'keep', True,
        [.6, 0.6, np.nan, 0.2, 0.6, 0.4, np.nan, np.nan]),
    ('max', True, 'keep', False,
        [3., 3., np.nan, 5., 3., 4., np.nan, np.nan]),
    ('max', True, 'keep', True,
        [0.6, 0.6, np.nan, 1.0, 0.6, 0.8, np.nan, np.nan]),
    ('max', False, 'keep', False,
        [5., 5., np.nan, 1., 5., 2., np.nan, np.nan]),
    ('max', False, 'keep', True,
        [1., 1., np.nan, 0.2, 1., 0.4, np.nan, np.nan]),
    ('first', True, 'keep', False,
        [1., 2., np.nan, 5., 3., 4., np.nan, np.nan]),
    ('first', True, 'keep', True,
        [0.2, 0.4, np.nan, 1.0, 0.6, 0.8, np.nan, np.nan]),
    ('first', False, 'keep', False,
        [3., 4., np.nan, 1., 5., 2., np.nan, np.nan]),
    ('first', False, 'keep', True,
        [.6, 0.8, np.nan, 0.2, 1., 0.4, np.nan, np.nan]),
    ('dense', True, 'keep', False,
        [1., 1., np.nan, 3., 1., 2., np.nan, np.nan]),
    ('dense', True, 'keep', True,
        [1. / 3., 1. / 3., np.nan, 3. / 3., 1. / 3., 2. / 3., np.nan, np.nan]),
    ('dense', False, 'keep', False,
        [3., 3., np.nan, 1., 3., 2., np.nan, np.nan]),
    ('dense', False, 'keep', True,
        [3. / 3., 3. / 3., np.nan, 1. / 3., 3. / 3., 2. / 3., np.nan, np.nan]),
    ('average', True, 'bottom', False, [2., 2., 7., 5., 2., 4., 7., 7.]),
    ('average', True, 'bottom', True,
        [0.25, 0.25, 0.875, 0.625, 0.25, 0.5, 0.875, 0.875]),
    ('average', False, 'bottom', False, [4., 4., 7., 1., 4., 2., 7., 7.]),
    ('average', False, 'bottom', True,
        [0.5, 0.5, 0.875, 0.125, 0.5, 0.25, 0.875, 0.875]),
    ('min', True, 'bottom', False, [1., 1., 6., 5., 1., 4., 6., 6.]),
    ('min', True, 'bottom', True,
        [0.125, 0.125, 0.75, 0.625, 0.125, 0.5, 0.75, 0.75]),
    ('min', False, 'bottom', False, [3., 3., 6., 1., 3., 2., 6., 6.]),
    ('min', False, 'bottom', True,
        [0.375, 0.375, 0.75, 0.125, 0.375, 0.25, 0.75, 0.75]),
    ('max', True, 'bottom', False, [3., 3., 8., 5., 3., 4., 8., 8.]),
    ('max', True, 'bottom', True,
        [0.375, 0.375, 1., 0.625, 0.375, 0.5, 1., 1.]),
    ('max', False, 'bottom', False, [5., 5., 8., 1., 5., 2., 8., 8.]),
    ('max', False, 'bottom', True,
        [0.625, 0.625, 1., 0.125, 0.625, 0.25, 1., 1.]),
    ('first', True, 'bottom', False, [1., 2., 6., 5., 3., 4., 7., 8.]),
    ('first', True, 'bottom', True,
        [0.125, 0.25, 0.75, 0.625, 0.375, 0.5, 0.875, 1.]),
    ('first', False, 'bottom', False, [3., 4., 6., 1., 5., 2., 7., 8.]),
    ('first', False, 'bottom', True,
        [0.375, 0.5, 0.75, 0.125, 0.625, 0.25, 0.875, 1.]),
    ('dense', True, 'bottom', False, [1., 1., 4., 3., 1., 2., 4., 4.]),
    ('dense', True, 'bottom', True,
     [0.25, 0.25, 1., 0.75, 0.25, 0.5, 1., 1.]),
    ('dense', False, 'bottom', False, [3., 3., 4., 1., 3., 2., 4., 4.]),
    ('dense', False, 'bottom', True,
     [0.75, 0.75, 1., 0.25, 0.75, 0.5, 1., 1.])
])
def test_rank_args_missing(grps, vals, ties_method, ascending,
                           na_option, pct, exp):
    key = np.repeat(grps, len(vals))
    vals = vals * len(grps)
    df = DataFrame({'key': key, 'val': vals})
    result = df.groupby('key').rank(method=ties_method,
                                    ascending=ascending,
                                    na_option=na_option, pct=pct)
    
    
Your class ``TestDtype`` will inherit all the tests defined on
``BaseDtypeTests``. pytest's fixture discover will supply your ``dtype``
wherever the test requires it. You're free to implement additional tests.
    
    
def assert_resolves(css, props, inherited=None):
    resolve = CSSResolver()
    actual = resolve(css, inherited=inherited)
    assert props == actual