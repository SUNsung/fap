
        
            assert actual_body == expected_body
    
        def filter(self, by_type=Type[BasePlugin]):
        return [plugin for plugin in self if issubclass(plugin, by_type)]
    
    This module provides the capabilities for the Requests hooks system.
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme,
    long_description_content_type='text/markdown',
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.7, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*, !=3.4.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ],
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': ['pyOpenSSL >= 0.14', 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and python_version == '2.7'': ['win_inet_pton'],
    },
    project_urls={
        'Documentation': 'http://docs.python-requests.org',
        'Source': 'https://github.com/kennethreitz/requests',
    },
)

    
    # There are two options for replacing |today|: either, you set today to
# some non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    # Get the face encodings for the known images
obama_face_encoding = face_recognition.face_encodings(known_obama_image)[0]
biden_face_encoding = face_recognition.face_encodings(known_biden_image)[0]
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
    # You can change this to any folder on your system
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg', 'gif'}
    
        # Load a second sample picture and learn how to recognize it.
    biden_image = face_recognition.load_image_file('biden.jpg')
    biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
                if offscreen:
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        def launch_detector(self):
        ''' Launch the face detector '''
        logger.debug('Launching Detector')
        kwargs = {'in_queue': self.queues['extract_detect_in'],
                  'out_queue': self.queues['extract_align_in']}
        mp_func = PoolProcess if self.detector.parent_is_pool else SpawnProcess
        process = mp_func(self.detector.run, **kwargs)
    
        def progress_update(self, message, position, update_position=True):
        ''' Update the GUIs progress bar and position '''
        self.pbar_message.set(message)
        if update_position:
            self.pbar_position.set(position)

    
            # Deleting model 'GroupTagValue'
        db.delete_table(u'tagstore_grouptagvalue')
    
    
def main():
    '''
    # Counting to two...
    >>> for number in count_to_two():
    ...     print(number)
    one
    two
    
        >>> Order(1000, discount_strategy=on_sale_discount)
    <Price: 1000, price after discount: 730.0>
    '''
    
    
def get_text():
    return 'plain-text'
    
    
class Cat(object):
    def speak(self):
        return 'meow'
    
        def __init__(self):
        self.__dict__ = self.__shared_state
        self.state = 'Init'
    
    The first example achieves this by using an abstract base
class for a building, where the initializer (__init__ method) specifies the
steps needed, and the concrete subclasses implement these steps.
    
        @property
    def _lazy_property(self):
        if not hasattr(self, attr):
            setattr(self, attr, fn(self))
        return getattr(self, attr)
    
    *TL;DR
Stores a set of initialized objects kept ready to use.
'''
    
    *TL;DR
Allows object composition to achieve the same code reuse as inheritance.
'''
    
    ### OUTPUT ###
# API1.circle at 1:2 radius 7.5
# API2.circle at 5:7 radius 27.5

    
    shutil.rmtree(os.path.join(CURRENT_DIR, 'mxnet'), ignore_errors=True)
shutil.rmtree(os.path.join(CURRENT_DIR, 'dmlc_tracker'), ignore_errors=True)
shutil.copytree(os.path.join(CURRENT_DIR, 'mxnet-build/python/mxnet'),
                os.path.join(CURRENT_DIR, 'mxnet'))
shutil.copytree(os.path.join(CURRENT_DIR, 'mxnet-build/3rdparty/dmlc-core/tracker/dmlc_tracker'),
                os.path.join(CURRENT_DIR, 'dmlc_tracker'))
shutil.copy(LIB_PATH[0], os.path.join(CURRENT_DIR, 'mxnet'))
    
            net = _get_test_network()
        ce_loss = loss.SoftmaxCrossEntropyLoss()
        acc = mx.metric.Accuracy()
        est = estimator.Estimator(net, loss=ce_loss, metrics=acc)
        train_metrics, val_metrics = est.prepare_loss_and_metrics()
        logging_handler = event_handler.LoggingHandler(file_name=file_name,
                                                       file_location=tmpdir,
                                                       train_metrics=train_metrics,
                                                       val_metrics=val_metrics)
        est.fit(test_data, event_handlers=[logging_handler], epochs=3)
        assert logging_handler.batch_index == 0
        assert logging_handler.current_epoch == 3
        assert os.path.isfile(output_dir)
    
    
def test_incomplete_infer_convolution():
    a = mx.sym.Variable('a', shape=(0, 10, 0, 0))
    b = mx.sym.Convolution(data=a, num_filter=21, kernel=(3, 3), dilate=(1, 1), pad=(1, 1))
    c = mx.sym.Variable('c', shape=(5, 21, 32, 32))
    d = b + c
    arg_shapes, _, _ = d.infer_shape()
    arg_names = d.list_arguments()
    arg_shapes = {k: v for k, v in zip(arg_names, arg_shapes)}
    assert arg_shapes['a'] == (5, 10, 32, 32)