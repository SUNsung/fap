
        
            def write(self, content):
        self.fd.write(content + '\n')
        self.fd.flush()
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
            Using setter/getter methods is deprecated. Use o.channel instead.'''
    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
        # Predict classes and remove classifications that aren't within the threshold
    return [(pred, loc) if rec else ('unknown', loc) for pred, loc, rec in zip(knn_clf.predict(faces_encodings), X_face_locations, are_matches)]
    
    
def test_image(image_to_check, model):
    unknown_image = face_recognition.load_image_file(image_to_check)
    face_locations = face_recognition.face_locations(unknown_image, number_of_times_to_upsample=0, model=model)
    
            if file.filename == '':
            return redirect(request.url)
    
        :param css:  plain tuple representation of the rect in (top, right, bottom, left) order
    :return: a dlib `rect` object
    '''
    return dlib.rectangle(css[3], css[0], css[1], css[2])
    
        while not Global.is_exit:
        # If it's time to read a frame
        if Global.buff_num != next_id(Global.read_num):
            # Grab a single frame of video
            ret, frame = video_capture.read()
            read_frame_list[Global.buff_num] = frame
            Global.buff_num = next_id(Global.buff_num)
        else:
            time.sleep(0.01)