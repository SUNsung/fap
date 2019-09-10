
        
            return x
    
        '''
    max_sentence_len, max_word_len, char_vocab_size = get_shape(x)[1:]
    
            # h_tilde(h~): question to context attended query vectors
        b = tf.reduce_max(S, axis=2)  # [N, T]
        b = softmax(b, axis=-1)  # [N, T]
        b = tf.expand_dims(b, axis=1)  # [N, 1, T]
        h_tilde = tf.matmul(b, h)  # [N, 1, d]
        h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]
    
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
    
    *TL;DR
Traverses a container and accesses the container's elements.
'''
    
    *TL;DR
Defines the skeleton of a base algorithm, deferring definition of exact
steps to subclasses.
    
    *Examples in Python ecosystem:
- Python's ast.NodeVisitor: https://github.com/python/cpython/blob/master/Lib/ast.py#L250
which is then being used e.g. in tools like `pyflakes`.
- `Black` formatter tool implements it's own: https://github.com/ambv/black/blob/master/black.py#L718
'''
    
    
*What is this pattern about?
The Facade pattern is a way to provide a simpler unified interface to
a more complex system. It provides an easier way to access functions
of the underlying system by providing a single entry point.
This kind of abstraction is seen in many real life situations. For
example, we can turn on a computer by just pressing a button, but in
fact there are many procedures and operations done when that happens
(e.g., loading programs from disk to memory). In this case, the button
serves as an unified interface to all the underlying procedures to
turn on a computer.
    
    OMNIFUNC_RETURNED_BAD_VALUE = 'Omnifunc returned bad value to YCM!'
OMNIFUNC_NOT_LIST = ( 'Omnifunc did not return a list or a dict with a 'words' '
                     ' list when expected.' )
    
    from hamcrest import assert_that, contains, has_entries
from mock import patch
    
        response = self.HandleFuture( self._response_future,
                                  display_message = False )
    if response is None:
      # Server returned an exception.
      return False
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_rejects( f, 'This is a Burrito' )
    
    
def KeywordsFromSyntaxListOutput_Function_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Function''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
                waiter.event.wait(wait_timeout)
    
        def get_gradient(self, label, sample):
        '''
        Desc:
            获得网络在一个样本下，每个连接上的梯度
        Args:
            label --- 样本标签
            sample --- 样本特征
        Returns:
            None
        '''
        # 调用 predict() 方法，利用样本的特征数据对样本进行预测
        self.predict(sample)
        # 计算 delta
        self.calc_delta(label)
        # 计算梯度
        self.calc_gradient()
    
        def norm(self, label):
        '''
        内部函数，将一个值转换为10维标签向量
        '''
        label_vec = []
        label_value = self.to_int(label)
        for i in range(10):
            if i == label_value:
                label_vec.append(0.9)
            else:
                label_vec.append(0.1)
        return label_vec
    
        def backward(self, parent_delta):
        '''
        BPTS反向传播算法
        '''
        self.calc_delta(parent_delta, self.root)
        self.W_grad, self.b_grad = self.calc_gradient(self.root)