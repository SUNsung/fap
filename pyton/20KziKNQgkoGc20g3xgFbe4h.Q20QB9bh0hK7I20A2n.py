
        
        
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
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
    
    
def create_network(n_dense=6,
                   dense_units=16,
                   activation='selu',
                   dropout=AlphaDropout,
                   dropout_rate=0.1,
                   kernel_initializer='lecun_normal',
                   optimizer='adam',
                   num_classes=1,
                   max_words=max_words):
    '''Generic function to create a fully-connected neural network.
    
    
def test_sparse_categorical_crossentropy_4d():
    y_pred = K.variable(np.array([[[[0.7, 0.1, 0.2],
                                    [0.0, 0.3, 0.7],
                                    [0.1, 0.1, 0.8]],
                                   [[0.3, 0.7, 0.0],
                                    [0.3, 0.4, 0.3],
                                    [0.2, 0.5, 0.3]],
                                   [[0.8, 0.1, 0.1],
                                    [1.0, 0.0, 0.0],
                                    [0.4, 0.3, 0.3]]]]))
    y_true = K.variable(np.array([[[0, 1, 0],
                                   [2, 1, 0],
                                   [2, 2, 1]]]))
    expected_loss = - (np.log(0.7) + np.log(0.3) + np.log(0.1) +
                       np.log(K.epsilon()) + np.log(0.4) + np.log(0.2) +
                       np.log(0.1) + np.log(K.epsilon()) + np.log(0.3)) / 9
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
            if body_expected or body_present:
            if request.method == 'GET':
                # Even with `allow_nonstandard_methods` we disallow
                # GET with a body (because libcurl doesn't allow it
                # unless we use CUSTOMREQUEST). While the spec doesn't
                # forbid clients from sending a body, it arguably
                # disallows the server from doing anything with them.
                raise ValueError('Body must be None for GET request')
            request_buffer = BytesIO(utf8(request.body or ''))
    
            Construct a timeout HTTPResponse when a timeout occurs.
    
        @gen_test
    def test_future_http_error(self):
        with self.assertRaises(HTTPError) as context:
            yield self.http_client.fetch(self.get_url('/notfound'))
        self.assertEqual(context.exception.code, 404)
        self.assertEqual(context.exception.response.code, 404)
    
    ********************************************************************
'''
    
        def set_close_callback(self, callback):
        # WSGI has no facility for detecting a closed connection mid-request,
        # so we can simply ignore the callback.
        pass
    
        def _oauth_access_token_url(self, request_token):
        consumer_token = self._oauth_consumer_token()
        url = self._OAUTH_ACCESS_TOKEN_URL
        args = dict(
            oauth_consumer_key=escape.to_basestring(consumer_token['key']),
            oauth_token=escape.to_basestring(request_token['key']),
            oauth_signature_method='HMAC-SHA1',
            oauth_timestamp=str(int(time.time())),
            oauth_nonce=escape.to_basestring(binascii.b2a_hex(uuid.uuid4().bytes)),
            oauth_version='1.0',
        )
        if 'verifier' in request_token:
            args['oauth_verifier'] = request_token['verifier']
    
        Note that ``@return_future`` and ``@gen.engine`` can be applied to the
    same function, provided ``@return_future`` appears first.  However,
    consider using ``@gen.coroutine`` instead of this combination.
    
        .. testcode::
    
            Returns a Future, which raises `tornado.util.TimeoutError` after a
        timeout.
        '''
        return self._finished.wait(timeout)
    
            The ``sockets`` parameter is a list of socket objects such as
        those returned by `~tornado.netutil.bind_sockets`.
        `add_sockets` is typically used in combination with that
        method and `tornado.process.fork_processes` to provide greater
        control over the initialization of a multi-process server.
        '''
        for sock in sockets:
            self._sockets[sock.fileno()] = sock
            self._handlers[sock.fileno()] = add_accept_handler(
                sock, self._handle_connection)
    
            result = self.run_gen(f)
        self.assertEqual(result, 42)
    
            if cfg.VIS:
            im_name = os.path.splitext(os.path.basename(entry['image']))[0]
            vis_utils.vis_one_image(
                im[:, :, ::-1],
                '{:d}_{:s}'.format(i, im_name),
                os.path.join(output_dir, 'vis'),
                cls_boxes_i,
                segms=cls_segms_i,
                keypoints=cls_keyps_i,
                thresh=cfg.VIS_TH,
                box_alpha=0.8,
                dataset=dataset,
                show_class=True
            )
    
        gt_overlaps = np.sort(gt_overlaps)
    if thresholds is None:
        step = 0.05
        thresholds = np.arange(0.5, 0.95 + 1e-5, step)
    recalls = np.zeros_like(thresholds)
    # compute recall for each iou threshold
    for i, t in enumerate(thresholds):
        recalls[i] = (gt_overlaps >= t).sum() / float(num_pos)
    # ar = 2 * np.trapz(recalls, thresholds)
    ar = recalls.mean()
    return {'ar': ar, 'recalls': recalls, 'thresholds': thresholds,
            'gt_overlaps': gt_overlaps, 'num_pos': num_pos}
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    ... -> RoI ----\
                -> RoIFeatureXform -> keypoint head -> keypoint output -> loss
... -> Feature /
       Map
    
    
def build_data_parallel_model(model, single_gpu_build_func):
    '''Build a data parallel model given a function that builds the model on a
    single GPU.
    '''
    if model.only_build_forward_pass:
        single_gpu_build_func(model)
    elif model.train:
        all_loss_gradients = _build_forward_graph(model, single_gpu_build_func)
        # Add backward pass on all GPUs
        model.AddGradientOperators(all_loss_gradients)
        if cfg.NUM_GPUS > 1:
            _add_allreduce_graph(model)
        for gpu_id in range(cfg.NUM_GPUS):
            # After allreduce, all GPUs perform SGD updates on their identical
            # params and gradients in parallel
            with c2_utils.NamedCudaScope(gpu_id):
                add_single_gpu_param_update_ops(model, gpu_id)
    else:
        # Test-time network operates on single GPU
        # Test-time parallelism is implemented through multiprocessing
        with c2_utils.NamedCudaScope(model.target_gpu_id):
            single_gpu_build_func(model)
    
            # Same story for the scores:
        #   - scores are (A, H, W) format from conv output
        #   - transpose to (H, W, A)
        #   - reshape to (H * W * A, 1) where rows are ordered by (H, W, A)
        #     to match the order of anchors and bbox_deltas
        scores = scores.transpose((1, 2, 0)).reshape((-1, 1))
    
    
def _expand_to_class_specific_mask_targets(masks, mask_class_labels):
    '''Expand masks from shape (#masks, M ** 2) to (#masks, #classes * M ** 2)
    to encode class specific mask targets.
    '''
    assert masks.shape[0] == mask_class_labels.shape[0]
    M = cfg.MRCNN.RESOLUTION