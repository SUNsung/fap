
        
        
def get_web_acl(client, module, web_acl_id):
    try:
        return client.get_web_acl(WebACLId=web_acl_id)['WebACL']
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not get Web ACL with id %s' % web_acl_id)
    
    # List all EIP addresses for several VMs.
- ec2_eip_facts:
    filters:
       instance-id:
         - i-123456789
         - i-987654321
  register: my_vms_eips
    
        try:
        if sort and sort_start and sort_end:
            snaked_launch_configs = snaked_launch_configs[int(sort_start):int(sort_end)]
        elif sort and sort_start:
            snaked_launch_configs = snaked_launch_configs[int(sort_start):]
        elif sort and sort_end:
            snaked_launch_configs = snaked_launch_configs[:int(sort_end)]
    except TypeError:
        module.fail_json(msg='Please supply numeric values for sort_start and/or sort_end')
    
    
def create_snapshot_ansible_module():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            volume_id=dict(),
            description=dict(),
            instance_id=dict(),
            snapshot_id=dict(),
            device_name=dict(),
            wait=dict(type='bool', default=True),
            wait_timeout=dict(type='int', default=0),
            last_snapshot_min_age=dict(type='int', default=0),
            snapshot_tags=dict(type='dict', default=dict()),
            state=dict(choices=['absent', 'present'], default='present'),
        )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    return module
    
        def delete_repository_policy(self, registry_id, name):
        if not self.check_mode:
            policy = self.ecr.delete_repository_policy(
                repositoryName=name, **build_kwargs(registry_id))
            self.changed = True
            return policy
        else:
            policy = self.get_repository_policy(registry_id, name)
            if policy:
                self.skipped = True
                return policy
            return None
    
    
def create(module, connection, replication_id, cluster_id, name):
    ''' Create an Elasticache backup. '''
    try:
        response = connection.create_snapshot(ReplicationGroupId=replication_id,
                                              CacheClusterId=cluster_id,
                                              SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotAlreadyExistsFault':
            response = {}
            changed = False
        else:
            module.fail_json(msg='Unable to create the snapshot.', exception=traceback.format_exc())
    return response, changed
    
            print_info(site_info, title, type, size)
        if not info_only:
            download_urls([real_url], title, ext, size, output_dir, merge = merge)
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
        Extension is everything from the last dot to the end, ignoring
    leading dots.  Returns '(root, ext)'; ext may be empty.'''
    # NOTE: This code must work for text and bytes strings.
    
        If the resource does not already exist on its own on the file system,
    a temporary file will be created. If the file was created, the file
    will be deleted upon exiting the context manager (no exception is
    raised if the file was deleted prior to the context manager
    exiting).
    '''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        try:
            yield Path(reader.resource_path(resource))
            return
        except FileNotFoundError:
            pass
    else:
        _check_location(package)
    # Fall-through for both the lack of resource_path() *and* if
    # resource_path() raises FileNotFoundError.
    package_directory = Path(package.__spec__.origin).parent
    file_path = package_directory / resource
    if file_path.exists():
        yield file_path
    else:
        with open_binary(package, resource) as fp:
            data = fp.read()
        # Not using tempfile.NamedTemporaryFile as it leads to deeper 'try'
        # blocks due to the need to close the temporary file to work on
        # Windows properly.
        fd, raw_path = tempfile.mkstemp()
        try:
            os.write(fd, data)
            os.close(fd)
            yield Path(raw_path)
        finally:
            try:
                os.remove(raw_path)
            except FileNotFoundError:
                pass
    
    from argparse import ArgumentParser
    
            try:
            print(pool.map(f, list(range(10))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.map()')
        else:
            raise AssertionError('expected ZeroDivisionError')