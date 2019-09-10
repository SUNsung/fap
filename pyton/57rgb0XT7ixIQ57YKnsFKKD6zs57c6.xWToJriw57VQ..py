
        
        # Set parameters:
# ngram_range = 2 will add bi-grams features
ngram_range = 1
max_features = 20000
maxlen = 400
batch_size = 32
embedding_dims = 50
epochs = 5
    
    
def create_pairs(x, digit_indices):
    '''Positive and negative pair creation.
    Alternates between positive and negative pairs.
    '''
    pairs = []
    labels = []
    n = min([len(digit_indices[d]) for d in range(num_classes)]) - 1
    for d in range(num_classes):
        for i in range(n):
            z1, z2 = digit_indices[d][i], digit_indices[d][i + 1]
            pairs += [[x[z1], x[z2]]]
            inc = random.randrange(1, num_classes)
            dn = (d + inc) % num_classes
            z1, z2 = digit_indices[d][i], digit_indices[dn][i]
            pairs += [[x[z1], x[z2]]]
            labels += [1, 0]
    return np.array(pairs), np.array(labels)
    
    
def test_reuters_load_does_not_affect_global_rng(fake_downloaded_reuters_path):
    np.random.seed(1337)
    before = np.random.randint(0, 100, size=10)
    
    from .merge import Add
from .merge import Subtract
from .merge import Multiply
from .merge import Average
from .merge import Maximum
from .merge import Minimum
from .merge import Concatenate
from .merge import Dot
from .merge import add
from .merge import subtract
from .merge import multiply
from .merge import average
from .merge import maximum
from .merge import minimum
from .merge import concatenate
from .merge import dot
    
    Output after 4 epochs on CPU: ~0.8146
Time per epoch on CPU (Core i7): ~150s.
'''
    
    In this examples we will use a movie review dataset.
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
    
X = np.concatenate((x, y))
X += .7 * np.random.randn(2, n_samples)
X = X.T
    
        def process(self, detected_face, predicted_mask=None):
        ''' Return mask and perform processing '''
        mask = self.get_mask(detected_face, predicted_mask)
        raw_mask = mask.copy()
        if not self.skip and self.do_erode:
            mask = self.erode(mask)
        if not self.skip and self.do_blend:
            mask = self.blend(mask)
        raw_mask = np.expand_dims(raw_mask, axis=-1) if raw_mask.ndim != 3 else raw_mask
        mask = np.expand_dims(mask, axis=-1) if mask.ndim != 3 else mask
        logger.trace('mask shape: %s, raw_mask shape: %s', mask.shape, raw_mask.shape)
        return mask, raw_mask
    
    
class Adjustment():
    ''' Parent class for scaling adjustments '''
    def __init__(self, configfile=None, config=None):
        logger.debug('Initializing %s: (configfile: %s, config: %s)',
                     self.__class__.__name__, configfile, config)
        self.config = self.set_config(configfile, config)
        logger.debug('config: %s', self.config)
        logger.debug('Initialized %s', self.__class__.__name__)
    
            background = self.background
        pad = self.pad
        widget = self.widget
    
    
def rmod(left, right):
    # check if right is a string as % is the string
    # formatting operation; this is a TypeError
    # otherwise perform the op
    if isinstance(right, str):
        raise TypeError(
            '{typ} cannot perform the operation mod'.format(typ=type(left).__name__)
        )
    
        path_types.append(Path)
except ImportError:
    pass