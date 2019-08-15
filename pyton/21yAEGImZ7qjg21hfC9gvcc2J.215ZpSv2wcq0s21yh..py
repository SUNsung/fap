
        
            def __init__(self, template_categories_to_budget_map):
        self.categories_to_budget_map = template_categories_to_budget_map
    
        @pytest.mark.parametrize('script, result', [
        ('le cat', ['ls cat', 'diff x', u'café ô']),
        ('diff x', ['ls cat', u'café ô']),
        ('fuck', ['ls cat', 'diff x', u'café ô']),
        (u'cafe ô', ['ls cat', 'diff x', u'café ô']),
    ])
    def test_get_valid_history_without_current(self, script, result):
        command = Command(script, '')
        assert get_valid_history_without_current(command) == result

    
    
def match(command):
    return (command.script_parts
            and (command.script_parts[0] in ('pacman', 'yay', 'yaourt')
                 or command.script_parts[0:2] == ['sudo', 'pacman'])
            and 'error: target not found:' in command.output)
    
        def test_how_to_configure_when_config_not_found(self, shell,
                                                    config_exists):
        config_exists.return_value = False
        assert not shell.how_to_configure().can_configure_automatically
    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['fish', '--version'], stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').split()[-1]
    
        def _expand_aliases(self, command_script):
        aliases = self.get_aliases()
        binary = command_script.split(' ')[0]
        if binary in aliases:
            return command_script.replace(binary, aliases[binary], 1)
        else:
            return command_script
    
        def app_alias(self, alias_name):
        return ('alias {0} 'setenv TF_SHELL tcsh && setenv TF_ALIAS {0} && '
                'set fucked_cmd=`history -h 2 | head -n 1` && '
                'eval `thefuck ${{fucked_cmd}}`'').format(alias_name)
    
    
class Zsh(Generic):
    friendly_name = 'ZSH'
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, output', [
    ('vom file.py', 'vom: not found'),
    ('fucck', 'fucck: not found'),
    ('puthon', ''puthon' is not recognized as an internal or external command'),
    ('got commit', 'got: command not found')])
def test_match(mocker, script, output):
    mocker.patch('thefuck.rules.no_command.which', return_value=None)
    
    
@pytest.mark.parametrize('script, pyenv_cmd, result', [
    ('pyenv globe', 'globe', 'pyenv global'),
    ('pyenv intall 3.8.0', 'intall', 'pyenv install 3.8.0'),
    ('pyenv list', 'list', 'pyenv install --list'),
    ('pyenv remove 3.8.0', 'remove', 'pyenv uninstall 3.8.0'),
])
def test_get_new_command(script, pyenv_cmd, output, result):
    assert result in get_new_command(Command(script, output))

    
    The most similar choice to 'lis' is:
    list
'''
    
        def test_ignore_stdin_cannot_prompt_password(self, httpbin):
        r = http('--ignore-stdin', '--auth=no-password', httpbin.url + '/get',
                 error_exit_ok=True)
        assert r.exit_status == ExitStatus.ERROR
        assert 'because --ignore-stdin' in r.stderr
    
    
class TestDownloadUtils:
    
    
if __name__ == '__main__':
    main()

    
        def iter_body(self, chunk_size=1):
        return self._orig.iter_content(chunk_size=chunk_size)
    
        def format_body(self, content, mime):
        if is_valid_mime(mime):
            for p in self.enabled_plugins:
                content = p.format_body(content, mime)
        return content

    
            '''
        raise NotImplementedError()
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
            if self.is_gui:
            return None
        if os.name == 'nt':
            msvcrt.getch()  # skip 0xE0
            char = msvcrt.getch()
            vals = [72, 77, 80, 75]
        else:
            char = sys.stdin.read(3)[2]
            vals = [65, 67, 66, 68]
    
    
def popup_config(config, root):
    ''' Close any open popup and open requested popup '''
    if POPUP:
        p_key = list(POPUP.keys())[0]
        logger.debug('Closing open popup: '%s'', p_key)
        POPUP[p_key].destroy()
        del POPUP[p_key]
    window = ConfigurePlugins(config, root)
    POPUP[config[0]] = window
    
        # get gradients with respect to current boundary + original x's
    copied_ys = [info._transformed_ops[y.op]._outputs[0] for y in ys]
    boundary = list(checkpoints_disconnected.values())
    dv = tf_gradients(ys=copied_ys, xs=boundary+xs, grad_ys=grad_ys, **kwargs)
    debug_print('Got gradients {}'.format(dv))
    debug_print('for %s', copied_ys)
    debug_print('with respect to {}'.format(boundary+xs))
    
        def schedule(self):
        ''' Show the tooltip after wait period '''
        self.unschedule()
        self.ident = self.widget.after(self.waittime, self.show)
    
    
class facehull(Mask):  # pylint: disable=invalid-name
    ''' Basic face hull mask '''
    def build_mask(self):
        mask = np.zeros(self.face.shape[0:2] + (1, ), dtype=np.float32)
        hull = cv2.convexHull(  # pylint: disable=no-member
            np.array(self.landmarks).reshape((-1, 2)))
        cv2.fillConvexPoly(mask, hull, 255.0, lineType=cv2.LINE_AA)  # pylint: disable=no-member
        return mask

    
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
    
        def process(self, detected_face, predicted_mask=None):
        ''' Return mask and perform processing '''
        mask = self.get_mask(detected_face, predicted_mask)
        raw_mask = mask.copy()
        if not self.skip and self.do_erode:
            mask = self.erode(mask)
        if not self.skip and self.do_blend:
            mask = self.blend(mask)
        raw_mask = np.expand_dims(raw_mask, axis=-1) if raw_mask.ndim != 3 else raw_mask
        mask = np.expand_dims(mask, axis=-1) if mask.ndim != 3 else mask
        logger.trace('mask shape: %s, raw_mask shape: %s', mask.shape, raw_mask.shape)
        return mask, raw_mask
    
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
    
        @abc.abstractmethod
    def contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
    *Examples in Python ecosystem:
- Python's ast.NodeVisitor: https://github.com/python/cpython/blob/master/Lib/ast.py#L250
which is then being used e.g. in tools like `pyflakes`.
- `Black` formatter tool implements it's own: https://github.com/ambv/black/blob/master/black.py#L718
'''
    
    *TL;DR
Provides singleton-like behavior sharing state between instances.
'''
    
    *TL;DR
Decouples the creation of a complex object and its representation.
'''
    
        def clone(self, **attrs):
        '''Clone a prototype and update inner attributes dictionary'''
        # Python in Practice, Mark Summerfield
        obj = self.__class__()
        obj.__dict__.update(attrs)
        return obj
    
        def get_product_list(self):
        print('PRODUCT LIST:')
        for product in self.business_logic.product_list():
            print(product)
        print('')
    
    '''
*What is this pattern about?
The Adapter pattern provides a different interface for a class. We can
think about it as a cable adapter that allows you to charge a phone
somewhere that has outlets in a different shape. Following this idea,
the Adapter pattern is useful to integrate classes that couldn't be
integrated due to their incompatible interfaces.
    
        def render(self):
        return self._text