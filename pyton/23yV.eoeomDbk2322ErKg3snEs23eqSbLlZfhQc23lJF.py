
        
            # Returns
        model (Model): Keras model instance
    '''
    if (depth - 2) % 6 != 0:
        raise ValueError('depth should be 6n+2 (eg 20, 32, 44 in [a])')
    # Start model definition.
    num_filters = 16
    num_res_blocks = int((depth - 2) / 6)
    
    
def load_data():
    '''Loads CIFAR10 dataset.
    
    
def load_data(label_mode='fine'):
    '''Loads CIFAR100 dataset.
    
        # it's possible to callback a different model than itself
    # (used by Sequential models)
    if hasattr(model, 'callback_model') and model.callback_model:
        callback_model = model.callback_model
    else:
        callback_model = model
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        for response in response_iterator:
        response['LaunchConfigurations'] = filter(lambda lc: re.compile(name_regex).match(lc['LaunchConfigurationName']),
                                                  response['LaunchConfigurations'])
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (connect_to_aws,
                                      boto3_conn,
                                      ec2_argument_spec,
                                      get_aws_connection_info)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported HAS_BOTO3
    
        if state == 'present':
        for required in ['name', 'description', 'subnets']:
            if not module.params.get(required):
                module.fail_json(msg=str('Parameter %s required for state='present'' % required))
    else:
        for not_allowed in ['description', 'subnets']:
            if module.params.get(not_allowed):
                module.fail_json(msg=str('Parameter %s not allowed for state='absent'' % not_allowed))
    
    
def cert_action(module, iam, name, cpath, new_name, new_path, state,
                cert, key, cert_chain, orig_cert_names, orig_cert_bodies, dup_ok):
    if state == 'present':
        update = dup_check(module, iam, name, new_name, cert, orig_cert_names,
                           orig_cert_bodies, dup_ok)
        if update:
            opath, ocert, ocert_id, upload_date, exp, arn = cert_meta(iam, name)
            changed = True
            if new_name and new_path:
                iam.update_server_cert(name, new_cert_name=new_name, new_path=new_path)
                module.exit_json(changed=changed, original_name=name, new_name=new_name,
                                 original_path=opath, new_path=new_path, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn)
            elif new_name and not new_path:
                iam.update_server_cert(name, new_cert_name=new_name)
                module.exit_json(changed=changed, original_name=name, new_name=new_name,
                                 cert_path=opath, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn)
            elif not new_name and new_path:
                iam.update_server_cert(name, new_path=new_path)
                module.exit_json(changed=changed, name=new_name,
                                 original_path=opath, new_path=new_path, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn)
            else:
                changed = False
                module.exit_json(changed=changed, name=name, cert_path=opath, cert_body=ocert,
                                 upload_date=upload_date, expiration_date=exp, arn=arn,
                                 msg='No new path or name specified. No changes made')
        else:
            changed = True
            iam.upload_server_cert(name, cert, key, cert_chain=cert_chain, path=cpath)
            opath, ocert, ocert_id, upload_date, exp, arn = cert_meta(iam, name)
            module.exit_json(changed=changed, name=name, cert_path=opath, cert_body=ocert,
                             upload_date=upload_date, expiration_date=exp, arn=arn)
    elif state == 'absent':
        if name in orig_cert_names:
            changed = True
            iam.delete_server_cert(name)
            module.exit_json(changed=changed, deleted_cert=name)
        else:
            changed = False
            module.exit_json(changed=changed, msg='Certificate with the name %s already absent' % name)
    
        Basic Usage:
        >>> client = boto3.client('kinesis')
        >>> stream_name = 'test-stream'
        >>> delete_stream(client, stream_name)
    
        return {function_name: camel_dict_to_snake_dict(lambda_facts)}
    
        dimensions = 500 * np.arange(1, n_iter + 1)
    
        if dataset_name == 'SA':
        lb = LabelBinarizer()
        x1 = lb.fit_transform(X[:, 1].astype(str))
        x2 = lb.fit_transform(X[:, 2].astype(str))
        x3 = lb.fit_transform(X[:, 3].astype(str))
        X = np.c_[X[:, :1], x1, x2, x3, X[:, 4:]]
        y = (y != b'normal.').astype(int)
    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca)]}
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        ###########################################################################
    # Set GaussianRandomProjection input
    gaussian_matrix_params = {
        'n_components': opts.n_components,
        'random_state': opts.random_seed
    }
    transformers['GaussianRandomProjection'] = \
        GaussianRandomProjection(**gaussian_matrix_params)
    
                tstart = time()
            clf.fit(X_train, y_train)
            asgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                       y_test)
            asgd_results[i, j, 1] = time() - tstart
    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    56                                           @profile
    57                                           def benchmark_sparse_predict():
    58         1        10854  10854.0      2.8      X_test_sparse = csr_matrix(X_test)
    59       301          477      1.6      0.1      for _ in range(300):
    60       300       381409   1271.4     97.1          clf.predict(X_test_sparse)
'''
    
    
URL = ('http://www.cs.cornell.edu/people/pabo/'
       'movie-review-data/review_polarity.tar.gz')