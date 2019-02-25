
        
                for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
        def on_json_loading_failed(self, e):
        '''Called if :meth:`get_json` parsing fails and isn't silenced. If
        this method returns a value, it is used as the return value for
        :meth:`get_json`. The default implementation raises a
        :class:`BadRequest` exception.
    
        if version in tags:
        fail('Version '%s' is already tagged', version)
    
    
@pytest.fixture
def modules_tmpdir(tmpdir, monkeypatch):
    '''A tmpdir added to sys.path.'''
    rv = tmpdir.mkdir('modules_tmpdir')
    monkeypatch.syspath_prepend(str(rv))
    return rv
    
        def _ClassDef(self, t):
        self.write('\n')
        for deco in t.decorator_list:
            self.fill('@')
            self.dispatch(deco)
        self.fill('class '+t.name)
        self.write('(')
        comma = False
        for e in t.bases:
            if comma: self.write(', ')
            else: comma = True
            self.dispatch(e)
        for e in t.keywords:
            if comma: self.write(', ')
            else: comma = True
            self.dispatch(e)
        self.write(')')
    
    try:
    WindowsError
except NameError:
    pass
else:
    PYTHON2_EXCEPTIONS += ('WindowsError',)
    
    __all__ = ['commonprefix', 'exists', 'getatime', 'getctime', 'getmtime',
           'getsize', 'isdir', 'isfile', 'samefile', 'sameopenfile',
           'samestat']
    
    def handleSlideTitle(title):
    print('<h2>%s</h2>' % getText(title.childNodes))
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
    setup_end_to_end = '''
import face_recognition
    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
    # Initialize some variables
face_locations = []
face_encodings = []
    
    # This code finds all faces in a list of images using the CNN model.
#
# This demo is for the _special case_ when you need to find faces in LOTS of images very quickly and all the images
# are the exact same size. This is common in video processing applications where you have lots of video frames
# to process.
#
# If you are processing a lot of images and using a GPU with CUDA, batch processing can be ~3x faster then processing
# single images at a time. But if you aren't using a GPU, then batch processing isn't going to be very helpful.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read the video file.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
        # 图片上传失败，输出以下html代码
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
    
def cityscapes_to_coco(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: 1,  # person
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: -1,  # rider (-1 means rand init)
    }
    return lookup[cityscapes_id]
    
    
def voc_info(json_dataset):
    year = json_dataset.name[4:8]
    image_set = json_dataset.name[9:]
    devkit_path = get_devkit_dir(json_dataset.name)
    assert os.path.exists(devkit_path), \
        'Devkit directory {} not found'.format(devkit_path)
    anno_path = os.path.join(
        devkit_path, 'VOC' + year, 'Annotations', '{:s}.xml')
    image_set_path = os.path.join(
        devkit_path, 'VOC' + year, 'ImageSets', 'Main', image_set + '.txt')
    return dict(
        year=year,
        image_set=image_set,
        devkit_path=devkit_path,
        anno_path=anno_path,
        image_set_path=image_set_path)

    
    
def get_retinanet_bias_init(model):
    '''Initialize the biases for the conv ops that predict class probabilities.
    Initialization is performed such that at the start of training, all
    locations are predicted to be background with high probability
    (e.g., ~0.99 = 1 - cfg.RETINANET.PRIOR_PROB). See the Focal Loss paper for
    details.
    '''
    prior_prob = cfg.RETINANET.PRIOR_PROB
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    if cfg.RETINANET.SOFTMAX:
        # Multiclass softmax case
        bias = np.zeros((model.num_classes, 1), dtype=np.float32)
        bias[0] = np.log(
            (model.num_classes - 1) * (1 - prior_prob) / (prior_prob)
        )
        bias = np.vstack(
            [bias for _ in range(scales_per_octave * aspect_ratios)]
        )
        bias_init = (
            'GivenTensorFill', {
                'values': bias.astype(dtype=np.float32)
            }
        )
    else:
        # Per-class sigmoid (binary classification) case
        bias_init = (
            'ConstantFill', {
                'value': -np.log((1 - prior_prob) / prior_prob)
            }
        )
    return bias_init
    
        def forward(self, inputs, outputs):
        '''See modeling.detector.GenerateProposalLabels for inputs/outputs
        documentation.
        '''
        # During training we reuse the data loader code. We populate roidb
        # entries on the fly using the rois generated by RPN.
        # im_info: [[im_height, im_width, im_scale], ...]
        rois = inputs[0].data
        roidb = blob_utils.deserialize(inputs[1].data)
        im_info = inputs[2].data
        im_scales = im_info[:, 2]
        output_blob_names = fast_rcnn_roi_data.get_fast_rcnn_blob_names()
        # For historical consistency with the original Faster R-CNN
        # implementation we are *not* filtering crowd proposals.
        # This choice should be investigated in the future (it likely does
        # not matter).
        json_dataset.add_proposals(roidb, rois, im_scales, crowd_thresh=0)
        roidb_utils.add_bbox_regression_targets(roidb)
        blobs = {k: [] for k in output_blob_names}
        fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
        for i, k in enumerate(output_blob_names):
            blob_utils.py_op_copy_blob(blobs[k], outputs[i])

    
    
if __name__ == '__main__':
    workspace.GlobalInit(['caffe2', '--caffe2_log_level=0'])
    logger = setup_logging(__name__)
    logger.setLevel(logging.DEBUG)
    logging.getLogger('detectron.roi_data.loader').setLevel(logging.INFO)
    np.random.seed(cfg.RNG_SEED)
    args = parse_args()
    logger.info('Called with args:')
    logger.info(args)
    if args.cfg_file is not None:
        merge_cfg_from_file(args.cfg_file)
    if args.opts is not None:
        merge_cfg_from_list(args.opts)
    assert_and_infer_cfg()
    logger.info('Running with config:')
    logger.info(pprint.pformat(cfg))
    main(args)

    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
    import platform
import os
import subprocess
from .clipboards import (init_osx_clipboard,
                         init_gtk_clipboard, init_qt_clipboard,
                         init_xclip_clipboard, init_xsel_clipboard,
                         init_klipper_clipboard, init_no_clipboard)
from .windows import init_windows_clipboard
    
    
def pack(o, stream, **kwargs):
    '''
    Pack object `o` and write it to `stream`
    
            exp4 = ('0   1 days\n'
                '1   2 days\n'
                '2   3 days\n'
                'dtype: timedelta64[ns]')