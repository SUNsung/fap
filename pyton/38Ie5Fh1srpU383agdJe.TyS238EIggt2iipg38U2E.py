
        
          def write_model_samples(self, dataset_name, output_fname=None):
    '''Use the prior distribution to generate batch_size number of samples
    from the model.
    
      T = len(values_t_bxn)
  B, N = values_t_bxn[0].shape
  values_bxtxn = np.zeros([B,T,N])
  for t in range(T):
    values_bxtxn[:,t,:] = values_t_bxn[t]
    
      def evaluate(self):
    '''Evaluate the current ensemble.'''
    # Attach word probabilities and correctness label to each substitution
    ensembled_probs = sum(self.all_probs) / len(self.all_probs)
    scorings = []
    for i, sentence in enumerate(self.sentences):
      correctness = self.labels[i]
      word_probs = ensembled_probs[i, :len(sentence)]
      joint_prob = np.prod(word_probs, dtype=np.float64)
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
    
def hash_function(input_tuple):
  '''Hash function for a tuple.'''
  return hash(input_tuple)
    
    
def dis_bwd_bidirectional(hparams):
  '''Returns the *backward* PTB Variable name to MaskGAN Variable dictionary
  mapping.  This is a highly restrictive function just for testing. This is for
  the bidirectional_zaremba discriminator.
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    
class TestJSInterpreter(unittest.TestCase):
    def test_basic(self):
        jsi = JSInterpreter('function x(){;}')
        self.assertEqual(jsi.call_function('x'), None)
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
        return o

    
        assert len(kernel_size) == 2
    assert len(strides) == 4
    
        return x
    
        in_channels = int(x.get_shape()[-1])
    kernel_shape = list(kernel_size) + [in_channels, in_channels]