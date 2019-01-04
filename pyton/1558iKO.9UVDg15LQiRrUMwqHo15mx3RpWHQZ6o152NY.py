
        
            z_logvar_1xn = \
        tf.get_variable(name=(name+'/logvar'), shape=size_1xn,
                        initializer=tf.constant_initializer(log_var_init),
                        trainable=var_is_trainable)
    
    
# OPTIMIZATION
flags.DEFINE_integer('batch_size', BATCH_SIZE,
                     'Batch size to use during training.')
flags.DEFINE_float('learning_rate_init', LEARNING_RATE_INIT,
                   'Learning rate initial value')
flags.DEFINE_float('learning_rate_decay_factor', LEARNING_RATE_DECAY_FACTOR,
                   'Learning rate decay, decay by this fraction every so \
                   often.')
flags.DEFINE_float('learning_rate_stop', LEARNING_RATE_STOP,
                   'The lr is adaptively reduced, stop training at this value.')
# Rather put the learning rate on an exponentially decreasiong schedule,
# the current algorithm pays attention to the learning rate, and if it
# isn't regularly decreasing, it will decrease the learning rate.  So far,
# it works fine, though it is not perfect.
flags.DEFINE_integer('learning_rate_n_to_compare', LEARNING_RATE_N_TO_COMPARE,
                     'Number of previous costs current cost has to be worse \
                     than, to lower learning rate.')
    
      Returns:
    The dataset structures, with the field alignment_matrix_cxf added.
    This is # channels x npcs dimension
'''
  nchannels_all = 0
  channel_idxs = {}
  conditions_all = {}
  nconditions_all = 0
  for name, dataset in datasets.items():
    cidxs = np.where(dataset['P_sxn'])[1] # non-zero entries in columns
    channel_idxs[name] = [cidxs[0], cidxs[-1]+1]
    nchannels_all += cidxs[-1]+1 - cidxs[0]
    conditions_all[name] = np.unique(dataset['condition_labels_train'])
    
    
def get_iterator(data):
  '''Return the data iterator.'''
  if FLAGS.data_set == 'ptb':
    iterator = ptb_loader.ptb_iterator(data, FLAGS.batch_size,
                                       FLAGS.sequence_length,
                                       FLAGS.epoch_size_override)
  elif FLAGS.data_set == 'imdb':
    iterator = imdb_loader.imdb_iterator(data, FLAGS.batch_size,
                                         FLAGS.sequence_length)
  return iterator
    
      ## Load Generator weights from MaskGAN checkpoint.
  if FLAGS.maskgan_ckpt:
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    init_saver = tf.train.Saver(var_list=gen_vars)
    init_savers['init_saver'] = init_saver
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
            # remove old cert first
        xlog.info('Removing old cert in database $HOME/.pki/nssdb')
        cmd_line = 'certutil -L -d sql:$HOME/.pki/nssdb |grep 'GoAgent' && certutil -d sql:$HOME/.pki/nssdb -D -n '%s' ' % ( common_name)
        os.system(cmd_line)
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    
    def reset(self):
        BaseRecognizer.reset(self) # reset all recognizer state variables
        if self.input is not None:
            self.input.seek(0) # rewind the input
    
    image = face_recognition.load_image_file('{}')
'''
    
    for face_location in face_locations:
    
    for face_location in face_locations:
    
        raw_detections_batched = _raw_face_locations_batched(images, number_of_times_to_upsample, batch_size)
    
    
def test_image(image_to_check, model):
    unknown_image = face_recognition.load_image_file(image_to_check)
    face_locations = face_recognition.face_locations(unknown_image, number_of_times_to_upsample=0, model=model)
    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
        def test_command_line_interface(self):
        target_string = 'obama.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')