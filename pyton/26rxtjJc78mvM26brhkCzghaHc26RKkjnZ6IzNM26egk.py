
        
        from mrjob.job import MRJob
    
            Emit key value pairs of the form:
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
      Args:
    records: a record list with TensorFlow examples.
    
    
  if truth_bxtxn is not None:
    plot_time_series(truth_bxtxn, bidx, n_to_plot=n_to_plot, color='k',
                     scale=scale)
    
      Args:
    d: hyperparameter dictionary
    
      if prefix_words.find('<S>') != 0:
    prefix_words = '<S> ' + prefix_words
    
      for batch in range(num_batches):
    x = np.zeros([batch_size, num_steps], dtype=np.int32)
    y = np.zeros([batch_size, num_steps], dtype=np.int32)
    w = np.zeros([batch_size, num_steps], dtype=np.float)
    
      if epoch_size == 0:
    raise ValueError('epoch_size == 0, decrease batch_size or num_steps')
    
    import train_mask_gan
from data import imdb_loader
from data import ptb_loader
    
    
def generator_GAN_loss(predictions):
  '''Generator GAN loss based on Discriminator predictions.'''
  return -tf.log(tf.reduce_mean(predictions))
    
    
def create_dis_pretrain_op(hparams, dis_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.dis_pretrain_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_pretrain_op = optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_pretrain_op
    
          elif FLAGS.generator_model == 'seq2seq_nas':
        # Encoder.
        gen_encoder_variable_maps = variable_mapping.gen_encoder_seq2seq_nas(
            hparams)
        gen_encoder_init_saver = tf.train.Saver(
            var_list=gen_encoder_variable_maps)
        # Decoder.
        gen_decoder_variable_maps = variable_mapping.gen_decoder_seq2seq_nas(
            hparams)
        gen_decoder_init_saver = tf.train.Saver(
            var_list=gen_decoder_variable_maps)
        init_savers['gen_encoder_init_saver'] = gen_encoder_init_saver
        init_savers['gen_decoder_init_saver'] = gen_decoder_init_saver
    
    
def evaluate_masks(
    json_dataset,
    all_boxes,
    all_segms,
    output_dir,
    use_salt=True,
    cleanup=False
):
    if cfg.CLUSTER.ON_CLUSTER:
        # On the cluster avoid saving these files in the job directory
        output_dir = '/tmp'
    res_file = os.path.join(
        output_dir, 'segmentations_' + json_dataset.name + '_results')
    if use_salt:
        res_file += '_{}'.format(str(uuid.uuid4()))
    res_file += '.json'
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
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
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
            if return_when == FIRST_EXCEPTION:
            waiter = _AllCompletedWaiter(pending_count, stop_on_exception=True)
        elif return_when == ALL_COMPLETED:
            waiter = _AllCompletedWaiter(pending_count, stop_on_exception=False)
        else:
            raise ValueError('Invalid return condition: %r' % return_when)
    
        def __init__(self, obj_name, obj, log_name=None, max_lines=10):
        self.obj_name = obj_name
        self.obj = obj
        self.max_lines = max_lines
        self.log = logging.getLogger(log_name or __name__)
    
        def __init__(self, destination, *args, **kwargs):
        super(BinaryDownloader, self).__init__(*args, **kwargs)
        self.destination = destination
        os.makedirs(self.destination, exist_ok=True)
    
        @pytest.mark.skipif(six.PY3, reason='Env values in Python 3 are already Unicode')
    def test_unicode_path_from_env(self):
        with mock.patch.dict(os.environ):
            os.environ['COMPOSE_FILE'] = b'\xe5\xb0\xb1\xe5\x90\x83\xe9\xa5\xad/docker-compose.yml'
            environment = Environment.from_env_file('.')
            assert get_config_path_from_options(
                '.', {}, environment
            ) == ['就吃饭/docker-compose.yml']

    
    from compose.cli import colors
from compose.cli.formatter import ConsoleWarningFormatter
from tests import unittest
    
    import unittest
    
    
class TestServicePort(object):
    def test_parse_dict(self):
        data = {
            'target': 8000,
            'published': 8000,
            'protocol': 'udp',
            'mode': 'global',
        }
        ports = ServicePort.parse(data)
        assert len(ports) == 1
        assert ports[0].repr() == data
    
        def test_parallel_execute(self):
        results, errors = parallel_execute(
            objects=[1, 2, 3, 4, 5],
            func=lambda x: x * 2,
            get_name=six.text_type,
            msg='Doubling',
        )
    
            self.assert_produces(reader, ['abc\n', 'def\n', 'ghi'])
    
    
def test_second():
    assert timeparse.timeparse('200s') == 200
    
    
def input_fn_builder(input_file, seq_length, is_training, drop_remainder):
  '''Creates an `input_fn` closure to be passed to TPUEstimator.'''
    
            # Empty lines are used as document delimiters
        if not line:
          all_documents.append([])
        tokens = tokenizer.tokenize(line)
        if tokens:
          all_documents[-1].append(tokens)