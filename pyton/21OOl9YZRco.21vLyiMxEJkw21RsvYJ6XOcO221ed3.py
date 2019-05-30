
        
            try:
        oids, array_oids = get_hstore_oids(connection.alias)
        register_hstore(connection.connection, globally=True, oid=oids, array_oid=array_oids)
    except ProgrammingError:
        # Hstore is not available on the database.
        #
        # If someone tries to create an hstore field it will error there.
        # This is necessary as someone may be using PSQL without extensions
        # installed but be using other features of contrib.postgres.
        #
        # This is also needed in order to create the connection in order to
        # install the hstore extension.
        pass
    
        @property
    def cache_key(self):
        return self.cache_key_prefix + self._get_or_create_session_key()
    
            if data is None:
            s = self._get_session_from_db()
            if s:
                data = self.decode(s.session_data)
                self._cache.set(self.cache_key, data, self.get_expiry_age(expiry=s.expire_date))
            else:
                data = {}
        return data
    
    
    
    
class CheckNetwork(object):
    def __init__(self, type='IPv4'):
        self.type = type
        self.urls = []
        self._checking_lock = threading.Lock()
        self._checking_num = 0
        self.network_stat = 'unknown'
        self.last_check_time = 0
        self.continue_fail_count = 0
    
        def __init__(self, json_name, value):
        self.value = value
        super(Fixed, self).__init__(
            json_name=json_name, default=value, omitempty=False)
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
        pool = context.Pool(processes=processes)
    
            # If you had more than 2 faces, you could make this logic a lot prettier
        # but I kept it simple for the demo
        name = None
        if match[0]:
            name = 'Lin-Manuel Miranda'
        elif match[1]:
            name = 'Alex Lacamoire'
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
            self.assertEqual(type(match_results), list)
        self.assertTrue(match_results[0])
        self.assertTrue(match_results[1])
        self.assertFalse(match_results[2])
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
            # Find all the faces and face encodings in the frame of video, cost most time
        face_locations = face_recognition.face_locations(rgb_frame)
        face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)