
        
            def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup.get(query)
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
        @abstractmethod
    def can_fit_in_spot(self, spot):
        pass
    
            Emit key value pairs of the form:
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        assert not match(command)
    
        new_command = get_new_command(Command('sudo apt list --upgradable', match_output))
    assert new_command == 'sudo apt upgrade'

    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    # There are two options for replacing |today|: either, you set today to
# some non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
        # Create and train the KNN classifier
    knn_clf = neighbors.KNeighborsClassifier(n_neighbors=n_neighbors, algorithm=knn_algo, weights='distance')
    knn_clf.fit(X, y)
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    
    frames = []
frame_count = 0
    
        for file in image_files_in_folder(known_people_folder):
        basename = os.path.splitext(os.path.basename(file))[0]
        img = face_recognition.load_image_file(file)
        encodings = face_recognition.face_encodings(img)
    
            # 0.6 is the default face distance match threshold. So we'll spot-check that the numbers returned
        # are above or below that based on if they should match (since the exact numbers could vary).
        self.assertEqual(type(distance_results), np.ndarray)
        self.assertLessEqual(distance_results[0], 0.6)
        self.assertLessEqual(distance_results[1], 0.6)
        self.assertGreater(distance_results[2], 0.6)
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()