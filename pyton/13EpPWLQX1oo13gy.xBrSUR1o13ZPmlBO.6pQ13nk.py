
        
            plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
    ###############################################################################
clf = SGDRegressor(penalty='l1', alpha=.2, fit_intercept=True, max_iter=2000,
                   tol=None)
clf.fit(X_train, y_train)
print('model sparsity: %f' % sparsity_ratio(clf.coef_))
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    estimators = [('k_means_iris_8', KMeans(n_clusters=8)),
              ('k_means_iris_3', KMeans(n_clusters=3)),
              ('k_means_iris_bad_init', KMeans(n_clusters=3, n_init=1,
                                               init='random'))]
    
            # catch warnings related to kneighbors_graph
        with warnings.catch_warnings():
            warnings.filterwarnings(
                'ignore',
                message='the number of connected components of the ' +
                'connectivity matrix is [0-9]{1,2}' +
                ' > 1. Completing it to avoid stopping the tree early.',
                category=UserWarning)
            algorithm.fit(X)
    
                elif opt in ('-V', '--version'):
                # Display version.
                log.println('you-get:', log.BOLD)
                log.println('    version:  {}'.format(__version__))
                if head is not None:
                    log.println('    branch:   {}\n    commit:   {}'.format(*head))
                else:
                    log.println('    branch:   {}\n    commit:   {}'.format('(stable)', '(tag v{})'.format(__version__)))
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
        title = match1(html, r'&title=([^&]+)')
    
    pattern_url_photoset = r'https?://www\.flickr\.com/photos/.+/(?:(?:sets)|(?:albums))?/([^/]+)'
pattern_url_photostream = r'https?://www\.flickr\.com/photos/([^/]+)(?:/|(?:/page))?$'
pattern_url_single_photo = r'https?://www\.flickr\.com/photos/[^/]+/(\d+)'
pattern_url_gallery = r'https?://www\.flickr\.com/photos/[^/]+/galleries/(\d+)'
pattern_url_group = r'https?://www\.flickr\.com/groups/([^/]+)'
pattern_url_favorite = r'https?://www\.flickr\.com/photos/([^/]+)/favorites'
    
        print_info(site_info, title, 'm3u8', float('inf'))
    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])
    
    # If true, '()' will be appended to :func: etc. cross-reference text.
#add_function_parentheses = True
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
            if file and allowed_file(file.filename):
            # The image file seems valid! Detect faces and return the result.
            return detect_faces_in_image(file)
    
        # Quit when the input video file ends
    if not ret:
        break
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
            if len(encodings) > 1:
            click.echo('WARNING: More than one face found in {}. Only considering the first face.'.format(file))
    
    for face_landmarks in face_landmarks_list:
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
    
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
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
from detectron.utils.net import get_group_gn
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
    
    # Verify that we compute the same anchors as Shaoqing's matlab implementation:
#
#    >> load output/rpn_cachedir/faster_rcnn_VOC2007_ZF_stage1_rpn/anchors.mat
#    >> anchors
#
#    anchors =
#
#       -83   -39   100    56
#      -175   -87   192   104
#      -359  -183   376   200
#       -55   -55    72    72
#      -119  -119   136   136
#      -247  -247   264   264
#       -35   -79    52    96
#       -79  -167    96   184
#      -167  -343   184   360
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
    
def main(opts):
    logger = logging.getLogger(__name__)
    roidb = combined_roidb_for_training(
        cfg.TRAIN.DATASETS, cfg.TRAIN.PROPOSAL_FILES)
    logger.info('{:d} roidb entries'.format(len(roidb)))
    roi_data_loader = RoIDataLoader(
        roidb,
        num_loaders=cfg.DATA_LOADER.NUM_THREADS,
        minibatch_queue_size=cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE,
        blobs_queue_capacity=cfg.DATA_LOADER.BLOBS_QUEUE_CAPACITY
    )
    blob_names = roi_data_loader.get_output_names()