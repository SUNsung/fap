
        
            model.train_on_batch(x_train[:32], y_train[:32],
                         sample_weight=sample_weight[:32])
    model.test_on_batch(x_train[:32], y_train[:32],
                        sample_weight=sample_weight[:32])
    score = model.evaluate(x_test[test_ids, :], y_test[test_ids, :], verbose=0)
    assert(score < standard_score_sequential)
    
        x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
            inputs = np.random.random((num_samples, timesteps, input_size))
        initial_state = [np.random.random((num_samples, units))
                         for _ in range(num_states)]
        targets = np.random.random((num_samples, units))
        model.fit([inputs] + initial_state, targets)
    
    
@keras_test
def test_locallyconnected_2d():
    num_samples = 5
    filters = 3
    stack_size = 4
    num_row = 6
    num_col = 8
    padding = 'valid'
    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
    print('-')
print('inputs: integer tensor of shape (samples, max_length)')
print('inputs_train shape:', inputs_train.shape)
print('inputs_test shape:', inputs_test.shape)
print('-')
print('queries: integer tensor of shape (samples, max_length)')
print('queries_train shape:', queries_train.shape)
print('queries_test shape:', queries_test.shape)
print('-')
print('answers: binary (1 or 0) tensor of shape (samples, vocab_size)')
print('answers_train shape:', answers_train.shape)
print('answers_test shape:', answers_test.shape)
print('-')
print('Compiling...')
    
            generator_train_loss = np.mean(np.array(epoch_gen_loss), axis=0)
    
    
def copy_weights(teacher_model, student_model, layer_names):
    '''Copy weights from teacher_model to student_model,
     for layers with names listed in layer_names
    '''
    for name in layer_names:
        weights = teacher_model.get_layer(name=name).get_weights()
        student_model.get_layer(name=name).set_weights(weights)
    
        model = Sequential()
    model.add(layers.TimeDistributed(
        layers.Dense(y_train.shape[-1]), input_shape=(x_train.shape[1], x_train.shape[2])))
    model.compile(loss='hinge', optimizer='rmsprop')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert(history.history['loss'][-1] < 1.)
    
                # check state initialization
            layer = convolutional_recurrent.ConvLSTM2D(filters=filters,
                                                       kernel_size=(num_row, num_col),
                                                       data_format=data_format,
                                                       return_sequences=return_sequences)
            layer.build(inputs.shape)
            x = Input(batch_shape=inputs.shape)
            initial_state = layer.get_initial_state(x)
            y = layer(x, initial_state=initial_state)
            model = Model(x, y)
            assert model.predict(inputs).shape == layer.compute_output_shape(inputs.shape)
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
        def _finish(self, request):
        self.concurrent -= 1
        if not request.finished and not request._disconnected:
            request.finish()
    
        def parse(self, response):
        for link in self.link_extractor.extract_links(response):
            yield scrapy.Request(link.url, callback=self.parse)

    
                if line.startswith('@'):
                name, args = re.match(r'@(\w+)\s*(.*)', line).groups()
                args = re.split(r'\s+', args)
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
        def handleHeader(self, key, value):
        self.headers.appendlist(key, value)
    
        def process_request(self, request, spider):
        for k, v in self._headers:
            request.headers.setdefault(k, v)

    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth

    
        @classmethod
    def from_settings(cls, settings):
        debug = settings.getbool('DUPEFILTER_DEBUG')
        return cls(job_dir(settings), debug)
    
        def item_scraped(self, item, spider):
        self.counter['itemcount'] += 1
        if self.counter['itemcount'] == self.close_on['itemcount']:
            self.crawler.engine.close_spider(spider, 'closespider_itemcount')
    
                if self.config.PROXY_TYPE == 'HTTP':
                proxy_type = socks.HTTP
            elif self.config.PROXY_TYPE == 'SOCKS4':
                proxy_type = socks.SOCKS4
            elif self.config.PROXY_TYPE == 'SOCKS5':
                proxy_type = socks.SOCKS5
            else:
                self.logger.error('proxy type %s unknown, disable proxy', self.config.PROXY_TYPE)
                raise Exception()
    
    RecognitionException are generated, when a recognizer encounters incorrect
