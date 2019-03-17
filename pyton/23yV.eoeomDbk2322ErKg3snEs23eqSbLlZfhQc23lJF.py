
        
        # See how far apart the test image is from the known faces
face_distances = face_recognition.face_distance(known_encodings, image_to_test_encoding)
    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
    known_faces = [
    lmm_face_encoding,
    al_face_encoding
]
    
    # This code finds all faces in a list of images using the CNN model.
#
# This demo is for the _special case_ when you need to find faces in LOTS of images very quickly and all the images
# are the exact same size. This is common in video processing applications where you have lots of video frames
# to process.
#
# If you are processing a lot of images and using a GPU with CUDA, batch processing can be ~3x faster then processing
# single images at a time. But if you aren't using a GPU, then batch processing isn't going to be very helpful.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read the video file.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
            result = runner.invoke(face_detection_cli.main, args=[image_file])
        self.assertEqual(result.exit_code, 0)
        parts = result.output.split(',')
        self.assertTrue('obama.jpg' in parts[0])
        self.assertEqual(len(parts), 5)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]
    
            # Deleting model 'DSymApp'
        db.delete_table('sentry_dsymapp')
    
        complete_apps = ['sentry']
    symmetrical = True
