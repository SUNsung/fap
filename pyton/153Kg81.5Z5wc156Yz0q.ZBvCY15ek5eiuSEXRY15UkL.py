
        
                Antirectifier allows to return all-positive outputs like ReLU,
        without discarding any data.
    
    # save class labels to disk to color data points in TensorBoard accordingly
with open(join(log_dir, 'metadata.tsv'), 'w') as f:
    np.savetxt(f, y_test)
    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='regularizer')
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        def get_config(self):
        return {'mse_fraction': self.mse_fraction}
    
        if transforms:
        f = tf.contrib.image.compose_transforms(*transforms)
        inputs = tf.contrib.image.transform(inputs, f, interpolation='BILINEAR')
    return inputs
    
            if title is None:
            self.title = '_'.join([i.text for i in self.tree.iterfind('video/videomarks/videomark/markdesc')])
        else:
            self.title = title
    
    from .theplatform import theplatform_download_by_pid
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
        @classmethod
    def get_coeff(cls, magic_list):
        magic_set = set(magic_list)
        no_dup = []
        for item in magic_list:
            if item in magic_set:
                magic_set.remove(item)
                no_dup.append(item)
        # really necessary?
    
        def test_root_common(self):
        P = self.cls
        sep = self.sep
        self.assertEqual(P('').root, '')
        self.assertEqual(P('a/b').root, '')
        self.assertEqual(P('/').root, sep)
        self.assertEqual(P('/a/b').root, sep)
    
        def test_relpath(self):
        (real_getcwd, os.getcwd) = (os.getcwd, lambda: r'/home/user/bar')
        try:
            curdir = os.path.split(os.getcwd())[-1]
            self.assertRaises(ValueError, posixpath.relpath, '')
            self.assertEqual(posixpath.relpath('a'), 'a')
            self.assertEqual(posixpath.relpath(posixpath.abspath('a')), 'a')
            self.assertEqual(posixpath.relpath('a/b'), 'a/b')
            self.assertEqual(posixpath.relpath('../a/b'), '../a/b')
            self.assertEqual(posixpath.relpath('a', '../b'), '../'+curdir+'/a')
            self.assertEqual(posixpath.relpath('a/b', '../c'),
                             '../'+curdir+'/a/b')
            self.assertEqual(posixpath.relpath('a', 'b/c'), '../../a')
            self.assertEqual(posixpath.relpath('a', 'a'), '.')
            self.assertEqual(posixpath.relpath('/foo/bar/bat', '/x/y/z'), '../../../foo/bar/bat')
            self.assertEqual(posixpath.relpath('/foo/bar/bat', '/foo/bar'), 'bat')
            self.assertEqual(posixpath.relpath('/foo/bar/bat', '/'), 'foo/bar/bat')
            self.assertEqual(posixpath.relpath('/', '/foo/bar/bat'), '../../..')
            self.assertEqual(posixpath.relpath('/foo/bar/bat', '/x'), '../foo/bar/bat')
            self.assertEqual(posixpath.relpath('/x', '/foo/bar/bat'), '../../../x')
            self.assertEqual(posixpath.relpath('/', '/'), '.')
            self.assertEqual(posixpath.relpath('/a', '/a'), '.')
            self.assertEqual(posixpath.relpath('/a/b', '/a/b'), '.')
        finally:
            os.getcwd = real_getcwd
    
    from . import abc as resources_abc
from contextlib import contextmanager, suppress
from importlib import import_module
from importlib.abc import ResourceLoader
from io import BytesIO, TextIOWrapper
from pathlib import Path
from types import ModuleType
from typing import Iterable, Iterator, Optional, Set, Union   # noqa: F401
from typing import cast
from typing.io import BinaryIO, TextIO
from zipimport import ZipImportError
    
        # Load the records from the pickle data stream.
    file.seek(0)
    memos = DBUnpickler(file, conn).load()
    
    from .const import (
    ATTR_MAIN_TEXT, ATTR_REDIRECTION_URL, ATTR_STREAM_URL, ATTR_TITLE_TEXT,
    ATTR_UID, ATTR_UPDATE_DATE, CONF_AUDIO, CONF_DISPLAY_URL, CONF_TEXT,
    CONF_TITLE, CONF_UID, DATE_FORMAT)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Required(CONF_USERNAME): cv.string
})
    
            if self.accountname in _CONFIGURING:
            request_id = _CONFIGURING.pop(self.accountname)
            configurator = self.hass.components.configurator
            configurator.request_done(request_id)
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
    _LOGGER = logging.getLogger(__name__)
    
    REQUIREMENTS = ['pyhiveapi==0.2.14']
    
    
if __name__ == '__main__':
    import doctest
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
    
### OUTPUT ###
# <NumObj: -1>
# <NumObj: 0>
# <NumObj: 1>
# <NumObj: 2>
# -- committed
# <NumObj: 3>
# <NumObj: 4>
# <NumObj: 5>
# -- rolled back
# <NumObj: 2>
# -- now doing stuff ...
# -> doing stuff failed!
# Traceback (most recent call last):
# File 'memento.py', line 97, in <module>
#     num_obj.do_stuff()
#   File 'memento.py', line 52, in transaction
#     raise e
#   File 'memento.py', line 49, in transaction
#     return self.method(obj, *args, **kwargs)
#   File 'memento.py', line 70, in do_stuff
#     self.increment()     # <- will fail and rollback
#   File 'memento.py', line 65, in increment
#     self.value += 1
# TypeError: Can't convert 'int' object to str implicitly
# <NumObj: 2>

    
        def notify(self, modifier=None):
        for observer in self._observers:
            if modifier != observer:
                observer.update(self)
    
        def toggle_amfm(self):
        self.state.toggle_amfm()