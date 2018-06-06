
        
        import itertools
import json
import os
import re
import sys
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
        def test_func(self):
        as_file = os.path.join(TEST_DIR, testfile)
        swf_file = os.path.join(TEST_DIR, test_id + '.swf')
        if ((not os.path.exists(swf_file)) or
                os.path.getmtime(swf_file) < os.path.getmtime(as_file)):
            # Recompile
            try:
                subprocess.check_call([
                    'mxmlc', '-output', swf_file,
                    '-static-link-runtime-shared-libraries', as_file])
            except OSError as ose:
                if ose.errno == errno.ENOENT:
                    print('mxmlc not found! Skipping test.')
                    return
                raise
    
    import io
import re
    
    from .nuevo import NuevoBaseIE
    
    import re
    
        return len(cmd) > 1 and 'x' in cmd[1]
    
    # TODO: ensure that history changes.

    
    
@keras_test
def test_model_trainability_switch():
    # a non-trainable model has no trainable weights
    x = Input(shape=(1,))
    y = Dense(2)(x)
    model = Model(x, y)
    model.trainable = False
    assert model.trainable_weights == []
    
    from keras import backend as K
from keras import constraints
from keras.utils.test_utils import keras_test
    
    from keras import backend as K
from keras.models import Sequential, Model
from keras.layers import convolutional_recurrent, Input
from keras.utils.test_utils import layer_test
from keras import regularizers
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    class Error(Exception):
    '''Base class for all future-related exceptions.'''
    pass
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#sys.path.append(os.path.abspath('.'))
    
    
def ExtractKeywordsFromGroup_ContainedSyntaxArgAllowed_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'contained foo zoq',
                   'contained bar goo',
                   'far'
                 ] ) ),
               contains_inanyorder( 'foo', 'zoq', 'bar', 'goo', 'far' ) )

    
    
def EndsWithPython_Bad( path ):
  ok_( not _EndsWithPython( path ),
       'Path {0} does end with a Python name.'.format( path ) )
    
            # When there are multiple fixit suggestions, present them as a list to
        # the user hand have her choose which one to apply.
        if len( self._response[ 'fixits' ] ) > 1:
          fixit_index = vimsupport.SelectFromList(
            'Multiple FixIt suggestions are available at this location. '
            'Which one would you like to apply?',
            [ fixit[ 'text' ] for fixit in self._response[ 'fixits' ] ] )
    
    define('port', default=8888, help='run on the given port', type=int)
    
            try:
            self.enter()
        except:
            _state.contexts = self.old_contexts
            raise
    
    
class TCPServerTest(AsyncTestCase):
    @gen_test
    def test_handle_stream_coroutine_logging(self):
        # handle_stream may be a coroutine and any exception in its
        # Future will be logged.
        class TestServer(TCPServer):
            @gen.coroutine
            def handle_stream(self, stream, address):
                yield stream.read_bytes(len(b'hello'))
                stream.close()
                1 / 0
    
        @classmethod
    def send_updates(cls, chat):
        logging.info('sending message to %d waiters', len(cls.waiters))
        for waiter in cls.waiters:
            try:
                waiter.write_message(chat)
            except:
                logging.error('Error sending message', exc_info=True)