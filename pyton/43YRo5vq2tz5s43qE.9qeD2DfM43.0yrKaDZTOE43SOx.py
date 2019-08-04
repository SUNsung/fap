
        
            dilation = cfg.MRCNN.DILATION
    dim_inner = cfg.MRCNN.DIM_REDUCED
    
    from detectron.core.config import cfg
from detectron.utils.timer import Timer
import detectron.datasets.dataset_catalog as dataset_catalog
import detectron.utils.boxes as box_utils
from detectron.utils.io import load_object
import detectron.utils.segms as segm_utils
    
    
def initialize_model_from_cfg(weights_file, gpu_id=0):
    '''Initialize a model from the global cfg. Loads test-time weights and
    creates the networks in the Caffe2 workspace.
    '''
    model = model_builder.create(cfg.MODEL.TYPE, train=False, gpu_id=gpu_id)
    net_utils.initialize_gpu_from_weights_file(
        model, weights_file, gpu_id=gpu_id,
    )
    model_builder.add_inference_inputs(model)
    workspace.CreateNet(model.net)
    workspace.CreateNet(model.conv_body_net)
    if cfg.MODEL.MASK_ON:
        workspace.CreateNet(model.mask_net)
    if cfg.MODEL.KEYPOINTS_ON:
        workspace.CreateNet(model.keypoint_net)
    return model
    
        def test_merge_cfg_from_file(self):
        with tempfile.NamedTemporaryFile() as f:
            envu.yaml_dump(cfg, f)
            s = cfg.MODEL.TYPE
            cfg.MODEL.TYPE = 'dummy'
            assert cfg.MODEL.TYPE != s
            core_config.merge_cfg_from_file(f.name)
            assert cfg.MODEL.TYPE == s
    
    import numpy as np
import logging
from collections import defaultdict
    
    logger = logging.getLogger(__name__)
    
    import argparse
import os
import sys
    
        def calc_delta(self, label):
        '''
        Desc:
            计算每个节点的 delta
        Args:
            label --- 样本的真实值，也就是样本的标签
        Returns:
            None
        '''
        # 获取输出层的所有节点
        output_nodes = self.layers[-1].nodes
        # 遍历所有的 label
        for i in range(len(label)):
            # 计算输出层节点的 delta
            output_nodes[i].calc_output_layer_delta(label[i])
        # 这个用法就是切片的用法， [-2::-1] 就是将 layers 这个数组倒过来，从没倒过来的时候的倒数第二个元素开始，到翻转过来的倒数第一个数，比如这样：aaa = [1,2,3,4,5,6,7,8,9],bbb = aaa[-2::-1] ==> bbb = [8, 7, 6, 5, 4, 3, 2, 1]
        # 实际上就是除掉输出层之外的所有层按照相反的顺序进行遍历
        for layer in self.layers[-2::-1]:
            # 遍历每层的所有节点
            for node in layer.nodes:
                # 计算隐藏层的 delta
                node.calc_hidden_layer_delta()
    
        def gradient_check(self, sample_feature, sample_label):
        '''
        梯度检查
        network: 神经网络对象
        sample_feature: 样本的特征
        sample_label: 样本的标签
        '''
    
        centList, myNewAssments = biKMeans(dataMat, 3)
    
    
# Checks if this version respects the GA version format ('x.y.z') and not an RC
def is_tag_latest(version):
    ga_version = all(n.isdigit() for n in version.split('.')) and version.count('.') == 2
    return ga_version and yesno('Should this release be tagged as \'latest\'? [Y/n]: ', default=True)
    
    import logging
import os.path
import ssl
    
    
def test_push_image(mock_service):
    mock_service.options['build'] = '.'
    mock_service.options['image'] = image_id = 'abcd'
    mock_service.push.return_value = expected = 'sha256:thedigest'
    mock_service.image.return_value = {'RepoDigests': []}
    
        @mock.patch('compose.network.Network.true_name', lambda n: n.full_name)
    def test_check_remote_network_labels_mismatch(self):
        net = Network(None, 'compose_test', 'net1', 'overlay', labels={
            'com.project.touhou.character': 'sakuya.izayoi'
        })
        remote = {
            'Driver': 'overlay',
            'Options': None,
            'Labels': {
                'com.docker.compose.network': 'net1',
                'com.docker.compose.project': 'compose_test',
                'com.project.touhou.character': 'marisa.kirisame',
            }
        }
        with mock.patch('compose.network.log') as mock_log:
            check_remote_network_config(remote, net)
    
            log.warning('Service %s is trying to use reuse the network stack '
                    'of another service that is not running.' % (self.id))
        return None