or unexpected input.
    
    
    def recover(self, input, re):
        '''
        Recover from an error found on the input stream.  This is
        for NoViableAlt and mismatched symbol exceptions.  If you enable
        single token insertion and deletion, this will usually not
        handle mismatched symbol exceptions but there could be a mismatched
        token that the match() routine could not recover from.
        '''
        
        # PROBLEM? what if input stream is not the same as last time
        # perhaps make lastErrorIndex a member of input
        if self._state.lastErrorIndex == input.index():
            # uh oh, another error at same token index; must be a case
            # where LT(1) is in the recovery token set so nothing is
            # consumed; consume a single token so at least to prevent
            # an infinite loop; this is a failsafe.
            input.consume()
    
        >>> from fractions import Fraction as F
    >>> _sum([F(2, 3), F(7, 5), F(1, 4), F(5, 6)])
    (<class 'fractions.Fraction'>, Fraction(63, 20), 4)
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
            rd, wr = self.make_socketpair()
    
    T_CV2 = ClassVar[int]
T_CV3 = ClassVar
    
        def test_stdin_stdout(self):
        args = sys.executable, '-m', 'json.tool'
        with Popen(args, stdin=PIPE, stdout=PIPE, stderr=PIPE) as proc:
            out, err = proc.communicate(self.data.encode())
        self.assertEqual(out.splitlines(), self.expect.encode().splitlines())
        self.assertEqual(err, b'')
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
            # simple test to validate param value
        if param in self._static_method_choices.keys():
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
    
def evaluate_proposal_file(dataset, proposal_file, output_dir):
    '''Evaluate box proposal average recall.'''
    roidb = dataset.get_roidb(gt=True, proposal_file=proposal_file)
    results = task_evaluation.evaluate_box_proposals(dataset, roidb)
    task_evaluation.log_box_proposal_results(results)
    recall_file = os.path.join(output_dir, 'rpn_proposal_recall.pkl')
    save_object(results, recall_file)
    return results

    
            pre_nms_topn = min(cfg.RETINANET.PRE_NMS_TOP_N, len(candidate_inds))
        inds = np.argpartition(
            cls_prob_ravel[candidate_inds], -pre_nms_topn)[-pre_nms_topn:]
        inds = candidate_inds[inds]
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
    
def _get_image_blob(roidb):
    '''Builds an input blob from the images in the roidb at the specified
    scales.
    '''
    num_images = len(roidb)
    # Sample random scales to use for each image in this batch
    scale_inds = np.random.randint(
        0, high=len(cfg.TRAIN.SCALES), size=num_images
    )
    processed_ims = []
    im_scales = []
    for i in range(num_images):
        im = cv2.imread(roidb[i]['image'])
        assert im is not None, \
            'Failed to read image \'{}\''.format(roidb[i]['image'])
        if roidb[i]['flipped']:
            im = im[:, ::-1, :]
        target_size = cfg.TRAIN.SCALES[scale_inds[i]]
        im, im_scale = blob_utils.prep_im_for_blob(
            im, cfg.PIXEL_MEANS, target_size, cfg.TRAIN.MAX_SIZE
        )
        im_scales.append(im_scale)
        processed_ims.append(im)
    
    
def add_retinanet_blobs(blobs, im_scales, roidb, image_width, image_height):
    '''Add RetinaNet blobs.'''
    # RetinaNet is applied to many feature levels, as in the FPN paper
    k_max, k_min = cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.RPN_MIN_LEVEL
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    num_aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    aspect_ratios = cfg.RETINANET.ASPECT_RATIOS
    anchor_scale = cfg.RETINANET.ANCHOR_SCALE