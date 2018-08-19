
        
                raise NotImplementedError
    
    
        ANTLR generates code that throws exceptions upon recognition error and
    also generates code to catch these exceptions in each rule.  If you
    want to quit upon first error, you can turn off the automatic error
    handling mechanism using rulecatch action, but you still need to
    override methods mismatch and recoverFromMismatchSet.
    
        @classmethod
    def __get_test_directory(self):
        '''
        Get the temporary directory for the tests.
        '''
        self.test_dir = os.path.join(os.path.dirname(
            os.path.realpath(__file__)), 'test_command')
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    ### OUTPUT ###
# executed method 2!
# Value x1
# Value x2
# executed method 1!

    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
    while True:
    # Grab a single frame of video
    ret, frame = input_movie.read()
    frame_number += 1
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # See if the first face in the uploaded image matches the known face of Obama
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()
    
        :param rect: a dlib 'rect' object
    :return: a plain tuple representation of the rect in (top, right, bottom, left) order
    '''
    return rect.top(), rect.right(), rect.bottom(), rect.left()