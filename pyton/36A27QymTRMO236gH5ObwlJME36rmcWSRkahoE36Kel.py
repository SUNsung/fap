
        
        data_train_truth, data_valid_truth = split_list_by_inds(truth_data_e,
                                                        train_inds,
                                                        valid_inds)
data_train_spiking, data_valid_spiking = split_list_by_inds(spiking_data_e,
                                                            train_inds,
                                                            valid_inds)
    
    x0s = []
condition_labels = []
condition_number = 0
for c in range(C):
  x0 = FLAGS.x0_std * rng.randn(N, 1)
  x0s.append(np.tile(x0, nreplications))
  for ns in range(nreplications):
    condition_labels.append(condition_number)
  condition_number += 1
x0s = np.concatenate(x0s, axis=1)
    
    
def GAN_loss_matrix(dis_predictions):
  '''Computes the cross entropy loss for G.
    
          next context state: `context_state`, this decoder function does not
      modify the given context state. The context state could be modified when
      applying e.g. beam search.
    '''
    with tf.name_scope(
        name, 'attention_decoder_fn_train',
        [time, cell_state, cell_input, cell_output, context_state]):
      if cell_state is None:  # first call, return encoder_state
        cell_state = encoder_state
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
        new_command = get_new_command(Command('sudo apt list --upgradable', match_output))
    assert new_command == 'sudo apt upgrade'

    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_match(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    assert match(Command(script.format(filename.format(ext)), ''))
    
        # Raises
        ValueError: in case of invalid `label_mode`.
    '''
    if label_mode not in ['fine', 'coarse']:
        raise ValueError('`label_mode` must be one of `'fine'`, `'coarse'`.')
    
    from ..utils.data_utils import get_file
import numpy as np
    
        def __init__(self, l1=0., l2=0.):
        self.l1 = K.cast_to_floatx(l1)
        self.l2 = K.cast_to_floatx(l2)
    
        out1 = utils.preprocess_input(x, 'channels_last')
    out1int = utils.preprocess_input(xint, 'channels_last')
    out2 = utils.preprocess_input(np.transpose(x, (0, 3, 1, 2)),
                                  'channels_first')
    out2int = utils.preprocess_input(np.transpose(xint, (0, 3, 1, 2)),
                                     'channels_first')
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    assert_allclose(out1int, out2int.transpose(0, 2, 3, 1))
    
    
def test_categorical_hinge():
    y_pred = K.variable(np.array([[0.3, 0.2, 0.1],
                                  [0.1, 0.2, 0.7]]))
    y_true = K.variable(np.array([[0, 1, 0],
                                  [1, 0, 0]]))
    expected_loss = ((0.3 - 0.2 + 1) + (0.7 - 0.1 + 1)) / 2.0
    loss = K.eval(losses.categorical_hinge(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
    # Build the Autoencoder Model
# First build the Encoder Model
inputs = Input(shape=input_shape, name='encoder_input')
x = inputs
# Stack of Conv2D blocks
# Notes:
# 1) Use Batch Normalization before ReLU on deep networks
# 2) Use MaxPooling2D as alternative to strides>1
# - faster but not as good as strides>1
for filters in layer_filters:
    x = Conv2D(filters=filters,
               kernel_size=kernel_size,
               strides=2,
               activation='relu',
               padding='same')(x)
    
    print('Evaluate IRNN...')
model = Sequential()
model.add(SimpleRNN(hidden_units,
                    kernel_initializer=initializers.RandomNormal(stddev=0.001),
                    recurrent_initializer=initializers.Identity(gain=1.0),
                    activation='relu',
                    input_shape=x_train.shape[1:]))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
rmsprop = RMSprop(lr=learning_rate)
model.compile(loss='categorical_crossentropy',
              optimizer=rmsprop,
              metrics=['accuracy'])
    
    from __future__ import print_function
    
            try:
            response = self.client.delete_rule(Name=self.name)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not delete rule %s' % self.name)
        self.changed = True
        return response
    
        for app in module.params['apps']:
        if app not in client.apps():
            module.fail_json(msg='App {0} does not exist'.format(app))
    
        def dnszone_add(self, zone_name=None, details=None):
        return self._post_json(
            method='dnszone_add',
            name=zone_name,
            item={}
        )
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
                if re.search('already enabled', out) is None:
                change_applied = True
        else:
            if rc == 0:
                change_applied = True
            # RC is not 0 for this already disabled feature, handle it as no change applied
            elif re.search('Cannot disable feature '%s'. Target file .* does not exist' % self.feature_name, out):
                change_applied = False
            else:
                self.module.fail_json(msg='Failed to disable feature. Command returns %s' % out)
    
        params = {}
    params['message'] = msg
    if annotated_by:
        params['annotated_by'] = annotated_by
    if level:
        params['level'] = level
    if instance_id:
        params['instance_id'] = instance_id
    if event_epoch:
        params['event_epoch'] = event_epoch
    
        # 保存结果
    # 每个结果为一个二元组 [label, score] 分别保存每个样本所在的簇及距离质心的距离
    ret = np.array([[-1, np.inf]] * n)
    
    from ..activations import relu
from ..utils import get_wb, get_shape
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()