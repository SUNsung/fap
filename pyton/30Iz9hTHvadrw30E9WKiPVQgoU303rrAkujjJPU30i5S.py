
        
          # Overfitting
  d['keep_prob'] = flags.keep_prob
  d['temporal_spike_jitter_width'] = flags.temporal_spike_jitter_width
  d['l2_gen_scale'] = flags.l2_gen_scale
  d['l2_con_scale'] = flags.l2_con_scale
  # Underfitting
  d['kl_ic_weight'] = flags.kl_ic_weight
  d['kl_co_weight'] = flags.kl_co_weight
  d['kl_start_step'] = flags.kl_start_step
  d['kl_increase_steps'] = flags.kl_increase_steps
  d['l2_start_step'] = flags.l2_start_step
  d['l2_increase_steps'] = flags.l2_increase_steps
    
    
def spikify_data(data_e, rng, dt=1.0, max_firing_rate=100):
  ''' Apply spikes to a continuous dataset whose values are between 0.0 and 1.0
  Args:
    data_e: nexamples length list of NxT trials
    dt: how often the data are sampled
    max_firing_rate: the firing rate that is associated with a value of 1.0
  Returns:
    spikified_e: a list of length b of the data represented as spikes,
    sampled from the underlying poisson process.
    '''
    
      Args:
    sentence: Sentence words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
      This generates batch_size pointers into the raw PTB data, and allows
  minibatch iteration along these pointers.
    
      Args:
    hparams:  MaskGAN hyperparameters.
    learning_rate:  tf.Variable scalar learning rate.
    final_gen_objective:  Scalar final REINFORCE objective for the sequence.
    averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
    global_step:  global_step tf.Variable.
    
      for _, value in gen_ngrams_dict.iteritems():
    total_ngrams_produced += value
    
      ```
  dynamic_fn_train = attention_decoder_fn_train(encoder_state)
  outputs_train, state_train = dynamic_rnn_decoder(
      decoder_fn=dynamic_fn_train, ...)
  ```
    
          # Prediction is linear output for Discriminator.
      predictions = tf.contrib.layers.linear(outputs, 1, scope=vs)
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
        def __repr__(self):
        return str(dict(self.items()))
    
        def init_per_thread_state(self):
        # Ensure state is initialized just once per-thread
        if not hasattr(self._thread_local, 'init'):
            self._thread_local.init = True
            self._thread_local.last_nonce = ''
            self._thread_local.nonce_count = 0
            self._thread_local.chal = {}
            self._thread_local.pos = None
            self._thread_local.num_401_calls = None
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
        except botocore.exceptions.ClientError:
        pass
    
        invocations = dict(
        aliases='alias_details',
        all='all_details',
        config='config_details',
        mappings='mapping_details',
        policy='policy_details',
        versions='version_details',
    )
    
        if module.check_mode:
        device = dict(
            model_handle=None,
            address=device_ip,
            landscape='0x%x' % int(module.params.get('landscape'), 16))
        module.exit_json(changed=True, device=device)
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
    class Command(ScrapyCommand):
    
            assert len(self.args) in [1, 2, 3]
        self.obj_name = self.args[0] or None
        self.obj_type = self.objects[self.obj_name]
    
            # kept for old-style HTTP/1.0 downloader context twisted calls,
        # e.g. connectSSL()
        def getContext(self, hostname=None, port=None):
            return self.getCertificateOptions().getContext()
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
      if ShouldCheckNamespaceIndentation(nesting_state, is_namespace_indent_item,
                                     clean_lines.elided, line):
    CheckItemIndentationInNamespace(filename, clean_lines.elided,
                                    line, error)
    
    In Python, the interface we use is simply a callable, which is 'builtin' interface
in Python, and in normal circumstances we can simply use the class itself as
that callable, because classes are first class objects in Python.
    
    *TL;DR80
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
    # initialization of new graph search object
graph1 = GraphSearch(graph)
    
        def get_product_information(self, product):
        product_info = self.business_logic.product_information(product)
        if product_info:
            print('PRODUCT INFORMATION:')
            print(
                'Name: {0}, Price: {1:.2f}, Quantity: {2:}'.format(
                    product.title(), product_info.get('price', 0), product_info.get('quantity', 0)
                )
            )
        else:
            print('That product '{0}' does not exist in the records'.format(product))
    
    
if __name__ == '__main__':
    main()
    
        def dispatch(self, request):
        if request.type == Request.mobile_type:
            self.mobile_view.show_index_page()
        elif request.type == Request.tablet_type:
            self.tablet_view.show_index_page()
        else:
            print('cant dispatch the request')
    
        def test_extended_property_values_cloning(self):
        sample_object_1 = self.prototype.clone()
        sample_object_1.some_value = 'test string'
        sample_object_2 = self.prototype.clone()
        self.assertRaises(AttributeError, lambda: sample_object_2.some_value)
    
    
class ClassTest(unittest.TestCase):
    def setUp(self):
        self.dog = Dog()
        self.cat = Cat()
        self.human = Human()
        self.car = Car()
    
    
def add_fast_rcnn_losses(model):
    '''Add losses for RoI classification and bounding box regression.'''
    cls_prob, loss_cls = model.net.SoftmaxWithLoss(
        ['cls_score', 'labels_int32'], ['cls_prob', 'loss_cls'],
        scale=model.GetLossScale()
    )
    loss_bbox = model.net.SmoothL1Loss(
        [
            'bbox_pred', 'bbox_targets', 'bbox_inside_weights',
            'bbox_outside_weights'
        ],
        'loss_bbox',
        scale=model.GetLossScale()
    )
    loss_gradients = blob_utils.get_loss_gradients(model, [loss_cls, loss_bbox])
    model.Accuracy(['cls_prob', 'labels_int32'], 'accuracy_cls')
    model.AddLosses(['loss_cls', 'loss_bbox'])
    model.AddMetrics('accuracy_cls')
    return loss_gradients
    
    # Verify that we compute the same anchors as Shaoqing's matlab implementation:
#
#    >> load output/rpn_cachedir/faster_rcnn_VOC2007_ZF_stage1_rpn/anchors.mat
#    >> anchors
#
#    anchors =
#
#       -83   -39   100    56
#      -175   -87   192   104
#      -359  -183   376   200
#       -55   -55    72    72
#      -119  -119   136   136
#      -247  -247   264   264
#       -35   -79    52    96
#       -79  -167    96   184
#      -167  -343   184   360
    
    logger = logging.getLogger(__name__)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    '''Construct minibatches for Fast R-CNN training. Handles the minibatch blobs
that are specific to Fast R-CNN. Other blobs that are generic to RPN, etc.
are handled by their respecitive roi_data modules.
'''
    
                if k.find('retnet_cls_labels') >= 0:
                tmp = []
                # concat anchors within an image
                for i in range(0, len(v), A):
                    tmp.append(np.concatenate(v[i: i + A], axis=1))
                # concat images
                blobs[k] = np.concatenate(tmp, axis=0)
            else:
                # for the bbox branch elements [per FPN level],
                #  we have the targets and the fg boxes locations
                # in the shape: M x 4 where M is the number of fg locations in a
                # given image at the current FPN level. For the given level,
                # the bbox predictions will be. The elements in the list are in
                # order [[a0, ..., a9], [a0, ..., a9]]
                # Concatenate them to form M x 4
                blobs[k] = np.concatenate(v, axis=0)
    return True