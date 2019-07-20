
        
        bp = Blueprint('blog', __name__)
    
        auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
            app.use_x_sendfile = True
    
            js = js.replace('\n', ' ')
        f1 = match1(js, r'\.set\(\w+\.sp,encodeURIComponent\(([$\w]+)') or \
            match1(js, r'\.set\(\w+\.sp,\(0,window\.encodeURIComponent\)\(([$\w]+)') or \
            match1(js, r'\.set\(\w+\.sp,([$\w]+)\(\w+\.s\)\)') or \
            match1(js, r''signature',([$\w]+)\(\w+\.\w+\)')
        f1def = match1(js, r'function %s(\(\w+\)\{[^\{]+\})' % re.escape(f1)) or \
                match1(js, r'\W%s=function(\(\w+\)\{[^\{]+\})' % re.escape(f1))
        f1def = re.sub(r'([$\w]+\.)([$\w]+\(\w+,\d+\))', r'\2', f1def)
        f1def = 'function main_%s%s' % (f1, f1def)  # prefix to avoid potential namespace conflict
        code = tr_js(f1def)
        f2s = set(re.findall(r'([$\w]+)\(\w+,\d+\)', f1def))
        for f2 in f2s:
            f2e = re.escape(f2)
            f2def = re.search(r'[^$\w]%s:function\((\w+,\w+)\)(\{[^\{\}]+\})' % f2e, js)
            if f2def:
                f2def = 'function {}({}){}'.format(f2e, f2def.group(1), f2def.group(2))
            else:
                f2def = re.search(r'[^$\w]%s:function\((\w+)\)(\{[^\{\}]+\})' % f2e, js)
                f2def = 'function {}({},b){}'.format(f2e, f2def.group(1), f2def.group(2))
            f2 = re.sub(r'(as|if|in|is|or)', r'_\1', f2)
            f2 = re.sub(r'\$', '_dollar', f2)
            code = code + 'global %s\n' % f2 + tr_js(f2def)
    }
    }
    
        if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
    site_info = 'CKPlayer General'
download = ckplayer_download
download_playlist = playlist_not_supported('ckplayer')

    
            if not platform_config:
            continue
        elif not isinstance(platform_config, list):
            platform_config = [platform_config]
    
        # API documentation at http://weatherlution.com/bloomsky-api/
    API_URL = 'http://api.bloomsky.com/api/skydata'
    
        cur_state = service.add_characteristic('temperature.current')
    cur_state.value = 0
    
        hass.bus.async_fire('test_event', {'some_attr': 'some_value',
                                       'another': 'value'})
    await hass.async_block_till_done()
    assert 1 == len(calls)
    
        def set_geometry(self, root):
        ''' Set pop-up geometry '''
        scaling_factor = get_config().scaling_factor
        pos_x = root.winfo_x() + 80
        pos_y = root.winfo_y() + 80
        width = int(720 * scaling_factor)
        height = int(400 * scaling_factor)
        logger.debug('Pop up Geometry: %sx%s, %s+%s', width, height, pos_x, pos_y)
        self.geometry('{}x{}+{}+{}'.format(width, height, pos_x, pos_y))
    
    
_DEFAULTS = {
    'clip': {
        'default': True,
        'info': 'Should components of L*a*b* image be scaled by np.clip before converting '
                'back to BGR color space?\nIf False then components will be min-max scaled '
                'appropriately.\nClipping will keep target image brightness truer to the '
                'input.\nScaling will adjust image brightness to avoid washed out portions in '
                'the resulting color transfer that can be caused by clipping.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'preserve_paper': {
        'default': True,
        'info': 'Should color transfer strictly follow methodology layed out in original '
                'paper?\nThe method does not always produce aesthetically pleasing results.\n'
                'If False then L*a*b* components will be scaled using the reciprocal of the '
                'scaling factor proposed in the paper. This method seems to produce more '
                'consistently aesthetically pleasing results.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
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
    
        def get_mask(self):
        ''' The box for every face will be identical, so set the mask just once
            As gaussian blur technically blurs both sides of the mask, reduce the mask ratio by
            half to give a more expected box '''
        logger.debug('Building box mask')
        mask_ratio = self.config['distance'] / 200
        facesize = self.dummy.shape[0]
        erode = slice(round(facesize * mask_ratio), -round(facesize * mask_ratio))
        mask = self.dummy[:, :, -1]
        mask[erode, erode] = 1.0
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
    
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
