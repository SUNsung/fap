
        
          Args:
    data: NumPy array.
    file_path: Path to file that will be written.
  '''
  serialized_data = SerializeToString(data)
  with tf.gfile.GFile(file_path, 'w') as f:
    f.write(serialized_data)
    
      Args:
    centers: a tensor with shape [N, 2] representing bounding box centers
    sizes: a tensor with shape [N, 2] representing bounding boxes
    
        '''
    input_length = tf.shape(input_tensor)[0]
    start_positions = tf.less(tf.range(input_length), num_start_samples)
    end_positions = tf.greater_equal(
        tf.range(input_length), input_length - num_end_samples)
    selected_positions = tf.logical_or(start_positions, end_positions)
    selected_positions = tf.cast(selected_positions, tf.float32)
    indexed_positions = tf.multiply(tf.cumsum(selected_positions),
                                    selected_positions)
    one_hot_selector = tf.one_hot(tf.cast(indexed_positions, tf.int32) - 1,
                                  total_num_samples,
                                  dtype=tf.float32)
    return tf.cast(tf.tensordot(tf.cast(input_tensor, tf.float32),
                                one_hot_selector, axes=[0, 0]), tf.int32)
    
      return metrics

    
          # Optionally clip gradients
      if train_config.gradient_clipping_by_norm > 0:
        with tf.name_scope('clip_grads'):
          grads_and_vars = slim.learning.clip_gradient_norms(
              grads_and_vars, train_config.gradient_clipping_by_norm)
    
    
def _swap_labelmap_dict(labelmap_dict):
  '''Swaps keys and labels in labelmap.
    
        response, info = fetch_url(module=module, url=url, headers=headers, data=rawdata, method=method)
    status = info['status']
    content = ''
    if response:
        content = response.read()
    if status == 204:
        return True, content
    elif status == 200 or status == 201:
        return True, json.loads(content)
    else:
        return False, str(status) + ': ' + content
    
    ---
- name: Create AA Policy
  hosts: localhost
  gather_facts: False
  connection: local
  tasks:
    - name: Create an Anti Affinity Policy
      clc_aa_policy:
        name: Hammer Time
        location: UK3
        state: present
      register: policy
    
            if state == 'absent':
            changed, firewall_policy_id, firewall_policy = self._ensure_firewall_policy_is_absent(
                source_account_alias, location, self.firewall_dict)
    
        def ensure_lbpool_nodes_set(self, alias, location, name, port, nodes):
        '''
        Checks to see if the provided list of nodes exist for the pool
         and set the nodes if any in the list those doesn't exist
        :param alias: The account alias
        :param location: the datacenter the load balancer resides in
        :param name: the name of the load balancer
        :param port: the port that the load balancer will listen on
        :param nodes: The list of nodes to be updated to the pool
        :return: (changed, result) -
            changed: Boolean whether a change was made
            result: The result from the CLC API call
        '''
        result = {}
        changed = False
        lb_exists = self._loadbalancer_exists(name=name)
        if lb_exists:
            lb_id = self._get_loadbalancer_id(name=name)
            pool_id = self._loadbalancerpool_exists(
                alias=alias,
                location=location,
                port=port,
                lb_id=lb_id)
            if pool_id:
                nodes_exist = self._loadbalancerpool_nodes_exists(alias=alias,
                                                                  location=location,
                                                                  lb_id=lb_id,
                                                                  pool_id=pool_id,
                                                                  nodes_to_check=nodes)
                if not nodes_exist:
                    changed = True
                    result = self.set_loadbalancernodes(alias=alias,
                                                        location=location,
                                                        lb_id=lb_id,
                                                        pool_id=pool_id,
                                                        nodes=nodes)
            else:
                result = 'Pool doesn't exist'
        else:
            result = 'Load balancer doesn't Exist'
        return changed, result
    
            if state == 'present':
            changed, changed_server_ids, requests = self.ensure_public_ip_present(
                server_ids=server_ids, protocol=protocol, ports=ports)
        elif state == 'absent':
            changed, changed_server_ids, requests = self.ensure_public_ip_absent(
                server_ids=server_ids)
        else:
            return self.module.fail_json(msg='Unknown State: ' + state)
        self._wait_for_requests_to_complete(requests)
        return self.module.exit_json(changed=changed,
                                     server_ids=changed_server_ids)
    
            if changed:
            message += ' and '
        changed = True
        message += 'ownership, perms or SE linux context changed'
    
    
DOCUMENTATION = '''
---
module: jenkins_job
short_description: Manage jenkins jobs
description:
    - Manage Jenkins jobs by using Jenkins REST API.
