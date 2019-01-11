
        
        # If false, no index is generated.
#html_use_index = True
    
    # Note: This example is only tested with Python 3 (not Python 2)
    
    
def _raw_face_locations_batched(images, number_of_times_to_upsample=1, batch_size=128):
    '''
    Returns an 2d array of dlib rects of human faces in a image using the cnn face detector
    
        function_parameters = zip(
        images_to_check,
        itertools.repeat(model),
    )
    
    # This is a demo of running face recognition on a video file and saving the results to a new video file.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
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
    
            img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama_partial_face2.jpg'))
        detected_faces = api.face_locations(img)
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)