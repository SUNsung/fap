
        
            Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
    
@pytest.fixture
def client(app):
    '''A test client for the app.'''
    return app.test_client()
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
    
def load(fp, **kwargs):
    '''Like :func:`loads` but reads from a file object.
    '''
    _load_arg_defaults(kwargs)
    if not PY2:
        fp = _wrap_reader_for_text(fp, kwargs.pop('encoding', None) or 'utf-8')
    return _json.load(fp, **kwargs)
    
        def to_python(self, value):
        return parse_date(value)
    
    
class Request(RequestBase, JSONMixin):
    '''The request object used by default in Flask.  Remembers the
    matched endpoint and view arguments.
    
    
def lr_schedule(epoch):
    '''Learning Rate Schedule
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    from keras.models import Sequential, Model
from keras.layers import Dense, Input, Average
from keras.utils import np_utils
from keras.utils import test_utils
from keras import regularizers
from keras import backend as K
    
        ```python
    # Consider an array of 5 labels out of a set of 3 classes {0, 1, 2}:
    > labels
    array([0, 2, 1, 2, 0])
    # `to_categorical` converts this into a matrix with as many
    # columns as there are classes. The number of rows
    # stays the same.
    > to_categorical(labels)
    array([[ 1.,  0.,  0.],
           [ 0.,  0.,  1.],
           [ 0.,  1.,  0.],
           [ 0.,  0.,  1.],
           [ 1.,  0.,  0.]], dtype=float32)
    ```
    '''
    
                additional_specs += self.state_spec
        if constants is not None:
            kwargs['constants'] = constants
            additional_inputs += constants
            self.constants_spec = [InputSpec(shape=K.int_shape(constant))
                                   for constant in constants]
            self._num_constants = len(constants)
            additional_specs += self.constants_spec
        # at this point additional_inputs cannot be empty
        for tensor in additional_inputs:
            if K.is_keras_tensor(tensor) != K.is_keras_tensor(additional_inputs[0]):
                raise ValueError('The initial state or constants of an RNN'
                                 ' layer cannot be specified with a mix of'
                                 ' Keras tensors and non-Keras tensors')
    
    Settings: horizontal_flip = True
----------------------------------------------------------------------------
Epoch     | ImageGenerator | ImageGenerator | AugmentLayer  | Augment Layer
Number    | %Accuracy      | Performance    | %Accuracy     | Performance
----------------------------------------------------------------------------
1         | 44.84          | 15ms/step      | 45.54         | 358us/step
2         | 52.34          |  8ms/step      | 50.55         | 285us/step
8         | 65.45          |  8ms/step      | 65.59         | 281us/step
25        | 76.74          |  8ms/step      | 76.17         | 280us/step
100       | 78.81          |  8ms/step      | 78.70         | 285us/step
---------------------------------------------------------------------------
    
    When lahead >= tsteps, both the stateful and stateless LSTM converge.
'''
from __future__ import print_function
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from keras.models import Sequential
from keras.layers import Dense, LSTM
    
        Code is a simple port of what is already in the /scripts directory
    
            load_tests = getattr(module, 'load_tests', None)
        tests = self.suiteClass(tests)
        if load_tests is not None:
            try:
                return load_tests(self, tests, pattern)
            except Exception as e:
                error_case, error_message = _make_failed_load_tests(
                    module.__name__, e, self.suiteClass)
                self.errors.append(error_message)
                return error_case
        return tests
    
        def _Starred(self, t):
        self.write('*')
        self.dispatch(t.value)
    
        def test_implicit_newline(self):
        # Make sure that the tokenizer puts in an implicit NEWLINE
        # when the input lacks a trailing new line.
        f = BytesIO('x'.encode('utf-8'))
        tokens = list(tokenize(f.readline))
        self.assertEqual(tokens[-2].type, NEWLINE)
        self.assertEqual(tokens[-1].type, ENDMARKER)
    
    
