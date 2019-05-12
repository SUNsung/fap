
        
        
def _get_most_recent_snapshot(snapshots, max_snapshot_age_secs=None, now=None):
    '''
    Gets the most recently created snapshot and optionally filters the result
    if the snapshot is too old
    :param snapshots: list of snapshots to search
    :param max_snapshot_age_secs: filter the result if its older than this
    :param now: simulate time -- used for unit testing
    :return:
    '''
    if len(snapshots) == 0:
        return None
    
        if state == 'present':
        if not all((replication_id, cluster_id)):
            module.fail_json(msg='The state 'present' requires options: 'replication_id' and 'cluster_id'')
        response, changed = create(module, connection, replication_id, cluster_id, name)
    elif state == 'absent':
        response, changed = delete(module, connection, name)
    elif state == 'copy':
        if not all((target, bucket)):
            module.fail_json(msg='The state 'copy' requires options: 'target' and 'bucket'.')
        response, changed = copy(module, connection, name, target, bucket)
    
    RETURN = '''
server_certificate_id:
    description: The 21 character certificate id
    returned: success
    type: str
    sample: 'ADWAJXWTZAXIPIMQHMJPO'
certificate_body:
    description: The asn1der encoded PEM string
    returned: success
    type: str
    sample: '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----'
server_certificate_name:
    description: The name of the server certificate
    returned: success
    type: str
    sample: 'server-cert-name'
arn:
    description: The Amazon resource name of the server certificate
    returned: success
    type: str
    sample: 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
path:
    description: The path of the server certificate
    returned: success
    type: str
    sample: '/'
expiration:
    description: The date and time this server certificate will expire, in ISO 8601 format.
    returned: success
    type: str
    sample: '2017-06-15T12:00:00+00:00'
upload_date:
    description: The date and time this server certificate was uploaded, in ISO 8601 format.
    returned: success
    type: str
    sample: '2015-04-25T00:36:40+00:00'
'''
    
        if purge_rules is True and len(rules) > 0:
        result['rules_purged'] = len(rules)
        deletions = result['rules_purged']
        rules = list()
        if not module.check_mode:
            gateway.del_all_nat_rules()
            task = gateway.save_services_configuration()
            vca.block_until_completed(task)
            rules = gateway.get_nat_rules()
        result['changed'] = True
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(zone_name=dict(type='str', required=True),
                         state=dict(type='str', default='present', choices=['present', 'absent']),
                         )
    
    
DOCUMENTATION = '''
---
module: airbrake_deployment
version_added: '1.2'
author: 'Bruce Pennypacker (@bpennypacker)'
short_description: Notify airbrake about app deployments
description:
   - Notify airbrake about app deployments (see http://help.airbrake.io/kb/api-2/deploy-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The airbrake environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
    required: false
  repo:
    description:
      - URL of the project repository
    required: false
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
    required: false
  url:
    description:
      - Optional URL to submit the notification to. Use to send notifications to Airbrake-compliant tools like Errbit.
    required: false
    default: 'https://airbrake.io/deploys.txt'
    version_added: '1.5'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
    
DOCUMENTATION = '''
---
module: bigpanda
author: 'Hagai Kariti (@hkariti)'
short_description: Notify BigPanda about deployments
version_added: '1.8'
description:
   - Notify BigPanda when deployments start and end (successfully or not). Returns a deployment object containing all the parameters for future module calls.
options:
  component:
    description:
      - 'The name of the component being deployed. Ex: billing'
    required: true
    aliases: ['name']
  version:
    description:
      - The deployment version.
    required: true
  token:
    description:
      - API token.
    required: true
  state:
    description:
      - State of the deployment.
    required: true
    choices: ['started', 'finished', 'failed']
  hosts:
    description:
      - Name of affected host name. Can be a list.
    required: false
    default: machine's hostname
    aliases: ['host']
  env:
    description:
      - The environment name, typically 'production', 'staging', etc.
    required: false
  owner:
    description:
      - The person responsible for the deployment.
    required: false
  description:
    description:
      - Free text description of the deployment.
    required: false
  url:
    description:
      - Base URL of the API server.
    required: False
    default: https://api.bigpanda.io
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
            This function first checks for save errors, if none are found,
        all configuration changes made will be saved. According to the
        function parameters. If an exception is raised, a new checkpoint
        was not created.
    
    REWRITE_HTTPS_ARGS = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,NE,R=permanent]']
'''Apache version<2.3.9 rewrite rule arguments used for redirections to
https vhost'''
    
        def test_ne(self):
        self.assertTrue(self.vhost1 != self.vhost2)
        self.assertFalse(self.vhost1 != self.vhost1b)
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = ['sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode']
    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``, waiting 60 seconds
             for DNS propagation
    
    
if __name__ == '__main__':
    main()
    
    		else:
			successor = current.rightChild
			successorParent = current
    
            print('Test: remove on a key that already exists')
        hash_table.remove(10)
        assert_equal(hash_table.get(0), 'foo')
        assert_raises(KeyError, hash_table.get, 10)
    
        def extract_min(self):
        if not self.array:
            return None
        minimum = sys.maxsize
        for index, node in enumerate(self.array):
            if node.key < minimum:
                minimum = node.key
                minimum_index = index
        return self.array.pop(minimum_index)