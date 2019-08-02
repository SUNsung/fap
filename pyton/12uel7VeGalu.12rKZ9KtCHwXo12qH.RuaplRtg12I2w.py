
        
            def _escalate_call(self):
        self.call.state = CallState.READY
        call = self.call
        self.call = None
        self.call_center.notify_call_escalated(call)
    
        def remove_user(self, user_id):
        pass
    
        MOTORCYCLE = 0
    COMPACT = 1
    LARGE = 2
    
            (foo, 2), p1
        (bar, 3), p1
        (foo, 3), p2
        (bar, 10), p3
        (foo, 1), p4
    
    import time
    
        clf.C = min_c * 1.01
    clf.fit(X, y)
    assert ((np.asarray(clf.coef_) != 0).any() or
            (np.asarray(clf.intercept_) != 0).any())
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    
    skeleton_dir = os.path.abspath(os.path.join(exercise_dir, '..', 'skeletons'))
if not os.path.exists(skeleton_dir):
    os.makedirs(skeleton_dir)
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    Second, when using a connectivity matrix, single, average and complete
linkage are unstable and tend to create a few clusters that grow very
quickly. Indeed, average and complete linkage fight this percolation behavior
by considering all the distances between two clusters when merging them (
while single linkage exaggerates the behaviour by considering only the
shortest distance between clusters). The connectivity graph breaks this
mechanism for average and complete linkage, making them resemble the more
brittle single linkage. This effect is more pronounced for very sparse graphs
(try decreasing the number of neighbors in kneighbors_graph) and with
complete linkage. In particular, having a very small number of neighbors in
the graph, imposes a geometry that is close to that of single linkage,
which is well known to have this percolation instability. '''
# Authors: Gael Varoquaux, Nelle Varoquaux
# License: BSD 3 clause
    
    import matplotlib.pyplot as plt
import numpy as np
    
        def test_specified_attributes(self):
        self.assertIs(self.parser.specified_attributes, False)
        for x in 0, 1, 2, 0:
            self.parser.specified_attributes = x
            self.assertIs(self.parser.specified_attributes, bool(x))
    
        def test_scope_isolation_from_global(self):
        expected = {0: None, 1: None, 2: None, 3: None, 4: None, 5: None,
                    6: None, 7: None, 8: None, 9: None}
        actual = {g: None for g in range(10)}
        self.assertEqual(actual, expected)
        self.assertEqual(g, 'Global variable')
    
            Return value is a tuple (type, encoding) where type is None if
        the type can't be guessed (no or unknown suffix) or a string
        of the form type/subtype, usable for a MIME Content-type
        header; and encoding is None for no encoding or the name of
        the program used to encode (e.g. compress or gzip).  The
        mappings are table driven.  Encoding suffixes are case
        sensitive; type suffixes are first tried case sensitive, then
        case insensitive.
    
    import time
import os
import sys
import itertools
import threading
import subprocess
import socket
from optparse import OptionParser, SUPPRESS_HELP
import platform
    
            These will be sorted in the order they appeared in the original
        message, or were added to the message, and may contain duplicates.
        Any fields deleted and re-inserted are always appended to the header
        list.
        '''
        return [(k, self.policy.header_fetch_parse(k, v))
                for k, v in self._headers]
    
        def CheckIntegrityError(self):
        self.assertTrue(issubclass(sqlite.IntegrityError, sqlite.DatabaseError),
                        'IntegrityError is not a subclass of DatabaseError')
    
    
class BrokenThreadPool(_base.BrokenExecutor):
    '''
    Raised when a worker thread in a ThreadPoolExecutor failed initializing.
    '''
    
    
def clip_relu(x, max_value):
    '''截断 ReLU
    `o = min(max(0., x), max_value)`
    '''
    o = tf.nn.relu(x)
    o = tf.minimum(o, max_value)
    return o
    
        from pprint import pprint
    
        def check_range(self, request):
        if self.start <= request < self.end:
            print('request {} handled in handler 1'.format(request))
            return True
    
    *TL;DR
Traverses a container and accesses the container's elements.
'''
    
    '''
https://www.djangospin.com/design-patterns-python/mediator/
    
        def restore():
        obj.__dict__.clear()
        obj.__dict__.update(state)
    
    
def main():
    dispatcher = PrototypeDispatcher()
    prototype = Prototype()
    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
        >>> cat = Cat()
    >>> objects.append(Adapter(cat, make_noise=cat.meow))
    >>> human = Human()
    >>> objects.append(Adapter(human, make_noise=human.speak))
    >>> car = Car()
    >>> objects.append(Adapter(car, make_noise=lambda: car.make_noise(3)))
    
    
