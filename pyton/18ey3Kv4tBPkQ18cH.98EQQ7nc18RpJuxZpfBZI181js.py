
        
        # For every line, fix the respective file
for line in output_lines:
    match = re.match(line_re, line)
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
            # prepare spidercls
        self.set_spidercls(url, opts)
    
        def long_desc(self):
        return 'Run the spider defined in the given file'
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
    
class CheckNetwork(object):
    def __init__(self, type='IPv4'):
        self.type = type
        self.urls = []
        self._checking_lock = threading.Lock()
        self._checking_num = 0
        self.network_stat = 'unknown'
        self.last_check_time = 0
        self.continue_fail_count = 0
    
    
class SniManager(object):
    plus = ['-', '', '.']
    end = ['com', 'net', 'ml', 'org', 'us']
    
    
    
            Using setter/getter methods is deprecated. Use o.type instead.'''
    
    # Additional templates that should be rendered to pages, maps page names
# to template names.
#html_additional_pages = {}
    
    TEST_IMAGES = [
    'obama-240p.jpg',
    'obama-480p.jpg',
    'obama-720p.jpg',
    'obama-1080p.jpg'
]
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    
def batch_face_locations(images, number_of_times_to_upsample=1, batch_size=128):
    '''
    Returns an 2d array of bounding boxes of human faces in a image using the cnn face detector
    If you are using a GPU, this can give you much faster results since the GPU
    can process batches of images at once. If you aren't using a GPU, you don't need this function.
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_frame = frame[:, :, ::-1]
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]