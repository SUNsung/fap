
        
            def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
    
class AugeasConfiguratorTest(util.ApacheTest):
    '''Test for Augeas Configurator base class.'''
    
        def setUp(self):  # pylint: disable=arguments-differ
        super(ComplexParserTest, self).setUp(
            'complex_parsing', 'complex_parsing')
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
        config_path = config_util.ensure_config_exists(config_dir)
    print('Configuration file:', config_path)
    return 0

    
    
@asyncio.coroutine
def test_if_fires_on_hass_shutdown(hass):
    '''Test the firing when HASS starts.'''
    calls = async_mock_service(hass, 'test', 'automation')
    hass.state = CoreState.not_running
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(small_frame, model='cnn')
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
    
def _rect_to_css(rect):
    '''
    Convert a dlib 'rect' object to a plain tuple in (top, right, bottom, left) order
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    from setuptools import setup
    
        # 讲识别结果以json键值对的数据结构输出
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)