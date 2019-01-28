
        
        
if __name__ == '__main__':
    SpendingByCategory.run()

    
    
class HitCounts(MRJob):
    
    
class UserGraphService(object):
    
      labels = tf.squeeze(curr_features['rel_id'], [-1])
  return labels
    
        Args:
      session: The current TensorFlow session.
      inputs:
      on_epoch_completed: A method to call after each epoch.
      val_instances: The validation set instances (evaluation between epochs).
      val_labels: The validation set labels (for evaluation between epochs).
      save_path: Where to save the model.
    '''
    for epoch in range(self.hparams.num_epochs):
    
        Returns:
    A tuple with 6 float values:
      (total cost of the epoch, epoch reconstruction cost,
       epoch kl cost, KL weight used this training epoch,
       total l2 cost on generator, and the corresponding weight).
    '''
    ops_to_eval = [self.cost, self.recon_cost,
                   self.kl_cost, self.kl_weight,
                   self.l2_cost, self.l2_weight,
                   self.train_op]
    collected_op_values = self.run_epoch(datasets, ops_to_eval, kind='train')
    
    rnn = generate_rnn(rng, N, FLAGS.g, FLAGS.tau, FLAGS.dt, FLAGS.max_firing_rate)
    
    rates_train, rates_valid = split_list_by_inds(rates, train_inds, valid_inds)
spikes_train, spikes_valid = split_list_by_inds(spikes, train_inds, valid_inds)
condition_labels_train, condition_labels_valid = split_list_by_inds(
    condition_labels, train_inds, valid_inds)
ext_input_train, ext_input_valid = split_list_by_inds(
    ext_input, train_inds, valid_inds)
    
      Returns:
    The length B list of TxN numpy tensors.
  '''
  T = len(values_t_bxn)
  B, N = values_t_bxn[0].shape
  values_b_txn = []
  for b in range(B):
    values_pb_txn = np.zeros([T,N])
    for t in range(T):
      values_pb_txn[t,:] = values_t_bxn[t][b,:]
    values_b_txn.append(values_pb_txn)
    
      Args:
    gd_file: GraphDef proto text file.
    ckpt_file: TensorFlow Checkpoint file.
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    # Dependency imports
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    '''
    
    RETURN = '''
response_metadata:
  description: response metadata about the snapshot
  returned: always
  type: dict
  sample:
    http_headers:
      content-length: 1490
      content-type: text/xml
      date: Tue, 07 Feb 2017 16:43:04 GMT
      x-amzn-requestid: 7f436dea-ed54-11e6-a04c-ab2372a1f14d
    http_status_code: 200
    request_id: 7f436dea-ed54-11e6-a04c-ab2372a1f14d
    retry_attempts: 0
snapshot:
  description: snapshot data
  returned: always
  type: dict
  sample:
    auto_minor_version_upgrade: true
    cache_cluster_create_time: 2017-02-01T17:43:58.261000+00:00
    cache_cluster_id: test-please-delete
    cache_node_type: cache.m1.small
    cache_parameter_group_name: default.redis3.2
    cache_subnet_group_name: default
    engine: redis
    engine_version: 3.2.4
    node_snapshots:
      cache_node_create_time: 2017-02-01T17:43:58.261000+00:00
      cache_node_id: 0001
      cache_size:
    num_cache_nodes: 1
    port: 11211
    preferred_availability_zone: us-east-1d
    preferred_maintenance_window: wed:03:00-wed:04:00
    snapshot_name: deletesnapshot
    snapshot_retention_limit: 0
    snapshot_source: manual
    snapshot_status: creating
    snapshot_window: 10:00-11:00
    vpc_id: vpc-c248fda4
changed:
  description: if a snapshot has been created, deleted, or copied
  returned: always
  type: bool
  sample:
    changed: true
'''
    
        except BotoServerError as e:
        if e.error_message != 'No modifications were requested.':
            module.fail_json(msg=e.error_message)
        else:
            changed = False
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
        has_changed, msg = add_or_delete_heroku_collaborator(module, client)
    module.exit_json(changed=has_changed, msg=msg)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.vca import VcaError, vca_argument_spec, vca_login
    
    
if __name__ == '__main__':
    main()

    
        def role_find(self, name):
        return self._post_json(method='role_find', name=None, item={'all': True, 'cn': name})
    
        module = AnsibleModule(
        argument_spec=dict(
            token=dict(required=True, no_log=True),
            environment=dict(required=True),
            user=dict(required=False),
            repo=dict(required=False),
            revision=dict(required=False),
            url=dict(required=False, default='https://api.airbrake.io/deploys.txt'),
            validate_certs=dict(default='yes', type='bool'),
        ),
        supports_check_mode=True
    )
    
    # informational: requirements for nodes
requirements: [ ]
'''
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(type='str', required=True),
            state=dict(type='str', choices=['present', 'absent'], default='present')
        ),
        supports_check_mode=True
    )
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        vids = matchall(content, yinyuetai_embed_patterns)
    for vid in vids:
        found = True
        yinyuetai_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
                post_url = r1(r''(https://plus.google.com/[^/]+/posts/[^']*)'', html)
            post_author = r1(r'/\+([^/]+)/posts', post_url)
            if post_author:
                post_url = 'https://plus.google.com/+%s/posts/%s' % (parse.quote(post_author), r1(r'posts/(.+)', post_url))
            post_html = get_html(post_url, faker=True)
            title = r1(r'<title[^>]*>([^<\n]+)', post_html)
    
    
# Abstract Building
class Building(object):
    def __init__(self):
        self.build_floor()
        self.build_size()
    
    
def lazy_property2(fn):
    attr = '_lazy__' + fn.__name__
    
    
if __name__ == '__main__':
    main()
    
        def product_list(self):
        return self.data['products'].keys()
    
    *Where is the pattern used practically?
The Grok framework uses decorators to add functionalities to methods,
like permissions or subscription to an event:
http://grok.zope.org/doc/current/reference/decorators.html
    
    
class Request(object):
    ''' request '''