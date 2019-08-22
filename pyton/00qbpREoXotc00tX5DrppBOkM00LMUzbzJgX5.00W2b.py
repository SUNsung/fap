
        
            def route(self, rule, **options):
        '''Like :meth:`Flask.route` but for a blueprint.  The endpoint for the
        :func:`url_for` function is prefixed with the name of the blueprint.
        '''
    
        def from_envvar(self, variable_name, silent=False):
        '''Loads a configuration from an environment variable pointing to
        a configuration file.  This is basically just a shortcut with nicer
        error messages for this line of code::
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name, srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
        Implements the bridge to Jinja2.
    
    
class MethodViewType(type):
    '''Metaclass for :class:`MethodView` that determines what methods the view
    defines.
    '''
    
        @app.errorhandler(Exception)
    def handler(f):
        return flask.jsonify(str(f))
    
        @bp.route('/', defaults={'page': 1})
    @bp.route('/page/<int:page>')
    def something(page):
        return str(page)
    
        def fire():
        with app.test_client() as c:
            rv = c.get('/')
            assert rv.status_code == 200
            assert rv.data == b'<h1>42</h1>'
    
    
def is_wrapped_model(layer):
    return isinstance(layer, Wrapper) and isinstance(layer.layer, Model)
    
            If a Keras tensor is passed:
            - We call self._add_inbound_node().
            - If necessary, we `build` the layer to match
                the _keras_shape of the input(s).
            - We update the _keras_shape of every input tensor with
                its new shape (obtained via self.compute_output_shape).
                This is done as part of _add_inbound_node().
            - We update the _keras_history of the output tensor(s)
                with the current layer.
                This is done as part of _add_inbound_node().
    
    # Run training
model.compile(optimizer='adam', loss='categorical_crossentropy')
model.fit([encoder_input_data, decoder_input_data], decoder_target_data,
          batch_size=batch_size,
          epochs=epochs,
          validation_split=0.2)
# Save model
model.save('cnn_s2s.h5')
    
    - [Sequence to Sequence Learning with Neural Networks
   ](https://arxiv.org/abs/1409.3215)
- [Learning Phrase Representations using
    RNN Encoder-Decoder for Statistical Machine Translation
    ](https://arxiv.org/abs/1406.1078)
'''
from __future__ import print_function
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))

    
    # because we re-use the same instance `base_network`,
# the weights of the network
# will be shared across the two branches
processed_a = base_network(input_a)
processed_b = base_network(input_b)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_normal(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    std = np.sqrt(2. / fan_in)
    _runner(initializers.he_normal(), tensor_shape,
            target_mean=0., target_std=std)
    
    
def squash(x, axis=-1):
    '''The Squashing Function.
    The nonlinear activation function used in Capsule Network
    # Arguments
        x: Input Tensor.
        axis: Integer axis along which the squashing function is to be applied.
    
            Subclasses should override for any actions to run.
    
            im = cv2.imread(entry['image'])
        with c2_utils.NamedCudaScope(gpu_id):
            cls_boxes_i, cls_segms_i, cls_keyps_i = im_detect_all(
                model, im, box_proposals, timers
            )
    
    
def get_custom_ops_lib():
    '''Retrieve custom ops library.'''
    det_dir, _ = os.path.split(os.path.dirname(__file__))
    root_dir, _ = os.path.split(det_dir)
    custom_ops_lib = os.path.join(
        root_dir, 'build/libcaffe2_detectron_custom_ops_gpu.so')
    assert os.path.exists(custom_ops_lib), \
        'Custom ops lib not found at \'{}\''.format(custom_ops_lib)
    return custom_ops_lib
    
        if args.test_img is not None:
        verify_model(args, [net, init_net], args.test_img)
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
    
def add_fpn_ResNet101_conv5_body(model):
    return add_fpn_onto_conv_body(
        model, ResNet.add_ResNet101_conv5_body, fpn_level_info_ResNet101_conv5
    )
    
    
def _mkanchors(ws, hs, x_ctr, y_ctr):
    '''Given a vector of widths (ws) and heights (hs) around a center
    (x_ctr, y_ctr), output a set of anchors (windows).
    '''
    ws = ws[:, np.newaxis]
    hs = hs[:, np.newaxis]
    anchors = np.hstack(
        (
            x_ctr - 0.5 * (ws - 1),
            y_ctr - 0.5 * (hs - 1),
            x_ctr + 0.5 * (ws - 1),
            y_ctr + 0.5 * (hs - 1)
        )
    )
    return anchors
    
                result = json.loads(response.get_data())
            self.assertDictEqual(concurrency_data, result)
    
        # upload file to S3 (this should trigger a notification)
    test_key2 = 'testupload/dir1/testfile.txt'
    test_data2 = b'{'test': 'bucket_notification2'}'
    s3_client.upload_fileobj(BytesIO(test_data2), TEST_BUCKET_NAME_WITH_NOTIFICATIONS, test_key2)
    # receive, assert, and delete message from SQS
    receive_assert_delete(queue_url, [{'key': test_key2}, {'name': TEST_BUCKET_NAME_WITH_NOTIFICATIONS}], sqs_client)
    
            path, details = apigateway_listener.get_resource_for_path('/foo/bar', {'/foo/bar': {}, '/foo/{param1}': {}})
        self.assertEqual(path, '/foo/bar')