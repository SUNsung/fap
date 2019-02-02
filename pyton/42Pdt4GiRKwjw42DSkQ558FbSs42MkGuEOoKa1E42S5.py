  Args:
    records: a record list with TensorFlow examples.
    
        elif self.hparams.hidden_layers == 1:
    
    
def plot_lfads(train_bxtxd, train_model_vals,
               train_ext_input_bxtxi=None, train_truth_bxtxd=None,
               valid_bxtxd=None, valid_model_vals=None,
               valid_ext_input_bxtxi=None, valid_truth_bxtxd=None,
               bidx=None, cf=1.0, output_dist='poisson'):
    
    from utils import write_datasets
from synthetic_data_utils import add_alignment_projections, generate_data
from synthetic_data_utils import generate_rnn, get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, gaussify_data, split_list_by_inds
import matplotlib
import matplotlib.pyplot as plt
import scipy.signal
    
        input_ids, target_ids = word_ids[:, :-1], word_ids[:, 1:]
    input_char_ids = char_ids[:, :-1, :]
    
    # build the model
model = Sequential()
model.add(layers.Dense(256, input_shape=(784,)))
model.add(Antirectifier())
model.add(layers.Dropout(0.1))
model.add(layers.Dense(256))
model.add(Antirectifier())
model.add(layers.Dropout(0.1))
model.add(layers.Dense(num_classes))
model.add(layers.Activation('softmax'))
    
        def __call__(self, x):
        regularization = 0.
        if self.l1:
            regularization += K.sum(self.l1 * K.abs(x))
        if self.l2:
            regularization += K.sum(self.l2 * K.square(x))
        return regularization
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
             try:
             parallel_model = multi_gpu_model(model, cpu_merge=False)
             print('Training using multiple GPUs..')
         except:
             parallel_model = model
             print('Training using single GPU or CPU..')
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
    '''
Note:
batch_size is highly sensitive.
Only 2 epochs are needed as the dataset is very small.
'''
    
    The rest of the parameters are:
- input_len: the length of the generated input sequence
- lahead: the input sequence length that the LSTM
  is trained on for each output point
- batch_size, epochs: same parameters as in the model.fit(...) function
    
        Basic Usage:
        >>> import boto3
        >>> iam = boto3.client('iam')
        >>> name = 'server-cert-name'
        >>> results = get_server_certs(iam, name)
        {
            'upload_date': '2015-04-25T00:36:40+00:00',
            'server_certificate_id': 'ADWAJXWTZAXIPIMQHMJPO',
            'certificate_body': '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----',
            'server_certificate_name': 'server-cert-name',
            'expiration': '2017-06-15T12:00:00+00:00',
            'path': '/',
            'arn': 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
        }
    '''
    results = dict()
    try:
        if name:
            server_certs = [iam.get_server_certificate(ServerCertificateName=name)['ServerCertificate']]
        else:
            server_certs = iam.list_server_certificates()['ServerCertificateMetadataList']
    
    import os
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.oneandone import (
    get_monitoring_policy,
    get_server,
    OneAndOneResources,
    wait_for_resource_creation_completion
)
    
        return nat_rules
    
    
DOCUMENTATION = '''
---
module: vertica_configuration
version_added: '2.0'
short_description: Updates Vertica configuration parameters.
description:
    - Updates Vertica configuration parameters.
options:
  name:
    description:
        - Name of the parameter to update.
    required: true
    aliases: [parameter]
  value:
    description:
        - Value of the parameter to be set.
    required: true
  db:
    description:
        - Name of the Vertica database.
  cluster:
    description:
        - Name of the Vertica cluster.
    default: localhost
  port:
    description:
        - Vertica cluster port to connect to.
    default: 5433
  login_user:
    description:
        - The username used to authenticate with.
    default: dbadmin
  login_password:
    description:
        - The password used to authenticate with.
notes:
  - The default authentication assumes that you are either logging in as or sudo'ing
    to the C(dbadmin) account on the host.
  - This module uses C(pyodbc), a Python ODBC database adapter. You must ensure
    that C(unixODBC) and C(pyodbc) is installed on the host and properly configured.
  - Configuring C(unixODBC) for Vertica requires C(Driver = /opt/vertica/lib64/libverticaodbc.so)
    to be added to the C(Vertica) section of either C(/etc/odbcinst.ini) or C($HOME/.odbcinst.ini)
    and both C(ErrorMessagesPath = /opt/vertica/lib64) and C(DriverManagerEncoding = UTF-16)
    to be added to the C(Driver) section of either C(/etc/vertica.ini) or C($HOME/.vertica.ini).
