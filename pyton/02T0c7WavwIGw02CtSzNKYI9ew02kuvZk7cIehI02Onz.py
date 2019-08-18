
        
            :param img_path: path to image to be recognized
    :param predictions: results of the predict function
    :return:
    '''
    pil_image = Image.open(img_path).convert('RGB')
    draw = ImageDraw.Draw(pil_image)
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]
    
        # 获得所有人脸的位置以及它们的编码
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
        :param known_face_encodings: A list of known face encodings
    :param face_encoding_to_check: A single face encoding to compare against the list
    :param tolerance: How much distance between faces to consider it a match. Lower is more strict. 0.6 is typical best performance.
    :return: A list of True/False values indicating which known_face_encodings match the face encoding to check
    '''
    return list(face_distance(known_face_encodings, face_encoding_to_check) <= tolerance)

    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
    # Training directory
train_dir = os.listdir('/train_dir/')
    
            limits = resource.getrlimit(resource.RLIMIT_AS)
        self.assertEqual(resource.prlimit(0, resource.RLIMIT_AS, BadSeq()),
                         limits)
    
                    b = BytesIO()
                self.assertRaises(TypeError, plistlib.dump, pl, b, fmt=fmt)
    
        if inspect.isgeneratorfunction(func):
        coro = func
    else:
        @functools.wraps(func)
        def coro(*args, **kw):
            res = func(*args, **kw)
            if (base_futures.isfuture(res) or inspect.isgenerator(res) or
                    isinstance(res, CoroWrapper)):
                res = yield from res
            else:
                # If 'res' is an awaitable, run it.
                try:
                    await_meth = res.__await__
                except AttributeError:
                    pass
                else:
                    if isinstance(res, collections.abc.Awaitable):
                        res = yield from await_meth()
            return res
    
        # disable this test for now. When the version where the fail* methods will
    # be removed is decided, re-enable it and update the version
    def _testDeprecatedFailMethods(self):
        '''Test that the deprecated fail* methods get removed in 3.x'''
        if sys.version_info[:2] < (3, 3):
            return
        deprecated_names = [
            'failIfEqual', 'failUnlessEqual', 'failUnlessAlmostEqual',
            'failIfAlmostEqual', 'failUnless', 'failUnlessRaises', 'failIf',
            'assertDictContainsSubset',
        ]
        for deprecated_name in deprecated_names:
            with self.assertRaises(AttributeError):
                getattr(self, deprecated_name)  # remove these in 3.x
    
    # This is a copy of lib2to3.fixes.fix_imports.MAPPING.  We cannot import
# lib2to3 and use the mapping defined there, because lib2to3 uses pickle.
# Thus, this could cause the module to be imported recursively.
IMPORT_MAPPING = {
    '__builtin__' : 'builtins',
    'copy_reg': 'copyreg',
    'Queue': 'queue',
    'SocketServer': 'socketserver',
    'ConfigParser': 'configparser',
    'repr': 'reprlib',
    'tkFileDialog': 'tkinter.filedialog',
    'tkSimpleDialog': 'tkinter.simpledialog',
    'tkColorChooser': 'tkinter.colorchooser',
    'tkCommonDialog': 'tkinter.commondialog',
    'Dialog': 'tkinter.dialog',
    'Tkdnd': 'tkinter.dnd',
    'tkFont': 'tkinter.font',
    'tkMessageBox': 'tkinter.messagebox',
    'ScrolledText': 'tkinter.scrolledtext',
    'Tkconstants': 'tkinter.constants',
    'Tix': 'tkinter.tix',
    'ttk': 'tkinter.ttk',
    'Tkinter': 'tkinter',
    'markupbase': '_markupbase',
    '_winreg': 'winreg',
    'thread': '_thread',
    'dummy_thread': '_dummy_thread',
    'dbhash': 'dbm.bsd',
    'dumbdbm': 'dbm.dumb',
    'dbm': 'dbm.ndbm',
    'gdbm': 'dbm.gnu',
    'xmlrpclib': 'xmlrpc.client',
    'SimpleXMLRPCServer': 'xmlrpc.server',
    'httplib': 'http.client',
    'htmlentitydefs' : 'html.entities',
    'HTMLParser' : 'html.parser',
    'Cookie': 'http.cookies',
    'cookielib': 'http.cookiejar',
    'BaseHTTPServer': 'http.server',
    'test.test_support': 'test.support',
    'commands': 'subprocess',
    'urlparse' : 'urllib.parse',
    'robotparser' : 'urllib.robotparser',
    'urllib2': 'urllib.request',
    'anydbm': 'dbm',
    '_abcoll' : 'collections.abc',
}
    
        def _iter_post_close_action_sets(self):
        for interp in ('same', 'extra', 'other'):
            yield [
                ChannelAction('use', 'recv', interp),
                ]
            yield [
                ChannelAction('use', 'send', interp),
                ]
    
            async def test(lock):
            await asyncio.sleep(0.01)
            self.assertFalse(lock.locked())
            with self.assertWarns(DeprecationWarning):
                with await lock as _lock:
                    self.assertIs(_lock, None)
                    self.assertTrue(lock.locked())
                    await asyncio.sleep(0.01)
                    self.assertTrue(lock.locked())
                self.assertFalse(lock.locked())
    
            firstId = events[0][2]
        self.assertSequenceEqual(
            [
                ('Created', ' ', firstId),
                ('cpython._PySys_ClearAuditHooks', ' ', firstId),
            ],
            events,
        )
    
        def do_test_trashcan_python_class(self, base):
        # Check that the trashcan mechanism works properly for a Python
        # subclass of a class using the trashcan (this specific test assumes
        # that the base class 'base' behaves like list)
        class PyList(base):
            # Count the number of PyList instances to verify that there is
            # no memory leak
            num = 0
            def __init__(self, *args):
                __class__.num += 1
                super().__init__(*args)
            def __del__(self):
                __class__.num -= 1
    
    import tensorflow as tf
    
        公式
        `o = H(x, W)T(x, W) + x(1 - T(x, W))`
    其中
        H, T = dense
    '''
    n_input = int(x.get_shape()[-1])
    with tf.variable_scope(name or 'highway_dense'):
        W, b = get_wb([n_input, n_input])
    
    
class L1L2Regularizer(object):
    '''L1 L2 正则化
    
    import numpy as np
import tensorflow as tf
    
        >>> os.unlink('foo.txt')
    '''
    
    '''
https://www.djangospin.com/design-patterns-python/mediator/
    
    from abc import abstractmethod
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
            for y in obs_states:
            prob, state = max((V[t - 1][y0] + trans_p[y0].get(y, MIN_INF) +
                               emit_p[y].get(obs[t], MIN_FLOAT), y0) for y0 in prev_states)
            V[t][y] = prob
            mem_path[t][y] = state
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
        def test_multiple_strong_etag_match(self):
        computed_etag = ''xyzzy1''
        etags = ''xyzzy1', 'xyzzy2''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
        def filter(self, record):
        if record.levelno >= logging.ERROR:
            self.error_count += 1
        elif record.levelno >= logging.WARNING:
            self.warning_count += 1
        elif record.levelno >= logging.INFO:
            self.info_count += 1
        return True
    
    if typing.TYPE_CHECKING:
    from typing import Generator, Any, List, Tuple, Dict  # noqa: F401