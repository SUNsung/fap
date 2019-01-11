
        
          # Predict the labels
  pred = model.predict(session, instances)
    
      Args:
    record: a record with TensorFlow example.
    max_path_len: the maximum path length.
    input_keep_prob: 1 - the word dropout probability
    
        # OPTIMIZATION
    # train the io matrices only
    if self.hps.do_train_io_only:
      self.train_vars = tvars = \
        tf.get_collection('IO_transformations',
                          scope=tf.get_variable_scope().name)
    # train the encoder only
    elif self.hps.do_train_encoder_only:
      tvars1 = \
        tf.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES,
                          scope='LFADS/ic_enc_*')
      tvars2 = \
        tf.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES,
                          scope='LFADS/z/ic_enc_*')
    
          while cur_pos < num_steps:
        if cur_stream[i] is None or len(cur_stream[i][0]) <= 1:
          try:
            cur_stream[i] = list(generator.next())
          except StopIteration:
            # No more data, exhaust current streams and quit
            no_more_data = True
            break
    
      def word_to_id(self, word):
    if word in self._word_to_id:
      return self._word_to_id[word]
    else:
      if word.lower() in self._word_to_id:
        return self._word_to_id[word.lower()]
    return self.unk
    
      Yields:
    Pairs of the batched data, each a matrix of shape [batch_size, num_steps].
    The second element of the tuple is the same data time-shifted to the
    right by one. The third is a set of weights with 1 indicating a word was
    present and 0 not.
    
    # Useful for REINFORCE baseline.
from losses import losses
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
    # Note: This example is only tested with Python 3 (not Python 2)
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        :param img_path: path to image to be recognized
    :param predictions: results of the predict function
    :return:
    '''
    pil_image = Image.open(img_path).convert('RGB')
    draw = ImageDraw.Draw(pil_image)
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
    app = Flask(__name__)
    
    
def _raw_face_landmarks(face_image, face_locations=None, model='large'):
    if face_locations is None:
        face_locations = _raw_face_locations(face_image)
    else:
        face_locations = [_css_to_rect(face_location) for face_location in face_locations]
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
    # This is a demo of running face recognition on live video from your webcam. It's a little more complicated than the
# other example, but it includes some basic performance tweaks to make things run a lot faster:
#   1. Process each video frame at 1/4 resolution (though still display it at full resolution)
#   2. Only detect faces in every other frame of video.
    
        # Draw a box around the face using the Pillow module
    draw.rectangle(((left, top), (right, bottom)), outline=(0, 0, 255))
    
        function_parameters = zip(
        images_to_check,
        itertools.repeat(known_names),
        itertools.repeat(known_face_encodings),
        itertools.repeat(tolerance),
        itertools.repeat(show_distance)
    )