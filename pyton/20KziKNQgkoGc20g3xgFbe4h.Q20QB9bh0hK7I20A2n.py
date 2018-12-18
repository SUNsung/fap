
        
        
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
        auth.login()
    # current user can't modify other user's post
    assert client.post('/1/update').status_code == 403
    assert client.post('/1/delete').status_code == 403
    # current user doesn't see edit link
    assert b'href='/1/update'' not in client.get('/').data
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
    
class PassDict(JSONTag):
    __slots__ = ()
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
    def handlePoint(point):
    print('<li>%s</li>' % getText(point.childNodes))
    
            print('Ordered results using pool.map() --- will block till complete:')
        for x in pool.map(calculatestar, TASKS):
            print('\t', x)
        print()
    
    setup_end_to_end = '''
import face_recognition
    
    # Load some images to compare against
known_obama_image = face_recognition.load_image_file('obama.jpg')
known_biden_image = face_recognition.load_image_file('biden.jpg')
    
    
def print_result(filename, name, distance, show_distance=False):
    if show_distance:
        print('{},{},{}'.format(filename, name, distance))
    else:
        print('{},{}'.format(filename, name))
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)
    
    app = Flask(__name__)