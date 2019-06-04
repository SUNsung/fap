
        
        
class HitCounts(MRJob):
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        def __init__(self, url, contents, child_urls):
        self.url = url
        self.contents = contents
        self.child_urls = child_urls
        self.signature = self.create_signature()
    
      x_embedding_id = tf.squeeze(features['x_embedding_id'], [-1])
  y_embedding_id = tf.squeeze(features['y_embedding_id'], [-1])
  nc_embedding_id = tf.squeeze(features['nc_embedding_id'], [-1])
  labels = tf.squeeze(features['rel_id'], [-1])
  path_counts = tf.to_float(tf.reshape(features['counts'], [batch_size, -1]))
    
      path_to_index = {p: i for i, p in enumerate(vocab)}
  return embeddings, path_to_index
    
        return nested_vars_dict
    
    
class IntegrationToBoundModel:
  def __init__(self, N):
    scale = 0.8 / float(N**0.5)
    self.N = N
    self.Wh_nxn = tf.Variable(tf.random_normal([N, N], stddev=scale))
    self.b_1xn = tf.Variable(tf.zeros([1, N]))
    self.Bu_1xn = tf.Variable(tf.zeros([1, N]))
    self.Wro_nxo = tf.Variable(tf.random_normal([N, 1], stddev=scale))
    self.bro_o = tf.Variable(tf.zeros([1]))
    
        # Convert indices to vocab_size dimensions.
    new_arr_batch[np.arange(sequence_length), indices_batch] = 1
  return new_arr
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
        out = bug_text + dev_text
    
    
class IqiyiIEWithCredentials(IqiyiIE):
    def _get_login_info(self):
        return 'foo', 'bar'
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
    import time
import datetime
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        state=dict(required=True, choices=['present', 'absent']),
        name=dict(required=True),
        description=dict(required=False),
        subnets=dict(required=False, type='list'),
    )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import camel_dict_to_snake_dict, get_aws_connection_info, boto3_conn
import json
import datetime
import sys
import re
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    state: absent
    name: ansible-firewall-policy
    
    from ansible.module_utils.opennebula import OpenNebulaModule
    
        module = AnsibleModule(
        argument_spec=dict(
            component=dict(required=True, aliases=['name']),
            version=dict(required=True),
            token=dict(required=True, no_log=True),
            state=dict(required=True, choices=['started', 'finished', 'failed']),
            hosts=dict(required=False, default=[socket.gethostname()], aliases=['host']),
            env=dict(required=False),
            owner=dict(required=False),
            description=dict(required=False),
            message=dict(required=False),
            source_system=dict(required=False, default='ansible'),
            validate_certs=dict(default='yes', type='bool'),
            url=dict(required=False, default='https://api.bigpanda.io'),
        ),
        supports_check_mode=True,
    )
    
            followed_count += 1
    
    # Optional dataset entry keys
_IM_PREFIX = 'image_prefix'
_DEVKIT_DIR = 'devkit_directory'
_RAW_DIR = 'raw_dir'
    
        return roidb
    
    
def add_stage(
    model,
    prefix,
    blob_in,
    n,
    dim_in,
    dim_out,
    dim_inner,
    dilation,
    stride_init=2
):
    '''Add a ResNet stage to the model by stacking n residual blocks.'''
    # e.g., prefix = res2
    for i in range(n):
        blob_in = add_residual_block(
            model,
            '{}_{}'.format(prefix, i),
            blob_in,
            dim_in,
            dim_out,
            dim_inner,
            dilation,
            stride_init,
            # Not using inplace for the last block;
            # it may be fetched externally or used by FPN
            inplace_sum=i < n - 1
        )
        dim_in = dim_out
    return blob_in, dim_in
    
    
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
    
    
def _ratio_enum(anchor, ratios):
    '''Enumerate a set of anchors for each aspect ratio wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    size = w * h
    size_ratios = size / ratios
    ws = np.round(np.sqrt(size_ratios))
    hs = np.round(ws * ratios)
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors
    
    
def fpn_rpn(model):
    logger.warn(
        'Deprecated: use `MODEL.TYPE: generalized_rcnn` with '
        '`MODEL.RPN_ONLY: True` and FPN enabled via configs'
    )
    return generalized_rcnn(model)
    
    
def _add_allreduce_graph(model):
    '''Construct the graph that performs Allreduce on the gradients.'''
    # Need to all-reduce the per-GPU gradients if training with more than 1 GPU
    all_params = model.TrainableParams()
    assert len(all_params) % cfg.NUM_GPUS == 0
    # The model parameters are replicated on each GPU, get the number
    # distinct parameter blobs (i.e., the number of parameter blobs on
    # each GPU)
    params_per_gpu = int(len(all_params) / cfg.NUM_GPUS)
    with c2_utils.CudaScope(0):
        # Iterate over distinct parameter blobs
        for i in range(params_per_gpu):
            # Gradients from all GPUs for this parameter blob
            gradients = [
                model.param_to_grad[p] for p in all_params[i::params_per_gpu]
            ]
            if len(gradients) > 0:
                if cfg.USE_NCCL:
                    model.net.NCCLAllreduce(gradients, gradients)
                else:
                    muji.Allreduce(model.net, gradients, reduced_affix='')
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
        cache_key = str(stride) + str(anchor_sizes) + str(anchor_aspect_ratios)
    if cache_key in _threadlocal_foa.cache:
        return _threadlocal_foa.cache[cache_key]
    
        if fg_inds.shape[0] > 0:
        # Class labels for the foreground rois
        mask_class_labels = blobs['labels_int32'][fg_inds]
        masks = blob_utils.zeros((fg_inds.shape[0], M**2), int32=True)
    
            if self.done is not None and not self.done and self.steps > 0:
            raise error.Error('Tried to reset environment which is not done. While the monitor is active for {}, you cannot call reset() unless the episode is over.'.format(self.env_id))
    
            obser, r, done, info = env.step(a)
        if r != 0:
            print('reward %0.3f' % r)
        total_reward += r
        window_still_open = env.render()
        if window_still_open==False: return False
        if done: break
        if human_wants_restart: break
        while human_sets_pause:
            env.render()
            time.sleep(0.1)
        time.sleep(0.1)
    print('timesteps %i reward %0.2f' % (total_timesteps, total_reward))
    
    # Top-down car dynamics simulation.
#
# Some ideas are taken from this great tutorial http://www.iforce2d.net/b2dtut/top-down-car by Chris Campbell.
# This simulation is a bit more detailed, with wheels rotation.
#
# Created by Oleg Klimov. Licensed on the same terms as the rest of OpenAI Gym.
    
    
class ShutdownException(Exception):
    pass
    
        def download_all(self, version):
        files = {
            'docker-compose-Darwin-x86_64': None,
            'docker-compose-Linux-x86_64': None,
            'docker-compose-Windows-x86_64.exe': None,
        }
    
        @no_cluster('inspect volume by name defect on Swarm Classic')
    def test_exists_external_aliased(self):
        vol = self.create_volume('volume01', external='composetest_alias01')
        assert vol.exists() is False
        vol.create()
        assert vol.exists() is True
    
        def test_format_return(self):
        expected = repr({'Id': 'ok'})
        actual = verbose_proxy.format_return({'Id': 'ok'}, 2)
        assert expected == actual
    
    
class ParallelTest(unittest.TestCase):