
        
                elif hps.output_dist == 'gaussian':
          mean_n_logvars = tf.matmul(factors[t],this_out_fac_W) + this_out_fac_b
          mean_n_logvars.set_shape([None, None])
          means_t_bxd, logvars_t_bxd = tf.split(axis=1, num_or_size_splits=2,
                                                value=mean_n_logvars)
          rates[t] = means_t_bxd # rates feed back to controller
          dist_params[t] = tf.concat(
              axis=1, values=[means_t_bxd, tf.exp(logvars_t_bxd)])
          loglikelihood_t = \
              diag_gaussian_log_likelihood(data_t_bxd,
                                           means_t_bxd, logvars_t_bxd)
        else:
          assert False, 'NIY'
    
          softmax = sess.run(t['softmax_out'],
                         feed_dict={t['char_inputs_in']: char_ids_inputs,
                                    t['inputs_in']: inputs,
                                    t['targets_in']: targets,
                                    t['target_weights_in']: weights})
    
        probs_cache = os.path.join(self.log_dir, '{}.probs'.format(test_data_name))
    if os.path.exists(probs_cache):
      print('Reading cached result from {}'.format(probs_cache))
      with tf.gfile.Open(probs_cache, 'r') as f:
        probs = pkl.load(f)
    else:
      tf.reset_default_graph()
      self.sess = tf.Session()
      # Build the graph.
      saver = tf.train.import_meta_graph(
          os.path.join(self.log_dir, 'ckpt-best.meta'))
      saver.restore(self.sess, os.path.join(self.log_dir, 'ckpt-best'))
      print('Restored from {}'.format(self.log_dir))
      graph = tf.get_default_graph()
      self.tensors = dict(
          inputs_in=graph.get_tensor_by_name('test_inputs_in:0'),
          char_inputs_in=graph.get_tensor_by_name('test_char_inputs_in:0'),
          softmax_out=graph.get_tensor_by_name('SotaRNN_1/softmax_out:0'),
          states_init=graph.get_operation_by_name('SotaRNN_1/states_init'))
      self.shape = self.tensors['inputs_in'].shape.as_list()
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
      Args:
    init_savers:  Dictionary of init_savers.  'init_saver_name': init_saver.
    sess:  tf.Session.
  '''
  ## Load Generator weights from MaskGAN checkpoint.
  if FLAGS.maskgan_ckpt:
    print('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    tf.logging.info('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    print('Asserting Generator is a seq2seq-variant.')
    tf.logging.info('Asserting Generator is a seq2seq-variant.')
    assert FLAGS.generator_model.startswith('seq2seq')
    init_saver = init_savers['init_saver']
    init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
    # -- General configuration ------------------------------------------------
    
            password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x0b\xe6\xa4\xd9z\x0e\xb8\xb9\xd0\xd4i_\x85\x1d\x99\x98_\xe5\x80\xe7.\xbf\xa5\x83'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 32))
        self.assertEqual(decrypted, self.secret_msg)
    
        def test_youtube_channel_matching(self):
        assertChannel = lambda url: self.assertMatch(url, ['youtube:channel'])
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM?feature=gb_ch_rec')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM/videos')
    
    We build a custom activation layer called 'Antirectifier',
which modifies the shape of the tensor that passes through it.
We need to specify two methods: `compute_output_shape` and `call`.
    
    
def load_data():
    '''Loads CIFAR10 dataset.
    
    
