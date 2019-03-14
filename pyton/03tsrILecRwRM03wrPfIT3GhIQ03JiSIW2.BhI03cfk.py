
        
                if not title:
            error = 'Title is required.'
    
    
@click.command('init-db')
@with_appcontext
def init_db_command():
    '''Clear existing data and create new tables.'''
    init_db()
    click.echo('Initialized the database.')
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
        def check(self, value):
        return isinstance(value, list)
    
    
def create_logger(app):
    '''Get the ``'flask.app'`` logger and configure it if needed.
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
        with app.app_context():
        try:
            raise Exception('dummy')
        except Exception:
            pass
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
        print('Done!')
    if failures:
        print('Some downloads have failed:')
        for fail in failures:
            print('> ' + fail)

    
        # Determine how many neighbors to use for weighting in the KNN classifier
    if n_neighbors is None:
        n_neighbors = int(round(math.sqrt(len(X))))
        if verbose:
            print('Chose n_neighbors automatically:', n_neighbors)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()
    
    
class OutOfData(UnpackException):
    pass
    
    sas_datetime_formats = ('DATETIME', 'DTWKDATX',
                        'B8601DN', 'B8601DT', 'B8601DX', 'B8601DZ', 'B8601LX',
                        'E8601DN', 'E8601DT', 'E8601DX', 'E8601DZ', 'E8601LX',
                        'DATEAMPM', 'DTDATE', 'DTMONYY', 'DTMONYY', 'DTWKDATX',
                        'DTYEAR', 'TOD', 'MDYAMPM')

    
        for v, p in cases:
        match(v, p)
    
            Returns
        -------
        props : dict
            Atomic CSS 2.2 properties
    
        @pytest.mark.parametrize('tz', ['US/Eastern', 'Asia/Tokyo'])
    def test_fillna_datetime64(self, tz):
        # GH 11343
        idx = pd.DatetimeIndex(['2011-01-01 09:00', pd.NaT,
                                '2011-01-01 11:00'])
    
        def test_representation_to_series(self):
        idx1 = TimedeltaIndex([], freq='D')
        idx2 = TimedeltaIndex(['1 days'], freq='D')
        idx3 = TimedeltaIndex(['1 days', '2 days'], freq='D')
        idx4 = TimedeltaIndex(['1 days', '2 days', '3 days'], freq='D')
        idx5 = TimedeltaIndex(['1 days 00:00:01', '2 days', '3 days'])