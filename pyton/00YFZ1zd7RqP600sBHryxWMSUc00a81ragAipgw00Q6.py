
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
        def teardown_app_request(self, f):
        '''Like :meth:`Flask.teardown_request` but for a blueprint.  Such a
        function is executed when tearing down each request, even if outside of
        the blueprint.
        '''
        self.record_once(
            lambda s: s.app.teardown_request_funcs.setdefault(None, []).append(f)
        )
        return f
    
        def __init__(self, app):
        self.app = app
    
        app.register_blueprint(bp, url_prefix='/py')
    assert 'my_reverse' in app.jinja_env.filters.keys()
    assert app.jinja_env.filters['my_reverse'] == my_reverse
    assert app.jinja_env.filters['my_reverse']('abcd') == 'dcba'
    
    Finally, note that parameters of the models have been here handpicked but
that in practice they need to be adjusted. In the absence of labelled data,
the problem is completely unsupervised so model selection can be a challenge.
'''
    
        for i in range(1, n + 1):
        print('==================')
        print('Iteration %02d of %02d' % (i, n))
        print('==================')
        n_features = i * step
        n_informative = n_features / 10
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    First, we fix a training set, increase the number of
samples to classify and plot number of classified samples as a
function of time.
    
    for connectivity in (None, knn_graph):
    for n_clusters in (30, 3):
        plt.figure(figsize=(10, 4))
        for index, linkage in enumerate(('average',
                                         'complete',
                                         'ward',
                                         'single')):
            plt.subplot(1, 4, index + 1)
            model = AgglomerativeClustering(linkage=linkage,
                                            connectivity=connectivity,
                                            n_clusters=n_clusters)
            t0 = time.time()
            model.fit(X)
            elapsed_time = time.time() - t0
            plt.scatter(X[:, 0], X[:, 1], c=model.labels_,
                        cmap=plt.cm.nipy_spectral)
            plt.title('linkage=%s\n(time %.2fs)' % (linkage, elapsed_time),
                      fontdict=dict(verticalalignment='top'))
            plt.axis('equal')
            plt.axis('off')
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'face_recognitiondoc'
    
         (View in source code to see train_dir example tree structure)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    
def detect_faces_in_image(file_stream):
    # Pre-calculated face encoding of Obama generated with face_recognition.face_encodings(img)
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        # Bail out when the video file ends
    if not ret:
        break
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('two_people.jpg')
    
    
def _raw_face_landmarks(face_image, face_locations=None, model='large'):
    if face_locations is None:
        face_locations = _raw_face_locations(face_image)
    else:
        face_locations = [_css_to_rect(face_location) for face_location in face_locations]
    
    # Find all the faces and face encodings in the unknown image
face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)
    
    
def basic_bn_stem(model, data, **kwargs):
    '''Add a basic ResNet stem. For a pre-trained network that used BN.
    An AffineChannel op replaces BN during fine-tuning.
    '''
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
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

    
    '''Construct minibatches for Fast R-CNN training. Handles the minibatch blobs
that are specific to Fast R-CNN. Other blobs that are generic to RPN, etc.
are handled by their respecitive roi_data modules.
'''
    
        N = len(roidb)
    for k, v in blobs.items():
        if isinstance(v, list) and len(v) > 0:
            # compute number of anchors
            A = int(len(v) / N)
            # for the cls branch labels [per fpn level],
            # we have blobs['retnet_cls_labels_fpn{}'] as a list until this step
            # and length of this list is N x A where
            # N = num_images, A = num_anchors for example, N = 2, A = 9
            # Each element of the list has the shape 1 x 1 x H x W where H, W are
            # spatial dimension of curret fpn lvl. Let a{i} denote the element
            # corresponding to anchor i [9 anchors total] in the list.
            # The elements in the list are in order [[a0, ..., a9], [a0, ..., a9]]
            # however the network will make predictions like 2 x (9 * 80) x H x W
            # so we first concatenate the elements of each image to a numpy array
            # and then concatenate the two images to get the 2 x 9 x H x W
    
    
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

    
        def test_size_exceptions(self):
        A = np.random.randn(2, 256, 42, 86).astype(np.float32)
        I = np.array(np.random.permutation(10), dtype=np.int32)
        with self.assertRaises(RuntimeError):
            self._run_op_test(A, I)