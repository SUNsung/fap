
        
                if error is None:
            # store the user id in a new session and return to the index
            session.clear()
            session['user_id'] = user['id']
            return redirect(url_for('index'))
    
        :param id: id of post to get
    :param check_author: require the current user to be the author
    :return: the post with author information
    :raise 404: if a post with the given id doesn't exist
    :raise 403: if the current user isn't the author
    '''
    post = get_db().execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' WHERE p.id = ?',
        (id,)
    ).fetchone()
    
        # create the database and load test data
    with app.app_context():
        init_db()
        get_db().executescript(_data_sql)
    
    
def test_get_close_db(app):
    with app.app_context():
        db = get_db()
        assert db is get_db()
    
            builder = make_test_environ_builder(self, *args, **kwargs)
    
        def from_object(self, obj):
        '''Updates the values from the given object.  An object can be of one
        of the following two types:
    
            # remembers the exception for pop if there is one in case the context
        # preservation kicks in.
        self._preserved_exc = None
    
    from functools import partial
from werkzeug.local import LocalStack, LocalProxy
    
    
class TagBytes(JSONTag):
    __slots__ = ()
    key = ' b'
    
        return _set
    
    python_2 = (u'thefuck/python2-bash',
            u'FROM python:2',
            u'sh')
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
            Did you mean `build`?
'''
    
    # the data, split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
    
    legacy_cropping3d_support = generate_legacy_interface(
    allowed_positional_args=['cropping'],
    conversions=[('dim_ordering', 'data_format')],
    value_conversions={'dim_ordering': {'tf': 'channels_last',
                                        'th': 'channels_first',
                                        'default': None}})
    
        def print_row(fields, positions):
        line = ''
        for i in range(len(fields)):
            if i > 0:
                line = line[:-1] + ' '
            line += str(fields[i])
            line = line[:positions[i]]
            line += ' ' * (positions[i] - len(line))
        print_fn(line)
    
    
def test_imdb():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = imdb.load_data()
        (x_train, y_train), (x_test, y_test) = imdb.load_data(maxlen=40)
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        word_index = imdb.get_word_index()
        assert isinstance(word_index, dict)
    
    
@keras_test
def test_softmax():
    for axis in [1, -1]:
        layer_test(layers.Softmax, kwargs={'axis': axis},
                   input_shape=(2, 3, 4))
    
    import urllib
    
    # I don't know how to call the player directly so I just put it here
# just in case anyone touchs it -- Beining@Aug.24.2016
#download = site.download_by_url
#download_playlist = site.download_by_url
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    
site_info = 'fantasy.tv'
download = fantasy_download
download_playlist = playlist_not_supported('fantasy.tv')

    
    pattern_url_photoset = r'https?://www\.flickr\.com/photos/.+/(?:(?:sets)|(?:albums))?/([^/]+)'
pattern_url_photostream = r'https?://www\.flickr\.com/photos/([^/]+)(?:/|(?:/page))?$'
pattern_url_single_photo = r'https?://www\.flickr\.com/photos/[^/]+/(\d+)'
pattern_url_gallery = r'https?://www\.flickr\.com/photos/[^/]+/galleries/(\d+)'
pattern_url_group = r'https?://www\.flickr\.com/groups/([^/]+)'
pattern_url_favorite = r'https?://www\.flickr\.com/photos/([^/]+)/favorites'
    
        failures = []
    while point is not None:
        if point.name:
            if re.search('h[1-2]', point.name):
                if point.name == 'h1':
                    h1_directory = os.path.join(output_directory, clean_text(point.text))
                    current_directory = h1_directory
                elif point.name == 'h2':
                    current_directory = os.path.join(h1_directory, clean_text(point.text))  
                if not os.path.exists(current_directory):
                    os.makedirs(current_directory)
                print_title(point.text)
    
        def setTM(self, tm):
        self._tm = tm
    
    *Where is the pattern used practically?
    
    ### OUTPUT ###
# Name: Jhon    Occupation: Coder
# Before we access `relatives`:
# {'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Jhon's relatives: Many relatives.
# After we've accessed `relatives`:
# {'relatives': 'Many relatives.', 'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# {'_lazy__parents': 'Father and mother', 'relatives': 'Many relatives.', 'call_count2': 1, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# 1

    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def find_all_path(self, start, end, path=None):
        path = path or []
        path.append(start)
        if start == end:
            return [path]
        paths = []
        for node in self.graph.get(start, []):
            if node not in path:
                newpaths = self.find_all_path(node, end, path[:])
                paths.extend(newpaths)
        return paths
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    
def process_images_in_process_pool(images_to_check, known_names, known_face_encodings, number_of_cpus, tolerance, show_distance):
    if number_of_cpus == -1:
        processes = None
    else:
        processes = number_of_cpus
    
            self.assertEqual(len(encodings), 1)
        self.assertEqual(len(encodings[0]), 128)
    
    # Show the picture
pil_image.show()
