
        
                def check(self, value):
            return isinstance(value, Foo)
    
        def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = ['You tried to access the file '%s' in the request.files '
               'dictionary but it does not exist.  The mimetype for the request '
               'is '%s' instead of 'multipart/form-data' which means that no '
               'file contents were transmitted.  To fix this error you should '
               'provide enctype='multipart/form-data' in your form.' %
               (key, request.mimetype)]
        if form_matches:
            buf.append('\n\nThe browser instead transmitted some file names. '
                       'This was submitted: %s' % ', '.join(''%s'' % x
                            for x in form_matches))
        self.msg = ''.join(buf)
    
    # Often instead of just checking if two faces match or not (True or False), it's helpful to see how similar they are.
# You can do that by using the face_distance function.
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
        :param faces: List of face encodings to compare
    :param face_to_compare: A face encoding to compare against
    :return: A numpy ndarray with the distance for each face in the same order as the 'faces' array
    '''
    if len(face_encodings) == 0:
        return np.empty((0))