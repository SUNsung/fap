
        
        
setup_locate_faces = '''
import face_recognition
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    # Find all the faces and face encodings in the unknown image
face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1