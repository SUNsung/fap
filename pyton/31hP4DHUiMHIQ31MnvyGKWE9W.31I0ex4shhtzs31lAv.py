
        
            def remove_user(self, user_id):
        pass
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
        def __init__(self, query, results):
        self.query = query
        self.results = results
    
    index_title = 0
index_desc = 1
index_auth = 2
index_https = 3
index_cors = 4
index_link = 5
num_segments = 5
    
    try:
    input = raw_input
except NameError:
    pass
    
    ie_template = '''
class {name}({bases}):
    _VALID_URL = {valid_url!r}
    _module = '{module}'
'''
    
                for tc_num, tc in enumerate(test_cases):
                tc_res_dict = res_dict['entries'][tc_num]
                # First, check test cases' data against extracted data alone
                expect_info_dict(self, tc_res_dict, tc.get('info_dict', {}))
                # Now, check downloaded file consistency
                tc_filename = get_tc_filename(tc)
                if not test_case.get('params', {}).get('skip_download', False):
                    self.assertTrue(os.path.exists(tc_filename), msg='Missing file ' + tc_filename)
                    self.assertTrue(tc_filename in finished_hook_called)
                    expected_minsize = tc.get('file_minsize', 10000)
                    if expected_minsize is not None:
                        if params.get('test'):
                            expected_minsize = max(expected_minsize, 10000)
                        got_fsize = os.path.getsize(tc_filename)
                        assertGreaterEqual(
                            self, got_fsize, expected_minsize,
                            'Expected %s to be at least %s, but it\'s only %s ' %
                            (tc_filename, format_bytes(expected_minsize),
                                format_bytes(got_fsize)))
                    if 'md5' in tc:
                        md5_for_file = _file_md5(tc_filename)
                        self.assertEqual(tc['md5'], md5_for_file)
                # Finally, check test cases' data again but this time against
                # extracted data from info JSON file written during processing
                info_json_fn = os.path.splitext(tc_filename)[0] + '.info.json'
                self.assertTrue(
                    os.path.exists(info_json_fn),
                    'Missing info file %s' % info_json_fn)
                with io.open(info_json_fn, encoding='utf-8') as infof:
                    info_dict = json.load(infof)
                expect_info_dict(self, info_dict, tc.get('info_dict', {}))
        finally:
            try_rm_tcs_files()
            if is_playlist and res_dict is not None and res_dict.get('entries'):
                # Remove all other files that may have been extracted if the
                # extractor returns full results even with extract_flat
                res_tcs = [{'info_dict': e} for e in res_dict['entries']]
                try_rm_tcs_files(res_tcs)
    
        def test_nosubtitles(self):
        self.DL.expect_warning('video doesn\'t have subtitles')
        self.url = 'http://vod.walla.co.il/movie/2642630/one-direction-all-for-one'
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertFalse(subtitles)
    
        return (x_train, y_train), (x_test, y_test)

    
        fpath = os.path.join(path, 'test')
    x_test, y_test = load_batch(fpath, label_key=label_mode + '_labels')
    
    
