
        
        
if __name__ == '__main__':
    main()

    
            webpage = self._download_webpage(url, display_id)
    
    
class CBSBaseIE(ThePlatformFeedIE):
    def _parse_smil_subtitles(self, smil, namespace=None, subtitles_lang='en'):
        subtitles = {}
        for k, ext in [('sMPTE-TTCCURL', 'tt'), ('ClosedCaptionURL', 'ttml'), ('webVTTCaptionURL', 'vtt')]:
            cc_e = find_xpath_attr(smil, self._xpath_ns('.//param', namespace), 'name', k)
            if cc_e is not None:
                cc_url = cc_e.get('value')
                if cc_url:
                    subtitles.setdefault(subtitles_lang, []).append({
                        'ext': ext,
                        'url': cc_url,
                    })
        return subtitles
    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    **Data download**
    
        # Generate empty target sequence of length 1.
    target_seq = np.zeros((1, 1, num_decoder_tokens))
    # Populate the first character of target sequence with the start character.
    target_seq[0, 0, target_token_index['\t']] = 1.
    
    
'''Process:
    
        Example: adding bi-gram
    >>> sequences = [[1, 3, 4, 5], [1, 3, 7, 9, 2]]
    >>> token_indice = {(1, 3): 1337, (9, 2): 42, (4, 5): 2017}
    >>> add_ngram(sequences, token_indice, ngram_range=2)
    [[1, 3, 4, 5, 1337, 2017], [1, 3, 7, 9, 2, 1337, 42]]
    
        with pytest.raises(ValueError):
        conv_utils.normalize_tuple(None, 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple([2, 3, 4], 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple(['str', 'impossible'], 2, 'kernel_size')
    
        # - Produce data on 1 worker thread, consume on main thread:
    #   - Worker thread is the only thread running the generator
    model.fit_generator(custom_generator(True),
                        steps_per_epoch=STEPS_PER_EPOCH,
                        validation_data=(arr_data[:10],
                                         arr_labels[:10],
                                         arr_weights[:10]),
                        validation_steps=1,
                        max_queue_size=10,
                        workers=1,
                        use_multiprocessing=False)
    
    
def sparse_top_k_categorical_accuracy(y_true, y_pred, k=5):
    # If the shape of y_true is (num_samples, 1), flatten to (num_samples,)
    return K.cast(K.in_top_k(y_pred, K.cast(K.flatten(y_true), 'int32'), k),
                  K.floatx())
    
    
def parametric_relu(x, channel_shared=False, alpha_init=constant(0.), name='parametric_relu', reuse=None):
    '''参数化 ReLU
    
    from ..utils import get_wb, permute
from ..activations import softmax
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')
    
        References:
        K.permute_dimensions()
    '''
    return tf.transpose(x, perm)
    
    
  def Start( self ):
    self._response_future = self.PostDataToHandlerAsync( self.request_data,
                                                         'completions' )
    
      for diagnostic_range in diagnostic[ 'ranges' ]:
    patterns.append( vimsupport.GetDiagnosticMatchPattern(
      diagnostic_range[ 'start' ][ 'line_num' ],
      diagnostic_range[ 'start' ][ 'column_num' ],
      diagnostic_range[ 'end' ][ 'line_num' ],
      diagnostic_range[ 'end' ][ 'column_num' ] ) )
    
        return False
    
    
def LevelErrors_test():
  opts = _JavaFilter( { 'level' : 'error' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
            # 均分  +  人-人-距离(943, 943)*人-电影-评分diff(943, 1682)=结果-人-电影（每个人对同一电影的综合得分）(943, 1682)  再除以  个人与其他人总的距离 = 人-电影综合得分
        pred = mean_user_rating[:, np.newaxis] + similarity.dot(
            rating_diff) / np.array([np.abs(similarity).sum(axis=1)]).T
    elif type == 'item':
        # 综合打分： 人-电影-评分(943, 1682)*电影-电影-距离(1682, 1682)=结果-人-电影(各个电影对同一电影的综合得分)(943, 1682)  ／  再除以  电影与其他电影总的距离 = 人-电影综合得分
        pred = rating.dot(similarity) / np.array(
            [np.abs(similarity).sum(axis=1)])
    return pred
    
        def predict(self, sample):
        '''
        使用神经网络实现预测
        sample: 输入样本
        '''
        output = sample
        for layer in self.layers:
            layer.forward(output)
            output = layer.output
        return output
    
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
    
        # 利用PCA对半导体制造数据降维
    dataMat = replaceNanWithMean()
    print(shape(dataMat))
    # 分析数据
    analyse_data(dataMat)
    # lowDmat, reconMat = pca(dataMat, 20)
    # print shape(lowDmat)
    # show_picture(dataMat, reconMat)
