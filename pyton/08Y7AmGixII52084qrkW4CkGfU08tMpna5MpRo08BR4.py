
        
            def take_call(self, call):
        '''Assume the employee will always successfully take the call.'''
        self.call = call
        self.call.employee = self
        self.call.state = CallState.IN_PROGRESS
    
        def __init__(self, message_id, message, timestamp):
        self.message_id = message_id
        self.message = message
        self.timestamp = timestamp
    
    
class Bus(Vehicle):
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
    
    def getMissingType(self):
        return self.expecting
    
    
    def reset(self):
        BaseRecognizer.reset(self) # reset all recognizer state variables
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
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
    
            result = runner.invoke(face_detection_cli.main, args=[image_file])
        self.assertEqual(result.exit_code, 0)
        self.assertTrue('obama_partial_face2.jpg' in result.output)
        self.assertTrue('obama.jpg' in result.output)
        self.assertTrue('obama2.jpg' in result.output)
        self.assertTrue('obama3.jpg' in result.output)
        self.assertTrue('biden.jpg' in result.output)
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('two_people.jpg')
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
    
class dfl_full(Mask):  # pylint: disable=invalid-name
    ''' DFL facial mask '''
    def build_mask(self):
        mask = np.zeros(self.face.shape[0:2] + (1, ), dtype=np.float32)
    
        def process(self, new_face):
        ''' The blend box function. Adds the created mask to the alpha channel '''
        if self.skip:
            logger.trace('Skipping blend box')
            return new_face
    
    
class Mask(Adjustment):
    ''' Return the requested mask '''
    def __init__(self, mask_type, output_size, predicted_available, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.do_erode = self.config.get('erosion', 0) != 0
        self.do_blend = self.config.get('type', None) is not None
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        def write(self, filename, image):
        logger.trace('Outputting: (filename: '%s'', filename)
        filename = self.output_filename(filename)
        try:
            with open(filename, 'wb') as outfile:
                outfile.write(image)
        except Exception as err:  # pylint: disable=broad-except
            logger.error('Failed to save image '%s'. Original Error: %s', filename, err)
    
        def get_save_kwargs(self):
        ''' Return the save parameters for the file format '''
        filetype = self.config['format']
        kwargs = dict()
        if filetype in ('gif', 'jpg', 'png'):
            kwargs['optimize'] = self.config['optimize']
        if filetype == 'gif':
            kwargs['interlace'] = self.config['gif_interlace']
        if filetype == 'png':
            kwargs['compress_level'] = self.config['png_compress_level']
        if filetype == 'tif':
            kwargs['compression'] = self.config['tif_compression']
        logger.debug(kwargs)
        return kwargs