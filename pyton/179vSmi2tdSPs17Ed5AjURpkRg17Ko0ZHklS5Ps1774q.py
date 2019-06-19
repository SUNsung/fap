
        
            def is_face_card(self):
        '''Jack = 11, Queen = 12, King = 13'''
        return True if 10 < self._value <= 13 else False
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        # Define the loss function and the optimization algorithm
    self.cross_entropies = tf.nn.sparse_softmax_cross_entropy_with_logits(
        logits=self.scores, labels=self.labels)
    self.cost = tf.reduce_sum(self.cross_entropies, name='cost')
    self.global_step = tf.Variable(0, name='global_step', trainable=False)
    self.optimizer = tf.train.AdamOptimizer()
    self.train_op = self.optimizer.minimize(
        self.cost, global_step=self.global_step)
    
        # The output is [num_batch_paths, max_path_len, output_dim].
    self.lstm_outputs, _ = tf.nn.dynamic_rnn(
        lstm_cell, self.path_matrix, dtype=tf.float32,
        sequence_length=self.sequence_lengths)
    
      return d
    
      # Project all the channels data onto the low-D PCA basis, where
  # low-d is the npcs parameter.
  all_data_pca_pxtc = np.dot(evecs_nxn[:, 0:npcs].T, all_data_zm_nxtc)
    
          if len(example) > num_steps:
        final_x = example[:num_steps]
        final_y = example[1:(num_steps + 1)]
        w[i] = 1
    
    
def ptb_raw_data(data_path=None):
  '''Load PTB raw data from data directory 'data_path'.
  Reads PTB text files, converts strings to integer ids,
  and performs mini-batching of the inputs.
  The PTB dataset comes from Tomas Mikolov's webpage:
  http://www.fit.vutbr.cz/~imikolov/rnnlm/simple-examples.tgz
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data, test_data, vocabulary)
    where each of the data objects can be passed to PTBIterator.
  '''
    
      Args:
    predictions:  Discriminator linear predictions Tensor of shape [batch_size,
      sequence_length]
    labels: Labels for predictions, Tensor of shape [batch_size,
      sequence_length]
    missing_tokens:  Indicator for the missing tokens.  Evaluate the loss only
      on the tokens that were missing.
    
        Args:
      time: positive integer constant reflecting the current timestep.
      cell_state: state of RNNCell.
      cell_input: input provided by `dynamic_rnn_decoder`.
      cell_output: output of RNNCell.
      context_state: context state provided by `dynamic_rnn_decoder`.
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
        assert get_new_command(Command('brew install aa',
                                   brew_no_available_formula))\
        != 'brew install aha'

    
                        resp = HTTPResponse.from_httplib(
                        r,
                        pool=conn,
                        connection=low_conn,
                        preload_content=False,
                        decode_content=False
                    )
                except:
                    # If we hit any problems here, clean up the connection.
                    # Then, reraise so that we can handle the actual exception.
                    low_conn.close()
                    raise
    
                # the (n+1)th request fails
            with pytest.raises(requests.exceptions.ConnectionError):
                r = requests.get(server_url)
    
        def prepare(self):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for transmission and returns it.'''
        p = PreparedRequest()
        p.prepare(
            method=self.method,
            url=self.url,
            headers=self.headers,
            files=self.files,
            data=self.data,
            json=self.json,
            params=self.params,
            auth=self.auth,
            cookies=self.cookies,
            hooks=self.hooks,
        )
        return p
    
        @pytest.mark.parametrize(
        'old_uri, new_uri', (
            ('https://example.com:443/foo', 'https://example.com/bar'),
            ('http://example.com:80/foo', 'http://example.com/bar'),
            ('https://example.com/foo', 'https://example.com:443/bar'),
            ('http://example.com/foo', 'http://example.com:80/bar')
        ))
    def test_should_strip_auth_default_port(self, old_uri, new_uri):
        s = requests.Session()
        assert not s.should_strip_auth(old_uri, new_uri)
    
    # If false, no index is generated.
# html_use_index = True