
        
            def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
        def _init_db(self):
        try:
            self._setup_db()
        except Exception:
            exception('Unable to init cache', sys.exc_info())
            self._db = {}
    
    
def match(command):
    return (command.script_parts
            and (command.script_parts[0] in ('pacman', 'yay', 'yaourt')
                 or command.script_parts[0:2] == ['sudo', 'pacman'])
            and 'error: target not found:' in command.output)
    
            command = command.split(' ')[0]
    
    setup(name='thefuck',
      version=VERSION,
      description='Magnificent app which corrects your previous console command',
      long_description=long_description,
      author='Vladimir Iakovlev',
      author_email='nvbn.rm@gmail.com',
      url='https://github.com/nvbn/thefuck',
      license='MIT',
      packages=find_packages(exclude=['ez_setup', 'examples',
                                      'tests', 'tests.*', 'release']),
      include_package_data=True,
      zip_safe=False,
      install_requires=install_requires,
      extras_require=extras_require,
      entry_points={'console_scripts': [
          'thefuck = thefuck.entrypoints.main:main',
          'fuck = thefuck.entrypoints.not_configured:main']})

    
    
@pytest.mark.usefixtures('isfile', 'no_memoize', 'no_cache')
class TestBash(object):
    @pytest.fixture
    def shell(self):
        return Bash()
    
        def test_how_to_configure(self, shell):
        assert not shell.how_to_configure().can_configure_automatically
    
    
@pytest.mark.usefixtures('isfile', 'no_memoize', 'no_cache')
class TestTcsh(object):
    @pytest.fixture
    def shell(self):
        return Tcsh()
    
    
priority = 3000

    
        # Returns
        A `pydot.Dot` instance representing the Keras model or
        a `pydot.Cluster` instance representing nested model if
        `subgraph=True`.
    '''
    from ..layers.wrappers import Wrapper
    from ..models import Model
    from ..models import Sequential
    
    import numpy as np
import pytest
    
    
def _runner(init, shape, target_mean=None, target_std=None,
            target_max=None, target_min=None):
    variable = K.variable(init(shape))
    output = K.get_value(variable)
    lim = 3e-2
    if target_std is not None:
        assert abs(output.std() - target_std) < lim
    if target_mean is not None:
        assert abs(output.mean() - target_mean) < lim
    if target_max is not None:
        assert abs(output.max() - target_max) < lim
    if target_min is not None:
        assert abs(output.min() - target_min) < lim
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        def build(self, input_shape):
        if self.data_format == 'channels_last':
            input_row, input_col = input_shape[1:-1]
            input_filter = input_shape[3]
        else:
            input_row, input_col = input_shape[2:]
            input_filter = input_shape[1]
        if input_row is None or input_col is None:
            raise ValueError('The spatial dimensions of the inputs to '
                             ' a LocallyConnected2D layer '
                             'should be fully-defined, but layer received '
                             'the inputs shape ' + str(input_shape))
        output_row = conv_utils.conv_output_length(input_row, self.kernel_size[0],
                                                   self.padding, self.strides[0])
        output_col = conv_utils.conv_output_length(input_col, self.kernel_size[1],
                                                   self.padding, self.strides[1])
        self.output_row = output_row
        self.output_col = output_col
        self.kernel_shape = (
            output_row * output_col,
            self.kernel_size[0] * self.kernel_size[1] * input_filter,
            self.filters)
        self.kernel = self.add_weight(shape=self.kernel_shape,
                                      initializer=self.kernel_initializer,
                                      name='kernel',
                                      regularizer=self.kernel_regularizer,
                                      constraint=self.kernel_constraint)
        if self.use_bias:
            self.bias = self.add_weight(shape=(output_row, output_col, self.filters),
                                        initializer=self.bias_initializer,
                                        name='bias',
                                        regularizer=self.bias_regularizer,
                                        constraint=self.bias_constraint)
        else:
            self.bias = None
        if self.data_format == 'channels_first':
            self.input_spec = InputSpec(ndim=4, axes={1: input_filter})
        else:
            self.input_spec = InputSpec(ndim=4, axes={-1: input_filter})
        self.built = True
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
    docs_extras = [
    # If you have Sphinx<1.5.1, you need docutils<0.13.1
    # https://github.com/sphinx-doc/sphinx/issues/3212
    'repoze.sphinx.autointerface',
    'Sphinx>=1.2', # Annotation support
    'sphinx_rtd_theme',
]
    
            :param str record_name: The record name (typically beginning with '_acme-challenge.').
        :param str record_content: The record content (typically the challenge validation).
        :param int record_ttl: The record TTL (number of seconds that the record may be cached).
        :raises certbot.errors.PluginError: if an error occurs communicating with the DNS server
        '''
    
    '''Functions for evaluating results on Cityscapes.'''
    
    
