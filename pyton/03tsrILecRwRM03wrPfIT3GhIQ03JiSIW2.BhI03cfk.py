
        
            :param X_img_path: path to image to be recognized
    :param knn_clf: (optional) a knn classifier object. if not specified, model_save_path must be specified.
    :param model_path: (optional) path to a pickled knn classifier. if not specified, model_save_path must be knn_clf.
    :param distance_threshold: (optional) distance threshold for face classification. the larger it is, the more chance
           of mis-classifying an unknown person as a known one.
    :return: a list of names and face locations for the recognized faces in the image: [(name, bounding box), ...].
        For faces of unrecognized persons, the name 'unknown' will be returned.
    '''
    if not os.path.isfile(X_img_path) or os.path.splitext(X_img_path)[1][1:] not in ALLOWED_EXTENSIONS:
        raise Exception('Invalid image path: {}'.format(X_img_path))
    
        # If no valid image file was uploaded, show the file upload form:
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
        # Save each frame of the video to a list
    frame_count += 1
    frames.append(frame)
    
        def test_command_line_interface(self):
        target_string = 'obama.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')
    
    # Get a reference to webcam #0 (the default one)
video_capture = cv2.VideoCapture(0)
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
        v = MyValidator(schema={'amount': {rule: 'oddity'}})
    assert_success(document={'amount': 1}, validator=v)
    assert_fail(
        document={'amount': 2},
        validator=v,
        error=('amount', (), cerberus.errors.CUSTOM, None, ('Must be an odd number',)),
    )
    
    
def test_coerce_not_destructive():
    schema = {'amount': {'coerce': int}}
    v = Validator(schema)
    doc = {'amount': '1'}
    v.validate(doc)
    assert v.document is not doc
    
    
def test_schema_registry_simple():
    schema_registry.add('foo', {'bar': {'type': 'string'}})
    schema = {'a': {'schema': 'foo'}, 'b': {'schema': 'foo'}}
    document = {'a': {'bar': 'a'}, 'b': {'bar': 'b'}}
    assert_success(document, schema)
    
            parts.extend((b'--' + boundary + b'--', b''))