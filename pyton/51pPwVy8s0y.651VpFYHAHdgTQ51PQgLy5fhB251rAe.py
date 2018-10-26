
        
        
class HasKeys(PostgresSimpleLookup):
    lookup_name = 'has_keys'
    operator = '?&'
    
    
class RangeMinValueValidator(MinValueValidator):
    def compare(self, a, b):
        return a.lower is None or a.lower < b
    message = _('Ensure that this range is completely greater than or equal to %(limit_value)s.')

    
        @property
    def cache_key(self):
        return self.cache_key_prefix + self._get_or_create_session_key()
    
        def exists(self, session_key=None):
        '''
        This method makes sense when you're talking to a shared resource, but
        it doesn't matter when you're storing the information in the client's
        cookie.
        '''
        return False
    
        def __call__(self, func):
        # Note that we are intentionally not using @wraps here for performance
        # reasons. Refs #21109.
        def inner(*args, **kwargs):
            with self:
                return func(*args, **kwargs)
        return inner
    
    
def l2(l=0.01):
    return L1L2(l2=l)
    
        Also works from TensorFlow to Theano.
    
    
allobj = [losses.mean_squared_error,
          losses.mean_absolute_error,
          losses.mean_absolute_percentage_error,
          losses.mean_squared_logarithmic_error,
          losses.squared_hinge,
          losses.hinge,
          losses.categorical_crossentropy,
          losses.binary_crossentropy,
          losses.kullback_leibler_divergence,
          losses.poisson,
          losses.cosine_proximity,
          losses.logcosh,
          losses.categorical_hinge]
    
            # Arguments
          inputs: Single array, or list of arrays. The arrays could be placeholders,
            Numpy arrays, or data tensors.
            - if placeholders: the model is built on top of these placeholders,
              and we expect Numpy data to be fed for them when calling `fit`/etc.
            - if Numpy data: we create placeholders matching the shape of the Numpy
              arrays. We expect Numpy data to be fed for these placeholders
              when calling `fit`/etc.
            - if data tensors: the model is built on top of these tensors.
              We do not expect any Numpy data to be provided when calling `fit`/etc.
          outputs: Optional output tensors (if already computed by running
            the model).
          training: Boolean or None. Only relevant in symbolic mode. Specifies
            whether to build the model's graph in inference mode (False), training
            mode (True), or using the Keras learning phase (None).
        '''
        if self.__class__.__name__ == 'Sequential':
            # Note: we can't test whether the model
            # is `Sequential` via `isinstance`
            # since `Sequential` depends on `Model`.
            if isinstance(inputs, list):
                assert len(inputs) == 1
                inputs = inputs[0]
            self.build(input_shape=(None,) + inputs.shape[1:])
            return
    
    import numpy as np
from scipy.sparse import issparse
    
        def build(self, input_shape=None):
        if input_shape and not self.inputs:
            batch_shape = tuple(input_shape)
            dtype = K.floatx()
            x = Input(batch_shape=batch_shape,
                      dtype=dtype,
                      name=self.name + '_input')
            self.inputs = [x]
            for layer in self._layers:
                x = layer(x)
            self.outputs = [x]
            self._build_input_shape = input_shape
    
        proxy_server = simple_http_server.HTTPServer(
        (listen_ip, front.config.listen_port), proxy_handler.GAEProxyHandler, logger=xlog)