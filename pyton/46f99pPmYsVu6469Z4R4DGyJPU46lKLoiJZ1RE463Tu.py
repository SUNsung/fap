
        
            if K.image_data_format() == 'channels_last':
        x_train = x_train.transpose(0, 2, 3, 1)
        x_test = x_test.transpose(0, 2, 3, 1)
    
        def print_row(fields, positions):
        line = ''
        for i in range(len(fields)):
            if i > 0:
                line = line[:-1] + ' '
            line += str(fields[i])
            line = line[:positions[i]]
            line += ' ' * (positions[i] - len(line))
        print_fn(line)
    
    
def test_boston_housing():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = boston_housing.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
    
        def predict_proba(self, x, batch_size=32, verbose=0):
        '''Generates class probability predictions for the input samples.
    
    from __future__ import print_function
import numpy as np
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
        process_this_frame = not process_this_frame
    
        for unknown_encoding in unknown_encodings:
        distances = face_recognition.face_distance(known_face_encodings, unknown_encoding)
        result = list(distances <= tolerance)
    
    # You can change this to any folder on your system
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg', 'gif'}
    
        def assert_failure(self, res, code=None):
        self.assertEqual(res.status, 200)
        body = res.body
        body = json.loads(body)
        self.assertTrue('json' in body)
        errors = body['json'].get('errors')
        self.assertTrue(code in [x[0] for x in errors])
        data = body['json'].get('data')
        self.assertFalse(bool(data))
    
    import mock
    
        def test_no_upgrade_gets(self):
        request.method = 'GET'
        self._setSessionCookie(days_old=60)
        upgrade_cookie_security()
        self.assertFalse(c.cookies[g.login_cookie].dirty)
    
        def test_invalid_function_prelude(self):
        testcase = u'*[foo=expression(alert(1))]{color:red;}'
        self.assertInvalid(testcase)
    
        def test_returning(self):
        request = MagicMock()
        context = MagicMock()
        request.cookies = {LOID_COOKIE: 'foo', LOID_CREATED_COOKIE: 'bar'}
        loid = LoId.load(request, context, create=False)
        self.assertEqual(loid.loid, 'foo')
        self.assertNotEqual(loid.created, 'bar')
        self.assertFalse(loid.new)
        self.assertTrue(loid.serializable)
        loid.save()
        self.assertFalse(bool(context.cookies.add.called))

    
    
class TestImgixResizer(RedditTestCase):
    def setUp(self):
        self.provider = ImgixImageResizingProvider()
        self.patch_g(
            imgix_domain='example.com',
            imgix_signing=False,
        )
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def test_tag_xmlns(self):
        self.assertFragmentRaises('<xml:div></xml:div>',
                                  SoupUnsupportedTagError)
        self.assertFragmentRaises('<div xmlns='http://zombo.com/foo'></div>',
                                  SoupError)
    
        def test_decrypt(self):
        from r2.lib.tracking import _decrypt
        decrypted = _decrypt(ENCRYPTED, SECRET)
        self.assertEquals(MESSAGE, decrypted)
