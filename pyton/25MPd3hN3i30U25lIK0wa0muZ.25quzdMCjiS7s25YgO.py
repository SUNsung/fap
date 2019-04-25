
        
        password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
        with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
    tensorboard = TensorBoard(batch_size=batch_size,
                          embeddings_freq=1,
                          embeddings_layer_names=['features'],
                          embeddings_metadata='metadata.tsv',
                          embeddings_data=x_test)
    
        if K.image_data_format() == 'channels_last':
        x_train = x_train.transpose(0, 2, 3, 1)
        x_test = x_test.transpose(0, 2, 3, 1)
    
    
def l1_l2(l1=0.01, l2=0.01):
    return L1L2(l1=l1, l2=l2)
    
        # Test that writing over the input data works predictably
    for mode in ['torch', 'tf']:
        x = np.random.uniform(0, 255, (2, 10, 10, 3))
        xint = x.astype('int')
        x2 = utils.preprocess_input(x, mode=mode)
        xint2 = utils.preprocess_input(xint)
        assert_allclose(x, x2)
        assert xint.astype('float').max() != xint2.max()
    # Caffe mode works differently from the others
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int')
    x2 = utils.preprocess_input(x, data_format='channels_last', mode='caffe')
    xint2 = utils.preprocess_input(xint)
    assert_allclose(x, x2[..., ::-1])
    assert xint.astype('float').max() != xint2.max()
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
    
def test_regularization_shared_layer():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
    model.compile(loss=keras.losses.categorical_crossentropy,
              optimizer=keras.optimizers.Adadelta(),
              metrics=['accuracy'])
    
    # Build the Decoder Model
latent_inputs = Input(shape=(latent_dim,), name='decoder_input')
x = Dense(shape[1] * shape[2] * shape[3])(latent_inputs)
x = Reshape((shape[1], shape[2], shape[3]))(x)
    
    
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
    
        return blob_out
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
    return loss_gradients
    
    logger = logging.getLogger(__name__)
    
        kp_fg_rois_per_this_image = np.minimum(fg_rois_per_image, kp_fg_inds.size)
    if kp_fg_inds.size > kp_fg_rois_per_this_image:
        kp_fg_inds = np.random.choice(
            kp_fg_inds, size=kp_fg_rois_per_this_image, replace=False
        )
    
            print('Test: Pop on no elements')
        assert_equal(stacks.pop(), None)
    
            print('Success: test_sort_stack')
    
    		print('Test: min node')
		assert_equal(myTree.minNode(), 1)
    
    
def get_service_dependents(service_dict, services):
    name = service_dict['name']
    return [
        service for service in services
        if (name in get_service_names(service.get('links', [])) or
            name in get_service_names_from_volumes_from(service.get('volumes_from', [])) or
            name == get_service_name_from_network_mode(service.get('network_mode')) or
            name == get_service_name_from_network_mode(service.get('pid')) or
            name in service.get('depends_on', []))
    ]
    
    
def warn_for_external_links(name, service):
    external_links = service.get('external_links')
    if external_links:
        log.warn(
            'Service {name} has external_links: {ext}, which now work '
            'slightly differently. In particular, two containers must be '
            'connected to at least one network in common in order to '
            'communicate, even if explicitly linked together.\n\n'
            'Either connect the external container to your app's default '
            'network, or connect both the external container and your '
            'service's containers to a pre-existing network. See '
            'https://docs.docker.com/compose/networking/ '
            'for more on how to do this.'
            .format(name=name, ext=external_links))
    
        if answer == 'y' or answer == 'yes':
        return True
    elif answer == 'n' or answer == 'no':
        return False
    elif answer == '':
        return default
    else:
        return None

    
        return create_custom_host_file(client, filename, content)

    
        def test_docker_client_no_home(self):
        with mock.patch.dict(os.environ):
            try:
                del os.environ['HOME']
            except KeyError:
                pass
            docker_client(os.environ)
    
        def test_format_unicode_info(self):
        message = b'\xec\xa0\x95\xec\x88\x98\xec\xa0\x95'
        output = self.formatter.format(make_log_record(logging.INFO, message))
        assert output == message.decode('utf-8')
    
    from compose.cli import verbose_proxy
from tests import unittest
    
    
class ServerPlayback:
    def __init__(self):
        self.flowmap = {}
        self.configured = False
    
            self.id = str(uuid.uuid4())
        self.mitmcert = None
        self.timestamp_start = time.time()
        self.timestamp_end = None
        self.timestamp_tls_setup = None
        self.sni = None
        self.cipher_name = None
        self.alpn_proto_negotiated = None
        self.tls_version = None
        self.tls_extensions = None
    
    
class Reply:
    '''
    Messages sent through a channel are decorated with a 'reply' attribute. This
    object is used to respond to the message through the return channel.
    '''
    def __init__(self, obj):
        self.obj = obj
        # Spawn an event loop in the current thread
        self.q = queue.Queue()
    
        def __init__(self, **kwargs):
        self.names = kwargs
        self.values = {}
        for k, v in kwargs.items():
            self.values[v] = k
        if len(self.names) != len(self.values):
            raise ValueError('Duplicate values not allowed.')
    
    from mitmproxy import contentviews
from mitmproxy import ctx
from mitmproxy import flowfilter
from mitmproxy import io, flow
from mitmproxy import version
from mitmproxy.tools.web.app import flow_to_json