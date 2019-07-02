
        
        x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        # Arguments
        label_mode: one of 'fine', 'coarse'.
    
    
def test_regularization_shared_model():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
    if K.image_data_format() == 'channels_first':
    x_train = x_train.reshape(x_train.shape[0], 1, img_rows, img_cols)
    x_test = x_test.reshape(x_test.shape[0], 1, img_rows, img_cols)
    input_shape = (1, img_rows, img_cols)
else:
    x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)
    x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)
    input_shape = (img_rows, img_cols, 1)
    
    To use this with Keras, we make a dataset out of elements
of the form (input batch, output batch). From there, we
create a one-shot iterator and a graph node corresponding
to its get_next() method. Its components are then provided
to the network's Input layer and the Model.compile() method,
respectively.
    
    import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout
from keras.optimizers import RMSprop
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    # If true, show page references after internal links.
#
# latex_show_pagerefs = False
    
    
def __meters_to_kilometers(meters: float) -> float:
    '''Convert meters to kilometers.'''
    return meters * 0.001

    
        elif bump_type == 'patch':
        # Convert 0.67.3 to 0.67.4
        # Convert 0.67.3.b5 to 0.67.3
        # Convert 0.67.3.dev0 to 0.67.3
        to_change['dev'] = None
        to_change['pre'] = None
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
    from tornado import gen
from tornado.options import options, define, parse_command_line
    
        def start_tree(self, tree, filename):
        self.found_future_import = False
    
    This module will not work correctly when `.HTTPServer`'s multi-process
mode is used.
    
    import os
    
        def test_twitter_show_user(self):
        response = self.fetch('/twitter/client/show_user?name=somebody')
        response.rethrow()
        self.assertEqual(
            json_decode(response.body), {'name': 'Somebody', 'screen_name': 'somebody'}
        )
    
        total_loss = masked_lm_loss + next_sentence_loss
    
      # When we created the data, we kept track of the alignment between original
  # (whitespace tokenized) tokens and our WordPiece tokenized tokens. So
  # now `orig_text` contains the span of our original text corresponding to the
  # span that we predicted.
  #
  # However, `orig_text` may contain extra characters that we don't want in
  # our prediction.
  #
  # For example, let's say:
  #   pred_text = steve smith
  #   orig_text = Steve Smith's
  #
  # We don't want to return `orig_text` because it contains the extra ''s'.
  #
  # We don't want to return `pred_text` because it's already been normalized
  # (the SQuAD eval script also does punctuation stripping/lower casing but
  # our tokenizer does additional normalization like stripping accent
  # characters).
  #
  # What we really want to return is 'Steve Smith'.
  #
  # Therefore, we have to apply a semi-complicated alignment heruistic between
  # `pred_text` and `orig_text` to get a character-to-charcter alignment. This
  # can fail in certain cases in which case we just return `orig_text`.