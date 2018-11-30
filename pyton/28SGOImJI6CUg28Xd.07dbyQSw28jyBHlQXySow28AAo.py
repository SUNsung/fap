
        
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='waf', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
        def _rule_matches_aws(self):
        '''Checks if the local rule data matches AWS'''
        aws_rule_data = self.rule.describe()
    
    # Find a group with matching name/prefix and tags
- ec2_asg_facts:
    name: myproject
    tags:
      env: production
  register: asgs
    
    
DOCUMENTATION = '''
---
author:
  - 'Jens Carl (@j-carl), Hothead Games Inc.'
module: redshift
version_added: '2.2'
short_description: create, delete, or modify an Amazon Redshift instance
description:
  - Creates, deletes, or modifies amazon Redshift cluster instances.
options:
  command:
    description:
      - Specifies the action to take.
    required: true
    choices: [ 'create', 'facts', 'delete', 'modify' ]
  identifier:
    description:
      - Redshift cluster identifier.
    required: true
  node_type:
    description:
      - The node type of the cluster. Must be specified when command=create.
    choices: ['ds1.xlarge', 'ds1.8xlarge', 'ds2.xlarge', 'ds2.8xlarge', 'dc1.large', 'dc1.8xlarge', 'dc2.large', 'dc2.8xlarge',
              'dw1.xlarge', 'dw1.8xlarge', 'dw2.large', 'dw2.8xlarge']
  username:
    description:
      - Master database username. Used only when command=create.
  password:
    description:
      - Master database password. Used only when command=create.
  cluster_type:
    description:
      - The type of cluster.
    choices: ['multi-node', 'single-node' ]
    default: 'single-node'
  db_name:
    description:
      - Name of the database.
  availability_zone:
    description:
      - availability zone in which to launch cluster
    aliases: ['zone', 'aws_zone']
  number_of_nodes:
    description:
      - Number of nodes. Only used when cluster_type=multi-node.
  cluster_subnet_group_name:
    description:
      - which subnet to place the cluster
    aliases: ['subnet']
  cluster_security_groups:
    description:
      - in which security group the cluster belongs
    aliases: ['security_groups']
  vpc_security_group_ids:
    description:
      - VPC security group
    aliases: ['vpc_security_groups']
  skip_final_cluster_snapshot:
    description:
      - skip a final snapshot before deleting the cluster. Used only when command=delete.
    aliases: ['skip_final_snapshot']
    default: 'no'
    version_added: '2.4'
  final_cluster_snapshot_identifier:
    description:
      - identifier of the final snapshot to be created before deleting the cluster. If this parameter is provided,
        final_cluster_snapshot_identifier must be false. Used only when command=delete.
    aliases: ['final_snapshot_id']
    version_added: '2.4'
  preferred_maintenance_window:
    description:
      - maintenance window
    aliases: ['maintance_window', 'maint_window']
  cluster_parameter_group_name:
    description:
      - name of the cluster parameter group
    aliases: ['param_group_name']
  automated_snapshot_retention_period:
    description:
      - period when the snapshot take place
    aliases: ['retention_period']
  port:
    description:
      - which port the cluster is listining
  cluster_version:
    description:
      - which version the cluster should have
    aliases: ['version']
    choices: ['1.0']
  allow_version_upgrade:
    description:
      - flag to determinate if upgrade of version is possible
    aliases: ['version_upgrade']
    default: 'yes'
  publicly_accessible:
    description:
      - if the cluster is accessible publicly or not
    default: 'no'
  encrypted:
    description:
      -  if the cluster is encrypted or not
    default: 'no'
  elastic_ip:
    description:
      - if the cluster has an elastic IP or not
  new_cluster_identifier:
    description:
      - Only used when command=modify.
    aliases: ['new_identifier']
  wait:
    description:
      - When command=create, modify or restore then wait for the database to enter the 'available' state. When command=delete wait for the database to be
        terminated.
    type: bool
    default: 'no'
  wait_timeout:
    description:
      - how long before wait gives up, in seconds
    default: 300
requirements: [ 'boto' ]
extends_documentation_fragment:
  - aws
  - ec2
'''
    
            self.module_args = dict(
            name=dict(type='str'),
            resource_group=dict(type='str'),
            tags=dict(type='list')
        )
    
        _tabulate(results, args.metrics, args.formats)
    
            mbkmeans.fit(X)
        delta = time() - tstart
        print('Speed: %0.3fs' % delta)
        print('Inertia: %0.3fs' % mbkmeans.inertia_)
        print()
    
    Benchmarks for IncrementalPCA
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            X = make_low_rank_matrix(n_samples, n_features,
                                  effective_rank=rank,
                                  tail_strength=0.2)
    
                print('=======================')
            print('Round %d %d' % (i, j))
            print('n_features:', n_features)
            print('n_samples:', n_train)
    
    n_samples, n_features = 5000, 300
