
        
          # Convert from figure to an numpy array width x height x 3 (last for RGB)
  f.canvas.draw()
  data = np.fromstring(f.canvas.tostring_rgb(), dtype=np.uint8, sep='')
  data_wxhx3 = data.reshape(f.canvas.get_width_height()[::-1] + (3,))
  plt.close()
    
      def get_batch(self, batch_size, num_steps, pad=False, forever=True):
    return get_batch(self._get_sentence(forever), batch_size, num_steps,
                     self.vocab.max_word_length, pad=pad)
    
      data_gen = dataset.get_batch(BATCH_SIZE, NUM_TIMESTEPS, forever=False)
  sum_num = 0.0
  sum_den = 0.0
  perplexity = 0.0
  for i, (inputs, char_inputs, _, targets, weights) in enumerate(data_gen):
    input_dict = {t['inputs_in']: inputs,
                  t['targets_in']: targets,
                  t['target_weights_in']: weights}
    if 'char_inputs_in' in t:
      input_dict[t['char_inputs_in']] = char_inputs
    log_perp = sess.run(t['log_perplexity_out'], feed_dict=input_dict)
    
    np.set_printoptions(precision=3)
np.set_printoptions(suppress=True)
    
        for index, pred in zip(index_batch, pred_batch):
      indices_predictions.append([str(id_to_word[index]), pred])
    batch_of_indices_predictions.append(indices_predictions)
  return batch_of_indices_predictions
    
      # Forward Discriminator Elements.
  if not FLAGS.dis_share_embedding:
    embedding = [
        v for v in tf.trainable_variables() if v.op.name == 'dis/embedding'
    ][0]
  fw_lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  fw_lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  fw_lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  fw_lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/fw/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
  if FLAGS.dis_share_embedding:
    variable_mapping = {
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': fw_lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': fw_lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': fw_lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': fw_lstm_b_1
    }
  else:
    variable_mapping = {
        'Model/embedding': embedding,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': fw_lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': fw_lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': fw_lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': fw_lstm_b_1
    }
  return variable_mapping
    
    '''Simple bidirectional model definitions.'''
    
            assert vid
    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
        title = match1(html, r'<title>([^<]{1,9999})</title>')
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)