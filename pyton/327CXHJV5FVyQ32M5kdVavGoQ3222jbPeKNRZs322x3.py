
        
        
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
    - heroku_collaborator:
    api_key: YOUR_API_KEY
    user: '{{ item.user }}'
    apps: '{{ item.apps | default(apps) }}'
    suppress_invitation: '{{ item.suppress_invitation | default(suppress_invitation) }}'
    state: '{{ item.state | default('present') }}'
  with_items:
    - { user: 'a.b@example.com' }
    - { state: 'absent', user: 'b.c@example.com', suppress_invitation: false }
    - { user: 'x.y@example.com', apps: ['heroku-example-app'] }
'''
    
        module : AnsibleModule object
    oneandone_conn: authenticated oneandone object
    '''
    try:
        name = module.params.get('name')
        description = module.params.get('description')
        rules = module.params.get('rules')
        wait = module.params.get('wait')
        wait_timeout = module.params.get('wait_timeout')
        wait_interval = module.params.get('wait_interval')
    
            # manage host state
        desired_state = self.get_parameter('state')
        if bool(host):
            current_state = host.STATE
            current_state_name = HOST_STATES(host.STATE).name
        else:
            current_state = HOST_ABSENT
            current_state_name = 'ABSENT'
    
        result['delete_rule'] = list()
    result['delete_rule_rc'] = list()
    for rule in current_rules:
        if rule not in desired_rules:
            deletions += 1
            if not module.check_mode:
                result['delete_rule'].append(rule)
                rc = gateway.del_nat_rule(**rule)
                result['delete_rule_rc'].append(rc)
            result['changed'] = True
    result['rules_deleted'] = deletions
    
        # If we're in check mode, just exit pretending like we succeeded
    if module.check_mode:
        module.exit_json(changed=True)
    
    # Copyright (c) 2016, Loic Blot <loic.blot@unix-experience.fr>
# Copyright (c) 2018, Ansible Project
# Sponsored by Infopro Digital. http://www.infopro-digital.com/
# Sponsored by E.T.A.I. http://www.etai.fr/
#
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    module: stackdriver
short_description: Send code deploy and annotation events to stackdriver
description:
  - Send code deploy and annotation events to Stackdriver
version_added: '1.6'
author: 'Ben Whaley (@bwhaley)'
options:
  key:
    description:
      - API key.
    required: true
  event:
    description:
      - The type of event to send, either annotation or deploy
    choices: ['annotation', 'deploy']
  revision_id:
    description:
      - The revision of the code that was deployed. Required for deploy events
  deployed_by:
    description:
      - The person or robot responsible for deploying the code
    default: 'Ansible'
  deployed_to:
    description:
      - 'The environment code was deployed to. (ie: development, staging, production)'
  repository:
    description:
      - The repository (or project) deployed
  msg:
    description:
      - The contents of the annotation message, in plain text.  Limited to 256 characters. Required for annotation.
  annotated_by:
    description:
      - The person or robot who the annotation should be attributed to.
    default: 'Ansible'
  level:
    description:
      - one of INFO/WARN/ERROR, defaults to INFO if not supplied.  May affect display.
    choices: ['INFO', 'WARN', 'ERROR']
    default: 'INFO'
  instance_id:
    description:
      - id of an EC2 instance that this event should be attached to, which will limit the contexts where this event is shown
  event_epoch:
    description:
      - 'Unix timestamp of where the event should appear in the timeline, defaults to now. Be careful with this.'
'''
    
        '''
    for k, v in ret.items():
        tokens = list(k)
        print(tokens)
        if v:
            for t in v:
                print('\t', t)
        else:
            print('\t', '---')
    
    
def relu(x):
    '''ReLU
    `o = max(0., x)`
    '''
    return tf.nn.relu(x)
    
        def __init__(self, l1=0., l2=0.):
        '''
        Args:
            l1(float): L1 正则化的系数
            l2(float): L2 正则化的系数
        '''
        self.l1 = np.asarray(l1, dtype=np.float32)
        self.l2 = np.asarray(l2, dtype=np.float32)
    
    import numpy as np
import tensorflow as tf
    
    sum_ngrams = 0
for s in sentences:
    for w in s:
        w = w.lower()
        # from gensim.models._utils_any2vec import compute_ngrams
        ret = compute_ngrams(w, min_ngrams, max_ngrams)
        print(ret)
        sum_ngrams += len(ret)
'''
['<h', 'he', 'el', 'll', 'lo', 'o>', '<he', 'hel', 'ell', 'llo', 'lo>', '<hel', 'hell', 'ello', 'llo>']
['<w', 'wo', 'or', 'rl', 'ld', 'd>', '<wo', 'wor', 'orl', 'rld', 'ld>', '<wor', 'worl', 'orld', 'rld>']
['<!', '!>', '<!>']
['<i', 'i>', '<i>']
['<a', 'am', 'm>', '<am', 'am>', '<am>']
['<h', 'hu', 'ua', 'ay', 'y>', '<hu', 'hua', 'uay', 'ay>', '<hua', 'huay', 'uay>']
['<.', '.>', '<.>']
'''
assert sum_ngrams == len(model.wv.vectors_ngrams)
print(sum_ngrams)  # 57
print()