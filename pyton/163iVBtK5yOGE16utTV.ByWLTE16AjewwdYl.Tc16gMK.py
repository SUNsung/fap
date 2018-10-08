
        
            # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
        #: The name of the package or module that this app belongs to. Do not
    #: change this once it is set by the constructor.
    import_name = None
    
        By default it will try to guess the mimetype for you, but you can
    also explicitly provide one.  For extra security you probably want
    to send certain files as attachment (HTML for instance).  The mimetype
    guessing requires a `filename` or an `attachment_filename` to be
    provided.
    
            # Create optional stack outputs
        all_facts = module.params.get('all_facts')
        if all_facts or module.params.get('stack_resources'):
            facts['stack_resource_list'] = service_mgr.list_stack_resources(stack_name)
            facts['stack_resources'] = to_dict(facts.get('stack_resource_list'), 'LogicalResourceId', 'PhysicalResourceId')
        if all_facts or module.params.get('stack_template'):
            facts['stack_template'] = service_mgr.get_template(stack_name)
        if all_facts or module.params.get('stack_policy'):
            facts['stack_policy'] = service_mgr.get_stack_policy(stack_name)
        if all_facts or module.params.get('stack_events'):
            facts['stack_events'] = service_mgr.describe_stack_events(stack_name)
    
    
def main():
    argument_spec = ec2_argument_spec()
    
    # AMI Creation, excluding a volume attached at /dev/sdb
- ec2_ami:
    instance_id: i-xxxxxx
    name: newtest
    device_mapping:
        - device_name: /dev/sda1
          size: XXX
          delete_on_termination: true
          volume_type: gp2
        - device_name: /dev/sdb
          no_device: yes
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            image_ids=dict(default=[], type='list', aliases=['image_id']),
            filters=dict(default={}, type='dict'),
            owners=dict(default=[], type='list', aliases=['owner']),
            executable_users=dict(default=[], type='list', aliases=['executable_user']),
            describe_image_attributes=dict(default=False, type='bool')
        )
    )
    
    
RETURN = '''
addresses:
  description: Properties of all Elastic IP addresses matching the provided filters. Each element is a dict with all the information related to an EIP.
  returned: on success
  type: list
  sample: [{
        'allocation_id': 'eipalloc-64de1b01',
        'association_id': 'eipassoc-0fe9ce90d6e983e97',
        'domain': 'vpc',
        'instance_id': 'i-01020cfeb25b0c84f',
        'network_interface_id': 'eni-02fdeadfd4beef9323b',
        'network_interface_owner_id': '0123456789',
        'private_ip_address': '10.0.0.1',
        'public_ip': '54.81.104.1',
        'tags': {
            'Name': 'test-vm-54.81.104.1'
        }
    }]
    
    RETURN = '''
