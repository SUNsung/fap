
        
            def get_queue(self, name, maxsize=0):
        ''' Return a queue from the manager
            If it doesn't exist, create it '''
        logger.debug('QueueManager getting: '%s'', name)
        queue = self.queues.get(name, None)
        if not queue:
            self.add_queue(name, maxsize)
            queue = self.queues[name]
        logger.debug('QueueManager got: '%s'', name)
        return queue
    
            def _unsparsify(var_x):
            if not isinstance(var_x, tf.IndexedSlices):
                return var_x
            assert var_x.dense_shape is not None, \
                'memory_saving_gradients encountered sparse gradients of unknown shape'
            indices = var_x.indices
            while indices.shape.ndims < var_x.values.shape.ndims:
                indices = tf.expand_dims(indices, -1)
            return tf.scatter_nd(indices, var_x.values, var_x.dense_shape)
    
            self.input_spec = InputSpec(ndim=ndim)
    
        def seriation(self, tree, points, current_index):
        ''' Seriation method for sorted similarity
            input:
                - tree is a hierarchical tree (dendrogram)
                - points is the number of points given to the clustering process
                - current_index is the position in the tree for the recursive traversal
            output:
                - order implied by the hierarchical tree
    
        def extract_tabs(self, command='extract'):
        ''' Build the extract tabs '''
        logger.debug('Build extract tabs')
        helptext = ('Updates preview from output every 5 '
                    'seconds to limit disk contention')
        PreviewExtract(self, 'preview', helptext, 5000, command)
        logger.debug('Built extract tabs')
    
    from lib.config import FaceswapConfig
from lib.utils import full_path_split
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        @staticmethod
    def get_mask_type(mask_type, predicted_available):
        ''' Return the requested mask type. Return default mask if
            predicted requested but not available '''
        logger.debug('Requested mask_type: %s', mask_type)
        if mask_type == 'predicted' and not predicted_available:
            mask_type = model_masks.get_default_mask()
            logger.warning('Predicted selected, but the model was not trained with a mask. '
                           'Switching to '%s'', mask_type)
        logger.debug('Returning mask_type: %s', mask_type)
        return mask_type
    
            logger.trace('Blending box')
        mask = np.expand_dims(self.mask, axis=-1)
        new_face = np.clip(np.concatenate((new_face, mask), axis=-1), 0.0, 1.0)
        logger.trace('Blended box')
        return new_face

    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face

    
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
    
        def response(self, flow):
        if not flow.reply.has_message:
            self.run(flow, flow.response.headers)

    
    
def ckey(attrs: Dict[str, str], f: http.HTTPFlow) -> TOrigin:
    '''
        Returns a (domain, port, path) tuple.
    '''
    domain = f.request.host
    path = '/'
    if 'domain' in attrs:
        domain = attrs['domain']
    if 'path' in attrs:
        path = attrs['path']
    return (domain, f.request.port, path)
    
            self.id = str(uuid.uuid4())
        self.alpn_proto_negotiated = None
        self.tls_version = None
        self.via = None
        self.timestamp_start = None
        self.timestamp_end = None
        self.timestamp_tcp_setup = None
        self.timestamp_tls_setup = None
    
        for i in range(3):
        for j in range(3):
            grid_add = 0
            for k in range(3):
                for l in range(3):
                    grid_add += board[i*3+k][j*3+l]
            if grid_add != 45:
                return False
    return True
    
            def get_code_tree(T):
            nonlocal tree_code
            if T.sign is not None:
                signs.append(T.sign)
            if T.left:
                tree_code += '0'
                get_code_tree(T.left)
            if T.right:
                tree_code += '1'
                get_code_tree(T.right)
    
        def insert(self, val):
        if val not in self.idxs:
            self.nums.append(val)
            self.idxs[val] = len(self.nums)-1
            return True
        return False