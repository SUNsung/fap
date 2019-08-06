
        
        This script loads the ```s2s.h5``` model saved by [lstm_seq2seq.py
](/examples/lstm_seq2seq/) and generates sequences from it. It assumes
that no changes have been made (for example: ```latent_dim``` is unchanged,
and the input data and model architecture are unchanged).
    
    
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
    
        # Compute quantities required for feature-wise normalization
    # (std, mean, and principal components if ZCA whitening is applied).
    datagen.fit(x_train)
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        def _call_end_hook(self, mode):
        '''Helper function for on_{train|test|predict}_end methods.'''
        if mode == _TRAIN:
            self.on_train_end()
        elif mode == _TEST:
            self.on_test_end()
        else:
            self.on_predict_end()
    
        @interfaces.legacy_gaussiannoise_support
    def __init__(self, stddev, **kwargs):
        super(GaussianNoise, self).__init__(**kwargs)
        self.supports_masking = True
        self.stddev = stddev
    
            # Arguments
            chars: Characters that can appear in the input.
        '''
        self.chars = sorted(set(chars))
        self.char_indices = dict((c, i) for i, c in enumerate(self.chars))
        self.indices_char = dict((i, c) for i, c in enumerate(self.chars))
    
    
_HELPTEXT = (
    'Options for transfering the color distribution from the source to the target image using the '
    'mean and standard deviations of the L*a*b* color space.\nThis implementation is (loosely) '
    'based on the 'Color Transfer between Images' paper by Reinhard et al., 2001. matching the '
    'histograms between the source and destination faces.'
)
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
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
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
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

    
    
_DEFAULTS = {
    'method': {
        'default': 'unsharp_mask',
        'info': 'The type of sharpening to use:'
                '\n\t box: Fastest, but weakest method. Uses a box filter to assess edges.'
                '\n\t gaussian: Slower, but better than box. Uses a gaussian filter to assess '
                'edges.'
                '\n\t unsharp-mask: Slowest, but most tweakable. Uses the unsharp-mask method '
                'to assess edges.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['box', 'gaussian', 'unsharp_mask'],
        'gui_radio': True,
        'fixed': True,
    },
    'amount': {
        'default': 150,
        'info': 'Percentage that controls the magnitude of each overshoot (how much darker '
                'and how much lighter the edge borders become).\nThis can also be thought of '
                'as how much contrast is added at the edges. It does not affect the width of '
                'the edge rims.',
        'datatype': int,
        'rounding': 1,
        'min_max': (100, 500),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'radius': {
        'default': 0.3,
        'info': 'Affects the size of the edges to be enhanced or how wide the edge rims '
                'become, so a smaller radius enhances smaller-scale detail.\nRadius is set as '
                'a percentage of the final frame width and rounded to the nearest pixel. E.g '
                'for a 1280 width frame, a 0.6 percenatage will give a radius of 8px.\nHigher '
                'radius values can cause halos at the edges, a detectable faint light rim '
                'around objects. Fine detail needs a smaller radius. \nRadius and amount '
                'interact; reducing one allows more of the other.',
        'datatype': float,
        'rounding': 1,
        'min_max': (0.1, 5.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'threshold': {
        'default': 5.0,
        'info': '[unsharp_mask only] Controls the minimal brightness change that will be '
                'sharpened or how far apart adjacent tonal values have to be before the '
                'filter does anything.\nThis lack of action is important to prevent smooth '
                'areas from becoming speckled. The threshold setting can be used to sharpen '
                'more pronounced edges, while leaving subtler edges untouched. \nLow values '
                'should sharpen more because fewer areas are excluded. \nHigher threshold '
                'values exclude areas of lower contrast.',
        'datatype': float,
        'rounding': 1,
        'min_max': (1.0, 10.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
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
    
    
_DEFAULTS = {
    'coverage': {
        'default': 62.5,
        'info': 'How much of the extracted image to train on. Generally the model is optimized'
                '\nto the default value. Sensible values to use are:'
                '\n\t62.5%% spans from eyebrow to eyebrow.'
                '\n\t75.0%% spans from temple to temple.'
                '\n\t87.5%% spans from ear to ear.'
                '\n\t100.0%% is a mugshot.',
        'datatype': float,
        'rounding': 1,
        'min_max': (62.5, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        dynamodb = aws_stack.connect_to_resource('dynamodb')
    # create table with stream forwarding config
    aws_stack.create_dynamodb_table(TEST_TABLE_NAME, partition_key=PARTITION_KEY)
    table = dynamodb.Table(TEST_TABLE_NAME)
    
        def test_extract_path_params(self):
        params = apigateway_listener.extract_path_params('/foo/bar', '/foo/{param1}')
        self.assertEqual(params, {'param1': 'bar'})
    
    TEST_STREAM_NAME = 'firehose_test_' + short_uid()
TEST_TAG_1 = {'Key': 'MyTag', 'Value': 'TestValue'}
TEST_TAG_2 = {'Key': 'AnotherTag', 'Value': 'AnotherValue'}
TEST_TAGS = [TEST_TAG_1, TEST_TAG_2]
    
            # create state machine
        role_arn = aws_stack.role_arn('sfn_role')
        definition = clone(STATE_MACHINE_DEF)
        lambda_arn_1 = aws_stack.lambda_function_arn(TEST_LAMBDA_NAME_1)
        lambda_arn_2 = aws_stack.lambda_function_arn(TEST_LAMBDA_NAME_2)
        definition['States']['step1']['Resource'] = lambda_arn_1
        definition['States']['step2']['Resource'] = lambda_arn_2
        definition = json.dumps(definition)
        result = self.sfn_client.create_state_machine(
            name=STATE_MACHINE_NAME, definition=definition, roleArn=role_arn)
    
    
def as_tuple(ireq):
    '''
    Pulls out the (name: str, version:str, extras:(str)) tuple from the pinned InstallRequirement.
    '''
    if not is_pinned_requirement(ireq):
        raise TypeError('Expected a pinned InstallRequirement, got {}'.format(ireq))
    
    from cerberus.validator import DocumentError, Validator
from cerberus.schema import rules_set_registry, schema_registry, SchemaError
from cerberus.utils import TypeDefinition
    
        def _check_with_bulk_schema(self, field, value):
        # resolve schema registry reference
        if isinstance(value, _str_type):
            if value in self.known_rules_set_refs:
                return
            else:
                self.known_rules_set_refs.add(value)
            definition = self.target_validator.rules_set_registry.get(value)
            if definition is None:
                self._error(field, 'Rules set definition %s not found.' % value)
                return
            else:
                value = definition