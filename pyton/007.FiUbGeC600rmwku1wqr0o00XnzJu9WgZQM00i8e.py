
        
        # Pull out some commonly used parameters.
# These are user parameters (configuration)
rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
S = FLAGS.S
input_magnitude = FLAGS.input_magnitude
nreplications = FLAGS.nreplications
E = nreplications * C         # total number of trials
# S is the number of measurements in each datasets, w/ each
# dataset having a different set of observations.
ndatasets = N/S                 # ok if rounded down
train_percentage = FLAGS.train_percentage
ntime_steps = int(T / FLAGS.dt)
# End of user parameters
    
    
def write_data(data_fname, data_dict, use_json=False, compression=None):
  '''Write data in HD5F format.
    
    
def _SampleModel(prefix_words, vocab):
  '''Predict next words using the given prefix words.
    
        self.bos_chars = self._convert_word_to_char_ids(self.bos_char)
    self.eos_chars = self._convert_word_to_char_ids(self.eos_char)
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
    from __future__ import print_function
    
        fpath = os.path.join(path, 'train')
    x_train, y_train = load_batch(fpath, label_key=label_mode + '_labels')
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape[1:])(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x)
    x2 = np.transpose(x, (0, 3, 1, 2))
    inputs2 = Input(shape=x2.shape[1:])
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape[1:])(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2)
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    
    import datetime
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
    FREQ_CAT_NUM = 4
    
        def feed(self, byte_str):
        for i in range(len(byte_str)):
            coding_state = self.coding_sm.next_state(byte_str[i])
            if coding_state == MachineState.ERROR:
                self.logger.debug('%s %s prober hit error at byte %s',
                                  self.charset_name, self.language, i)
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                char_len = self.coding_sm.get_current_charlen()
                if i == 0:
                    self._last_char[1] = byte_str[0]
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)
    
    # EUC-JP
    
            # Log all prober confidences if none met MINIMUM_THRESHOLD
        if self.logger.getEffectiveLevel() == logging.DEBUG:
            if self.result['encoding'] is None:
                self.logger.debug('no probers hit minimum threshold')
                for group_prober in self._charset_probers:
                    if not group_prober:
                        continue
                    if isinstance(group_prober, CharSetGroupProber):
                        for prober in group_prober.probers:
                            self.logger.debug('%s %s confidence = %s',
                                              prober.charset_name,
                                              prober.language,
                                              prober.get_confidence())
                    else:
                        self.logger.debug('%s %s confidence = %s',
                                          prober.charset_name,
                                          prober.language,
                                          prober.get_confidence())
        return self.result

    
        def get_confidence(self):
        unlike = 0.99
        if self._num_mb_chars < 6:
            unlike *= self.ONE_CHAR_PROB ** self._num_mb_chars
            return 1.0 - unlike
        else:
            return unlike
