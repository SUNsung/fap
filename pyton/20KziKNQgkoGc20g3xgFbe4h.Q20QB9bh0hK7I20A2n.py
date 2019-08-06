
        
                self._request_webpage(
            HEADRequest(embed_url), video_id, headers={'Referer': url})
        video_id, sig, _, access_token = self._get_cookies(embed_url)['video_ext'].value.split('%3A')
        item = self._download_json(
            'https://api.vk.com/method/video.get', video_id,
            headers={'User-Agent': 'okhttp/3.4.1'}, query={
                'access_token': access_token,
                'sig': sig,
                'v': 5.44,
                'videos': video_id,
            })['response']['items'][0]
        title = item['title']
    
    
class RedBullTVRrnContentIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?redbull(?:\.tv|\.com(?:/[^/]+)?(?:/tv)?)/(?:video|live)/rrn:content:[^:]+:(?P<id>[\da-f]{8}-[\da-f]{4}-[\da-f]{4}-[\da-f]{4}-[\da-f]{12})'
    _TESTS = [{
        'url': 'https://www.redbull.com/int-en/tv/video/rrn:content:live-videos:e3e6feb4-e95f-50b7-962a-c70f8fd13c73/mens-dh-finals-fort-william',
        'only_matching': True,
    }, {
        'url': 'https://www.redbull.com/int-en/tv/video/rrn:content:videos:a36a0f36-ff1b-5db8-a69d-ee11a14bf48b/tn-ts-style?playlist=rrn:content:event-profiles:83f05926-5de8-5389-b5e4-9bb312d715e8:extras',
        'only_matching': True,
    }]
    
    r = openssl_encode('aes-128-cbc', key, iv)
print('aes_cbc_decrypt')
print(repr(r))
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    
from youtube_dl import YoutubeDL
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
        def checkbutton_to_checkframe(self, control, control_title, var, helptext):
        ''' Add checkbuttons to the checkbutton frame '''
        logger.debug('Add control checkframe: '%s'', control_title)
        leftframe = self.chkbtns.children['leftFrame']
        rightframe = self.chkbtns.children['rightFrame']
        chkbtn_count = len({**leftframe.children, **rightframe.children})
    
            new_config = ConfigParser(allow_no_value=True)
        for section, items in self.config.defaults.items():
            logger.debug('Adding section: '%s')', section)
            self.config.insert_config_section(section, items['helptext'], config=new_config)
            for item, def_opt in items.items():
                if item == 'helptext':
                    continue
                new_opt = options[section][item]
                logger.debug('Adding option: (item: '%s', default: '%s' new: '%s'',
                             item, def_opt, new_opt)
                helptext = def_opt['helptext']
                helptext = self.config.format_help(helptext, is_section=False)
                new_config.set(section, helptext)
                new_config.set(section, item, str(new_opt['selected'].get()))
        self.config.config = new_config
        self.config.save_config()
        print('Saved config: '{}''.format(self.config.configfile))
        self.destroy()
        logger.debug('Saved config')
    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            retval = get_config(section, configfile)
        else:
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
    
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

    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
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
    
        def check_transparency_format(self):
        ''' Make sure that the output format is correct if draw_transparent is selected '''
        transparent = self.config['draw_transparent']
        if not transparent or (transparent and self.config['format'] == 'png'):
            return
        logger.warning('Draw Transparent selected, but the requested format does not support '
                       'transparency. Changing output format to 'png'')
        self.config['format'] = 'png'
    
        def pre_encode(self, image):
        logger.trace('Pre-encoding image')
        fmt = self.format_dict.get(self.config['format'], None)
        fmt = self.config['format'].upper() if fmt is None else fmt
        encoded = BytesIO()
        rgb = [2, 1, 0]
        if image.shape[2] == 4:
            rgb.append(3)
        out_image = Image.fromarray(image[..., rgb])
        out_image.save(encoded, fmt, **self.kwargs)
        encoded.seek(0)
        return encoded
    
    
