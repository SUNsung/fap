
        
          # Print rows
  for i, label1 in enumerate(short_labels):
    row = '%{0}s '.format(columnwidth) % label1[:10]
    for j in range(len(short_labels)):
      value = int(cm[i, j]) if not np.isnan(cm[i, j]) else 0
      cell = ' %{0}d '.format(10) % value
      row += cell + ' '
    print(row)
    
          self.weights1 = tf.get_variable(
          'W1',
          shape=[network_input, hidden_dim],
          dtype=tf.float32)
      self.bias1 = tf.get_variable(
          'b1',
          shape=[hidden_dim],
          dtype=tf.float32)
    
      Args:
    model: The trained path-based model.
    session: The current TensorFlow session.
    instances: All the train, test and validation instances.
    
    # write out the dataset
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)
print ('Saved to ', os.path.join(FLAGS.save_dir,
                                 FLAGS.datafile_name + '_' + dataset_name))

    
      Args:
    data_fname: The filename of teh file in which to write the data.
    data_dict:  The dictionary of data to write. The keys are strings
      and the values are numpy arrays.
    use_json (optional): human readable format for simple items
    compression (optional): The compression to use for h5py (disabled by
      default because the library borks on scalars, otherwise try 'gzip').
  '''
    
        for i in range(batch_size):
      data_index = batch * batch_size + i
      example = raw_data[data_index]
    
    
def convert_to_human_readable(id_to_word, arr, max_num_to_print):
  '''Convert a np.array of indices into words using id_to_word dictionary.
  Return max_num_to_print results.
  '''
  assert arr.ndim == 2