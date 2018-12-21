
        
        containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    
tests_require = [
    # Pytest needs to come last.
    # https://bitbucket.org/pypa/setuptools/issue/196/
    'pytest-httpbin',
    'pytest',
    'mock',
]
    
    
FILE_PATH_ARG = patharg(FILE_PATH)
BIN_FILE_PATH_ARG = patharg(BIN_FILE_PATH)
JSON_FILE_PATH_ARG = patharg(JSON_FILE_PATH)
    
    
def copy(module, connection, name, target, bucket):
    ''' Copy an Elasticache backup. '''
    try:
        response = connection.copy_snapshot(SourceSnapshotName=name,
                                            TargetSnapshotName=target,
                                            TargetBucket=bucket)
        changed = True
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to copy the snapshot.', exception=traceback.format_exc())
    return response, changed
    
        if not HAS_GOOGLE_CLOUD_PUBSUB:
        module.fail_json(msg='Please install google-cloud-pubsub library.')
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    state: absent
    name: ansible-firewall-policy
    
    #Add a set of firewall rules
    
        if not pyodbc_found:
        module.fail_json(msg='The python pyodbc module is required.')
    
        # Use 7zip when we have a binary, otherwise try to mount
    if binary:
        cmd = '%s x '%s' -o'%s' %s' % (binary, image, tmp_dir, ' '.join([quote(f) for f in extract_files]))
    else:
        cmd = 'mount -o loop,ro '%s' '%s'' % (image, tmp_dir)
    
    
class HBACRuleIPAClient(IPAClient):
    def __init__(self, module, host, port, protocol):
        super(HBACRuleIPAClient, self).__init__(module, host, port, protocol)
    
            return ''
    
    import random
    
            self.__prepare__(len(A), len(B))