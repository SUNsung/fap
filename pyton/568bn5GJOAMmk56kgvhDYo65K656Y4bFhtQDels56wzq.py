
        
            UNREAD = 0
    READ = 1
    ACCEPTED = 2
    REJECTED = 3

    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    
def check_compatibility(urllib3_version, chardet_version):
    urllib3_version = urllib3_version.split('.')
    assert urllib3_version != ['dev']  # Verify urllib3 isn't installed from git.
    
            # If response is not 4xx, do not auth
        # See https://github.com/requests/requests/issues/3772
        if not 400 <= r.status_code < 500:
            self._thread_local.num_401_calls = 1
            return r
    
        if last_snapshot_min_age > 0:
        try:
            current_snapshots = ec2.get_all_snapshots(filters={'volume_id': volume_id})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        name=dict(type='str'),
    ))
    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
    EXAMPLES = '''
- name: Create instance
  gcspanner:
    instance_id: '{{ instance_id }}'
    configuration: '{{ configuration }}'
    state: present
    node_count: 1
    
                    _modify_process(module,
                                oneandone_conn,
                                monitoring_policy['id'],
                                update_process['id'],
                                update_process)
            _check_mode(module, chk_changed)
            monitoring_policy = get_monitoring_policy(oneandone_conn, monitoring_policy['id'], True)
            changed = True
    
    options:
    name:
        description:
            - Hostname of the machine to manage.
        required: true
    state:
        description:
            - Takes the host to the desired lifecycle state.
            - If C(absent) the host will be deleted from the cluster.
            - If C(present) the host will be created in the cluster (includes C(enabled), C(disabled) and C(offline) states).
            - If C(enabled) the host is fully operational.
            - C(disabled), e.g. to perform maintenance operations.
            - C(offline), host is totally offline.
        choices:
            - absent
            - present
            - enabled
            - disabled
            - offline
        default: present
    im_mad_name:
        description:
            - The name of the information manager, this values are taken from the oned.conf with the tag name IM_MAD (name)
        default: kvm
    vmm_mad_name:
        description:
            - The name of the virtual machine manager mad name, this values are taken from the oned.conf with the tag name VM_MAD (name)
        default: kvm
    cluster_id:
        description:
            - The cluster ID.
        default: 0
    cluster_name:
        description:
            - The cluster specified by name.
    labels:
        description:
            - The labels for this host.
    template:
        description:
            - The template or attribute changes to merge into the host template.
        aliases:
            - attributes
    
    EXAMPLES = '''
- honeybadger_deployment:
    token: AAAAAA
    environment: staging
    user: ansible
    revision: b6826b8
    repo: 'git@github.com:user/repo.git'
'''
    
            removed_count += 1
    
        elif state == 'restarted':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('restart')
        if status in ['initializing', 'running'] or 'restart pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not restarted' % name, status=status)
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
    
def user_role(name, rawtext, text, lineno,
              inliner, options=None, content=None):
    '''Sphinx role for linking to a user profile. Defaults to linking to
    GitHub profiles, but the profile URIS can be configured via the
    ``issues_user_uri`` config value.
    
    Second example
--------------
The second example shows the ability of the Minimum Covariance Determinant
robust estimator of covariance to concentrate on the main mode of the data
distribution: the location seems to be well estimated, although the covariance
is hard to estimate due to the banana-shaped distribution. Anyway, we can
get rid of some outlying observations.
The One-Class SVM is able to capture the real data structure, but the
difficulty is to adjust its kernel bandwidth parameter so as to obtain
a good compromise between the shape of the data scatter matrix and the
risk of over-fitting the data.
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    
def voc_info(json_dataset):
    year = json_dataset.name[4:8]
    image_set = json_dataset.name[9:]
    devkit_path = get_devkit_dir(json_dataset.name)
    assert os.path.exists(devkit_path), \
        'Devkit directory {} not found'.format(devkit_path)
    anno_path = os.path.join(
        devkit_path, 'VOC' + year, 'Annotations', '{:s}.xml')
    image_set_path = os.path.join(
        devkit_path, 'VOC' + year, 'ImageSets', 'Main', image_set + '.txt')
    return dict(
        year=year,
        image_set=image_set,
        devkit_path=devkit_path,
        anno_path=anno_path,
        image_set_path=image_set_path)

    
    
def _ratio_enum(anchor, ratios):
    '''Enumerate a set of anchors for each aspect ratio wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    size = w * h
    size_ratios = size / ratios
    ws = np.round(np.sqrt(size_ratios))
    hs = np.round(ws * ratios)
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    
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