requirements: [ 'unixODBC', 'pyodbc' ]
author: 'Dariusz Owczarek (@dareko)'
'''
    
    try:
    import pyodbc
except ImportError:
    pyodbc_found = False
else:
    pyodbc_found = True
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(zone_name=dict(type='str', required=True),
                         state=dict(type='str', default='present', choices=['present', 'absent']),
                         )
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
    

    
    def add_fpn_onto_conv_body(
    model, conv_body_func, fpn_level_info_func, P2only=False
):
    '''Add the specified conv body to the model and then add FPN levels to it.
    '''
    # Note: blobs_conv is in revsersed order: [fpn5, fpn4, fpn3, fpn2]
    # similarly for dims_conv: [2048, 1024, 512, 256]
    # similarly for spatial_scales_fpn: [1/32, 1/16, 1/8, 1/4]
    
    
def add_single_gpu_param_update_ops(model, gpu_id):
    # Learning rate of 0 is a dummy value to be set properly at the
    # start of training
    lr = model.param_init_net.ConstantFill(
        [], 'lr', shape=[1], value=0.0
    )
    one = model.param_init_net.ConstantFill(
        [], 'one', shape=[1], value=1.0
    )
    wd = model.param_init_net.ConstantFill(
        [], 'wd', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY
    )
    # weight decay of GroupNorm's parameters
    wd_gn = model.param_init_net.ConstantFill(
        [], 'wd_gn', shape=[1], value=cfg.SOLVER.WEIGHT_DECAY_GN
    )
    for param in model.TrainableParams(gpu_id=gpu_id):
        logger.debug('param ' + str(param) + ' will be updated')
        param_grad = model.param_to_grad[param]
        # Initialize momentum vector
        param_momentum = model.param_init_net.ConstantFill(
            [param], param + '_momentum', value=0.0
        )
        if param in model.biases:
            # Special treatment for biases (mainly to match historical impl.
            # details):
            # (1) Do not apply weight decay
            # (2) Use a 2x higher learning rate
            model.Scale(param_grad, param_grad, scale=2.0)
        elif param in model.gn_params:
            # Special treatment for GroupNorm's parameters
            model.WeightedSum([param_grad, one, param, wd_gn], param_grad)
        elif cfg.SOLVER.WEIGHT_DECAY > 0:
            # Apply weight decay to non-bias weights
            model.WeightedSum([param_grad, one, param, wd], param_grad)
        # Update param_grad and param_momentum in place
        model.net.MomentumSGDUpdate(
            [param_grad, param_momentum, lr, param],
            [param_grad, param_momentum, param],
            momentum=cfg.SOLVER.MOMENTUM
        )

    
        if cfg.MODEL.FASTER_RCNN:
        if model.train:
            # Add op that generates training labels for in-network RPN proposals
            model.GenerateProposalLabels(['rpn_rois', 'roidb', 'im_info'])
        else:
            # Alias rois to rpn_rois for inference
            model.net.Alias('rpn_rois', 'rois')
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
import detectron.utils.boxes as box_utils
    
    
def finalize_keypoint_minibatch(blobs, valid):
    '''Finalize the minibatch after blobs for all minibatch images have been
    collated.
    '''
    min_count = cfg.KRCNN.MIN_KEYPOINT_COUNT_FOR_VALID_MINIBATCH
    num_visible_keypoints = np.sum(blobs['keypoint_weights'])
    valid = (
        valid and len(blobs['keypoint_weights']) > 0 and
        num_visible_keypoints > min_count
    )
    # Normalizer to use if cfg.KRCNN.NORMALIZE_BY_VISIBLE_KEYPOINTS is False.
    # See modeling.model_builder.add_keypoint_losses
    norm = num_visible_keypoints / (
        cfg.TRAIN.IMS_PER_BATCH * cfg.TRAIN.BATCH_SIZE_PER_IM *
        cfg.TRAIN.FG_FRACTION * cfg.KRCNN.NUM_KEYPOINTS
    )
    blobs['keypoint_loss_normalizer'] = np.array(norm, dtype=np.float32)
    return valid
    
    '''Construct minibatches for Mask R-CNN training. Handles the minibatch blobs
that are specific to Mask R-CNN. Other blobs that are generic to RPN or
Fast/er R-CNN are handled by their respecitive roi_data modules.
'''
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--num-batches', dest='num_batches',
        help='Number of minibatches to run',
        default=200, type=int)
    parser.add_argument(
        '--sleep', dest='sleep_time',
        help='Seconds sleep to emulate a network running',
        default=0.1, type=float)
    parser.add_argument(
        '--cfg', dest='cfg_file', help='optional config file', default=None,
        type=str)
    parser.add_argument(
        '--x-factor', dest='x_factor', help='simulates x-factor more GPUs',
        default=1, type=int)
    parser.add_argument(
        '--profiler', dest='profiler', help='profile minibatch load time',
        action='store_true')
    parser.add_argument(
        'opts', help='See detectron/core/config.py for all options', default=None,
        nargs=argparse.REMAINDER)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args