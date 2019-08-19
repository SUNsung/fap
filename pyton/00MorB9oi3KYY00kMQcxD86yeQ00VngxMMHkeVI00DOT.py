
        
                thumbnails = []
        for k, v in item.items():
            if k.startswith('photo_') and v:
                width = k.replace('photo_', '')
                thumbnails.append({
                    'id': width,
                    'url': v,
                    'width': int_or_none(width),
                })
    
            return {
            'id': video_id,
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'uploader': uploader,
            'formats': formats,
        }
    
        _TESTS = [{
        'url': 'http://www.southparkstudios.dk/full-episodes/s18e07-grounded-vindaloop',
        'info_dict': {
            'title': 'Grounded Vindaloop',
            'description': 'Butters is convinced he\'s living in a virtual reality.',
        },
        'playlist_mincount': 3,
    }, {
        'url': 'http://www.southparkstudios.dk/collections/2476/superhero-showdown/1',
        'only_matching': True,
    }, {
        'url': 'http://www.southparkstudios.nu/collections/2476/superhero-showdown/1',
        'only_matching': True,
    }]

    
        def _real_extract(self, url):
        item = self._parse_json(zlib.decompress(compat_b64decode(
            compat_urllib_parse_unquote(self._match_id(url))),
            -zlib.MAX_WBITS), None)['video']['items'][0]
        return self._extract_video_info(item['mpxRefId'], 'cbsnews')
    
        for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
        template = template.replace('@SITES@', textwrap.indent('\n'.join(ie_htmls), '\t'))
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    # -- Options for HTML output ----------------------------------------------
    
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
    
    
def get_config(plugin_name, configfile=None):
    ''' Return the config for the requested model '''
    return Config(plugin_name, configfile=configfile).config_dict
    
    
_DEFAULTS = {
    'container': {
        'default': 'mp4',
        'info': 'Video container to use.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['avi', 'flv', 'mkv', 'mov', 'mp4', 'mpeg', 'webm'],
        'gui_radio': True,
        'fixed': True,
    },
    'codec': {
        'default': 'libx264',
        'info': 'Video codec to use:'
                '\n\t libx264: H.264. A widely supported and commonly used codec.'
                '\n\t libx265: H.265 / HEVC video encoder application library.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['libx264', 'libx265'],
        'gui_radio': True,
        'fixed': True,
    },
    'crf': {
        'default': 23,
        'info': 'Constant Rate Factor:  0 is lossless and 51 is worst quality possible. A '
                'lower value generally leads to higher quality, and a subjectively sane range '
                'is 17-28. Consider 17 or 18 to be visually lossless or nearly so; it should '
                'look the same or nearly the same as the input but it isn't technically '
                'lossless.\nThe range is exponential, so increasing the CRF value +6 results '
                'in roughly half the bitrate / file size, while -6 leads to roughly twice the '
                'bitrate.',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 51),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'preset': {
        'default': 'medium',
        'info': 'A preset is a collection of options that will provide a certain encoding '
                'speed to compression ratio.\nA slower preset will provide better compression '
                '(compression is quality per filesize).\nUse the slowest preset that you have '
                'patience for.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'ultrafast',
            'superfast',
            'veryfast',
            'faster',
            'fast',
            'medium',
            'slow',
            'slower',
            'veryslow',
        ],
        'gui_radio': True,
        'fixed': True,
    },
    'tune': {
        'default': 'none',
        'info': 'Change settings based upon the specifics of your input:'
                '\n\t none: Don't perform any additional tuning.'
                '\n\t film: [H.264 only] Use for high quality movie content; lowers '
                'deblocking.'
                '\n\t animation: [H.264 only] Good for cartoons; uses higher deblocking and '
                'more reference frames.'
                '\n\t grain: Preserves the grain structure in old, grainy film material.'
                '\n\t stillimage: [H.264 only] Good for slideshow-like content.'
                '\n\t fastdecode: Allows faster decoding by disabling certain filters.'
                '\n\t zerolatency: Good for fast encoding and low-latency streaming.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'none',
            'film',
            'animation',
            'grain',
            'stillimage',
            'fastdecode',
            'zerolatency',
        ],
        'gui_radio': False,
        'fixed': True,
    },
    'profile': {
        'default': 'auto',
        'info': '[H.264 Only] Limit the output to a specific H.264 profile. Don't change this '
                'unless your target device only supports a certain profile.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['auto', 'baseline', 'main', 'high', 'high10', 'high422', 'high444'],
        'gui_radio': False,
        'fixed': True,
    },
    'level': {
        'default': 'auto',
        'info': '[H.264 Only] Set the encoder level, Don't change this unless your target '
                'device only supports a certain level.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'auto',
            '1',
            '1b',
            '1.1',
            '1.2',
            '1.3',
            '2',
            '2.1',
            '2.2',
            '3',
            '3.1',
            '3.2',
            '4',
            '4.1',
            '4.2',
            '5',
            '5.1',
            '5.2',
            '6',
            '6.1',
            '6.2',
        ],
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
    
    import sys
import inspect
    
    
class Professor(AbstractExpert):
    @property
    def is_eager_to_contribute(self):
        return True if self.blackboard.common_state['problems'] > 100 else False
    
    *TL;DR
Traverses a container and accesses the container's elements.
'''
    
    
class Order:
    def __init__(self, price, discount_strategy=None):
        self.price = price
        self.discount_strategy = discount_strategy
    
    
class Visitor(object):
    def visit(self, node, *args, **kwargs):
        meth = None
        for cls in node.__class__.__mro__:
            meth_name = 'visit_' + cls.__name__
            meth = getattr(self, meth_name, None)
            if meth:
                break
    
        def __str__(self):
        return self.state
    
    *Where can the pattern be used practically?
The Factory Method can be seen in the popular web framework Django:
http://django.wikispaces.asu.edu/*NEW*+Django+Design+Patterns For
example, in a contact form of a web page, the subject and the message
fields are created using the same form factory (CharField()), even
though they have different implementations according to their
purposes.
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects
    
        def get_product_list(self):
        print('PRODUCT LIST:')
        for product in self.business_logic.product_list():
            print(product)
        print('')
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
    
def main():
    '''
    >>> computer_facade = ComputerFacade()
    >>> computer_facade.start()
    Freezing processor.
    Loading from 0x00 data: 'Some data from sector 100 with size 1024'.
    Jumping to: 0x00
    Executing.
    '''