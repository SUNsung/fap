
        
        import pytest
import warnings
from mock import Mock, call, patch
from thefuck.utils import default_settings, \
    memoize, get_closest, get_all_executables, replace_argument, \
    get_all_matched_commands, is_app, for_app, cache, \
    get_valid_history_without_current, _cache, get_close_matches
from thefuck.types import Command
    
    
def archlinux_env():
    if utils.which('yay'):
        pacman = 'yay'
    elif utils.which('yaourt'):
        pacman = 'yaourt'
    elif utils.which('pacman'):
        pacman = 'sudo pacman'
    else:
        return False, None
    
        def test_get_history(self, history_lines, shell):
        history_lines(['ls', 'rm'])
        # We don't know what to do in generic shell with history lines,
        # so just ignore them:
        assert list(shell.get_history()) == []
    
        # One from history:
    already_used = get_closest(
        old_command, _get_used_executables(command),
        fallback_to_first=False)
    if already_used:
        new_cmds = [already_used]
    else:
        new_cmds = []
    
        def items(self):
        for key, values in super(RequestItemsDict, self).items():
            if not isinstance(values, list):
                values = [values]
            for value in values:
                yield key, value
    
        def cleanup(self):
        self.stdout.close()
        self.stderr.close()
        if self._delete_config_dir:
            assert self.config_dir.startswith(tempfile.gettempdir())
            from shutil import rmtree
            rmtree(self.config_dir)
    
        def iter_lines(self, chunk_size):
        '''Return an iterator over the body yielding (`line`, `line_feed`).'''
        raise NotImplementedError()
    
            :param headers: The headers as text.
    
        def get_auth_plugin_mapping(self):
        return {plugin.auth_type: plugin for plugin in self.get_auth_plugins()}
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
    
def main():
    '''
    >>> h0 = ConcreteHandler0()
    >>> h1 = ConcreteHandler1()
    >>> h2 = ConcreteHandler2(FallbackHandler())
    >>> h0.successor = h1
    >>> h1.successor = h2
    
    
# Test the generator
count_to_two = lambda: count_to(2)
count_to_five = lambda: count_to(5)
    
    
class Node(object):
    pass
    
    
if __name__ == '__main__':
    import doctest
    
        def debug_monitor(self, update_secs=2):
        ''' Debug tool for monitoring queues '''
        thread = threading.Thread(target=self.debug_queue_sizes,
                                  args=(update_secs, ))
        thread.daemon = True
        thread.start()
    
        # construct list of tensors to checkpoint during forward pass, if not
    # given as input
    if type(checkpoints) is not list:
        if checkpoints == 'collection':
            checkpoints = tf.get_collection('checkpoints')
    
    
class Adjustment():
    ''' Parent class for adjustments '''
    def __init__(self, configfile=None, config=None):
        logger.debug('Initializing %s: (configfile: %s, config: %s)',
                     self.__class__.__name__, configfile, config)
        self.config = self.set_config(configfile, config)
        logger.debug('config: %s', self.config)
        logger.debug('Initialized %s', self.__class__.__name__)
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
            For actions that occur identically for each frame (e.g. blend_box), constants can
        be placed into self.func_constants to be compiled at launch, then referenced for
        each face. '''
    def __init__(self, mask_type, output_size, predicted_available=False, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.mask = self.get_mask() if not self.skip else None
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def close(self):
        ''' Image writer does not need a close method '''
        return

    
        if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_RPN:
        k_max = cfg.FPN.RPN_MAX_LEVEL
        k_min = cfg.FPN.RPN_MIN_LEVEL
        rois_names = [
            core.ScopedName('rpn_rois_fpn' + str(l))
            for l in range(k_min, k_max + 1)
        ]
        score_names = [
            core.ScopedName('rpn_roi_probs_fpn' + str(l))
            for l in range(k_min, k_max + 1)
        ]
        blobs = workspace.FetchBlobs(rois_names + score_names)
        # Combine predictions across all levels and retain the top scoring
        boxes = np.concatenate(blobs[:len(rois_names)])
        scores = np.concatenate(blobs[len(rois_names):]).squeeze()
        # Discussion: one could do NMS again after combining predictions from
        # the different FPN levels. Conceptually, it's probably the right thing
        # to do. For arbitrary reasons, the original FPN RPN implementation did
        # not do another round of NMS.
        inds = np.argsort(-scores)[:cfg.TEST.RPN_POST_NMS_TOP_N]
        scores = scores[inds]
        boxes = boxes[inds, :]
    else:
        boxes, scores = workspace.FetchBlobs(
            [core.ScopedName('rpn_rois'),
             core.ScopedName('rpn_roi_probs')]
        )
        scores = scores.squeeze()
    
        def test_deprecated_key_from_file(self):
        # You should see logger messages like:
        #   'Deprecated config key (ignoring): MODEL.DILATION'
        with tempfile.NamedTemporaryFile() as f:
            cfg2 = copy.deepcopy(cfg)
            cfg2.MODEL.DILATION = 2
            envu.yaml_dump(cfg2, f)
            with self.assertRaises(AttributeError):
                _ = cfg.MODEL.DILATION  # noqa
            core_config.merge_cfg_from_file(f.name)
            with self.assertRaises(AttributeError):
                _ = cfg.MODEL.DILATION  # noqa
    
    
def configure_bbox_reg_weights(model, saved_cfg):
    '''Compatibility for old models trained with bounding box regression
    mean/std normalization (instead of fixed weights).
    '''
    if 'MODEL' not in saved_cfg or 'BBOX_REG_WEIGHTS' not in saved_cfg.MODEL:
        logger.warning('Model from weights file was trained before config key '
                       'MODEL.BBOX_REG_WEIGHTS was added. Forcing '
                       'MODEL.BBOX_REG_WEIGHTS = (1., 1., 1., 1.) to ensure '
                       'correct **inference** behavior.')
        # Generally we don't allow modifying the config, but this is a one-off
        # hack to support some very old models
        is_immutable = cfg.is_immutable()
        cfg.immutable(False)
        cfg.MODEL.BBOX_REG_WEIGHTS = (1., 1., 1., 1.)
        cfg.immutable(is_immutable)
        logger.info('New config:')
        logger.info(pprint.pformat(cfg))
        assert not model.train, (
            'This model was trained with an older version of the code that '
            'used bounding box regression mean/std normalization. It can no '
            'longer be used for training. To upgrade it to a trainable model '
            'please use fb/compat/convert_bbox_reg_normalized_model.py.'
        )
    
            for cls in range(1, cfg.MODEL.NUM_CLASSES):
            inds = np.where(classes == cls - 1)[0]
            if len(inds) > 0:
                boxes_all[cls].extend(box_scores[inds, :])
    timers['im_detect_bbox'].toc()
    
        num_images = len(ims)
    blob = np.zeros(
        (num_images, max_shape[0], max_shape[1], 3), dtype=np.float32
    )
    for i in range(num_images):
        im = ims[i]
        blob[i, 0:im.shape[0], 0:im.shape[1], :] = im
    # Move channels (axis 3) to axis 1
    # Axis order will become: (batch elem, channel, height, width)
    channel_swap = (0, 3, 1, 2)
    blob = blob.transpose(channel_swap)
    return blob
    
    
def setup_logging(name):
    FORMAT = '%(levelname)s %(filename)s:%(lineno)4d: %(message)s'
    # Manually clear root loggers to prevent any module that may have called
    # logging.basicConfig() from blocking our logging setup
    logging.root.handlers = []
    logging.basicConfig(level=logging.INFO, format=FORMAT, stream=sys.stdout)
    logger = logging.getLogger(name)
    return logger
