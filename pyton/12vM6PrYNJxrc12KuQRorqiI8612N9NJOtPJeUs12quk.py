
        
            def __init__(self):
        self.name = 'citext'
    
        def _get_session_from_db(self):
        try:
            return self.model.objects.get(
                session_key=self.session_key,
                expire_date__gt=timezone.now()
            )
        except (self.model.DoesNotExist, SuspiciousOperation) as e:
            if isinstance(e, SuspiciousOperation):
                logger = logging.getLogger('django.security.%s' % e.__class__.__name__)
                logger.warning(str(e))
            self._session_key = None
    
        # Output processing
    def get_formatters(self):
        return [plugin for plugin in self
                if issubclass(plugin, FormatterPlugin)]
    
            :param chunk: A chunk of response body data that has just
                      been downloaded and written to the output.
        :type chunk: bytes
    
    
def softsign(x):
    '''
    o = x / (1 + abs(x))
    '''
    return tf.nn.softsign(x)
    
        return o

    
            self._built = False
    
    import tensorflow as tf
import keras.backend as K
    
    