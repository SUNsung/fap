
        
        from utils import write_datasets
from synthetic_data_utils import add_alignment_projections, generate_data
from synthetic_data_utils import generate_rnn, get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, gaussify_data, split_list_by_inds
import matplotlib
import matplotlib.pyplot as plt
import scipy.signal
    
    rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
rnn_rngs = [np.random.RandomState(seed=FLAGS.synth_data_seed+1),
            np.random.RandomState(seed=FLAGS.synth_data_seed+2)]
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
nreplications = FLAGS.nreplications
E = nreplications * C
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
    
      # In the data workup in the paper, Chethan did intra condition
  # averaging, so let's do that here.
  avg_data_all = {}
  for name, conditions in conditions_all.items():
    dataset = datasets[name]
    avg_data_all[name] = {}
    for cname in conditions:
      td_idxs = np.argwhere(np.array(dataset['condition_labels_train'])==cname)
      data = np.squeeze(dataset['train_data'][td_idxs,:,:], axis=1)
      avg_data = np.mean(data, axis=0)
      avg_data_all[name][cname] = avg_data
    
          elif FLAGS.generator_model.startswith('seq2seq'):
        load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
        print('Restoring Generator from %s.' % load_ckpt)
        tf.logging.info('Restoring Generator from %s.' % load_ckpt)
        gen_encoder_init_saver = init_savers['gen_encoder_init_saver']
        gen_decoder_init_saver = init_savers['gen_decoder_init_saver']
        gen_encoder_init_saver.restore(sess, load_ckpt)
        gen_decoder_init_saver.restore(sess, load_ckpt)
    
      if not FLAGS.dis_share_embedding:
    variable_mapping = {
        str(model_str) + '/embedding':
            decoder_embedding,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            decoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            decoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            decoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            decoder_lstm_b_1
    }
  else:
    variable_mapping = {
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            decoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            decoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            decoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            decoder_lstm_b_1,
    }
  return variable_mapping
    
    
def rmtree(path):
    for name in os.listdir(path):
        fname = os.path.join(path, name)
        if os.path.isdir(fname):
            rmtree(fname)
        else:
            os.chmod(fname, 0o666)
            os.remove(fname)
    os.rmdir(path)
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
        def debug(self, msg):
        pass