def filter_for_training(roidb):
    '''Remove roidb entries that have no usable RoIs based on config settings.
    '''
    def is_valid(entry):
        # Valid images have:
        #   (1) At least one foreground RoI OR
        #   (2) At least one background RoI
        overlaps = entry['max_overlaps']
        # find boxes with sufficient overlap
        fg_inds = np.where(overlaps >= cfg.TRAIN.FG_THRESH)[0]
        # Select background RoIs as those within [BG_THRESH_LO, BG_THRESH_HI)
        bg_inds = np.where((overlaps < cfg.TRAIN.BG_THRESH_HI) &
                           (overlaps >= cfg.TRAIN.BG_THRESH_LO))[0]
        # image is only valid if such boxes exist
        valid = len(fg_inds) > 0 or len(bg_inds) > 0
        if cfg.MODEL.KEYPOINTS_ON:
            # If we're training for keypoints, exclude images with no keypoints
            valid = valid and entry['has_visible_keypoints']
        return valid
    
    from detectron.core.config import cfg
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
from detectron.utils.net import get_group_gn
import detectron.utils.blob as blob_utils
    
    
def _ratio_enum(anchor, ratios):
    '''Enumerate a set of anchors for each aspect ratio wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    size = w * h
    size_ratios = size / ratios
    ws = np.round(np.sqrt(size_ratios))
    hs = np.round(ws * ratios)
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors
    
    '''Construct minibatches for Mask R-CNN training when keypoints are enabled.
Handles the minibatch blobs that are specific to training Mask R-CNN for
keypoint detection. Other blobs that are generic to RPN or Fast/er R-CNN are
handled by their respecitive roi_data modules.
'''
    
        def _run_speed_test(self, iters=5, N=1024):
        '''This function provides an example of how to benchmark custom
        operators using the Caffe2 'prof_dag' network execution type. Please
        note that for 'prof_dag' to work, Caffe2 must be compiled with profiling
        support using the `-DUSE_PROF=ON` option passed to `cmake` when building
        Caffe2.
        '''
        net = core.Net('test')
        net.Proto().type = 'prof_dag'
        net.Proto().num_workers = 2
        Y = net.BatchPermutation(['X', 'I'], 'Y')
        Y_flat = net.FlattenToVec([Y], 'Y_flat')
        loss = net.AveragedLoss([Y_flat], 'loss')
        net.AddGradientOperators([loss])
        workspace.CreateNet(net)
    
    
def test_iloc_nonunique():
    s = Series([0, 1, 2], index=[0, 1, 0])
    assert s.iloc[2] == 2

    
        def test_as_json_table_type_categorical_dtypes(self):
        # TODO: I think before is_categorical_dtype(Categorical)
        # returned True, but now it's False. Figure out why or
        # if it matters
        assert as_json_table_type(pd.Categorical(['a'])) == 'any'
        assert as_json_table_type(CategoricalDtype()) == 'any'
    
        def render(self, mode='human'):
        outfile = StringIO() if mode == 'ansi' else sys.stdout
    
        def step(self, a):
        posbefore = self.sim.data.qpos[0]
        self.do_simulation(a, self.frame_skip)
        posafter, height, ang = self.sim.data.qpos[0:3]
        alive_bonus = 1.0
        reward = ((posafter - posbefore) / self.dt)
        reward += alive_bonus
        reward -= 1e-3 * np.square(a).sum()
        done = not (height > 0.8 and height < 2.0 and
                    ang > -1.0 and ang < 1.0)
        ob = self._get_obs()
        return ob, reward, done, {}
    
    # DEPRECATED:
setLevel = set_level

    
        while len(masked_lm_positions) < max_predictions_per_seq:
      masked_lm_positions.append(0)
      masked_lm_ids.append(0)
      masked_lm_weights.append(0.0)