
        
        
def layer_norm_and_dropout(input_tensor, dropout_prob, name=None):
  '''Runs layer normalization followed by dropout.'''
  output_tensor = layer_norm(input_tensor, name)
  output_tensor = dropout(output_tensor, dropout_prob)
  return output_tensor
    
    
def _truncate_seq_pair(tokens_a, tokens_b, max_length):
  '''Truncates a sequence pair in place to the maximum length.'''
    
      # Implements linear decay of the learning rate.
  learning_rate = tf.train.polynomial_decay(
      learning_rate,
      global_step,
      num_train_steps,
      end_learning_rate=0.0,
      power=1.0,
      cycle=False)
    
      def tokenize(self, text):
    split_tokens = []
    for token in self.basic_tokenizer.tokenize(text):
      for sub_token in self.wordpiece_tokenizer.tokenize(token):
        split_tokens.append(sub_token)