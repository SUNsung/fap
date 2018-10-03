
        
          # Convert from figure to an numpy array width x height x 3 (last for RGB)
  f.canvas.draw()
  data = np.fromstring(f.canvas.tostring_rgb(), dtype=np.uint8, sep='')
  data_wxhx3 = data.reshape(f.canvas.get_width_height()[::-1] + (3,))
  plt.close()
    
    
rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
u_rng = np.random.RandomState(seed=FLAGS.synth_data_seed+1)
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N  # must be same N as in trained model (provided example is N = 50)
nreplications = FLAGS.nreplications
E = nreplications * C  # total number of trials
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
batch_size = 1  # gives one example per ntrial
    
    # generate trials for both RNNs
rates_a, x0s_a, _ = generate_data(rnn_a, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_a = spikify_data(rates_a, rng, rnn_a['dt'], rnn_a['max_firing_rate'])
    
      # Visualize this in the morning.
  all_data_nxtc = np.zeros([nchannels_all, ntime * nconditions_all])
  for name, dataset in datasets.items():
    cidx_s = channel_idxs[name][0]
    cidx_f = channel_idxs[name][1]
    for cname in conditions_all[name]:
      cidxs = np.argwhere(all_conditions_list == cname)
      if cidxs.shape[0] > 0:
        cidx = cidxs[0][0]
        all_tidxs = np.arange(0, ntime+1) + cidx*ntime
        all_data_nxtc[cidx_s:cidx_f, all_tidxs[0]:all_tidxs[-1]] = \
            avg_data_all[name][cname].T
    
      def __init__(self, filename, max_word_length):
    super(CharsVocabulary, self).__init__(filename)
    self._max_word_length = max_word_length
    chars_set = set()
    
      return word_to_id
    
      Args:
    values: Value given by the Wasserstein Discriminator of shape [batch_size,
      sequence_length] to an imputed batch (real and fake).
    is_real_input: tf.bool Tensor of shape [batch_size, sequence_length]. If
      true, it indicates that the label is known.
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
        def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        def print_row(fields, positions):
        line = ''
        for i in range(len(fields)):
            if i > 0:
                line = line[:-1] + ' '
            line += str(fields[i])
            line = line[:positions[i]]
            line += ' ' * (positions[i] - len(line))
        print_fn(line)
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
    
def create_multi_input_model_from(layer1, layer2):
    input_1 = Input(shape=(data_dim,))
    input_2 = Input(shape=(data_dim,))
    out1 = layer1(input_1)
    out2 = layer2(input_2)
    out = Average()([out1, out2])
    model = Model([input_1, input_2], out)
    model.add_loss(K.mean(out2))
    model.add_loss(1)
    model.add_loss(1)
    return model
    
        # Masking
        This layer supports masking for input data with a variable number
        of timesteps. To introduce masks to your data,
        use an [Embedding](embeddings.md) layer with the `mask_zero` parameter
        set to `True`.
    
    def generate_movies(n_samples=1200, n_frames=15):
    row = 80
    col = 80
    noisy_movies = np.zeros((n_samples, n_frames, row, col, 1), dtype=np.float)
    shifted_movies = np.zeros((n_samples, n_frames, row, col, 1),
                              dtype=np.float)
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))
    
    if K.image_data_format() == 'channels_first':
    x_train = x_train.reshape(x_train.shape[0], 1, img_rows, img_cols)
    x_test = x_test.reshape(x_test.shape[0], 1, img_rows, img_cols)
    input_shape = (1, img_rows, img_cols)
else:
    x_train = x_train.reshape(x_train.shape[0], img_rows, img_cols, 1)
    x_test = x_test.reshape(x_test.shape[0], img_rows, img_cols, 1)
    input_shape = (img_rows, img_cols, 1)
    
        web_acls = list_web_acls(client, module)
    name = module.params['name']
    if name:
        web_acls = [web_acl for web_acl in web_acls if
                    web_acl['Name'] == name]
        if not web_acls:
            module.fail_json(msg='WAF named %s not found' % name)
    module.exit_json(wafs=[get_web_acl(client, module, web_acl['WebACLId'])
                           for web_acl in web_acls])
    
        def get_stack_policy(self, stack_name):
        try:
            response = self.client.get_stack_policy(StackName=stack_name)
            stack_policy = response.get('StackPolicyBody')
            if stack_policy:
                return json.loads(stack_policy)
            return dict()
        except Exception as e:
            self.module.fail_json(msg='Error getting stack policy - ' + str(e), exception=traceback.format_exc())
    
        def __init__(self, rule, targets):
        self.rule = rule
        self.targets = targets
    
            if dynamo_table_exists(table):
            result['changed'] = update_dynamo_table(table, throughput=throughput, check_mode=module.check_mode, global_indexes=global_indexes)
        else:
            if not module.check_mode:
                Table.create(table_name, connection=connection, schema=schema, throughput=throughput, indexes=indexes, global_indexes=global_indexes)
            result['changed'] = True
    
    - name: create key pair using key_material obtained using 'file' lookup plugin
  ec2_key:
    name: my_keypair
    key_material: '{{ lookup('file', '/path/to/public_key/id_rsa.pub') }}'
    
    
RETURN = '''
placement_group:
  description: Placement group attributes
  returned: when state != absent
  type: complex
  contains:
    name:
      description: PG name
      type: string
      sample: my-cluster
    state:
      description: PG state
      type: string
      sample: 'available'
    strategy:
      description: PG strategy
      type: string
      sample: 'cluster'
    
        By default this will get the strings from the blns.txt file
    
        # The font size ('10pt', '11pt' or '12pt').
    #'pointsize': '10pt',
    
        # Display the results
    for top, right, bottom, left in face_locations:
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
    known_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'