X = np.random.randn(n_samples, n_features)
inds = np.arange(n_samples)
np.random.shuffle(inds)
X[inds[int(n_features / 1.2):]] = 0  # sparsify input
print('input data sparsity: %f' % sparsity_ratio(X))
coef = 3 * np.random.randn(n_features)
inds = np.arange(n_features)
np.random.shuffle(inds)
coef[inds[n_features // 2:]] = 0  # sparsify coef
print('true coef sparsity: %f' % sparsity_ratio(coef))
y = np.dot(X, coef)
    
        scikit_classifier_results = []
    scikit_regressor_results = []
    n = 10
    step = 500
    start_dim = 500
    n_classes = 10
    
    
def _write_voc_results_files(json_dataset, all_boxes, salt):
    filenames = []
    image_set_path = voc_info(json_dataset)['image_set_path']
    assert os.path.exists(image_set_path), \
        'Image set path does not exist: {}'.format(image_set_path)
    with open(image_set_path, 'r') as f:
        image_index = [x.strip() for x in f.readlines()]
    # Sanity check that order of images in json dataset matches order in the
    # image set
    roidb = json_dataset.get_roidb()
    for i, entry in enumerate(roidb):
        index = os.path.splitext(os.path.split(entry['image'])[1])[0]
        assert index == image_index[i]
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        logger.info('Writing VOC results for: {}'.format(cls))
        filename = _get_voc_results_file_template(json_dataset,
                                                  salt).format(cls)
        filenames.append(filename)
        assert len(all_boxes[cls_ind]) == len(image_index)
        with open(filename, 'wt') as f:
            for im_ind, index in enumerate(image_index):
                dets = all_boxes[cls_ind][im_ind]
                if type(dets) == list:
                    assert len(dets) == 0, \
                        'dets should be numpy.ndarray or empty list'
                    continue
                # the VOCdevkit expects 1-based indices
                for k in range(dets.shape[0]):
                    f.write('{:s} {:.3f} {:.1f} {:.1f} {:.1f} {:.1f}\n'.
                            format(index, dets[k, -1],
                                   dets[k, 0] + 1, dets[k, 1] + 1,
                                   dets[k, 2] + 1, dets[k, 3] + 1))
    return filenames
    
    ... -> RoI ----\                               /-> box cls output -> cls loss
                -> RoIFeatureXform -> box head
... -> Feature /                               \-> box reg output -> reg loss
       Map
    
    
def _add_roi_mask_head(
    model, add_roi_mask_head_func, blob_in, dim_in, spatial_scale_in
):
    '''Add a mask prediction head to the model.'''
    # Capture model graph before adding the mask head
    bbox_net = copy.deepcopy(model.net.Proto())
    # Add the mask head
    blob_mask_head, dim_mask_head = add_roi_mask_head_func(
        model, blob_in, dim_in, spatial_scale_in
    )
    # Add the mask output
    blob_mask = mask_rcnn_heads.add_mask_rcnn_outputs(
        model, blob_mask_head, dim_mask_head
    )
    
    logger = logging.getLogger(__name__)
    
        ind_kp = gt_inds[roidb['box_to_gt_ind_map']]
    within_box = _within_box(gt_keypoints[ind_kp, :, :], roidb['boxes'])
    vis_kp = gt_keypoints[ind_kp, 2, :] > 0
    is_visible = np.sum(np.logical_and(vis_kp, within_box), axis=1) > 0
    kp_fg_inds = np.where(
        np.logical_and(max_overlaps >= cfg.TRAIN.FG_THRESH, is_visible)
    )[0]
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
    s = '此外，公司拟对全资子公司吉林欧亚置业有限公司增资4.3亿元，增资后，吉林欧亚置业注册资本由7000万元增加到5亿元。吉林欧亚置业主要经营范围为房地产开发及百货零售等业务。目前在建吉林欧亚城市商业综合体项目。2013年，实现营业收入0万元，实现净利润-139.13万元。'
for x, w in jieba.analyse.extract_tags(s, withWeight=True):
    print('%s %s' % (x, w))
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
    
