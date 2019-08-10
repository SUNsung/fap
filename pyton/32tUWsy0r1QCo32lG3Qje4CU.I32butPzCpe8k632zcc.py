
        
        
if __name__ == '__main__':
    ''''''
    # _test()
    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    
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
    
        def get_queue(self, name, maxsize=0):
        ''' Return a queue from the manager
            If it doesn't exist, create it '''
        logger.debug('QueueManager getting: '%s'', name)
        queue = self.queues.get(name, None)
        if not queue:
            self.add_queue(name, maxsize)
            queue = self.queues[name]
        logger.debug('QueueManager got: '%s'', name)
        return queue
    
            For actions that occur identically for each frame (e.g. blend_box), constants can
        be placed into self.func_constants to be compiled at launch, then referenced for
        each face. '''
    def __init__(self, mask_type, output_size, predicted_available=False, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.mask = self.get_mask() if not self.skip else None
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def predict(self, face):
        ''' Return encodings for given image from vgg_face '''
        if face.shape[0] != self.input_size:
            face = self.resize_face(face)
        blob = cv2.dnn.blobFromImage(face,  # pylint: disable=no-member
                                     1.0,
                                     (self.input_size, self.input_size),
                                     self.average_img,
                                     False,
                                     False)
        self.model.setInput(blob)
        preds = self.model.forward('fc7')[0, :]
        return preds