def test_objective_shapes_3d():
    y_a = K.variable(np.random.random((5, 6, 7)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (5, 6)
    
            if len(initial_state) != len(self.states):
            raise ValueError('Layer has ' + str(len(self.states)) +
                             ' states but was passed ' +
                             str(len(initial_state)) +
                             ' initial states.')
        timesteps = K.int_shape(inputs)[1]
    
    # We create a layer which take as input movies of shape
# (n_frames, width, height, channels) and returns a movie
# of identical shape.
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    
if __name__ == '__main__':
    main()

    
    
def mapping_details(client, module):
    '''
    Returns all lambda event source mappings.
    
    try:
    from google.cloud import pubsub
    HAS_GOOGLE_CLOUD_PUBSUB = True
except ImportError as e:
    HAS_GOOGLE_CLOUD_PUBSUB = False
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            instance_id=dict(type='str', required=True),
            state=dict(type='str', default='present', choices=['absent', 'present']),
            database_name=dict(type='str'),
            configuration=dict(type='str', required=True),
            node_count=dict(type='int', default=1),
            instance_display_name=dict(type='str'),
            force_instance_delete=dict(type='bool', default=False),
            service_account_email=dict(type='str'),
            credentials_file=dict(type='str'),
            project_id=dict(type='str'),
        ),
    )
    
    
def main():
    argument_spec = HerokuHelper.heroku_argument_spec()
    argument_spec.update(
        user=dict(required=True, type='str'),
        apps=dict(required=True, type='list'),
        suppress_invitation=dict(default=False, type='bool'),
        state=dict(default='present', type='str', choices=['present', 'absent']),
    )
    module = AnsibleModule(
        argument_spec=argument_spec,
        supports_check_mode=True
    )
    
    options:
    name:
        description:
            - Hostname of the machine to manage.
        required: true
    state:
        description:
            - Takes the host to the desired lifecycle state.
            - If C(absent) the host will be deleted from the cluster.
            - If C(present) the host will be created in the cluster (includes C(enabled), C(disabled) and C(offline) states).
            - If C(enabled) the host is fully operational.
            - C(disabled), e.g. to perform maintenance operations.
            - C(offline), host is totally offline.
        choices:
            - absent
            - present
            - enabled
            - disabled
            - offline
        default: present
    im_mad_name:
        description:
            - The name of the information manager, this values are taken from the oned.conf with the tag name IM_MAD (name)
        default: kvm
    vmm_mad_name:
        description:
            - The name of the virtual machine manager mad name, this values are taken from the oned.conf with the tag name VM_MAD (name)
        default: kvm
    cluster_id:
        description:
            - The cluster ID.
        default: 0
    cluster_name:
        description:
            - The cluster specified by name.
    labels:
        description:
            - The labels for this host.
    template:
        description:
            - The template or attribute changes to merge into the host template.
        aliases:
            - attributes
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(cn=dict(type='str', required=True, aliases=['name']),
                         description=dict(type='str'),
                         group=dict(type='list'),
                         host=dict(type='list'),
                         hostgroup=dict(type='list'),
                         privilege=dict(type='list'),
                         service=dict(type='list'),
                         state=dict(type='str', default='present', choices=['present', 'absent']),
                         user=dict(type='list'))
    
    
DOCUMENTATION = '''
---
module: group_by
short_description: Create Ansible groups based on facts
description:
  - Use facts to create ad-hoc groups that can be used later in a playbook.
  - This module is also supported for Windows targets.
version_added: '0.9'
options:
  key:
    description:
    - The variables whose values will be used as groups
    required: true
  parents:
    description:
    - The list of the parent groups
    required: false
    default: 'all'
    version_added: '2.4'
author: 'Jeroen Hoekx (@jhoekx)'
notes:
  - Spaces in group names are converted to dashes '-'.
  - This module is also supported for Windows targets.
'''
    
    '''
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
        def prepare_request(self, spider, request, opts):
        def callback(response):
            # memorize first request
            if not self.first_response:
                self.first_response = response
    
        def short_desc(self):
        return 'Get settings values'
    
    - tree.RewriteCardinalityException
  - tree.RewriteEarlyExitException
  - tree.RewriteEmptyStreamException
  .
.
    
            # If you are parsing a tree node stream, you will encounter som
        # imaginary nodes w/o line/col info.  We now search backwards looking
        # for most recent token with line/col info, but notify getErrorHeader()
        # that info is approximate.
        self.approximateLineInfo = False
    
    
    def setText(self, text):
        '''
        Override the text for this token.  getText() will return this text
        rather than pulling from the buffer.  Note that this does not mean
        that start/stop indexes are not valid.  It means that that input
        was converted to a new string in the token object.
	'''
        self._text = text
    
    
def read_binary(package: Package, resource: Resource) -> bytes:
    '''Return the binary contents of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    with open_binary(package, resource) as fp:
        return fp.read()
    
        def test_run_module(self):
        # Test expected operation of the '-m' switch
        # Switch needs an argument
        assert_python_failure('-m')
        # Check we get an error for a nonexistent module
        assert_python_failure('-m', 'fnord43520xyz')
        # Check the runpy module also gives an error for
        # a nonexistent module
        assert_python_failure('-m', 'runpy', 'fnord43520xyz')
        # All good if module is located and run successfully
        assert_python_ok('-m', 'timeit', '-n', '1')
    
    buffer = ''
    
          # Check if token is an unmatched '<'.
      # If not, move on to the next character.
      if token != '<':
        pos += 1
        if pos >= len(line):
          linenum += 1
          pos = 0
        continue
    
            # Blur the face image
        face_image = cv2.GaussianBlur(face_image, (99, 99), 30)
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # See if the first face in the uploaded image matches the known face of Obama
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of tuples of found face locations in css (top, right, bottom, left) order
    '''
    if model == 'cnn':
        return [_trim_css_to_bounds(_rect_to_css(face.rect), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, 'cnn')]
    else:
        return [_trim_css_to_bounds(_rect_to_css(face), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, model)]
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 25), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 0.5, (255, 255, 255), 1)
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
            if len(encodings) == 0:
            click.echo('WARNING: No faces found in {}. Ignoring file.'.format(file))
        else:
            known_names.append(basename)
            known_face_encodings.append(encodings[0])
    
            result = runner.invoke(face_detection_cli.main, args=[image_file])
        self.assertEqual(result.exit_code, 0)
        self.assertTrue('obama_partial_face2.jpg' in result.output)
        self.assertTrue('obama.jpg' in result.output)
        self.assertTrue('obama2.jpg' in result.output)
        self.assertTrue('obama3.jpg' in result.output)
        self.assertTrue('biden.jpg' in result.output)
    
    # You can change this to any folder on your system
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg', 'gif'}