class ComputerFacade(object):
    '''
    Represents a facade for various computer parts.
    '''
    def __init__(self):
        self.cpu = CPU()
        self.memory = Memory()
        self.ssd = SolidStateDrive()
    
                    var_x = K.reshape(inputs, (batch_size,
                                           self.group,
                                           channels // self.group,
                                           height,
                                           width))
                mean = K.mean(var_x, axis=[2, 3, 4], keepdims=True)
                std = K.sqrt(K.var(var_x, axis=[2, 3, 4], keepdims=True) + self.epsilon)
                var_x = (var_x - mean) / std
    
    
def get_default_mask():
    ''' Set the default mask for cli '''
    masks = get_available_masks()
    default = 'dfl_full'
    default = default if default in masks else masks[0]
    logger.debug(default)
    return default
    
    
_DEFAULTS = {
    'format': {
        'default': 'png',
        'info': 'Image format to use:'
                '\n\t bmp: Windows bitmap'
                '\n\t jpg: JPEG format'
                '\n\t jp2: JPEG 2000 format'
                '\n\t png: Portable Network Graphics'
                '\n\t ppm: Portable Pixmap Format',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['bmp', 'jpg', 'jp2', 'png', 'ppm'],
        'gui_radio': True,
        'fixed': True,
    },
    'draw_transparent': {
        'default': False,
        'info': 'Place the swapped face on a transparent layer rather than the original frame.'
                '\nNB: This is only compatible with images saved in png format. If an '
                'incompatible format is selected then the image will be saved as a png.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'jpg_quality': {
        'default': 75,
        'info': '[jpg only] Set the jpg quality. 1 is worst 95 is best. Higher quality leads '
                'to larger file sizes.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 95),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'png_compress_level': {
        'default': 3,
        'info': '[png only] ZLIB compression level, 1 gives best speed, 9 gives best '
                'compression, 0 gives no compression at all.',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 9),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        for i in range(num_convs):
        current = model.ConvGN(
            current,
            '_mask_fcn' + str(i + 1),
            dim_in,
            dim_inner,
            group_gn=get_group_gn(dim_inner),
            kernel=3,
            pad=1 * dilation,
            stride=1,
            weight_init=(cfg.MRCNN.CONV_INIT, {'std': 0.001}),
            bias_init=('ConstantFill', {'value': 0.})
        )
        current = model.Relu(current, current)
        dim_in = dim_inner
    
    from caffe2.python import core
from caffe2.python import workspace
    
                return all_results
        else:
            # Subprocess child case:
            # In this case test_net was called via subprocess.Popen to execute on a
            # range of inputs on a single dataset
            dataset_name, proposal_file = get_inference_dataset(0, is_parent=False)
            output_dir = get_output_dir(dataset_name, training=False)
            return child_func(
                weights_file,
                dataset_name,
                proposal_file,
                output_dir,
                ind_range=ind_range,
                gpu_id=gpu_id
            )
    
    import os
import sys
import yaml
    
    
def print_net(model, namescope='gpu_0'):
    '''Print the model network.'''
    logger.info('Printing model: {}'.format(model.net.Name()))
    op_list = model.net.Proto().op
    for op in op_list:
        input_name = op.input
        # For simplicity: only print the first output
        # Not recommended if there are split layers
        output_name = str(op.output[0])
        op_type = op.type
        op_name = op.name
    
    '''Primitives for running multiple single-GPU jobs in parallel over subranges of
data. These are used for running multi-GPU inference. Subprocesses are used to
avoid the GIL since inference may involve non-trivial amounts of Python code.
'''
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        def __init__(self):
        self._event = threading.Event()
    
    
def convert(json_file, output_dir):
    print('Reading: {}'.format(json_file))
    with open(json_file, 'r') as fid:
        dt = json.load(fid)
    print('done!')
    
        args = parser.parse_args()
    return args
    
    fp.close()

    
    accepted_chars = re.compile(r'[\u4E00-\u9FD5]+')
    
        def encode(self, arg):
        return self.__unicode__().encode(arg)
    
    s = '此外，公司拟对全资子公司吉林欧亚置业有限公司增资4.3亿元，增资后，吉林欧亚置业注册资本由7000万元增加到5亿元。吉林欧亚置业主要经营范围为房地产开发及百货零售等业务。目前在建吉林欧亚城市商业综合体项目。2013年，实现营业收入0万元，实现净利润-139.13万元。'
for x, w in jieba.analyse.extract_tags(s, withWeight=True):
    print('%s %s' % (x, w))
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
        def testPosseg(self):
        import jieba.posseg as pseg
        for content in test_contents:
            result = pseg.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test Posseg Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Posseg error on content: %s' % content
            print(' , '.join([w.word + ' / ' + w.flag for w in result]), file=sys.stderr)
        print('testPosseg', file=sys.stderr)