
        
        '''
This script employs a VERY basic heuristic ('porn' in webpage.lower()) to check
if we are not 'age_limit' tagging some porn site
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    
if __name__ == '__main__':
    main()

    
        bug_text = re.search(
        r'(?s)#\s*BUGS\s*[^\n]*\s*(.*?)#\s*COPYRIGHT', readme).group(1)
    dev_text = re.search(
        r'(?s)(#\s*DEVELOPER INSTRUCTIONS.*?)#\s*EMBEDDING YOUTUBE-DL',
        readme).group(1)
    
    ZSH_COMPLETION_FILE = 'youtube-dl.zsh'
ZSH_COMPLETION_TEMPLATE = 'devscripts/zsh-completion.in'
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
        def database_backwards(self, app_label, schema_editor, from_state, to_state):
        schema_editor.execute('DROP EXTENSION %s' % schema_editor.quote_name(self.name))
        # Clear cached, stale oids.
        get_hstore_oids.cache_clear()
        get_citext_oids.cache_clear()
    
    KEY_PREFIX = 'django.contrib.sessions.cache'
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
        @property
    def auto_id(self):
        '''
        Calculate and return the ID attribute for this BoundField, if the
        associated Form has specified auto_id. Return an empty string otherwise.
        '''
        auto_id = self.form.auto_id  # Boolean or string
        if auto_id and '%s' in str(auto_id):
            return auto_id % self.html_name
        elif auto_id:
            return self.html_name
        return ''
    
    
def to_categorical(y, num_classes=None, dtype='float32'):
    '''Converts a class vector (integers) to binary class matrix.
    
        def get_slice(data, i, parts):
        shape = K.shape(data)
        batch_size = shape[:1]
        input_shape = shape[1:]
        step = batch_size // parts
        if i == parts - 1:
            size = batch_size - step * i
        else:
            size = step
        size = K.concatenate([size, input_shape], axis=0)
        stride = K.concatenate([step, input_shape * 0], axis=0)
        start = stride * i
        return K.slice(data, start, size)
    
        with pytest.raises(ValueError):
        conv_utils.normalize_tuple(None, 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple([2, 3, 4], 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple(['str', 'impossible'], 2, 'kernel_size')
    
            :rtype: bool
        '''
        domains = []
        for cookie in iter(self):
            if cookie.domain is not None and cookie.domain in domains:
                return True
            domains.append(cookie.domain)
        return False  # there is only one domain in jar
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
            If a test package name (directory with '__init__.py') matches the
        pattern then the package will be checked for a 'load_tests' function. If
        this exists then it will be called with (loader, tests, pattern) unless
        the package has already had load_tests called from the same discovery
        invocation, in which case the package module object is not scanned for
        tests - this ensures that when a package uses discover to further
        discover child tests that infinite recursion does not happen.
    
            loader = unittest.TestLoader()
        suite = loader.loadTestsFromName('test_2', NotAModule)
    
    IMPORT_MAPPING.update({
    'cPickle': 'pickle',
    '_elementtree': 'xml.etree.ElementTree',
    'FileDialog': 'tkinter.filedialog',
    'SimpleDialog': 'tkinter.simpledialog',
    'DocXMLRPCServer': 'xmlrpc.server',
    'SimpleHTTPServer': 'http.server',
    'CGIHTTPServer': 'http.server',
    # For compatibility with broken pickles saved in old Python 3 versions
    'UserDict': 'collections',
    'UserList': 'collections',
    'UserString': 'collections',
    'whichdb': 'dbm',
    'StringIO':  'io',
    'cStringIO': 'io',
})
    
        def testDecompressMultiStream(self):
        text = bz2.decompress(self.DATA * 5)
        self.assertEqual(text, self.TEXT * 5)
    
    def getText(nodelist):
    rc = []
    for node in nodelist:
        if node.nodeType == node.TEXT_NODE:
            rc.append(node.data)
    return ''.join(rc)
    
    
if __name__ == '__main__':
    freeze_support()
    test()

    
        os.environ['CITYSCAPES_DATASET'] = get_raw_dir(json_dataset.name)
    os.environ['CITYSCAPES_RESULTS'] = output_dir
    
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
    
        if cfg.KRCNN.USE_DECONV:
        # Apply ConvTranspose to the feature representation; results in 2x
        # upsampling
        blob_in = model.ConvTranspose(
            blob_in,
            'kps_deconv',
            dim,
            cfg.KRCNN.DECONV_DIM,
            kernel=cfg.KRCNN.DECONV_KERNEL,
            pad=int(cfg.KRCNN.DECONV_KERNEL / 2 - 1),
            stride=2,
            weight_init=gauss_fill(0.01),
            bias_init=const_fill(0.0)
        )
        model.Relu('kps_deconv', 'kps_deconv')
        dim = cfg.KRCNN.DECONV_DIM
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
    
def collect(inputs, is_training):
    cfg_key = 'TRAIN' if is_training else 'TEST'
    post_nms_topN = cfg[cfg_key].RPN_POST_NMS_TOP_N
    k_max = cfg.FPN.RPN_MAX_LEVEL
    k_min = cfg.FPN.RPN_MIN_LEVEL
    num_lvls = k_max - k_min + 1
    roi_inputs = inputs[:num_lvls]
    score_inputs = inputs[num_lvls:]
    if is_training:
        score_inputs = score_inputs[:-2]
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    # Example usage:
# data_loader_benchmark.par \
#   NUM_GPUS 2 \
#   TRAIN.DATASETS '('voc_2007_trainval',)' \
#   TRAIN.PROPOSAL_FILES /path/to/voc_2007_trainval/proposals.pkl \
#   DATA_LOADER.NUM_THREADS 4 \
#   DATA_LOADER.MINIBATCH_QUEUE_SIZE 64 \
#   DATA_LOADER.BLOBS_QUEUE_CAPACITY 8
    
    from caffe2.proto import caffe2_pb2
from caffe2.python import core
from caffe2.python import gradient_checker
from caffe2.python import workspace