network_interfaces:
  description: List of matching elastic network interfaces
  returned: always
  type: complex
  contains:
    association:
      description: Info of associated elastic IP (EIP)
      returned: always, empty dict if no association exists
      type: dict
      sample: {
          allocation_id: 'eipalloc-5sdf123',
          association_id: 'eipassoc-8sdf123',
          ip_owner_id: '4415120123456',
          public_dns_name: 'ec2-52-1-0-63.compute-1.amazonaws.com',
          public_ip: '52.1.0.63'
        }
    attachment:
      description: Infor about attached ec2 instance
      returned: always, empty dict if ENI is not attached
      type: dict
      sample: {
        attach_time: '2017-08-05T15:25:47+00:00',
        attachment_id: 'eni-attach-149d21234',
        delete_on_termination: false,
        device_index: 1,
        instance_id: 'i-15b8d3cadbafa1234',
        instance_owner_id: '4415120123456',
        status: 'attached'
      }
    availability_zone:
      description: Availability zone of ENI
      returned: always
      type: string
      sample: 'us-east-1b'
    description:
      description: Description text for ENI
      returned: always
      type: string
      sample: 'My favourite network interface'
    groups:
      description: List of attached security groups
      returned: always
      type: list
      sample: [
        {
          group_id: 'sg-26d0f1234',
          group_name: 'my_ec2_security_group'
        }
      ]
    id:
      description: The id of the ENI (alias for network_interface_id)
      returned: always
      type: string
      sample: 'eni-392fsdf'
    interface_type:
      description: Type of the network interface
      returned: always
      type: string
      sample: 'interface'
    ipv6_addresses:
      description: List of IPv6 addresses for this interface
      returned: always
      type: list
      sample: []
    mac_address:
      description: MAC address of the network interface
      returned: always
      type: string
      sample: '0a:f8:10:2f:ab:a1'
    network_interface_id:
      description: The id of the ENI
      returned: always
      type: string
      sample: 'eni-392fsdf'
    owner_id:
      description: AWS account id of the owner of the ENI
      returned: always
      type: string
      sample: '4415120123456'
    private_dns_name:
      description: Private DNS name for the ENI
      returned: always
      type: string
      sample: 'ip-172-16-1-180.ec2.internal'
    private_ip_address:
      description: Private IP address for the ENI
      returned: always
      type: string
      sample: '172.16.1.180'
    private_ip_addresses:
      description: List of private IP addresses attached to the ENI
      returned: always
      type: list
      sample: []
    requester_id:
      description: The ID of the entity that launched the ENI
      returned: always
      type: string
      sample: 'AIDAIONYVJQNIAZFT3ABC'
    requester_managed:
      description:  Indicates whether the network interface is being managed by an AWS service.
      returned: always
      type: bool
      sample: false
    source_dest_check:
      description: Indicates whether the network interface performs source/destination checking.
      returned: always
      type: bool
      sample: false
    status:
      description: Indicates if the network interface is attached to an instance or not
      returned: always
      type: string
      sample: 'in-use'
    subnet_id:
      description: Subnet ID the ENI is in
      returned: always
      type: string
      sample: 'subnet-7bbf01234'
    tag_set:
      description: Dictionary of tags added to the ENI
      returned: always
      type: dict
      sample: {}
    vpc_id:
      description: ID of the VPC the network interface it part of
      returned: always
      type: string
      sample: 'vpc-b3f1f123'
'''
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        region=dict(required=True, aliases=['aws_region', 'ec2_region']),
        name_regex=dict(required=True),
        sort_order=dict(required=False, default='ascending', choices=['ascending', 'descending']),
        limit=dict(required=False, type='int'),
    )
    )
    
        if len(response['PlacementGroups']) != 1:
        return None
    else:
        placement_group = response['PlacementGroups'][0]
        return {
            'name': placement_group['GroupName'],
            'state': placement_group['State'],
            'strategy': placement_group['Strategy'],
        }
    
    '''
    
    try:
    import boto.exception
except ImportError:
    pass  # Taken care of by ec2.HAS_BOTO
    
        # Turn the boto3 result in to ansible_friendly_snaked_names
    snaked_snapshots = []
    for snapshot in snapshots['Snapshots']:
        snaked_snapshots.append(camel_dict_to_snake_dict(snapshot))
    
        # Here we need to get the zone info for the instance. This covers situation where
    # instance is specified but zone isn't.
    # Useful for playbooks chaining instance launch with volume create + attach and where the
    # zone doesn't matter to the user.
    inst = None
    if instance:
        try:
            reservation = ec2.get_all_instances(instance_ids=instance)
        except BotoServerError as e:
            module.fail_json(msg=e.message)
        inst = reservation[0].instances[0]
        zone = inst.placement
    
    ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
            print('Iteration %s of %s' % (i, n_iter))
    
    
def generate_pathological_dataset(size):
    # Triggers O(n^2) complexity on the original implementation.
    return np.r_[np.arange(size),
                 np.arange(-(size - 1), size),
                 np.arange(-(size - 1), 1)]
    
    
def plot_results(X, y, label):
    plt.plot(X, y, label=label, marker='o')
    
            for label in ax.get_xticklabels():
            label.set_rotation(-90)
            label.set_fontsize(10)
    
    To run this benchmark, you will need,
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []
    
        @staticmethod
    def import_linux_ca(common_name, ca_file):
    
    def str2hex(str):
    str = bytearray(str)
    h = ['']
    for c in str:
        if c > 0xf:
            h.append(hex(c)[2:])
        else:
            h.append('0' + hex(c)[2:])
    return '\\x'.join(h)
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
            At each rule invocation, the set of tokens that could follow
        that rule is pushed on a stack.  Here are the various 'local'
        follow sets:
    
            raise NotImplementedError
    
    def setTokenIndex(self, index):
        '''@brief Set the index in the input stream.