
        
            # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')