def load_data():
    '''Loads the Fashion-MNIST dataset.
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
    
def create_multi_input_model_from(layer1, layer2):
    input_1 = Input(shape=(data_dim,))
    input_2 = Input(shape=(data_dim,))
    out1 = layer1(input_1)
    out2 = layer2(input_2)
    out = Average()([out1, out2])
    model = Model([input_1, input_2], out)
    model.add_loss(K.mean(out2))
    model.add_loss(1)
    model.add_loss(1)
    return model
    
        ```python
        import tensorflow as tf
        from keras.applications import Xception
        from keras.utils import multi_gpu_model
        import numpy as np
    
    model = Sequential()
model.add(Dense(512, activation='relu', input_shape=(784,)))
model.add(Dropout(0.2))
model.add(Dense(512, activation='relu'))
model.add(Dropout(0.2))
model.add(Dense(num_classes, activation='softmax'))
    
    if K.image_data_format() == 'channels_first':
    input_shape = (1, img_rows, img_cols)
else:
    input_shape = (img_rows, img_cols, 1)
    
    
def cityscapes_to_coco_with_rider(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: 1,  # person
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: 1,  # rider ('person', *rider has human right!*)
    }
    return lookup[cityscapes_id]
    
    
def get_raw_dir(name):
    '''Retrieve the raw dir for the dataset.'''
    return _DATASETS[name][_RAW_DIR]

    
        if isinstance(dataset_names, basestring):
        dataset_names = (dataset_names, )
    if isinstance(proposal_files, basestring):
        proposal_files = (proposal_files, )
    if len(proposal_files) == 0:
        proposal_files = (None, ) * len(dataset_names)
    assert len(dataset_names) == len(proposal_files)
    roidbs = [get_roidb(*args) for args in zip(dataset_names, proposal_files)]
    roidb = roidbs[0]
    for r in roidbs[1:]:
        roidb.extend(r)
    roidb = filter_for_training(roidb)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        return current, hidden_dim

    
    
def add_single_gpu_param_update_ops(model, gpu_id):
    # Learning rate of 0 is a dummy value to be set properly at the
    # start of training
    lr = model.param_init_net.ConstantFill(
        [], 'lr', shape=[1], value=0.0
    )
    one = model.param_init_net.ConstantFill(
        [], 'one', shape=[1], value=1.0
    )
    wd = model.param_init_net.ConstantFill(
        [], 'wd', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY
    )
    # weight decay of GroupNorm's parameters
    wd_gn = model.param_init_net.ConstantFill(
        [], 'wd_gn', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY_GN
    )
    for param in model.TrainableParams(gpu_id=gpu_id):
        logger.debug('param ' + str(param) + ' will be updated')
        param_grad = model.param_to_grad[param]
        # Initialize momentum vector
        param_momentum = model.param_init_net.ConstantFill(
            [param], param + '_momentum', value=0.0
        )
        if param in model.biases:
            # Special treatment for biases (mainly to match historical impl.
            # details):
            # (1) Do not apply weight decay
            # (2) Use a 2x higher learning rate
            model.Scale(param_grad, param_grad, scale=2.0)
        elif param in model.gn_params:
            # Special treatment for GroupNorm's parameters
            model.WeightedSum([param_grad, one, param, wd_gn], param_grad)
        elif cfg.SOLVER.WEIGHT_DECAY > 0:
            # Apply weight decay to non-bias weights
            model.WeightedSum([param_grad, one, param, wd], param_grad)
        # Update param_grad and param_momentum in place
        model.net.MomentumSGDUpdate(
            [param_grad, param_momentum, lr, param],
            [param_grad, param_momentum, param],
            momentum=cfg.SOLVER.MOMENTUM
        )

    
    from detectron.core.config import cfg
from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
import detectron.modeling.FPN as fpn
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.utils.blob as blob_utils
    
        for i in range(masks.shape[0]):
        cls = int(mask_class_labels[i])
        start = M**2 * cls
        end = start + M**2
        # Ignore background instance
        # (only happens when there is no fg samples in an image)
        if cls > 0:
            mask_targets[i, start:end] = masks[i, :]
    
    from detectron.core.config import cfg
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.roi_data.retinanet as retinanet_roi_data
import detectron.roi_data.rpn as rpn_roi_data
import detectron.utils.blob as blob_utils
    
        def test_static_versioned_url(self):
        self.check_url('/static/red_test.py?v=1234',
                       allowed_warnings=[rs.MISSING_HDRS_304])
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
    
@gen.coroutine
def c1():
    for i in range(10):
        yield c2()
    
                curl.setopt(pycurl.READFUNCTION, request_buffer.read)
            curl.setopt(pycurl.IOCTLFUNCTION, ioctl)
            if request.method == 'POST':
                curl.setopt(pycurl.POSTFIELDSIZE, len(request.body or ''))
            else:
                curl.setopt(pycurl.UPLOAD, True)
                curl.setopt(pycurl.INFILESIZE, len(request.body or ''))
    
    
class AsyncIOLoop(BaseAsyncIOLoop):
    '''``AsyncIOLoop`` is an `.IOLoop` that runs on an ``asyncio`` event loop.
    This class follows the usual Tornado semantics for creating new
    ``IOLoops``; these loops are not necessarily related to the
    ``asyncio`` default event loop.
    
    For each function or class described in `tornado.platform.interface`,
the appropriate platform-specific implementation exists in this module.
Most code that needs access to this functionality should do e.g.::
    
        def run_policy_test(self, accessor, expected_type):
        # With the default policy, non-main threads don't get an event
        # loop.
        self.assertRaises(
            (RuntimeError, AssertionError), self.executor.submit(accessor).result
        )
        # Set the policy and we can get a loop.
        asyncio.set_event_loop_policy(AnyThreadEventLoopPolicy())
        self.assertIsInstance(self.executor.submit(accessor).result(), expected_type)
        # Clean up to silence leak warnings. Always use asyncio since
        # IOLoop doesn't (currently) close the underlying loop.
        self.executor.submit(lambda: asyncio.get_event_loop().close()).result()
    
    
class GoogleOAuth2AuthorizeHandler(RequestHandler):
    def get(self):
        # issue a fake auth code and redirect to redirect_uri
        code = 'fake-authorization-code'
        self.redirect(url_concat(self.get_argument('redirect_uri'), dict(code=code)))
    
        def __init__(self, parent):
        ttk.Frame.__init__(self, parent)
        self.pack(side=tk.BOTTOM, padx=10, pady=2, fill=tk.X, expand=False)
    
        def initialize(self, *args, **kwargs):
        ''' Create the mtcnn detector '''
        super().initialize(*args, **kwargs)
        logger.info('Initializing Manual Detector...')
        self.init.set()
        logger.info('Initialized Manual Detector.')
    
    if platform.system() == 'Darwin':
    import pynvx  # pylint: disable=import-error
    IS_MACOS = True
else:
    import pynvml
    IS_MACOS = False
    
    This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.
    
        @staticmethod
    def _postprocess_conv2d_output(x, data_format):
        '''Transpose and cast the output from conv2d if needed.
        # Arguments
            x: A tensor.
            data_format: string, `'channels_last'` or `'channels_first'`.
        # Returns
            A tensor.
        '''
    
        kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (15, 15))  # pylint: disable=no-member
    mask = cv2.dilate(mask,  # pylint: disable=no-member
                      kernel,
                      iterations=1,
                      borderType=cv2.BORDER_REFLECT)  # pylint: disable=no-member
    mask = mask[:, :, :1]