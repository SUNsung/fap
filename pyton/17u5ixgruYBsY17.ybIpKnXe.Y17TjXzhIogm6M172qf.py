
        
          The log p(x|z) term is the reconstruction error under the model.
  The KL term represents the penalty for passing information from the encoder
  to the decoder.
  To sample KL(q||p), we simply sample
        ln q - ln p
  by drawing samples from q and averaging.
  '''
    
      LFADS generates a number of outputs for each examples, and these are all
  saved.  They are:
    The mean and variance of the prior of g0.
    The mean and variance of approximate posterior of g0.
    The control inputs (if enabled)
    The initial conditions, g0, for all examples.
    The generator states for all time.
    The factors for all time.
    The rates for all time.
    
    from utils import write_datasets
from synthetic_data_utils import normalize_rates
from synthetic_data_utils import get_train_n_valid_inds, nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
    
    from synthetic_data_utils import generate_data, generate_rnn
from synthetic_data_utils import get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
import tensorflow as tf
from utils import write_datasets
    
    
def split_list_by_inds(data, inds1, inds2):
  '''Take the data, a list, and split it up based on the indices in inds1 and
  inds2.
  Args:
    data: the list of data to split
    inds1, the first list of indices
    inds2, the second list of indices
  Returns: a 2-tuple of two lists.
  '''
  if data is None or len(data) == 0:
    return [], []
  else:
    dout1 = [data[i] for i in inds1]
    dout2 = [data[i] for i in inds2]
    return dout1, dout2
    
    
# NUMPY utility functions
def list_t_bxn_to_list_b_txn(values_t_bxn):
  '''Convert a length T list of BxN numpy tensors of length B list of TxN numpy
  tensors.
    
        sys.stderr.write('Recovering checkpoint %s\n' % ckpt_file)
    sess = tf.Session(config=tf.ConfigProto(allow_soft_placement=True))
    sess.run('save/restore_all', {'save/Const:0': ckpt_file})
    sess.run(t['states_init'])
    
            self._id_to_word.append(word_name)
        self._word_to_id[word_name] = idx
        idx += 1
    
      if not FLAGS.seq2seq_share_embedding:
    variable_mapping = {
        'Model/embeddings/input_embedding':
            encoder_embedding,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_1
    }
  else:
    variable_mapping = {
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_1
    }
  return variable_mapping
    
        Uses the last ([-1]) value of other fields
    '''
    column_width = max(max(len(k) for k in formats) + 1, 8)
    first_width = max(len(k) for k in metrics)
    head_fmt = ('{:<{fw}s}' + '{:>{cw}s}' * len(formats))
    row_fmt = ('{:<{fw}s}' + '{:>{cw}.3f}' * len(formats))
    print(head_fmt.format('Metric', *formats,
                          cw=column_width, fw=first_width))
    for metric, row in zip(metrics, results[:, :, -1, -1, -1]):
        print(row_fmt.format(metric, *row,
                             cw=column_width, fw=first_width))
    
            descr_string = descr_string[:-2]
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
    # add noise
y += 0.01 * np.random.normal((n_samples,))
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
        urls = matchall(content, netease_embed_patterns)
    for url in urls:
        found = True
        netease_download(url, output_dir=output_dir, merge=merge, info_only=info_only)
    
        point = readme_soup.find_all('h1')[1]