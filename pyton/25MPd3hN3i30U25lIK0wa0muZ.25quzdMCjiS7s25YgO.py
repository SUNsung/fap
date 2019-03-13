
        
        # add train_ext_input and valid_ext input
data = {'train_truth': rates_train,
        'valid_truth': rates_valid,
        'train_data' : spikes_train,
        'valid_data' : spikes_valid,
        'train_ext_input' : np.array(ext_input_train),
        'valid_ext_input': np.array(ext_input_valid),
        'train_percentage' : train_percentage,
        'nreplications' : nreplications,
        'dt' : FLAGS.dt,
        'P_sxn' : P_nxn,
        'condition_labels_train' : condition_labels_train,
        'condition_labels_valid' : condition_labels_valid,
        'conversion_factor': 1.0 / rnn_a['conversion_factor']}
    
      Args:
    data_fname: The filename of teh file in which to write the data.
    data_dict:  The dictionary of data to write. The keys are strings
      and the values are numpy arrays.
    use_json (optional): human readable format for simple items
    compression (optional): The compression to use for h5py (disabled by
      default because the library borks on scalars, otherwise try 'gzip').
  '''
    
      # Add necessary end of sentence token.
  if tokenized[-1] not in ['.', '!', '?']:
    tokenized += ['.']
  return tokenized
    
      Returns:
    wasserstein_loss:  Scalar tf.float32 loss.
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
        '''
    with tf.name_scope(
        name, 'attention_decoder_fn_inference',
        [time, cell_state, cell_input, cell_output, context_state]):
      if cell_input is not None:
        raise ValueError(
            'Expected cell_input to be None, but saw: %s' % cell_input)
      if cell_output is None:
        # invariant that this is time == 0
        next_input_id = tf.ones(
            [
                batch_size,
            ], dtype=dtype) * (
                start_of_sequence_id)
        done = tf.zeros(
            [
                batch_size,
            ], dtype=tf.bool)
        cell_state = encoder_state
        cell_output = tf.zeros([num_decoder_symbols], dtype=tf.float32)
        cell_input = tf.gather(embeddings, next_input_id)
    
                elif opt in ('-g', '--gui'):
                # Run using GUI.
                conf['gui'] = True
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
            self.prepare(vid = vid, title = title, **kwargs)
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        title = match1(html, r'<title>([^<]{1,9999})</title>')
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
    for face_landmarks in face_landmarks_list:
    pil_image = Image.fromarray(image)
    d = ImageDraw.Draw(pil_image, 'RGBA')
    
    # You can change this to any folder on your system
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg', 'gif'}
    
    
def _rect_to_css(rect):
    '''
    Convert a dlib 'rect' object to a plain tuple in (top, right, bottom, left) order
    
    known_faces = [
    lmm_face_encoding,
    al_face_encoding
]
    
            batched_detected_faces = api.batch_face_locations(images, number_of_times_to_upsample=0)
    
    
def multi_highway_dense(x, n_layer, act_fn=relu, carry_bias=-1.0, name=None):
    '''多层 highway_dense
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_input]
    '''
    name = name or 'highway_dense'
    for i in range(n_layer):
        x = highway_dense(x, act_fn=act_fn, carry_bias=carry_bias, name='{}-{}'.format(name, i))
    
    
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
    
    print(model.wv.vocab.keys())
'''
['Hello', 'World', '!', 'I', 'am', 'huay', '.']
'''
print()
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
    def cut(sentence):
    sentence = strdecode(sentence)
    blocks = re_han.split(sentence)
    for blk in blocks:
        if re_han.match(blk):
            for word in __cut(blk):
                if word not in Force_Split_Words:
                    yield word
                else:
                    for c in word:
                        yield c
        else:
            tmp = re_skip.split(blk)
            for x in tmp:
                if x:
                    yield x

    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    import jieba
import time
import glob
import sys
import os
import random
    
    t2 = time.time()
tm_cost = t2-t1
    
    
def main():
    parse_command_line()
    t = Timer(e1)
    results = t.timeit(options.num) / options.num
    print('engine: %0.3f ms per iteration' % (results * 1000))
    t = Timer(c1)
    results = t.timeit(options.num) / options.num
    print('coroutine: %0.3f ms per iteration' % (results * 1000))
    
        if mode == 'module':
        # runpy did a fake import of the module as __main__, but now it's
        # no longer in sys.modules.  Figure out where it is and watch it.
        loader = pkgutil.get_loader(module)
        if loader is not None:
            watch(loader.get_filename())  # type: ignore
    
    from tornado import httputil
from tornado import ioloop
    
            if self.regex.groups != pattern.count('('):
            # The pattern is too complicated for our simplistic matching,
            # so we can't support reversing it.
            return None, None
    
                bounding_box = [dlib.rectangle(  # pylint: disable=c-extension-no-member
                int(face[0]), int(face[1]), int(face[2]), int(face[3]))]
            item['detected_faces'] = bounding_box
            self.finalize(item)
    
        def add_face(self, frame, alignment):
        ''' Add a new face for a frame and return it's index '''
        logger.debug('Adding face to frame: '%s'', frame)
        self.data[frame].append(alignment)
        retval = self.count_faces_in_frame(frame) - 1
        logger.debug('Returning new face index: %s', retval)
        return retval