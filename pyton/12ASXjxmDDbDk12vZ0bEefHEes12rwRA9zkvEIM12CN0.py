
        
            Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
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
    
                                len_p = [len(p) for p in obj['contours']]
                            if min(len_p) <= 4:
                                print('Warning: invalid contours.')
                                continue  # skip non-instance categories
    
            # Test: merge with an invalid key
        s = 'dummy3'
        cfg2 = AttrDict()
        cfg2.FOO = AttrDict()
        cfg2.FOO.BAR = s
        with self.assertRaises(KeyError):
            core_config.merge_cfg_from_cfg(cfg2)
    
            if cfg.RETINANET.SOFTMAX:
            cls_prob = cls_prob[:, :, 1::, :, :]
    
        # Add suffix ops
    new_net.Proto().op.extend(net.Proto().op[prefix_len:])
    # Add external input blobs
    # Treat any undefined blobs as external inputs
    input_names = [
        i for op in new_net.Proto().op for i in op.input
        if not new_net.BlobIsDefined(i)]
    new_net.Proto().external_input.extend(input_names)
    # Add external output blobs
    output_names = [str(o) for o in outputs]
    new_net.Proto().external_output.extend(output_names)
    return new_net, [new_net.GetBlobRef(o) for o in output_names]
    
        def wait_for_stop(self):
        return self._event.wait()
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals