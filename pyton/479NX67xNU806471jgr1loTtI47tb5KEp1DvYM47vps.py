
        
        
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
    
def test_get_close_db(app):
    with app.app_context():
        db = get_db()
        assert db is get_db()
    
    from functools import partial
from werkzeug.local import LocalStack, LocalProxy
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        if 'json' in kwargs:
        assert 'data' not in kwargs, (
            'Client cannot provide both 'json' and 'data'.'
        )
    
    
class QuadraticProbing(HashTable):
    '''
        Basic Hash Table example with open addressing using Quadratic Probing 
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
        for i in range(1, n+1):
        dp[i][0] = True
    
            if self.depth == 1:
            self.prediction = np.mean(y)
            return
    
    #Root Mean Square Logarithmic Error
def rmsle(predict, actual):
    predict = np.array(predict)
    actual = np.array(actual)
    
    
def b_expo_mod(a, b, c):
    res = 1
    while b > 0:
        if b&1:
            res = ((res%c) * (a%c)) % c
    
        return res
    
    def getItemAtIndexZero(x):
    return x[0]
    
    #A Python script to generate a single PDF document with all the tldr pages. It works by generating 
#intermediate HTML files from existing md files using Python-markdown, applying desired formatting 
#through CSS, and finally rendering them as PDF. There is no LaTeX dependency for generating the PDF.
    
        :param img: A list of images (each as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param batch_size: How many images to include in each GPU processing batch.
    :return: A list of tuples of found face locations in css (top, right, bottom, left) order
    '''
    def convert_cnn_detections_to_css(detections):
        return [_trim_css_to_bounds(_rect_to_css(face.rect), images[0].shape) for face in detections]
    
    
def test_image(image_to_check, model):
    unknown_image = face_recognition.load_image_file(image_to_check)
    face_locations = face_recognition.face_locations(unknown_image, number_of_times_to_upsample=0, model=model)
    
            print('I see someone named {}!'.format(name))

    
    # Find all the faces and face encodings in the unknown image
face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)
    
        def test_partial_face_locations(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama_partial_face.jpg'))
        detected_faces = api.face_locations(img)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]
    
            file = request.files['file']