
        
            def format(self, record):
        if isinstance(record.msg, six.binary_type):
            record.msg = record.msg.decode('utf-8')
        message = super(ConsoleWarningFormatter, self).format(record)
        return '{0}{1}'.format(self.get_level_message(record), message)

    
    
def hang_up(signal, frame):
    raise HangUpException()
    
        def proxy_callable(self, call_name, *args, **kwargs):
        self.log.info('%s %s <- %s',
                      self.obj_name,
                      call_name,
                      format_call(args, kwargs))
    
    
def get_service_name_from_network_mode(network_mode):
    return get_source_name_from_network_mode(network_mode, 'service')
    
    
class TestHandleConnectionErrors(object):
    
    from .. import unittest
from compose.utils import split_buffer
    
    import docker
import pytest
    
          outputs = {
          'embedding_output': model.get_embedding_output(),
          'sequence_output': model.get_sequence_output(),
          'pooled_output': model.get_pooled_output(),
          'all_encoder_layers': model.get_all_encoder_layers(),
      }
      return outputs
    
      name_to_features = {
      'unique_ids': tf.FixedLenFeature([], tf.int64),
      'input_ids': tf.FixedLenFeature([seq_length], tf.int64),
      'input_mask': tf.FixedLenFeature([seq_length], tf.int64),
      'segment_ids': tf.FixedLenFeature([seq_length], tf.int64),
  }
    
          masked_lms.append(MaskedLmInstance(index=index, label=tokens[index]))
  assert len(masked_lms) <= num_to_predict
  masked_lms = sorted(masked_lms, key=lambda x: x.index)
    
        # [[1,2,3],[1,2,3]]-[[1,2,3],[1,2,0]]
    # (A1-A2)^2+(B1-B2)^2+(c1-c2)^2
    
    # inx - dataset 使用了numpy broadcasting，见 https://docs.scipy.org/doc/numpy-1.13.0/user/basics.broadcasting.html
    # np.sum() 函数的使用见 https://docs.scipy.org/doc/numpy-1.13.0/reference/generated/numpy.sum.html
    # '''
	#   dist = np.sum((inx - dataset)**2, axis=1)**0.5
    
    # '''
    # 2. k个最近的标签
    
    # 对距离排序使用numpy中的argsort函数， 见 https://docs.scipy.org/doc/numpy-1.13.0/reference/generated/numpy.sort.html#numpy.sort
    # 函数返回的是索引，因此取前k个索引使用[0 : k]
    # 将这k个标签存在列表k_labels中
    # '''
    # k_labels = [labels[index] for index in dist.argsort()[0 : k]]
	# '''
    # 3. 出现次数最多的标签即为最终类别
    
    # 使用collections.Counter可以统计各个标签的出现次数，most_common返回出现次数最多的标签tuple，例如[('lable1', 2)]，因此[0][0]可以取出标签值
	# '''
    # label = Counter(k_labels).most_common(1)[0][0]
    # return label
    
    # 构造简单的数据集
def get_training_dataset():
    '''
    Desc:
        构建一个简单的训练数据集
    Args:
        None
    Returns:
        input_vecs —— 训练数据集的特征部分
        labels —— 训练数据集的数据对应的标签，是一一对应的
    '''
    # 构建数据集，输入向量列表，每一项是工作年限
    input_vecs = [[5], [3], [8], [1.4], [10.1]]
    # 期望的输出列表，也就是输入向量的对应的标签，与工作年限对应的收入年薪
    labels = [5500, 2300, 7600, 1800, 11400]
    return input_vecs, labels
    
    
def testBiKMeans():
    # 加载测试数据集
    dataMat = mat(loadDataSet('data/10.KMeans/testSet2.txt'))
    
    
class MRWordCountUtility(MRJob):