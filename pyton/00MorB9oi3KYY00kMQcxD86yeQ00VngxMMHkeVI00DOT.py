
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
            def getContext(self, hostname=None, port=None):
            ctx = ClientContextFactory.getContext(self)
            # Enable all workarounds to SSL bugs as documented by
            # https://www.openssl.org/docs/manmaster/man3/SSL_CTX_set_options.html
            ctx.set_options(SSL.OP_ALL)
            return ctx

    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
    # For 'manual' documents, if this is true, then toplevel headings
# are parts, not chapters.
#latex_use_parts = False
    
    # See how far apart the test image is from the known faces
face_distances = face_recognition.face_distance(known_encodings, image_to_test_encoding)
    
    
def _raw_face_locations(img, number_of_times_to_upsample=1, model='hog'):
    '''
    Returns an array of bounding boxes of human faces in a image
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]