
        
            return True
    
    
def get_running_config(module, config=None):
    contents = module.params['running_config']
    if not contents:
        if config:
            contents = config
        else:
            contents = get_config(module)
    return NetworkConfig(indent=1, contents=contents)
    
        @pytest.mark.parametrize('args_dict, msg', INVALID_MULTIPLE_ACTIONS)
    def test_multiple_actions(self, args_dict, msg):
        m = ModuleArgsParser(args_dict)
        with pytest.raises(AnsibleParserError) as err:
            m.parse()
    
    
# These Exceptions are temporary, using them as flow control until we can get a better solution.
# DO NOT USE as they will probably be removed soon.
# We will port the action modules in our tree to use a context manager instead.
class AnsibleAction(AnsibleRuntimeError):
    ''' Base Exception for Action plugin flow control '''
    
        def test_nios_network_ipv6_dhcp_update(self):
        self.module.params = {'provider': None, 'state': 'present', 'ipv6network': 'fe80::/64',
                              'comment': 'updated comment', 'extattrs': None}
    
    Finally, note that parameters of the models have been here handpicked but
that in practice they need to be adjusted. In the absence of labelled data,
the problem is completely unsupervised so model selection can be a challenge.
'''
    
    # Plot also the training points
plt.scatter(X[:, 0], X[:, 1], c=Y, edgecolors='k', cmap=plt.cm.Paired)
plt.xlabel('Sepal length')
plt.ylabel('Sepal width')
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
        def flush_queue(self, q_name):
        ''' Empty out a specific queue '''
        logger.debug('QueueManager flushing: '%s'', q_name)
        queue = self.queues[q_name]
        while not queue.empty():
            queue.get(True, 1)
    
            self.axis = to_list(axis)
        self.gamma_init = initializers.get(gamma_init)
        self.beta_init = initializers.get(beta_init)
        self.gamma_regularizer = regularizers.get(gamma_regularizer)
        self.beta_regularizer = regularizers.get(beta_regularizer)
        self.epsilon = epsilon
        self.group = group
        self.data_format = K.normalize_data_format(data_format)
    
        def set_defaults(self):
        ''' Set the default values for config '''
        logger.debug('Setting defaults')
        current_dir = os.path.dirname(__file__)
        for dirpath, _, filenames in os.walk(current_dir):
            default_files = [fname for fname in filenames if fname.endswith('_defaults.py')]
            if not default_files:
                continue
            base_path = os.path.dirname(os.path.realpath(sys.argv[0]))
            import_path = '.'.join(full_path_split(dirpath.replace(base_path, ''))[1:])
            plugin_type = import_path.split('.')[-1]
            for filename in default_files:
                self.load_module(filename, import_path, plugin_type)
    
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
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}