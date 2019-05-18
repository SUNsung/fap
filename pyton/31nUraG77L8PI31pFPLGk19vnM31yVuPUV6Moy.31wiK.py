
        
            def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
            status_line = 'HTTP/{version} {status} {reason}'.format(
            version=version,
            status=original.status,
            reason=original.reason
        )
        headers = [status_line]
        try:
            # `original.msg` is a `http.client.HTTPMessage` on Python 3
            # `_headers` is a 2-tuple
            headers.extend(
                '%s: %s' % header for header in original.msg._headers)
        except AttributeError:
            # and a `httplib.HTTPMessage` on Python 2.x
            # `headers` is a list of `name: val<CRLF>`.
            headers.extend(h.strip() for h in original.msg.headers)
    
        if n == 1:
        return '1 B'
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, model) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), cpus, model)
    else:
        test_image(image_to_check, model)
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 25), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 0.5, (255, 255, 255), 1)
    
        def test_command_line_interface_show_distance(self):
        target_string = 'obama.jpg,obama,0.0'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')
    
    
def _raw_face_landmarks(face_image, face_locations=None, model='large'):
    if face_locations is None:
        face_locations = _raw_face_locations(face_image)
    else:
        face_locations = [_css_to_rect(face_location) for face_location in face_locations]