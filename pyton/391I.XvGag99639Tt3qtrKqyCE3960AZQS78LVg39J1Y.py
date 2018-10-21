
        
        
def init_db():
    '''Clear existing data and create new tables.'''
    db = get_db()
    
    
class AuthActions(object):
    def __init__(self, client):
        self._client = client
    
    
def test_index(client, auth):
    response = client.get('/')
    assert b'Log In' in response.data
    assert b'Register' in response.data
    
    
if not PY2:
    text_type = str
    string_types = (str,)
    integer_types = (int,)
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
    
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
    
def _wrap_reader_for_text(fp, encoding):
    if isinstance(fp.read(0), bytes):
        fp = io.TextIOWrapper(io.BufferedReader(fp), encoding)
    return fp
    
    
class SecureCookieSessionInterface(SessionInterface):
    '''The default session interface that stores sessions in signed cookies
    through the :mod:`itsdangerous` module.
    '''
    #: the salt that should be applied on top of the secret key for the
    #: signing of cookie based sessions.
    salt = 'cookie-session'
    #: the hash function to use for the signature.  The default is sha1
    digest_method = staticmethod(hashlib.sha1)
    #: the name of the itsdangerous supported key derivation.  The default
    #: is hmac.
    key_derivation = 'hmac'
    #: A python serializer for the payload.  The default is a compact
    #: JSON derived serializer with support for some extra Python types
    #: such as datetime objects or tuples.
    serializer = session_json_serializer
    session_class = SecureCookieSession
    
    RETURN = '''
web_acl:
  description: contents of the Web ACL
  returned: always
  type: complex
  contains:
    default_action:
      description: Default action taken by the Web ACL if no rules match
      returned: always
      type: dict
      sample:
        type: BLOCK
    metric_name:
      description: Metric name used as an identifier
      returned: always
      type: string
      sample: mywebacl
    name:
      description: Friendly name of the Web ACL
      returned: always
      type: string
      sample: my web acl
    rules:
      description: List of rules
      returned: always
      type: complex
      contains:
        action:
          description: Action taken by the WAF when the rule matches
          returned: always
          type: complex
          sample:
            type: ALLOW
        priority:
          description: priority number of the rule (lower numbers are run first)
          returned: always
          type: int
          sample: 2
        rule_id:
          description: Rule ID
          returned: always
          type: string
          sample: a6fc7ab5-287b-479f-8004-7fd0399daf75
        type:
          description: Type of rule (either REGULAR or RATE_BASED)
          returned: always
          type: string
          sample: REGULAR
    web_acl_id:
      description: Unique identifier of Web ACL
      returned: always
      type: string
      sample: 10fff965-4b6b-46e2-9d78-24f6d2e2d21c
'''
    
    from ansible.module_utils.ec2 import get_aws_connection_info
from ansible.module_utils.ec2 import ec2_argument_spec, boto3_conn
from ansible.module_utils.ec2 import snake_dict_to_camel_dict
from ansible.module_utils.ec2 import camel_dict_to_snake_dict
from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.aws.cloudfront_facts import CloudFrontFactsServiceManager
import datetime
    
        try:
        response = conn.describe_egress_only_internet_gateways()
    except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
        module.fail_json_aws(e, msg='Could not get list of existing Egress-Only Internet Gateways')
    
        def get_repository(self, registry_id, name):
        try:
            res = self.ecr.describe_repositories(
                repositoryNames=[name], **build_kwargs(registry_id))
            repos = res.get('repositories')
            return repos and repos[0]
        except ClientError as err:
            code = err.response['Error'].get('Code', 'Unknown')
            if code == 'RepositoryNotFoundException':
                return None
            raise
    
        module.exit_json(elasticache_clusters=get_elasticache_clusters(client, module, region))
    
    
if __name__ == '__main__':
    main()

    
        if get_user(connection, module, params['UserName']):
        # Check mode means we would remove this user
        if module.check_mode:
            module.exit_json(changed=True)
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(default=None, required=True),
            shards=dict(default=None, required=False, type='int'),
            retention_period=dict(default=None, required=False, type='int'),
            tags=dict(default=None, required=False, type='dict', aliases=['resource_tags']),
            wait=dict(default=True, required=False, type='bool'),
            wait_timeout=dict(default=300, required=False, type='int'),
            state=dict(default='present', choices=['present', 'absent']),
            encryption_type=dict(required=False, choices=['NONE', 'KMS']),
            key_id=dict(required=False, type='str'),
            encryption_state=dict(required=False, choices=['enabled', 'disabled']),
        )
    )
    module = AnsibleModule(
        argument_spec=argument_spec,
        supports_check_mode=True,
    )
    
        invocations = dict(
        aliases='alias_details',
        all='all_details',
        config='config_details',
        mappings='mapping_details',
        policy='policy_details',
        versions='version_details',
    )