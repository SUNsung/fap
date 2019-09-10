
        
            # Arguments
        model: A Keras model instance.
        show_shapes: whether to display shape information.
        show_layer_names: whether to display layer names.
        rankdir: `rankdir` argument passed to PyDot,
            a string specifying the format of the plot:
            'TB' creates a vertical plot;
            'LR' creates a horizontal plot.
        expand_nested: whether to expand nested models into clusters.
        dpi: dot DPI.
        subgraph: whether to return a pydot.Cluster instance.
    
    Gets to 0.8498 test accuracy after 2 epochs. 41 s/epoch on K520 GPU.
'''
from __future__ import print_function
    
    
def test_plot_sequential_embedding():
    '''Fixes #11376'''
    model = Sequential()
    model.add(Embedding(10000, 256, input_length=400, name='embed'))
    vis_utils.plot_model(model,
                         to_file='model1.png',
                         show_shapes=True,
                         show_layer_names=True)
    os.remove('model1.png')
    
        def call(self, inputs):
        inputs -= K.mean(inputs, axis=1, keepdims=True)
        inputs = K.l2_normalize(inputs, axis=1)
        pos = K.relu(inputs)
        neg = K.relu(-inputs)
        return K.concatenate([pos, neg], axis=1)
    
    model = Sequential()
model.add(Embedding(max_features, 128, input_length=maxlen))
model.add(Bidirectional(LSTM(64)))
model.add(Dropout(0.5))
model.add(Dense(1, activation='sigmoid'))
    
        # negative_slope of ReLU layer cannot be negative value
    with pytest.raises(ValueError):
        layer_test(layers.ReLU, kwargs={'negative_slope': -2.0},
                   input_shape=(2, 3, 4))
    
            else:
            raise Exception('%s is unsupported input for 'checkpoints'' % (checkpoints,))
    
    
class facehull(Mask):  # pylint: disable=invalid-name
    ''' Basic face hull mask '''
    def build_mask(self):
        mask = np.zeros(self.face.shape[0:2] + (1, ), dtype=np.float32)
        hull = cv2.convexHull(  # pylint: disable=no-member
            np.array(self.landmarks).reshape((-1, 2)))
        cv2.fillConvexPoly(mask, hull, 255.0, lineType=cv2.LINE_AA)  # pylint: disable=no-member
        return mask

    
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
    
        # MASK MANIPULATIONS
    def erode(self, mask):
        ''' Erode/dilate mask if requested '''
        kernel = self.get_erosion_kernel(mask)
        if self.config['erosion'] > 0:
            logger.trace('Eroding mask')
            mask = cv2.erode(mask, kernel, iterations=1)  # pylint: disable=no-member
        else:
            logger.trace('Dilating mask')
            mask = cv2.dilate(mask, kernel, iterations=1)  # pylint: disable=no-member
        return mask
    
        def __call__(self, shape, dtype='float32'):  # tf needs partition_info=None
        shape = list(shape)
        if self.scale == 1:
            return self.initializer(shape)
        new_shape = shape[:3] + [shape[3] // (self.scale ** 2)]
        if isinstance(self.initializer, dict):
            self.initializer = initializers.deserialize(self.initializer)
        var_x = self.initializer(new_shape, dtype)
        var_x = tf.transpose(var_x, perm=[2, 0, 1, 3])
        var_x = tf.image.resize_nearest_neighbor(
            var_x,
            size=(shape[0] * self.scale, shape[1] * self.scale),
            align_corners=True)
        var_x = tf.space_to_depth(var_x, block_size=self.scale, data_format='NHWC')
        var_x = tf.transpose(var_x, perm=[1, 2, 0, 3])
        return var_x
    
            # 6. apply loose nms (e.g. threshold = 0.7)
        # 7. take after_nms_topN (e.g. 300)
        # 8. return the top proposals (-> RoIs top)
        if nms_thresh > 0:
            keep = box_utils.nms(np.hstack((proposals, scores)), nms_thresh)
            if post_nms_topN > 0:
                keep = keep[:post_nms_topN]
            proposals = proposals[keep, :]
            scores = scores[keep]
        return proposals, scores
    
                try:
                # Under some conditions (e.g., dynamic memory optimization)
                # it is possible that the network frees some blobs when they are
                # no longer needed. Handle this case...
                output_shape = workspace.FetchBlob(output_name).shape
            except BaseException:
                output_shape = '<unknown>'
    
    
def log_subprocess_output(i, p, output_dir, tag, start, end):
    '''Capture the output of each subprocess and log it in the parent process.
    The first subprocess's output is logged in realtime. The output from the
    other subprocesses is buffered and then printed all at once (in order) when
    subprocesses finish.
    '''
    outfile = os.path.join(
        output_dir, '%s_range_%s_%s.stdout' % (tag, start, end)
    )
    logger.info('# ' + '-' * 76 + ' #')
    logger.info(
        'stdout of subprocess %s with range [%s, %s]' % (i, start + 1, end)
    )
    logger.info('# ' + '-' * 76 + ' #')
    if i == 0:
        # Stream the piped stdout from the first subprocess in realtime
        with open(outfile, 'wb') as f:
            for line in iter(p.stdout.readline, b''):
                print(line.rstrip().decode('utf8'))
                f.write(line)
        p.stdout.close()
        ret = p.wait()
    else:
        # For subprocesses >= 1, wait and dump their log file
        ret = p.wait()
        with open(outfile, 'r') as f:
            print(''.join(f.readlines()))
    assert ret == 0, 'Range subprocess failed (exit code: {})'.format(ret)

    
    from caffe2.proto import caffe2_pb2
    
    
if __name__ == '__main__':
    dataset_name = sys.argv[1]
    file_in = sys.argv[2]
    file_out = sys.argv[3]