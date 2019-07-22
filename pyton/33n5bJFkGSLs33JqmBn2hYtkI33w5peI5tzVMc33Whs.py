
        
        import pytest
    
        rv = client.post('/')
    assert rv.status_code == 405
    assert sorted(rv.allow) == ['GET', 'HEAD']
    
    
class Filter(object):
    '''
    Desc:
        Filter类保存了卷积层的参数以及梯度，并且实现了用梯度下降算法来更新参数。
        我们对参数的初始化采用了常用的策略，即：权重随机初始化为一个很小的值，而偏置项初始化为0。
    '''
    def __init__(self, width, height, depth):
        self.weights = np.random.uniform(-1e-4, 1e-4,
            (depth, height, width))
        self.bias = 0
        self.weights_grad = np.zeros(
            self.weights.shape)
        self.bias_grad = 0
    
    from __future__ import print_function
class Perceptron():
    '''
    Desc:
        感知器类
    Args:
        None
    Returns:
        None
    '''
    
    
# recommend()函数，就是推荐引擎，它默认调用standEst()函数，产生了最高的N个推荐结果。
# 如果不指定N的大小，则默认值为3。该函数另外的参数还包括相似度计算方法和估计方法
def recommend(dataMat, user, N=3, simMeas=cosSim, estMethod=standEst):
    '''svdEst( )
    
    '''
    mapper 接受原始的输入并产生中间值传递给 reducer。
    很多的mapper是并行执行的，所以需要将这些mapper的输出合并成一个值。
    即：将中间的 key/value 对进行组合。
'''