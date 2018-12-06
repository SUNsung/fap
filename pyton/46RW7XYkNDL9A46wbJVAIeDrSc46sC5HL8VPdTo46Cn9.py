
        
            # Define the loss function and the optimization algorithm
    self.cross_entropies = tf.nn.sparse_softmax_cross_entropy_with_logits(
        logits=self.scores, labels=self.labels)
    self.cost = tf.reduce_sum(self.cross_entropies, name='cost')
    self.global_step = tf.Variable(0, name='global_step', trainable=False)
    self.optimizer = tf.train.AdamOptimizer()
    self.train_op = self.optimizer.minimize(
        self.cost, global_step=self.global_step)
    
      plt.plot(vals_txn[:,0:n_to_plot] + scale*np.array(range(n_to_plot)),
           color=color, lw=1.0)
  plt.axis('tight')
  if title:
    plt.title(title)
    
    
# If there are observed inputs, there are two ways to add that observed
# input to the model.  The first is by treating as something to be
# inferred, and thus encoding the observed input via the encoders, and then
# input to the generator via the 'inferred inputs' channel.  Second, one
# can input the input directly into the generator.  This has the downside
# of making the generation process strictly dependent on knowing the
# observed input for any generated trial.
flags.DEFINE_boolean('inject_ext_input_to_gen',
                     INJECT_EXT_INPUT_TO_GEN,
                     'Should observed inputs be input to model via encoders, \
                     or injected directly into generator?')
    
      def get_batch(self, batch_size, num_steps, pad=False, forever=True):
    return get_batch(self._get_sentence(forever), batch_size, num_steps,
                     self.vocab.max_word_length, pad=pad)
    
          # if time > maxlen, return all true vector
      done = tf.cond(
          tf.greater(time, maximum_length),
          lambda: tf.ones([
              batch_size,], dtype=tf.bool), lambda: done)
      return (done, cell_state, next_input, cell_output, context_state)
    
    
@bp.route('/<int:id>/update', methods=('GET', 'POST'))
@login_required
def update(id):
    '''Update a post if the current user is the author.'''
    post = get_post(id)
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('', '', b'Username is required.'),
    ('a', '', b'Password is required.'),
    ('test', 'test', b'already registered'),
))
def test_register_validate_input(client, username, password, message):
    response = client.post(
        '/auth/register',
        data={'username': username, 'password': password}
    )
    assert message in response.data
    
    
def test_delete(client, auth, app):
    auth.login()
    response = client.post('/1/delete')
    assert response.headers['Location'] == 'http://localhost/'
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    import matplotlib.pyplot as plt
    
            plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 1]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 1]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 1]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 1]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('Time [sec]')
        plt.title('Training time - %d features' % list_n_features[j])
        i += 1
    
    print('='*80 + '\n#' + '    Text vectorizers benchmark' + '\n' + '='*80 + '\n')
print('Using a subset of the 20 newsrgoups dataset ({} documents).'
      .format(len(text)))
print('This benchmarks runs in ~20 min ...')
    
    
def run_cmds(cmds):
    log = Log()
    cmd_pl = cmds.split('\n')
    outs = []
    for cmd in cmd_pl:
        if not cmd:
            continue
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
                    if self.eot[s] >= 0:
                    #print 'EOT to %d' % self.eot[s]
                    
                    s = self.eot[s]
                    input.consume()
                    continue
    
        def getUnexpectedToken(self):
        return self.token
    
    def _check_arg_types(funcname, *args):
    hasstr = hasbytes = False
    for s in args:
        if isinstance(s, str):
            hasstr = True
        elif isinstance(s, bytes):
            hasbytes = True
        else:
            raise TypeError('%s() argument must be str or bytes, not %r' %
                            (funcname, s.__class__.__name__)) from None
    if hasstr and hasbytes:
        raise TypeError('Can't mix strings and bytes in path components') from None

    
        colon = _get_colon(s)
    
        The decoding-related arguments have the same semantics as those of
    bytes.decode().
    '''
    resource = _normalize_path(resource)
    package = _get_package(package)
    with open_text(package, resource, encoding, errors) as fp:
        return fp.read()
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
        # Create queues
    task_queue = Queue()
    done_queue = Queue()
    
        logger.info('Computing bounding-box regression targets...')
    add_bbox_regression_targets(roidb)
    logger.info('done')
    
    
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
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.FPN as FPN
import detectron.utils.blob as blob_utils
    
    
class CollectAndDistributeFpnRpnProposalsOp(object):
    def __init__(self, train):
        self._train = train
    
        bbox_targets, bbox_inside_weights = _expand_bbox_targets(
        roidb['bbox_targets'][keep_inds, :]
    )
    bbox_outside_weights = np.array(
        bbox_inside_weights > 0, dtype=bbox_inside_weights.dtype
    )
    
    from detectron.core.config import cfg
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.roi_data.retinanet as retinanet_roi_data
import detectron.roi_data.rpn as rpn_roi_data
import detectron.utils.blob as blob_utils
    
    
if __name__ == '__main__':
    workspace.GlobalInit(['caffe2', '--caffe2_log_level=0'])
    logger = setup_logging(__name__)
    logger.setLevel(logging.DEBUG)
    logging.getLogger('detectron.roi_data.loader').setLevel(logging.INFO)
    np.random.seed(cfg.RNG_SEED)
    args = parse_args()
    logger.info('Called with args:')
    logger.info(args)
    if args.cfg_file is not None:
        merge_cfg_from_file(args.cfg_file)
    if args.opts is not None:
        merge_cfg_from_list(args.opts)
    assert_and_infer_cfg()
    logger.info('Running with config:')
    logger.info(pprint.pformat(cfg))
    main(args)

    
    
class TestMergeSort(object):