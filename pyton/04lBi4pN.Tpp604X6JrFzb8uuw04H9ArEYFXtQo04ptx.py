
        
            @classmethod
    def setUpClass(cls):
        support.requires('network')
        with support.transient_internet(cls.base_url):
            cls.parser = urllib.robotparser.RobotFileParser(cls.robots_txt)
            cls.parser.read()
    
                elif event == 'exception':
                if not isinstance(self.exc_info[1], self.expect[3]):
                    self.raise_not_expected(
                        'Wrong exception at expect_set item %d, got '%s'' %
                        (self.expect_set_no, self.exc_info))
    
            * Some platforms report ASCII as ANSI_X3.4-1968
        * Some platforms report ASCII as US-ASCII
        * Some platforms report UTF-8 instead of utf-8
        '''
        data = data.replace(b'ANSI_X3.4-1968', b'ascii')
        data = data.replace(b'US-ASCII', b'ascii')
        data = data.lower()
        return data
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
    def download_urls_sequential(urls, timeout=60):
    url_to_content = {}
    for url in urls:
        try:
            url_to_content[url] = load_url(url, timeout=timeout)
        except:
            pass
    return url_to_content
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '2.1.3'
# The full version, including alpha/beta/rc tags.
release = '2.1.3'
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
        pil_image.show()

    
    # Initialize some variables
face_locations = []
face_encodings = []
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
            # Draw a label with a name below the face
        text_width, text_height = draw.textsize(name)
        draw.rectangle(((left, bottom - text_height - 10), (right, bottom)), fill=(0, 0, 255), outline=(0, 0, 255))
        draw.text((left + 6, bottom - text_height - 5), name, fill=(255, 255, 255, 255))