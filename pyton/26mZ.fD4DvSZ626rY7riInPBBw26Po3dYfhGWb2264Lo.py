
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        youngest_snapshot = max(snapshots, key=_get_snapshot_starttime)
    
        results = dict(ansible_facts={'lambda_facts': {'function': all_facts}}, changed=False)
    
        gateway = vca.get_gateway(vdc_name, gateway_name)
    if not gateway:
        module.fail_json(msg='Not able to find the gateway %s, please check '
                             'the gateway_name param' % gateway_name)
    
            if privilege is not None:
            changed = client.modify_if_diff(name, ipa_role.get('memberof_privilege', []), privilege,
                                            client.role_add_privilege,
                                            client.role_remove_privilege) or changed
        if service is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_service', []), service,
                                            client.role_add_service,
                                            client.role_remove_service) or changed
        if user is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_user', []), user,
                                            client.role_add_user,
                                            client.role_remove_user) or changed
    
        if module.params['repo']:
        params['deploy[scm_repository]'] = module.params['repo']
    
    
def do_send_request(module, url, params, key):
    data = json.dumps(params)
    headers = {
        'Content-Type': 'application/json',
        'x-stackdriver-apikey': key
    }
    response, info = fetch_url(module, url, headers=headers, data=data, method='POST')
    if info['status'] != 200:
        module.fail_json(msg='Unable to send msg: %s' % info['msg'])
    
            if not is_namespace:
            tests = list(self._find_tests(start_dir, pattern))
        return self.suiteClass(tests)
    
    
# Are two open files really referencing the same file?
# (Not necessarily the same file descriptor!)
def sameopenfile(fp1, fp2):
    '''Test whether two open file objects reference the same file'''
    s1 = os.fstat(fp1)
    s2 = os.fstat(fp2)
    return samestat(s1, s2)
    
    
def open_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> TextIO:
    '''Return a file-like object opened for text reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return TextIOWrapper(reader.open_resource(resource), encoding, errors)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='r', encoding=encoding, errors=errors)
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return TextIOWrapper(BytesIO(data), encoding, errors)
    
    #
# Function used to calculate result
#
    
    con.commit()