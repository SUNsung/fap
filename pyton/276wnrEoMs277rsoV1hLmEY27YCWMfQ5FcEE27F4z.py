
        
            if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform == 'linux' or sys.platform == 'linux2':
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
    for face_location in face_locations:
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    
def _raw_face_locations(img, number_of_times_to_upsample=1, model='hog'):
    '''
    Returns an array of bounding boxes of human faces in a image
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]
    
            self.assertEqual(key1, 'uploads/20170826T181315.679087009Z/upload/pixel.png')
        self.assertEqual(url1, 'http://127.0.0.1:5000/?id=20170826T181315.679087009Z')
    
    
def record(api, method, path, data, headers):
    ''' Record a given API call to a persistent file on disk '''
    file_path = get_file_path(api, create=True)
    if CURRENTLY_REPLAYING or not file_path or not should_record(api, method, path, data, headers):
        return
    entry = None
    try:
        if isinstance(data, dict):
            data = json.dumps(data)
        if data or data in [u'', b'']:
            try:
                data = to_bytes(data)
            except Exception as e:
                LOGGER.warning('Unable to call to_bytes: %s' % e)
            data = to_str(base64.b64encode(data))
        entry = {
            'a': api,
            'm': method,
            'p': path,
            'd': data,
            'h': dict(headers)
        }
        with open(file_path, 'a') as dumpfile:
            dumpfile.write('%s\n' % json.dumps(entry))
    except Exception as e:
        print('Error recording API call to persistent file: %s %s' % (e, traceback.format_exc()))
    
            tags = self.sns_client.list_tags_for_resource(ResourceArn=self.topic_arn)
        self.assertEqual(len(tags['Tags']), 2)
        self.assertEqual(tags['Tags'][0]['Key'], '123')
        self.assertEqual(tags['Tags'][0]['Value'], 'abc')
        self.assertEqual(tags['Tags'][1]['Key'], '456')
        self.assertEqual(tags['Tags'][1]['Value'], 'def')