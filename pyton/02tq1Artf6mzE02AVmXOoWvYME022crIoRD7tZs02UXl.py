
        
                return {
            'id': video_id,
            'title': title,
            'description': video.get('long_description') or video.get(
                'short_description'),
            'duration': float_or_none(video.get('duration'), scale=1000),
            'formats': formats,
            'subtitles': subtitles,
        }
    
    
class TVNowIE(TVNowBaseIE):
    _VALID_URL = r'''(?x)
                    https?://
                        (?:www\.)?tvnow\.(?:de|at|ch)/(?P<station>[^/]+)/
                        (?P<show_id>[^/]+)/
                        (?!(?:list|jahr)(?:/|$))(?P<id>[^/?\#&]+)
                    '''
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    try:
    input = raw_input
except NameError:
    pass
    
        outfile, = args
    
        def _create_alert_policy(self):
        '''
        Create an alert Policy using the CLC API.
        :return: response dictionary from the CLC API.
        '''
        p = self.module.params
        alias = p['alias']
        email_list = p['alert_recipients']
        metric = p['metric']
        duration = p['duration']
        threshold = p['threshold']
        policy_name = p['name']
        arguments = json.dumps(
            {
                'name': policy_name,
                'actions': [{
                    'action': 'email',
                    'settings': {
                        'recipients': email_list
                    }
                }],
                'triggers': [{
                    'metric': metric,
                    'duration': duration,
                    'threshold': threshold
                }]
            }
        )
        try:
            result = self.clc.v2.API.Call(
                'POST',
                '/v2/alertPolicies/%s' % alias,
                arguments)
        except APIFailedResponse as e:
            return self.module.fail_json(
                msg='Unable to create alert policy '{0}'. {1}'.format(
                    policy_name, str(e.response_text)))
        return result
    
        def _get_loadbalancer_list(self, alias, location):
        '''
        Retrieve a list of loadbalancers
        :param alias: Alias for account
        :param location: Datacenter
        :return: JSON data for all loadbalancers at datacenter
        '''
        result = None
        try:
            result = self.clc.v2.API.Call(
                'GET', '/v2/sharedLoadBalancers/%s/%s' % (alias, location))
        except APIFailedResponse as e:
            self.module.fail_json(
                msg='Unable to fetch load balancers for account: {0}. {1}'.format(
                    alias, str(e.response_text)))
        return result
    
    # Gracefully disable a member from a loadbalancer node:
- apache2_mod_proxy:
    balancer_vhost: '{{ vhost_host }}'
    member_host: '{{ member.host }}'
    state: drained
  delegate_to: myloadbalancernode
- wait_for:
    host: '{{ member.host }}'
    port: '{{ member.port }}'
    state: drained
  delegate_to: myloadbalancernode
- apache2_mod_proxy:
    balancer_vhost: '{{ vhost_host }}'
    member_host: '{{ member.host }}'
    state: absent
  delegate_to: myloadbalancernode
'''
    
            # Remove the params
        module.params.pop('params', None)
    
        module.exit_json(changed=ldap.passwd_set())
    
        api_key = module.params.get('api_key')
    api_password = module.params.get('api_password')
    customer_id = module.params.get('customer_id')
    domain = module.params.get('domain')
    record_type = module.params.get('type')
    record = module.params.get('record')
    value = module.params.get('value')
    priority = module.params.get('priority')
    solo = module.params.get('solo')
    state = module.params.get('state')
    
        # If in check mode, exit saying that we succeeded
    if module.check_mode:
        module.exit_json(changed=False, msg='OK')
    
    ANSIBLE_METADATA = {
    'metadata_version': '1.1',
    'status': ['preview'],
    'supported_by': 'community'
}
    
    # setup configuration :
# ufw reset
# ufw enable
# ufw allow proto udp to any port 5353 from 224.0.0.251
# ufw allow proto udp to any port 5353 from ff02::fb
dry_mode_cmd_with_ipv6 = {
    'ufw status verbose': ufw_status_verbose_with_ipv6,
    'ufw --version': ufw_version_35,
    # CONTENT of the command sudo ufw --dry-run delete allow in from ff02::fb port 5353 proto udp | grep -E '^### tupple'
    'ufw --dry-run delete allow from ff02::fb to any port 5353 proto udp': '### tuple ### allow udp any ::/0 5353 ff02::fb in',
    grep_config_cli: user_rules_with_ipv6,
    'ufw --dry-run allow from ff02::fb to any port 5353 proto udp': skippg_adding_existing_rules,
    'ufw --dry-run allow from 224.0.0.252 to any port 5353 proto udp': '''### tuple ### allow udp 5353 0.0.0.0/0 any 224.0.0.251 in