_DEFAULTS = {
    'format': {
        'default': 'png',
        'info': 'Image format to use:'
                '\n\t bmp: Windows bitmap'
                '\n\t gif: Graphics Interchange Format (NB: Not animated)'
                '\n\t jpg: JPEG format'
                '\n\t jp2: JPEG 2000 format'
                '\n\t png: Portable Network Graphics'
                '\n\t ppm: Portable Pixmap Format'
                '\n\t tif: Tag Image File Format',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['bmp', 'gif', 'jpg', 'jp2', 'png', 'ppm', 'tif'],
        'gui_radio': True,
        'fixed': True,
    },
    'draw_transparent': {
        'default': False,
        'info': 'Place the swapped face on a transparent layer rather than the original frame.'
                '\nNB: This is only compatible with images saved in png or tif format. If an '
                'incompatible format is selected then the image will be saved as a png.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'optimize': {
        'default': False,
        'info': '[gif, jpg and png only] If enabled, indicates that the encoder should make '
                'an extra pass over the image in order to select optimal encoder settings.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'gif_interlace': {
        'default': True,
        'info': '[gif only] Set whether to save the gif as interlaced or not.',
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
                'compression, 0 gives no compression at all. When optimize option is set to '
                'True this has no effect (it is set to 9 regardless of a value passed).',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 9),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'tif_compression': {
        'default': 'tiff_deflate',
        'info': '[tif only] The desired compression method for the file.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'none',
            'tiff_ccitt',
            'group3',
            'group4',
            'tiff_jpeg',
            'tiff_adobe_deflate',
            'tiff_thunderscan',
            'tiff_deflate',
            'tiff_sgilog',
            'tiff_sgilog24',
            'tiff_raw_16',
        ],
        'gui_radio': False,
        'fixed': True,
    },
}

    
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
    
    
_DEFAULTS = {
    'confidence': {
        'default': 50,
        'info': 'The confidence level at which the detector has succesfully found a face.\n'
                'Higher levels will be more discriminating, lower levels will have more false '
                'positives.',
        'datatype': int,
        'rounding': 5,
        'min_max': (25, 100),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    }
}

    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
    
def _progress_bar(count, total):
    '''Report download progress.
    Credit:
    https://stackoverflow.com/questions/3173320/text-progress-bar-in-the-console/27871113
    '''
    bar_len = 60
    filled_len = int(round(bar_len * count / float(total)))
    
        def test_gpu_throws_on_non_1D_arrays(self):
        X = np.zeros((2, 2), dtype=np.float32)
        with self.assertRaisesRegexp(RuntimeError, 'X\.ndim\(\) == 1'):
            self._run_zero_even_op_gpu(X)
    
    
def im_proposals(model, im):
    '''Generate RPN proposals on a single image.'''
    inputs = {}
    inputs['data'], im_scale, inputs['im_info'] = \
        blob_utils.get_image_blob(im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE)
    for k, v in inputs.items():
        workspace.FeedBlob(core.ScopedName(k), v.astype(np.float32, copy=False))
    workspace.RunNet(model.net.Proto().name)
    
    from detectron.core.config import cfg
from detectron.utils.collections import AttrDict
import detectron.core.config as core_config
import detectron.utils.env as envu
import detectron.utils.logging as logging_utils
    
        If you use CUDA_VISIBLE_DEVICES to target specific GPUs, Caffe2 will
    automatically map logical GPU ids (starting from 0) to the physical GPUs
    specified in CUDA_VISIBLE_DEVICES.
    '''
    logger.info('Loading weights from: {}'.format(weights_file))
    ws_blobs = workspace.Blobs()
    src_blobs = load_object(weights_file)
    
    '''Perform inference on a single image or all images with a certain extension
(e.g., .jpg) in a folder. Allows for using a combination of multiple models.
For example, one model may be used for RPN, another model for Fast R-CNN style
box detection, yet another model to predict masks, and yet another model to
predict keypoints.
'''
    
        # Compute anchor labels:
    # label=1 is positive, 0 is negative, -1 is don't care (ignore)
    labels = np.empty((num_inside, ), dtype=np.int32)
    labels.fill(-1)
    if len(gt_boxes) > 0:
        # Compute overlaps between the anchors and the gt boxes overlaps
        anchor_by_gt_overlap = box_utils.bbox_overlaps(anchors, gt_boxes)
        # Map from anchor to gt box that has highest overlap
        anchor_to_gt_argmax = anchor_by_gt_overlap.argmax(axis=1)
        # For each anchor, amount of overlap with most overlapping gt box
        anchor_to_gt_max = anchor_by_gt_overlap[np.arange(num_inside),
                                                anchor_to_gt_argmax]
    
    
def coordinated_put(coordinator, queue, element):
    while not coordinator.should_stop():
        try:
            queue.put(element, block=True, timeout=1.0)
            return
        except Queue.Full:
            continue
    raise Exception('Coordinator stopped during put()')

    
        if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)