requirements:
  - 'python-jenkins >= 0.4.12'
  - 'lxml >= 3.3.3'
version_added: '2.2'
author: 'Sergio Millan Rodriguez (@sermilrod)'
options:
  config:
    description:
      - config in XML format.
      - Required if job does not yet exist.
      - Mutually exclusive with C(enabled).
      - Considered if C(state=present).
    required: false
  enabled:
    description:
      - Whether the job should be enabled or disabled.
      - Mutually exclusive with C(config).
      - Considered if C(state=present).
    type: bool
    required: false
  name:
    description:
      - Name of the Jenkins job.
    required: true
  password:
    description:
      - Password to authenticate with the Jenkins server.
    required: false
  state:
    description:
      - Attribute that specifies if the job has to be created or deleted.
    required: false
    default: present
    choices: ['present', 'absent']
  token:
    description:
      - API token used to authenticate alternatively to password.
    required: false
  url:
    description:
      - URL where the Jenkins server is accessible.
    required: false
    default: http://localhost:8080
  user:
    description:
       - User to authenticate with the Jenkins server.
    required: false
'''
    
    
def _standardize_value(value):
    '''
    Convert value to string to enhance the comparison.
    
        ucs.result['err'] = False
    # note that all objects specified in the object list report a single result (including a single changed).
    ucs.result['changed'] = False
    
    
DOCUMENTATION = '''
---
module: github_release
short_description: Interact with GitHub Releases
description:
    - Fetch metadata about GitHub Releases
version_added: 2.2
options:
    token:
        description:
            - GitHub Personal Access Token for authenticating. Mutually exclusive with C(password).
    user:
        description:
            - The GitHub account that owns the repository
        required: true
    password:
        description:
            - The GitHub account password for the user. Mutually exclusive with C(token).
        version_added: '2.4'
    repo:
        description:
            - Repository name
        required: true
    action:
        description:
            - Action to perform
        required: true
        choices: [ 'latest_release', 'create_release' ]
    tag:
        description:
            - Tag name when creating a release. Required when using action is set to C(create_release).
        version_added: 2.4
    target:
        description:
            - Target of release when creating a release
        version_added: 2.4
    name:
        description:
            - Name of release when creating a release
        version_added: 2.4
    body:
        description:
            - Description of the release when creating a release
        version_added: 2.4
    draft:
        description:
            - Sets if the release is a draft or not. (boolean)
        type: 'bool'
        default: 'no'
        version_added: 2.4
    prerelease:
        description:
            - Sets if the release is a prerelease or not. (boolean)
        type: bool
        default: 'no'
        version_added: 2.4
    
      * glmnet-python
  * scikit-learn (of course)
    
        # TASK: print the cross-validated scores for the each parameters set
    # explored by the grid search
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    # Different variance
X_varied, y_varied = make_blobs(n_samples=n_samples,
                                cluster_std=[1.0, 2.5, 0.5],
                                random_state=random_state)
y_pred = KMeans(n_clusters=3, random_state=random_state).fit_predict(X_varied)
    
    In a first step, the hierarchical clustering is performed without connectivity
constraints on the structure and is solely based on distance, whereas in
a second step the clustering is restricted to the k-Nearest Neighbors
graph: it's a hierarchical clustering with structure prior.
    
        @staticmethod
    def _new_acct_dir_mock():
        return '/acme/new-account'
    
    Sample BIND configuration
'''''''''''''''''''''''''
    
        # Execution of certbot in a self-contained workspace
    workspace = os.environ.get('WORKSPACE', os.path.join(os.getcwd(), '.certbot_test_workspace'))
    if not os.path.exists(workspace):
        print('--> Creating a workspace for certbot_test: {0}'.format(workspace))
        os.mkdir(workspace)
    else:
        print('--> Using an existing workspace for certbot_test: {0}'.format(workspace))
    config_dir = os.path.join(workspace, 'conf')
    
            # Removing unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.delete_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key', 'value'])
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'key_id', 'value_id'])
    
            try:
            email = self._fetch_emails(response.get('access_token'))[0]
        except IndexError:
            details['email'] = ''
        else:
            details['email'] = email