
        
            def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)
    
        def test_perform2(self):
        # Avoid load module
        self.sni.configurator.parser.modules.add('ssl_module')
        self.sni.configurator.parser.modules.add('socache_shmcb_module')
        acme_responses = []
        for achall in self.achalls:
            self.sni.add_chall(achall)
            acme_responses.append(achall.response(self.auth_key))
    
        def __hash__(self):
        try:
            return self._hash
        except AttributeError:
            self._hash = hash(tuple(self._cparts))
            return self._hash
    
        def test_version(self):
        version = ('Python %d.%d' % sys.version_info[:2]).encode('ascii')
        for switch in '-V', '--version', '-VV':
            rc, out, err = assert_python_ok(switch)
            self.assertFalse(err.startswith(version))
            self.assertTrue(out.startswith(version))
    
        @support.refcount_test
    def test_refleaks_in___init__(self):
        gettotalrefcount = support.get_attribute(sys, 'gettotalrefcount')
        bzd = BZ2Decompressor()
        refs_before = gettotalrefcount()
        for i in range(100):
            bzd.__init__()
        self.assertAlmostEqual(gettotalrefcount() - refs_before, 0, delta=10)
    
            results = [pool.apply_async(calculate, t) for t in TASKS]
        imap_it = pool.imap(calculatestar, TASKS)
        imap_unordered_it = pool.imap_unordered(calculatestar, TASKS)
    
    from ..common import *
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
            html = get_content(api_url)
        self.tree = ET.ElementTree(ET.fromstring(html))
    
    
def get_loop_file_path(title, output_dir):
    return os.path.join(output_dir, get_output_filename([], title, 'txt', None, False))
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    yinyuetai_embed_patterns = [ 'player\.yinyuetai\.com/video/swf/(\d+)' ]
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
    # Load some images to compare against
known_obama_image = face_recognition.load_image_file('obama.jpg')
known_biden_image = face_recognition.load_image_file('biden.jpg')
    
        # Display the resulting image
    pil_image.show()
    
        # If no valid image file was uploaded, show the file upload form:
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
    
def _trim_css_to_bounds(css, image_shape):
    '''
    Make sure a tuple in (top, right, bottom, left) order is within the bounds of the image.
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
                frame_number = frame_count - 128 + frame_number_in_batch
            print('I found {} face(s) in frame #{}.'.format(number_of_faces_in_frame, frame_number))