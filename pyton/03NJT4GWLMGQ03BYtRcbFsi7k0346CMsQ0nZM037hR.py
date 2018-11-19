
        
            def create_origin_access_identity(self, caller_reference, comment):
        try:
            return self.client.create_cloud_front_origin_access_identity(
                CloudFrontOriginAccessIdentityConfig={
                    'CallerReference': caller_reference,
                    'Comment': comment
                }
            )
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error creating cloud front origin access identity.')
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
        try:
        images = ec2_client.describe_images(ImageIds=image_ids, Filters=filters, Owners=owner_param, ExecutableUsers=executable_users)
        images = [camel_dict_to_snake_dict(image) for image in images['Images']]
    except (ClientError, BotoCoreError) as err:
        module.fail_json_aws(err, msg='error describing images')
    for image in images:
        try:
            image['tags'] = boto3_tag_list_to_ansible_dict(image.get('tags', []))
            if module.params.get('describe_image_attributes'):
                launch_permissions = ec2_client.describe_image_attribute(Attribute='launchPermission', ImageId=image['image_id'])['LaunchPermissions']
                image['launch_permissions'] = [camel_dict_to_snake_dict(perm) for perm in launch_permissions]
        except (ClientError, BotoCoreError) as err:
            # describing launch permissions of images owned by others is not permitted, but shouldn't cause failures
            pass
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(type='str'),
            tags=dict(type='dict'),
        )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    
if __name__ == '__main__':
    main()

    
                if delete_policy:
                original_policy = ecr.get_repository_policy(registry_id, name)
    
    
def get_elasticache_clusters(client, module, region):
    try:
        clusters = describe_cache_clusters_with_backoff(client, cluster_id=module.params.get('name'))
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Couldn't obtain cache cluster info')
    
                # check if alias has changed -- only version and description can change
            alias_params = ('function_version', 'description')
            for param in alias_params:
                if module.params.get(param) != facts.get(pc(param)):
                    changed = True
                    break
    
            if module.params.get('next_marker'):
            params['Marker'] = module.params.get('next_marker')
        try:
            lambda_facts.update(aliases=client.list_aliases(FunctionName=function_name, **params)['Aliases'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(aliases=[])
            else:
                module.fail_json_aws(e, msg='Trying to get aliases')
    else:
        module.fail_json(msg='Parameter function_name required for query=aliases.')
    
            print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
            X = np.random.randn(n_samples, n_features)
        Y = np.random.randn(n_samples)
    
    We generate a synthetic dataset of size 10^n, for n in [min, max], and
examine the time taken to run isotonic regression over the dataset.
    
        if dataset_name == 'forestcover':
        dataset = fetch_covtype()
        X = dataset.data
        y = dataset.target
        # normal data are those with attribute 2
        # abnormal those with attribute 4
        s = (y == 2) + (y == 4)
        X = X[s, :]
        y = y[s]
        y = (y != 2).astype(int)
    
    import numpy as np
from numpy import random as nr
    
    
def compute_bench(samples_range, features_range):
    
        if netloc.startswith(('127.0.0.', '::1', 'localhost')):
        start_response('400 Bad Request', [('Content-Type', 'text/html')])
        html = ''.join('<a href='https://%s/'>%s</a><br/>' % (x, x) for x in ('google.com', 'mail.google.com'))
        yield message_html('GoAgent %s is Running' % __version__, 'Now you can visit some websites', html)
        raise StopIteration
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    ATTR_URL = 'url'
ATTR_URL_DEFAULT = 'https://www.google.com'
    
        def _update_info(self):
        '''Ensure the information from the router is up to date.
    
                        with open(final_path, 'wb') as fil:
                        for chunk in req.iter_content(1024):
                            fil.write(chunk)
    
            def on_created(self, event):
            '''File created.'''
            self.process(event)