### tuple ### allow udp 5353 0.0.0.0/0 any 224.0.0.252 in
''',
    'ufw --dry-run allow from 10.0.0.0/24 to any port 1577 proto udp': '### tuple ### allow udp 1577 0.0.0.0/0 any 10.0.0.0/24 in'
}
    
        def __enter__(self):
        if not hasattr(Context._default_ctx, 'value'):
            Context._default_ctx.value = Context('cpu', 0)
        self._old_ctx = Context._default_ctx.value
        Context._default_ctx.value = self
        return self
    
            str_list = []
        for index in range(self.num_images):
            progress_bar(index, self.num_images)
            label = self.label_from_index(index)
            if label.size < 1:
                continue
            path = self.image_path_from_index(index)
            if root:
                path = osp.relpath(path, root)
            str_list.append('\t'.join([str(index), str(2), str(label.shape[1])] \
              + ['{0:.4f}'.format(x) for x in label.ravel()] + [path,]) + '\n')
        if str_list:
            if shuffle:
                import random
                random.shuffle(str_list)
            if not fname:
                fname = self.name + '.lst'
            with open(fname, 'w') as f:
                for line in str_list:
                    f.write(line)
        else:
            raise RuntimeError('No image in imdb')
    
        network = None if args.deploy_net else args.network
    class_names = parse_class_names(args.class_names)
    data_shape = parse_data_shape(args.data_shape)
    if args.prefix.endswith('_'):
        prefix = args.prefix + args.network + '_' + str(data_shape[0])
    else:
        prefix = args.prefix
    detector = get_detector(network, prefix, args.epoch,
                            data_shape,
                            (args.mean_r, args.mean_g, args.mean_b),
                            ctx, len(class_names), args.nms_thresh, args.force_nms)
    # run detection
    detector.detect_and_visualize(image_list, args.dir, args.extension,
                                  class_names, args.thresh, args.show_timer)
    
    def Conv(data, num_filter, kernel=(1, 1), stride=(1, 1), pad=(0, 0), name=None, suffix=''):
    conv = mx.sym.Convolution(data=data, num_filter=num_filter, kernel=kernel, stride=stride, pad=pad, no_bias=True, name='%s%s_conv2d' %(name, suffix))
    bn = mx.sym.BatchNorm(data=conv, name='%s%s_batchnorm' %(name, suffix), fix_gamma=True)
    act = mx.sym.Activation(data=bn, act_type='relu', name='%s%s_relu' %(name, suffix))
    return act
    
    def read_caffemodel(prototxt_fname, caffemodel_fname):
    '''Return a caffe_pb2.NetParameter object that defined in a binary
    caffemodel file
    '''
    if use_caffe:
        caffe.set_mode_cpu()
        net = caffe.Net(prototxt_fname, caffemodel_fname, caffe.TEST)
        layer_names = net._layer_names
        layers = net.layers
        return (layers, layer_names)
    else:
        proto = caffe_pb2.NetParameter()
        with open(caffemodel_fname, 'rb') as f:
            proto.ParseFromString(f.read())
        return (get_layers(proto), None)
    
                layer_name_to_record[layer_def.name] = LayerRecord(layer_def)
    
    def main():
    parser = argparse.ArgumentParser(description='Convert caffe mean')
    parser.add_argument('binaryproto_fname', help='Filename of the mean')
    parser.add_argument('output', help='The name of the output file')
    args = parser.parse_args()
    convert_mean(args.binaryproto_fname, args.output)