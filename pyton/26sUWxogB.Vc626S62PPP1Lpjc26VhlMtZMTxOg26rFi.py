
        
                # Insert the import statement to setup.py if not present
        with open(setup_path, 'a+') as setup:
            setup.seek(0)
            setup_content = setup.read()
            if not 'import fastentrypoints' in setup_content:
                setup.seek(0)
                setup.truncate()
                setup.write('import fastentrypoints\n' + setup_content)
    
    Commands:
   update - Retrieve new lists of packages
   upgrade - Perform an upgrade
   install - Install new packages (pkg is libc6 not libc6.deb)
   remove - Remove packages
   autoremove - Remove automatically all unused packages
   purge - Remove packages and config files
   source - Download source archives
   build-dep - Configure build-dependencies for source packages
   dist-upgrade - Distribution upgrade, see apt-get(8)
   dselect-upgrade - Follow dselect selections
   clean - Erase downloaded archive files
   autoclean - Erase old downloaded archive files
   check - Verify that there are no broken dependencies
   changelog - Download and display the changelog for the given package
   download - Download the binary package into the current directory
    
      * put-item
  * get-item
'''
    
    
class ArrayMinLengthValidator(MinLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no fewer than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no fewer than %(limit_value)d.',
        'limit_value')
    
            if connection.savepoint_ids:
            sid = connection.savepoint_ids.pop()
        else:
            # Prematurely unset this flag to allow using commit or rollback.
            connection.in_atomic_block = False
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
from ansible.module_utils.aws.waf import list_web_acls, get_web_acl
    
    EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
        gw_mgr = Ec2CustomerGatewayManager(module)
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
            cluster = camel_dict_to_snake_dict(cluster)
        arn = 'arn:aws:elasticache:%s:%s:cluster:%s' % (region, account_id, cluster['cache_cluster_id'])
        try:
            tags = get_elasticache_tags_with_backoff(client, arn)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Couldn't get tags for cluster %s')
    
    
if __name__ == '__main__':
    main()

    
        Basic Usage:
        >>> import boto3
        >>> iam = boto3.client('iam')
        >>> name = 'server-cert-name'
        >>> results = get_server_certs(iam, name)
        {
            'upload_date': '2015-04-25T00:36:40+00:00',
            'server_certificate_id': 'ADWAJXWTZAXIPIMQHMJPO',
            'certificate_body': '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----',
            'server_certificate_name': 'server-cert-name',
            'expiration': '2017-06-15T12:00:00+00:00',
            'path': '/',
            'arn': 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
        }
    '''
    results = dict()
    try:
        if name:
            server_certs = [iam.get_server_certificate(ServerCertificateName=name)['ServerCertificate']]
        else:
            server_certs = iam.list_server_certificates()['ServerCertificateMetadataList']