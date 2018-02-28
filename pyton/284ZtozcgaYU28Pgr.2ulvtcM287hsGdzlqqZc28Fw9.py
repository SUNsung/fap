
        
        def md5s(data):
    if not _md5:
        raise ValueError('MD5 not available.  Possibly running in FIPS mode')
    return secure_hash_s(data, _md5)
    
        # What we're left with now must be an IPv4 or IPv6 address, possibly with
    # numeric ranges, or a hostname with alphanumeric ranges.
    
    # We project onto a single unit output layer, and squash it with a sigmoid:
model.add(Dense(1, activation='sigmoid'))
    
    from ..utils.generic_utils import deserialize_keras_object
from ..engine import Layer
from ..engine import Input
from ..engine import InputLayer
from ..engine import InputSpec
from .merge import *
from .core import *
from .convolutional import *
from .pooling import *
from .local import *
from .recurrent import *
from .cudnn_recurrent import *
from .normalization import *
from .embeddings import *
from .noise import *
from .advanced_activations import *
from .wrappers import *
from .convolutional_recurrent import *
from ..legacy.layers import *
    
        model = Sequential()
    model.add(Merge([left, left], mode='sum'))
    model.add(Dense(num_classes))
    model.add(Activation('softmax'))
    model.compile(loss='categorical_crossentropy', optimizer='rmsprop')