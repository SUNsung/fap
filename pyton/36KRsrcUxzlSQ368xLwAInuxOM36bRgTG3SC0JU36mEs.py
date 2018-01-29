
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    
def test_urls(client):
    r = client.get('/')
    assert r.status_code == 200
    
        :copyright: (c) 2015 by Armin Ronacher.
    :license: BSD, see LICENSE for more details.
'''
    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
    
username = get_config('ANSIBLE_OPENSHIFT_USERNAME', 'default_rhlogin')
password = get_config('ANSIBLE_OPENSHIFT_PASSWORD', 'password')
broker_url = 'https://%s/broker/rest/' % get_config('ANSIBLE_OPENSHIFT_BROKER', 'libra_server')
    
    import tensorflow as tf
    
      Args:
    raw_data: one of the raw data outputs from ptb_raw_data.
    batch_size: int, the batch size.
    num_steps: int, the number of unrolls.
    name: the name of this operation (optional).
    
    '''Tests for word2vec module.'''
    
    import iris_data
import custom_estimator
import premade_estimator
    
      We assume the vocabulary is stored one-item-per-line, so a file:
    dog
    cat
  will result in a vocabulary {'dog': 0, 'cat': 1}, and this function will
  also return the reversed-vocabulary ['dog', 'cat'].
    
        model.compile(loss='categorical_crossentropy',
                  optimizer='adadelta',
                  metrics=['accuracy'])
    
    
@keras_test
def test_locallyconnected_2d():
    num_samples = 5
    filters = 3
    stack_size = 4
    num_row = 6
    num_col = 8
    padding = 'valid'
    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    # Save config file, if possible.
if not os.path.exists(_keras_dir):
    try:
        os.makedirs(_keras_dir)
    except OSError:
        # Except permission denied and potential race conditions
        # in multi-threaded environments.
        pass
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    if __name__ == '__main__':
    pytest.main([__file__])

    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
        def browse_file(self):
        filetypes = [
            ('HTML Files', '*.htm *.html', 'TEXT'),
            ('PDF Files', '*.pdf', 'TEXT'),
            ('Windows Help Files', '*.chm'),
            ('Text Files', '*.txt', 'TEXT'),
            ('All Files', '*')]
        path = self.pathvar.get()
        if path:
            dir, base = os.path.split(path)
        else:
            base = None
            if platform[:3] == 'win':
                dir = os.path.join(os.path.dirname(executable), 'Doc')
                if not os.path.isdir(dir):
                    dir = os.getcwd()
            else:
                dir = os.getcwd()
        file = self.askfilename(filetypes, dir, base)
        if file:
            self.pathvar.set(file)
    
    to_benchmark = [pi_float, pi_decimal]
if C is not None:
    to_benchmark.insert(1, pi_cdecimal)
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
                self.assertIn('Project-Id-Version', header)
            self.assertIn('POT-Creation-Date', header)
            self.assertIn('PO-Revision-Date', header)
            self.assertIn('Last-Translator', header)
            self.assertIn('Language-Team', header)
            self.assertIn('MIME-Version', header)
            self.assertIn('Content-Type', header)
            self.assertIn('Content-Transfer-Encoding', header)
            self.assertIn('Generated-By', header)
    
    The __init__ method has one required argument, a file-like object
(including a chunk instance), and one optional argument, a flag which
specifies whether or not chunks are aligned on 2-byte boundaries.  The
default is 1, i.e. aligned.
'''
    
        def _longcmd(self, line, file=None):
        '''Internal: send a command and get the response plus following text.
        Same return value as _getlongresp().'''
        self._putcmd(line)
        return self._getlongresp(file)
    
            y = X.from_buffer_copy(a)
        self.assertEqual(y.c_int, a[0])
        self.assertFalse(y.init_called)
    
                for future in finished:
                yield future
                pending.remove(future)
    
        sqrt_n = int(math.floor(math.sqrt(n)))
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return False
    return True
    
    
class CommandRequest( BaseRequest ):
  def __init__( self, arguments, completer_target = None, extra_data = None ):
    super( CommandRequest, self ).__init__()
    self._arguments = _EnsureBackwardsCompatibility( arguments )
    self._completer_target = ( completer_target if completer_target
                               else 'filetype_default' )
    self._extra_data = extra_data
    self._response = None
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        current_ref = get_current_ref()
    base_ref = get_merge_base()
    if options.files:
        files = options.files
    else:
        files = get_changed_files(base_ref, current_ref)
        logging.debug('files changed: %r', files)
    
    import r2.lib.helpers
from r2.config.paths import (
    get_r2_path,
    get_built_statics_path,
    get_raw_statics_path,
)
from r2.config.routing import make_map
from r2.lib.app_globals import Globals
from r2.lib.configparse import ConfigValue
    
    extension_mapping = {
    'rss': ('xml', 'application/atom+xml; charset=UTF-8'),
    'xml': ('xml', 'application/atom+xml; charset=UTF-8'),
    'js': ('js', 'text/javascript; charset=UTF-8'),
    'embed': ('htmllite', 'text/javascript; charset=UTF-8'),
    'mobile': ('mobile', 'text/html; charset=UTF-8'),
    'png': ('png', 'image/png'),
    'css': ('css', 'text/css'),
    'csv': ('csv', 'text/csv; charset=UTF-8'),
    'api': (api_type(), 'application/json; charset=UTF-8'),
    'json-html': (api_type('html'), 'application/json; charset=UTF-8'),
    'json-compact': (api_type('compact'), 'application/json; charset=UTF-8'),
    'compact': ('compact', 'text/html; charset=UTF-8'),
    'json': (api_type(), 'application/json; charset=UTF-8'),
    'i': ('compact', 'text/html; charset=UTF-8'),
}
    
            ext = None
        if path_ext in extension_mapping:
            ext = path_ext
            # Strip off the extension.
            environ['PATH_INFO'] = path[:-(len(ext) + 1)]
        elif domain_ext in extension_mapping:
            ext = domain_ext
    
                send_gift(
                buyer=buyer,
                recipient=recipient,
                months=months,
                days=months * 31,
                signed=False,
                giftmessage=None,
                thing_fullname=thing_fullname,
                note=note,
            )
    
        def rendercontent(self, input, fp):
        soup = BeautifulSoup(input)
    
            MinimalController.pre(self)
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update,\
                patch.object(cls.hex_obs, 'update') as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)