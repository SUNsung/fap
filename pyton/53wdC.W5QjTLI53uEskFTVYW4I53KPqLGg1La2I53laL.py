
        
        RETURN = '''
rule:
    description: CloudWatch Event rule data
    returned: success
    type: dict
    sample:
      arn: 'arn:aws:events:us-east-1:123456789012:rule/MyCronTask'
      description: 'Run my scheduled task'
      name: 'MyCronTask'
      schedule_expression: 'cron(0 20 * * ? *)'
      state: 'ENABLED'
targets:
    description: CloudWatch Event target(s) assigned to the rule
    returned: success
    type: list
    sample: '[{ 'arn': 'arn:aws:lambda:us-east-1:123456789012:function:MyFunction', 'id': 'MyTargetId' }]'
'''
    
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
    
            firewall_policy_obj = oneandone.client.FirewallPolicy(
            name=name,
            description=description
        )
    
    - bigpanda:
    component: '{{ deployment.component }}'
    version: '{{ deployment.version }}'
    token: '{{ deployment.token }}'
    state: finished
  delegate_to: localhost
'''
    
        le_path = module.get_bin_path('le', True, ['/usr/local/bin'])
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
    
def b_expo_mod(a, b, c):
    res = 1
    while b > 0:
        if b&1:
            res = ((res%c) * (a%c)) % c
    
        complete_apps = ['sentry']
    symmetrical = True

    
        complete_apps = ['sentry']
    symmetrical = True

    
                try:
                with transaction.atomic():
                    orm.EnvironmentProject.objects.filter(
                        environment__in=from_envs,
                    ).update(environment=to_env)
            except IntegrityError:
                for ep in orm.EnvironmentProject.objects.filter(environment__in=from_envs):
                    try:
                        with transaction.atomic():
                            orm.EnvironmentProject.objects.filter(
                                id=ep.id,
                            ).update(environment=to_env)
                    except IntegrityError:
                        ep.delete()
    
        def _forwards(self, orm):
        'Write your forwards methods here.'