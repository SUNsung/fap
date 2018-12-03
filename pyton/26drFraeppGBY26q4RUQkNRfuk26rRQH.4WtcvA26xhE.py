
        
        from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        plt.figure('scikit-learn GLM benchmark results')
    plt.xlabel('Dimensions')
    plt.ylabel('Time (s)')
    plt.plot(dimensions, time_ridge, color='r')
    plt.plot(dimensions, time_ols, color='g')
    plt.plot(dimensions, time_lasso, color='b')
    
    We generate a synthetic dataset of size 10^n, for n in [min, max], and
examine the time taken to run isotonic regression over the dataset.
    
        if dataset_name == 'SA':
        lb = LabelBinarizer()
        x1 = lb.fit_transform(X[:, 1].astype(str))
        x2 = lb.fit_transform(X[:, 2].astype(str))
        x3 = lb.fit_transform(X[:, 3].astype(str))
        X = np.c_[X[:, :1], x1, x2, x3, X[:, 4:]]
        y = (y != b'normal.').astype(int)
    
    '''
    
        ###########################################################################
    # Set custom tracking based method
    sampling_algorithm['custom-tracking-selection'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='tracking_selection',
                                       random_state=random_state)
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
    # If extensions (or modules to document with autodoc) are in another
# directory, add these directories to sys.path here. If the directory is
# relative to the documentation root, use os.path.abspath to make it
# absolute, like shown here.
#sys.path.insert(0, os.path.abspath('.'))
    
    # See how far apart the test image is from the known faces
face_distances = face_recognition.face_distance(known_encodings, image_to_test_encoding)
    
            # Display results overlaid on an image
        show_prediction_labels_on_image(os.path.join('knn_examples/test', image_file), predictions)

    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()
    
            self.last_results = {}
        response = self._make_request()
        if response.status_code != 200:
            _LOGGER.error(
                'Got HTTP status code %d when getting device list',
                response.status_code)
            return False
        try:
            data = response.json()
            result = data['responses'][0]
            devices = result['output']['devices']
            for device in devices:
                macs = device['knownMACAddresses']
                if not macs:
                    _LOGGER.warning(
                        'Skipping device without known MAC address')
                    continue
                mac = macs[-1]
                connections = device['connections']
                if not connections:
                    _LOGGER.debug('Device %s is not connected', mac)
                    continue
    
            # Find devices that have geofencing enabled, and are currently at home.
        for mobile_device in tado_json:
            if mobile_device.get('location'):
                if mobile_device['location']['atHome']:
                    device_id = mobile_device['id']
                    device_name = mobile_device['name']
                    last_results.append(Device(device_id, device_name))
    
    # The domain of your component. Should be equal to the name of your component.
DOMAIN = 'dominos'
ENTITY_ID_FORMAT = DOMAIN + '.{}'
    
        devicelist = session.core.initialise_api(username,
                                             password,
                                             update_interval)