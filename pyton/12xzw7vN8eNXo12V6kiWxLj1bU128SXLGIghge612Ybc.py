
        
        
def write_predictions(pairs, labels, predictions, classes, predictions_file):
  '''Write the predictions to a file.
    
      return -0.5 * (logvar + np.log(2*np.pi) + \
                 tf.square((z-mu)/tf.exp(0.5*logvar)))
    
    # Write out the datasets.
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)

    
    spiking_data_e = spikify_data(truth_data_e, rng, dt=FLAGS.dt,
                              max_firing_rate=FLAGS.max_firing_rate)
train_inds, valid_inds = get_train_n_valid_inds(E, train_percentage,
                                                nreplications)
    
    rnn_a = generate_rnn(rnn_rngs[0], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnn_b = generate_rnn(rnn_rngs[1], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnns = [rnn_a, rnn_b]
    
      Args:
    sentence: Sentence words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
      def encode_chars(self, sentence):
    chars_ids = [self.word_to_char_ids(cur_word)
                 for cur_word in sentence.split()]
    return np.vstack([self.bos_chars] + chars_ids + [self.eos_chars])
    
    from models import bidirectional_zaremba
from models import cnn
from models import critic_vd
from models import feedforward
from models import rnn
from models import rnn_nas
from models import rnn_vd
from models import rnn_zaremba
from models import seq2seq
from models import seq2seq_nas
from models import seq2seq_vd
from models import seq2seq_zaremba
    
        r_t = log D(x_t|x_0,x_1,...x_{t-1})
    
      Returns:
    variable_mapping:  Dictionary with Key: ckpt_name, Value: model_var.
  '''
  # This logic is only valid for cnn
  assert FLAGS.discriminator_model == 'cnn'
    
      Returns:
    A decoder function with the required interface of `dynamic_rnn_decoder`
    intended for inference.
  '''
  with tf.name_scope(name, 'attention_decoder_fn_inference', [
      output_fn, encoder_state, attention_keys, attention_values,
      attention_score_fn, attention_construct_fn, embeddings,
      start_of_sequence_id, end_of_sequence_id, maximum_length,
      num_decoder_symbols, dtype
  ]):
    start_of_sequence_id = tf.convert_to_tensor(start_of_sequence_id, dtype)
    end_of_sequence_id = tf.convert_to_tensor(end_of_sequence_id, dtype)
    maximum_length = tf.convert_to_tensor(maximum_length, dtype)
    num_decoder_symbols = tf.convert_to_tensor(num_decoder_symbols, dtype)
    encoder_info = tf.contrib.framework.nest.flatten(encoder_state)[0]
    batch_size = encoder_info.get_shape()[0].value
    if output_fn is None:
      output_fn = lambda x: x
    if batch_size is None:
      batch_size = tf.shape(encoder_info)[0]
    
    This is better.
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    \tDid you mean `build`?
'''
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          