
        
        README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    PREFIX = r'''%YOUTUBE-DL(1)
    
    
defs = gettestcases()
    
        def setUp(self):
        if self._SKIP_SOCKS_TEST:
            return
    
            return '\r\n'.join(headers)
    
            if self.with_body:
            try:
                for chunk in self.iter_body():
                    yield chunk
                    if self.on_body_chunk_downloaded:
                        self.on_body_chunk_downloaded(chunk)
            except BinarySuppressedError as e:
                if self.with_headers:
                    yield b'\n'
                yield e.message
    
        if n == 1:
        return '1 B'
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
        def test_print_overridable_when_stdout_redirected(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=h', 'GET', httpbin.url + '/get', env=env)
        assert HTTP_OK in r

    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
    
class InvalidProxyURL(InvalidURL):
    '''The proxy URL provided is invalid.'''
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
            .. warning:: operation is O(n), not O(1).
        '''
        try:
            return self._find_no_duplicates(name, domain, path)
        except KeyError:
            return default
    
    from requests.help import info
    
            for items, fmt in items_fmt:
            itemsize = struct.calcsize(fmt)
            for shape, strides, offset in structure:
                strides = [v * itemsize for v in strides]
                offset *= itemsize
                for flags in ndflags:
    
            self.assertEqual(a.t(0), 'int')
        self.assertEqual(a.t(''), 'str')
        self.assertEqual(a.t(0.0), 'base')
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
    def calculatestar(args):
    return calculate(*args)
    
        if knn_clf is None and model_path is None:
        raise Exception('Must supply knn classifier either thourgh knn_clf or model_path')
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
        # Let's trace out each facial feature in the image with a line!
    for facial_feature in face_landmarks.keys():
        d.line(face_landmarks[facial_feature], width=5)
    
    import face_recognition
import picamera
import numpy as np
    
    Port of the Java example of Dependency Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
    '''
Lazily-evaluated property pattern in Python.
    
    
def main():
    ui = Ui()
    ui.get_product_list()
    ui.get_product_information('cheese')
    ui.get_product_information('eggs')
    ui.get_product_information('milk')
    ui.get_product_information('arepas')
    
    *References:
https://sourcemaking.com/design_patterns/decorator
    
        def test_subscriber_shall_be_attachable_to_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        cls.assertEqual(len(pro.subscribers), 0)
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
    
            self.assertEqual(noise, expected_noise)
