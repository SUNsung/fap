
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
    from flaskr.auth import login_required
from flaskr.db import get_db
    
    # read in SQL for populating test data
with open(os.path.join(os.path.dirname(__file__), 'data.sql'), 'rb') as f:
    _data_sql = f.read().decode('utf8')
    
    
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
        @app.teardown_appcontext
    def teardown_app(error=None):
        called.append('app')
    
        # Arguments
        model: A Keras model instance. To avoid OOM errors,
            this model could have been built on CPU, for instance
            (see usage example below).
        gpus: Integer >= 2 or list of integers, number of GPUs or
            list of GPU IDs on which to create model replicas.
        cpu_merge: A boolean value to identify whether to force
            merging model weights under the scope of the CPU or not.
        cpu_relocation: A boolean value to identify whether to
            create the model's weights under the scope of the CPU.
            If the model is not defined under any preceding device
            scope, you can still rescue it by activating this option.
    
    if K.backend() != 'tensorflow':
    raise RuntimeError('This example can only run with the '
                       'TensorFlow backend, '
                       'because it requires TF-native augmentation APIs')
    
    '''
Note:
batch_size is highly sensitive.
Only 2 epochs are needed as the dataset is very small.
'''
    
        # Check cryptography version
    from cryptography import __version__ as cryptography_version
    _check_cryptography(cryptography_version)
except ImportError:
    pass
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
        def rebuild_auth(self, prepared_request, response):
        '''When being redirected we may want to strip authentication from the
        request to avoid leaking credentials. This method intelligently removes
        and reapplies authentication where possible to avoid credential loss.
        '''
        headers = prepared_request.headers
        url = prepared_request.url
    
        replace_chars = ' \'''
    
        def test_string_literals(self):
        x = ''; y = ''; self.assertTrue(len(x) == 0 and x == y)
        x = '\''; y = '''; self.assertTrue(len(x) == 1 and x == y and ord(x) == 39)
        x = '''; y = '\''; self.assertTrue(len(x) == 1 and x == y and ord(x) == 34)
        x = 'doesn't \'shrink\' does it'
        y = 'doesn\'t 'shrink' does it'
        self.assertTrue(len(x) == 24 and x == y)
        x = 'does \'shrink\' doesn't it'
        y = 'does 'shrink' doesn\'t it'
        self.assertTrue(len(x) == 24 and x == y)
        x = '''
The 'quick'
brown fox
jumps over
the 'lazy' dog.
'''
        y = '\nThe 'quick'\nbrown fox\njumps over\nthe \'lazy\' dog.\n'
        self.assertEqual(x, y)
        y = '''
The 'quick'
brown fox
jumps over
the 'lazy' dog.
'''
        self.assertEqual(x, y)
        y = '\n\
The \'quick\'\n\
brown fox\n\
jumps over\n\
the 'lazy' dog.\n\
'
        self.assertEqual(x, y)
        y = '\n\
The \'quick\'\n\
brown fox\n\
jumps over\n\
the \'lazy\' dog.\n\
'
        self.assertEqual(x, y)
    
            self.assertEqual(total, 3)
    
    
def main():
    import io
    import pprint
    
    document = '''\
<slideshow>
<title>Demo slideshow</title>
<slide><title>Slide title</title>
<point>This is a demo</point>
<point>Of a program for processing slides</point>
</slide>