def capture_events(callable, p=None):
    if p is None:
        p = HookWatcher()
    # Disable the garbage collector. This prevents __del__s from showing up in
    # traces.
    old_gc = gc.isenabled()
    gc.disable()
    try:
        sys.setprofile(p.callback)
        protect(callable, p)
        sys.setprofile(None)
    finally:
        if old_gc:
            gc.enable()
    return p.get_events()[1:-1]
    
        # On Windows, pass bytes to subprocess doesn't test how Python decodes the
    # command line, but how subprocess does decode bytes to unicode. Python
    # doesn't decode the command line because Windows provides directly the
    # arguments as unicode (using wmain() instead of main()).
    @unittest.skipIf(sys.platform == 'win32',
                     'Windows has a native unicode API')
    def test_undecodable_code(self):
        undecodable = b'\xff'
        env = os.environ.copy()
        # Use C locale to get ascii for the locale encoding
        env['LC_ALL'] = 'C'
        env['PYTHONCOERCECLOCALE'] = '0'
        code = (
            b'import locale; '
            b'print(ascii('' + undecodable + b''), '
                b'locale.getpreferredencoding())')
        p = subprocess.Popen(
            [sys.executable, '-c', code],
            stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
            env=env)
        stdout, stderr = p.communicate()
        if p.returncode == 1:
            # _Py_char2wchar() decoded b'\xff' as '\udcff' (b'\xff' is not
            # decodable from ASCII) and run_command() failed on
            # PyUnicode_AsUTF8String(). This is the expected behaviour on
            # Linux.
            pattern = b'Unable to decode the command from the command line:'
        elif p.returncode == 0:
            # _Py_char2wchar() decoded b'\xff' as '\xff' even if the locale is
            # C and the locale encoding is ASCII. It occurs on FreeBSD, Solaris
            # and Mac OS X.
            pattern = b''\\xff' '
            # The output is followed by the encoding name, an alias to ASCII.
            # Examples: 'US-ASCII' or '646' (ISO 646, on Solaris).
        else:
            raise AssertionError('Unknown exit code: %s, output=%a' % (p.returncode, stdout))
        if not stdout.startswith(pattern):
            raise AssertionError('%a doesn't start with %a' % (stdout, pattern))
    
    def handleSlideTitle(title):
    print('<h2>%s</h2>' % getText(title.childNodes))
    
        print('-' * 20)
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
    __all__ = ['dilidili_download']
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
                if title is None:
                response = request.urlopen(request.Request(real_url))
                if response.headers['content-disposition']:
                    filename = parse.unquote(r1(r'filename='?(.+)'?', response.headers['content-disposition'])).split('.')
                    title = ''.join(filename[:-1])
        except: pass
    
        hass.services.register(DOMAIN, 'demo', observe)
    
            def on_deleted(self, event):
            '''File deleted.'''
            self.process(event)
    
                try:
                kwargs['data'] = self._schema(data)
            except vol.Invalid as err:
                _LOGGER.error('Data does not match schema: %s', err)
                return view.json_message(
                    'Message format incorrect: {}'.format(err), 400)
    
            # Adding unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.create_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            # Adding unique constraint on 'ProcessingIssue', fields ['project', 'checksum', 'type']
        db.create_unique('sentry_processingissue', ['project_id', 'checksum', 'type'])
    
    from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
        return heatmaps_c
    
    
def datasets():
    '''Retrieve the list of available dataset names.'''
    return _DATASETS.keys()
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
    def add_fast_rcnn_outputs(model, blob_in, dim):
    '''Add RoI classification and bounding box regression output ops.'''
    # Box classification layer
    model.FC(
        blob_in,
        'cls_score',
        dim,
        model.num_classes,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    if not model.train:  # == if test
        # Only add softmax when testing; during training the softmax is combined
        # with the label cross entropy loss for numerical stability
        model.Softmax('cls_score', 'cls_prob', engine='CUDNN')
    # Box regression layer
    num_bbox_reg_classes = (
        2 if cfg.MODEL.CLS_AGNOSTIC_BBOX_REG else model.num_classes
    )
    model.FC(
        blob_in,
        'bbox_pred',
        dim,
        num_bbox_reg_classes * 4,
        weight_init=gauss_fill(0.001),
        bias_init=const_fill(0.0)
    )
    
    
def _narrow_to_fpn_roi_levels(blobs, spatial_scales):
    '''Return only the blobs and spatial scales that will be used for RoI heads.
    Inputs `blobs` and `spatial_scales` may include extra blobs and scales that
    are used for RPN proposals, but not for RoI heads.
    '''
    # Code only supports case when RPN and ROI min levels are the same
    assert cfg.FPN.RPN_MIN_LEVEL == cfg.FPN.ROI_MIN_LEVEL
    # RPN max level can be >= to ROI max level
    assert cfg.FPN.RPN_MAX_LEVEL >= cfg.FPN.ROI_MAX_LEVEL
    # FPN RPN max level might be > FPN ROI max level in which case we
    # need to discard some leading conv blobs (blobs are ordered from
    # max/coarsest level to min/finest level)
    num_roi_levels = cfg.FPN.ROI_MAX_LEVEL - cfg.FPN.ROI_MIN_LEVEL + 1
    return blobs[-num_roi_levels:], spatial_scales[-num_roi_levels:]
    
    $ find . -name '*.yaml' -exec sed -i -e \
   's/head_builder\.add_roi_2mlp_head/fast_rcnn_heads.add_roi_2mlp_head/g' {} \;
    
    
def build_data_parallel_model(model, single_gpu_build_func):
    '''Build a data parallel model given a function that builds the model on a
    single GPU.
    '''
    if model.only_build_forward_pass:
        single_gpu_build_func(model)
    elif model.train:
        all_loss_gradients = _build_forward_graph(model, single_gpu_build_func)
        # Add backward pass on all GPUs
        model.AddGradientOperators(all_loss_gradients)
        if cfg.NUM_GPUS > 1:
            _add_allreduce_graph(model)
        for gpu_id in range(cfg.NUM_GPUS):
            # After allreduce, all GPUs perform SGD updates on their identical
            # params and gradients in parallel
            with c2_utils.NamedCudaScope(gpu_id):
                add_single_gpu_param_update_ops(model, gpu_id)
    else:
        # Test-time network operates on single GPU
        # Test-time parallelism is implemented through multiprocessing
        with c2_utils.NamedCudaScope(model.target_gpu_id):
            single_gpu_build_func(model)
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
    return loss_gradients
    
    import cv2
import logging
import numpy as np
    
            # Fg label: for each gt use anchors with highest overlap
        # (including ties)
        gt_inds = anchor_to_gt_argmax[anchors_with_max_overlap]
        labels[anchors_with_max_overlap] = gt_classes[gt_inds]
        # Fg label: above threshold IOU
        inds = anchor_to_gt_max >= cfg.RETINANET.POSITIVE_OVERLAP
        gt_inds = anchor_to_gt_argmax[inds]
        labels[inds] = gt_classes[gt_inds]