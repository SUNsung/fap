
        
              self.nc_lookup = tf.get_variable(
          name='nc_lookup',
          dtype=tf.float32,
          trainable=False,
          shape=self.nc_embeddings.shape)
    
    
data = { 'train_truth': data_train_truth,
         'valid_truth': data_valid_truth,
         'train_data' : data_train_spiking,
         'valid_data' : data_valid_spiking,
         'train_percentage' : train_percentage,
         'nreplications' : nreplications,
         'dt' : FLAGS.dt,
         'u_std' : FLAGS.u_std,
         'max_firing_rate': FLAGS.max_firing_rate,
         'train_inputs_u': train_inputs_u,
         'valid_inputs_u': valid_inputs_u,
         'train_outputs_u': train_outputs_u,
         'valid_outputs_u': valid_outputs_u,
         'conversion_factor' : FLAGS.max_firing_rate/(1.0/FLAGS.dt) }
    
      Returns:
    TensorFlow session and tensors dict.
  '''
  with tf.Graph().as_default():
    sys.stderr.write('Recovering graph.\n')
    with tf.gfile.FastGFile(gd_file, 'r') as f:
      s = f.read().decode()
      gd = tf.GraphDef()
      text_format.Merge(s, gd)
    
      def word_to_id(self, word):
    if word in self._word_to_id:
      return self._word_to_id[word]
    else:
      if word.lower() in self._word_to_id:
        return self._word_to_id[word.lower()]
    return self.unk
    
        # Create contiguous masked section to be False.
    for i, index in enumerate(start_mask):
      p[i, index:index + masked_length] = False
    
    
def percent_unique_ngrams_in_train(train_ngrams_dict, gen_ngrams_dict):
  '''Compute the percent of ngrams generated by the model that are
  present in the training text and are unique.'''
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        def test_download_with_Content_Length(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 10}
        ))
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        downloader.finish()
        assert not downloader.interrupted
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
        # --- backwards compatibility for scrapy.conf.settings singleton ---
    import warnings
    from scrapy.exceptions import ScrapyDeprecationWarning
    with warnings.catch_warnings():
        warnings.simplefilter('ignore', ScrapyDeprecationWarning)
        from scrapy import conf
        conf.settings = settings
    # ------------------------------------------------------------------
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
        from twisted.internet.ssl import AcceptableCiphers
    from twisted.internet._sslverify import (ClientTLSOptions,
                                             verifyHostname,
                                             VerificationError)
    try:
        # XXX: this import would fail on Debian jessie with system installed
        # service_identity library, due to lack of cryptography.x509 dependency
        # See https://github.com/pyca/service_identity/issues/21
        from service_identity.exceptions import CertificateError
        verification_errors = (CertificateError, VerificationError)
    except ImportError:
        verification_errors = VerificationError
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def bottleneck_gn_transformation(
    model,
    blob_in,
    dim_in,
    dim_out,
    stride,
    prefix,
    dim_inner,
    dilation=1,
    group=1
):
    '''Add a bottleneck transformation with GroupNorm to the model.'''
    # In original resnet, stride=2 is on 1x1.
    # In fb.torch resnet, stride=2 is on 3x3.
    (str1x1, str3x3) = (stride, 1) if cfg.RESNETS.STRIDE_1X1 else (1, stride)
    
    
def add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale):
    '''Add RPN outputs to a single scale model (i.e., no FPN).'''
    anchors = generate_anchors(
        stride=1. / spatial_scale,
        sizes=cfg.RPN.SIZES,
        aspect_ratios=cfg.RPN.ASPECT_RATIOS
    )
    num_anchors = anchors.shape[0]
    dim_out = dim_in
    # RPN hidden representation
    model.Conv(
        blob_in,
        'conv_rpn',
        dim_in,
        dim_out,
        kernel=3,
        pad=1,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    model.Relu('conv_rpn', 'conv_rpn')
    # Proposal classification scores
    model.Conv(
        'conv_rpn',
        'rpn_cls_logits',
        dim_in,
        num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    # Proposal bbox regression deltas
    model.Conv(
        'conv_rpn',
        'rpn_bbox_pred',
        dim_in,
        4 * num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    
    
def get_field_of_anchors(
    stride, anchor_sizes, anchor_aspect_ratios, octave=None, aspect=None
):
    global _threadlocal_foa
    if not hasattr(_threadlocal_foa, 'cache'):
        _threadlocal_foa.cache = {}
    
        if cfg.MRCNN.CLS_SPECIFIC_MASK:
        masks = _expand_to_class_specific_mask_targets(masks, mask_class_labels)