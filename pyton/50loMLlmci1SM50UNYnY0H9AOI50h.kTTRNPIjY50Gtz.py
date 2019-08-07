
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.DIRECTOR)
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def _hash_function(self, key):
        return key % self.size
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        pass
    
    CONTENT_TYPE_FORM_URLENCODED = 'application/x-www-form-urlencoded'
CONTENT_TYPE_MULTI_PART = 'multipart/form-data'
    
    packages = ['requests']
    
    try:
    import simplejson as json
except ImportError:
    import json
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
        def test_super_len_correctly_calculates_len_of_partially_read_file(self):
        '''Ensure that we handle partially consumed file like objects.'''
        s = StringIO.StringIO()
        s.write('foobarbogus')
        assert super_len(s) == 0
    
                return x_1, y_1
    
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
    
        def run(self, old_face, new_face, raw_mask):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing color adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(old_face, new_face, raw_mask)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed color adjustment')
        return new_face

    
    
class Mask(Adjustment):
    ''' Return the requested mask '''
    def __init__(self, mask_type, output_size, predicted_available, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.do_erode = self.config.get('erosion', 0) != 0
        self.do_blend = self.config.get('type', None) is not None
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
    
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

    
      for filter_type in iterkeys( config ):
    compiler = FILTER_COMPILERS.get( filter_type )
    
        poll_again = _HandlePollResponse( response, diagnostics_handler )
    if poll_again:
      self._SendRequest()
      return True
    
    
def HandlePollResponse_NoMessages_test():
  assert_that( _HandlePollResponse( True, None ), equal_to( True ) )
    
        def __repr__(self):
        with self._condition:
            if self._state == FINISHED:
                if self._exception:
                    return '<Future at %s state=%s raised %s>' % (
                        hex(id(self)),
                        _STATE_TO_DESCRIPTION_MAP[self._state],
                        self._exception.__class__.__name__)
                else:
                    return '<Future at %s state=%s returned %s>' % (
                        hex(id(self)),
                        _STATE_TO_DESCRIPTION_MAP[self._state],
                        self._result.__class__.__name__)
            return '<Future at %s state=%s>' % (
                    hex(id(self)),
                   _STATE_TO_DESCRIPTION_MAP[self._state])