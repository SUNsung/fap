
        
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
    
    
class Writer(Output):
    ''' Images output writer using cv2 '''
    def __init__(self, output_folder, **kwargs):
        super().__init__(output_folder, **kwargs)
        self.extension = '.{}'.format(self.config['format'])
        self.check_transparency_format()
        self.args = self.get_save_args()
    
    from ._base import Output, logger
    
    
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
    
        - Originally written by vegaseat on 2014.09.09.
    
        @staticmethod
    def find_cosine_similiarity(source_face, test_face):
        ''' Find the cosine similarity between a source face and a test face '''
        var_a = np.matmul(np.transpose(source_face), test_face)
        var_b = np.sum(np.multiply(source_face, source_face))
        var_c = np.sum(np.multiply(test_face, test_face))
        return 1 - (var_a / (np.sqrt(var_b) * np.sqrt(var_c)))
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
        @gen_test
    def test_render_message(self):
        ws = yield self.ws_connect('/render')
        ws.write_message('hello')
        response = yield ws.read_message()
        self.assertEqual(response, '<b>hello</b>')
    
        def test_insertion_sort(self):
        insertion_sort = InsertionSort()
    
        def __repr__(self):
        return str(self.obj) + ': ' + str(self.key)