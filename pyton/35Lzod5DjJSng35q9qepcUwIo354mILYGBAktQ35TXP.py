
        
        
def _is_tar_extract(cmd):
    if '--extract' in cmd:
        return True
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
                    if path.endswith('.json'):
                    contents = json.dumps(json.loads(contents), sort_keys=True, indent=4)
    
        old_layer = keras.layers.BatchNormalization(mode=0,
                                                beta_init='one',
                                                gamma_init='uniform',
                                                name='bn')
    new_layer = keras.layers.BatchNormalization(beta_initializer='ones',
                                                gamma_initializer='uniform',
                                                name='bn')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    from keras.utils.test_utils import keras_test
from keras.models import Model, Sequential
from keras.layers import Dense, Input
    
    - We start with input sequences from a domain (e.g. English sentences)
    and correspding target sequences from another domain
    (e.g. French sentences).
- An encoder LSTM turns input sequences to 2 state vectors
    (we keep the last LSTM state and discard the outputs).
- A decoder LSTM is trained to turn the target sequences into
    the same sequence but offset by one timestep in the future,
    a training process called 'teacher forcing' in this context.
    Is uses as initial state the state vectors from the encoder.
    Effectively, the decoder learns to generate `targets[t+1...]`
    given `targets[...t]`, conditioned on the input sequence.
- In inference mode, when we want to decode unknown input sequences, we:
    - Encode the input sequence into state vectors
    - Start with a target sequence of size 1
        (just the start-of-sequence character)
    - Feed the state vectors and 1-char target sequence
        to the decoder to produce predictions for the next character
    - Sample the next character using these predictions
        (we simply use argmax).
    - Append the sampled character to the target sequence
    - Repeat until we generate the end-of-sequence character or we
        hit the character limit.
    
        # upsample to (14, 14, ...)
    cnn.add(Conv2DTranspose(96, 5, strides=2, padding='same',
                            activation='relu',
                            kernel_initializer='glorot_normal'))
    cnn.add(BatchNormalization())
    
        # Transform sequences and labels into 'one-hot' encoding
    x = np.zeros((len(sentences), sequence_length, number_of_chars), dtype=np.bool)
    y = np.zeros((len(sentences), number_of_chars), dtype=np.bool)
    for i, sentence in enumerate(sentences):
        for t, char in enumerate(sentence):
            x[i, t, ord(char) - ord('a')] = 1
        y[i, ord(next_chars[i]) - ord('a')] = 1
    
    from sklearn.datasets import fetch_20newsgroups_vectorized
from sklearn.metrics import accuracy_score
from sklearn.utils.validation import check_array
    
        n_iter = 40
    
            for iteration in xrange(opts.n_times):
            print('\titer %s...' % iteration, end='')
            time_to_fit, time_to_transform = bench_scikit_transformer(X_dense,
              transformers[name])
            time_fit[name].append(time_to_fit)
            time_transform[name].append(time_to_transform)
            print('done')
    
        ###########################################################################
    # Set custom tracking based method
    sampling_algorithm['custom-tracking-selection'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='tracking_selection',
                                       random_state=random_state)
    
        short_text_lang_folder = os.path.join(short_text_folder, lang)
    if not os.path.exists(short_text_lang_folder):
        os.makedirs(short_text_lang_folder)
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    Both kinds of calibration can fix this issue and yield nearly identical
results. This shows that sigmoid calibration can deal with situations where
the calibration curve of the base classifier is sigmoid (e.g., for LinearSVC)
but not where it is transposed-sigmoid (e.g., Gaussian naive Bayes).
'''
print(__doc__)
    
    from sklearn.datasets import make_blobs
from sklearn.ensemble import RandomForestClassifier
from sklearn.calibration import CalibratedClassifierCV
from sklearn.metrics import log_loss
    
    Shows how shrinkage improves classification.
'''
    
                def finish(self):
                event.set()
    
    
class BoundedSemaphoreTest(AsyncTestCase):
    def test_release_unacquired(self):
        sem = locks.BoundedSemaphore()
        self.assertRaises(ValueError, sem.release)
        # Value is 0.
        sem.acquire()
        # Block on acquire().
        future = sem.acquire()
        self.assertFalse(future.done())
        sem.release()
        self.assertTrue(future.done())
        # Value is 1.
        sem.release()
        self.assertRaises(ValueError, sem.release)