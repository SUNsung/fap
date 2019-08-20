
        
          Raises:
    ValueError: if metric is not in the metric class dictionary.
  '''
  eval_metric_fn_keys = eval_config.metrics_set
  if not eval_metric_fn_keys:
    eval_metric_fn_keys = [EVAL_DEFAULT_METRIC]
  evaluators_list = []
  for eval_metric_fn_key in eval_metric_fn_keys:
    if eval_metric_fn_key not in EVAL_METRICS_CLASS_DICT:
      raise ValueError('Metric not found: {}'.format(eval_metric_fn_key))
    if eval_metric_fn_key == 'oid_challenge_object_detection_metrics':
      logging.warning(
          'oid_challenge_object_detection_metrics is deprecated; '
          'use oid_challenge_detection_metrics instead'
      )
    if eval_metric_fn_key == 'oid_V2_detection_metrics':
      logging.warning(
          'open_images_V2_detection_metrics is deprecated; '
          'use oid_V2_detection_metrics instead'
      )
    evaluators_list.append(
        EVAL_METRICS_CLASS_DICT[eval_metric_fn_key](categories=categories))
  return evaluators_list
    
        with tf.device(deploy_config.optimizer_device()):
      training_optimizer, optimizer_summary_vars = optimizer_builder.build(
          train_config.optimizer)
      for var in optimizer_summary_vars:
        tf.summary.scalar(var.op.name, var, family='LearningRate')
    
        Args:
      is_training: Indicates whether the Mask head is in training mode.
      num_classes: number of classes.  Note that num_classes *does not*
        include the background category, so if groundtruth labels take values
        in {0, 1, .., K-1}, num_classes=K (and not K+1, even though the
        assigned classification targets can range from {0,... K}).
      freeze_batchnorm: Whether to freeze batch norm parameters during
        training or not. When training with a small batch size (e.g. 1), it is
        desirable to freeze batch norm update and use pretrained batch norm
        params.
      conv_hyperparams: A `hyperparams_builder.KerasLayerHyperparams` object
        containing hyperparameters for convolution ops.
      mask_height: Desired output mask height. The default value is 14.
      mask_width: Desired output mask width. The default value is 14.
      mask_prediction_num_conv_layers: Number of convolution layers applied to
        the image_features in mask prediction branch.
      mask_prediction_conv_depth: The depth for the first conv2d_transpose op
        applied to the image_features in the mask prediction branch. If set
        to 0, the depth of the convolution layers will be automatically chosen
        based on the number of object classes and the number of channels in the
        image features.
      masks_are_class_agnostic: Boolean determining if the mask-head is
        class-agnostic or not.
      convolve_then_upsample: Whether to apply convolutions on mask features
        before upsampling using nearest neighbor resizing. Otherwise, mask
        features are resized to [`mask_height`, `mask_width`] using bilinear
        resizing before applying convolutions.
      name: A string name scope to assign to the mask head. If `None`, Keras
        will auto-generate one from the class name.
    '''
    super(MaskRCNNMaskHead, self).__init__(name=name)
    self._is_training = is_training
    self._freeze_batchnorm = freeze_batchnorm
    self._num_classes = num_classes
    self._conv_hyperparams = conv_hyperparams
    self._mask_height = mask_height
    self._mask_width = mask_width
    self._mask_prediction_num_conv_layers = mask_prediction_num_conv_layers
    self._mask_prediction_conv_depth = mask_prediction_conv_depth
    self._masks_are_class_agnostic = masks_are_class_agnostic
    self._convolve_then_upsample = convolve_then_upsample
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    Available hooks:
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    r'''
The ``codes`` object defines a mapping from common names for HTTP statuses
to their numerical codes, accessible either as attributes or as dictionary
items.
>>> import requests
>>> requests.codes['temporary_redirect']
307
>>> requests.codes.teapot
418
>>> requests.codes['\o/']
200
    
            assert len(server.handler_results) == 0
    
    # 'setup.py publish' shortcut.
if sys.argv[-1] == 'publish':
    os.system('python setup.py sdist bdist_wheel')
    os.system('twine upload dist/*')
    sys.exit()
    
            :param request: The :class:`PreparedRequest <PreparedRequest>` to add headers to.
        :param kwargs: The keyword arguments from the call to send().
        '''
        pass
    
        with server as (host, port):
        url = u'http://{}:{}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{}/{}'.format(url, expected_path.decode('ascii'))
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:*')
    
            if not dns_api:
            self.dns = discovery.build('dns', 'v1',
                                       credentials=credentials,
                                       cache_discovery=False)
        else:
            self.dns = dns_api
    
    
class IntegrationTestsContext(certbot_context.IntegrationTestsContext):
    '''General fixture describing a certbot-nginx integration tests context'''
    def __init__(self, request):
        super(IntegrationTestsContext, self).__init__(request)
    
        # Execution of certbot in a self-contained workspace
    workspace = os.environ.get('WORKSPACE', os.path.join(os.getcwd(), '.certbot_test_workspace'))
    if not os.path.exists(workspace):
        print('--> Creating a workspace for certbot_test: {0}'.format(workspace))
        os.mkdir(workspace)
    else:
        print('--> Using an existing workspace for certbot_test: {0}'.format(workspace))
    config_dir = os.path.join(workspace, 'conf')
    
        else:
      testsuite.attrib['tests'] = str(num_errors + num_failures)
      if num_errors > 0:
        testcase = xml.etree.ElementTree.SubElement(testsuite, 'testcase')
        testcase.attrib['name'] = 'errors'
        error = xml.etree.ElementTree.SubElement(testcase, 'error')
        error.text = '\n'.join(self._junit_errors)
      if num_failures > 0:
        # Group failures by file
        failed_file_order = []
        failures_by_file = {}
        for failure in self._junit_failures:
          failed_file = failure[0]
          if failed_file not in failed_file_order:
            failed_file_order.append(failed_file)
            failures_by_file[failed_file] = []
          failures_by_file[failed_file].append(failure)
        # Create a testcase for each file
        for failed_file in failed_file_order:
          failures = failures_by_file[failed_file]
          testcase = xml.etree.ElementTree.SubElement(testsuite, 'testcase')
          testcase.attrib['name'] = failed_file
          failure = xml.etree.ElementTree.SubElement(testcase, 'failure')
          template = '{0}: {1} [{2}] [{3}]'
          texts = [template.format(f[1], f[2], f[3], f[4]) for f in failures]
          failure.text = '\n'.join(texts)