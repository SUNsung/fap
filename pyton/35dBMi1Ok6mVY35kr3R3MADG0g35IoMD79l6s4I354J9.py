
        
        
DOCUMENTATION = '''
---
module: iam_server_certificate_facts
short_description: Retrieve the facts of a server certificate
description:
  - Retrieve the attributes of a server certificate
version_added: '2.2'
author: 'Allen Sanabria (@linuxdynasty)'
requirements: [boto3, botocore]
options:
  name:
    description:
      - The name of the server certificate you are retrieving attributes for.
    required: true
extends_documentation_fragment:
    - aws
    - ec2
'''
    
            for rule in rules:
            firewall_rule = oneandone.client.FirewallPolicyRule(
                protocol=rule['protocol'],
                port_from=rule['port_from'],
                port_to=rule['port_to'],
                source=rule['source'])
            firewall_rules.append(firewall_rule)
    
    
DOCUMENTATION = '''
---
module: honeybadger_deployment
author: 'Benjamin Curtis (@stympy)'
version_added: '2.2'
short_description: Notify Honeybadger.io about app deployments
description:
   - Notify Honeybadger.io about app deployments (see http://docs.honeybadger.io/article/188-deployment-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
  repo:
    description:
      - URL of the project repository
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
  url:
    description:
      - Optional URL to submit the notification to.
    default: 'https://api.honeybadger.io/v1/deploys'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    type: bool
    default: 'yes'
    
        return device_ip
    
            o = tf.nn.conv2d(x, W, strides=strides, padding=padding) + b
        o = act_fn(o)
    
    
    
        return o
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')