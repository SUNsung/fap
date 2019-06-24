
        
          plt.plot(vals_txn[:,0:n_to_plot] + scale*np.array(range(n_to_plot)),
           color=color, lw=1.0)
  plt.axis('tight')
  if title:
    plt.title(title)
    
        plt.figure()
    plt.plot(np.log10(evals_n), '-x')
    plt.figure()
    plt.subplot(311)
    plt.imshow(all_data_pca_pxtc)
    plt.colorbar()
    
      # Note the use of get_variable vs. tf.Variable.  this is because get_variable
  # does not allow the initialization of the variable with a value.
  if normalized:
    w_collections = [tf.GraphKeys.GLOBAL_VARIABLES, 'norm-variables']
    if collections:
      w_collections += collections
    if mat_init_value is not None:
      w = tf.Variable(mat_init_value, name=wname, collections=w_collections,
                      trainable=trainable)
    else:
      w = tf.get_variable(wname, [in_size, out_size], initializer=mat_init,
                          collections=w_collections, trainable=trainable)
    w = tf.nn.l2_normalize(w, dim=0) # x W, so xW_j = \sum_i x_bi W_ij
  else:
    w_collections = [tf.GraphKeys.GLOBAL_VARIABLES]
    if collections:
      w_collections += collections
    if mat_init_value is not None:
      w = tf.Variable(mat_init_value, name=wname, collections=w_collections,
                      trainable=trainable)
    else:
      w = tf.get_variable(wname, [in_size, out_size], initializer=mat_init,
                          collections=w_collections, trainable=trainable)
  b = None
  if do_bias:
    b_collections = [tf.GraphKeys.GLOBAL_VARIABLES]
    if collections:
      b_collections += collections
    bname = (name + '/b') if name else '/b'
    if bias_init_value is None:
      b = tf.get_variable(bname, [1, out_size],
                          initializer=tf.zeros_initializer(),
                          collections=b_collections,
                          trainable=trainable)
    else:
      b = tf.Variable(bias_init_value, name=bname,
                      collections=b_collections,
                      trainable=trainable)
    
      Example sentence and their mask:
    First sentence  = 'I like the cat        's color'
                       0 0    0   1           0 0
    Second sentence = 'I like the yellow dog 's color'
                       0 0    0   1      1    0 0
    
    import tensorflow as tf
    
      Returns:
    predictions:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.discriminator_model == 'cnn':
    predictions = cnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'fnn':
    predictions = feedforward.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn':
    predictions = rnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional':
    predictions = bidirectional.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional_zaremba':
    predictions = bidirectional_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'seq2seq_vd':
    predictions = seq2seq_vd.discriminator(
        hparams,
        inputs,
        present,
        sequence,
        is_training=is_training,
        reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_zaremba':
    predictions = rnn_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_nas':
    predictions = rnn_nas.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_vd':
    predictions = rnn_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  elif FLAGS.discriminator_model == 'bidirectional_vd':
    predictions = bidirectional_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  else:
    raise NotImplementedError
  return predictions
    
        encoder_state: The encoded state to initialize the `dynamic_rnn_decoder`.
    attention_keys: to be compared with target states.
    attention_values: to be used to construct context vectors.
    attention_score_fn: to compute similarity between key and target states.
    attention_construct_fn: to build attention states.
    embeddings: The embeddings matrix used for the decoder sized
    `[num_decoder_symbols, embedding_size]`.
    start_of_sequence_id: The start of sequence ID in the decoder embeddings.
    end_of_sequence_id: The end of sequence ID in the decoder embeddings.
    maximum_length: The maximum allowed of time steps to decode.
    num_decoder_symbols: The number of classes to decode at each time step.
    dtype: (default: `tf.int32`) The default data type to use when
    handling integer objects.
    name: (default: `None`) NameScope for the decoder function;
      defaults to 'attention_decoder_fn_inference'
    
            html = get_content(api_url)
        self.tree = ET.ElementTree(ET.fromstring(html))
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
    import json
import urllib.parse
import base64
import binascii
import re
    
    
def get_course_title(url, course_type, page=None):
    if page is None:
        try:
            # shard course page could be gbk but with charset='utf-8'
            page = get_content(url, decoded=False).decode('gbk')
        except UnicodeDecodeError:
            page = get_content(url, decoded=False).decode('utf8')
    
    for face_location in face_locations:
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_frame = frame[:, :, ::-1]
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
            if True in result:
            [print_result(image_to_check, name, distance, show_distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            print_result(image_to_check, 'unknown_person', None, show_distance)
    
        def test_command_line_interface_big_image(self):
        target_string = 'obama3.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama3.jpg')
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
        :param img: A list of images (each as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :return: A list of dlib 'rect' objects of found face locations
    '''
    return cnn_face_detector(images, number_of_times_to_upsample, batch_size=batch_size)
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
            # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
        rgb_frame = frame_process[:, :, ::-1]
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#
# html_extra_path = []
    
        return temperature

    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise