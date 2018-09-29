
        
            def _dispatch_call(self, call, employees):
        for employee in employees:
            if employee.call is None:
                employee.take_call(call)
                return employee
        return None
    
        def __init__(self, timestamp, seller, amount):
        self.timestamp = timestamp
        self.seller = seller
        self.amount = amount
    
    
class HashTable(object):
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    
def consume_socket_content(sock, timeout=0.5):
    chunks = 65536
    content = b''
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
    EXAMPLES = '''
  - name: create web ACL
    aws_waf_web_acl:
      name: my_web_acl
      rules:
        - name: my_rule
          priority: 1
          action: block
      default_action: block
      purge_rules: yes
      state: present
    
    
class CloudFrontInvalidationValidationManager(object):
    '''
    Manages Cloudfront validations for invalidation batches
    '''
    
        def _sync_rule(self, enabled=True):
        '''Syncs local rule state with AWS'''
        if not self._rule_matches_aws():
            self.rule.put(enabled)
    
    
def describe_log_group(client, log_group_name, module):
    params = {}
    if log_group_name:
        params['logGroupNamePrefix'] = log_group_name
    try:
        desc_log_group = client.describe_log_groups(**params)
        return desc_log_group
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to describe log group {0}: {1}'.format(log_group_name, to_native(e)),
                         exception=traceback.format_exc(), **camel_dict_to_snake_dict(e.response))
    except botocore.exceptions.BotoCoreError as e:
        module.fail_json(msg='Unable to describe log group {0}: {1}'.format(log_group_name, to_native(e)),
                         exception=traceback.format_exc())
    
        if pipeline_field(client, dp_id, field='@pipelineState') in DP_INACTIVE_STATES:
        changed = False
    else:
        client.deactivate_pipeline(pipelineId=dp_id)
        try:
            pipeline_status_timeout(client, dp_id, status=DP_INACTIVE_STATES,
                                    timeout=timeout)
        except TimeOutException:
            module.fail_json(msg=('Data Pipeline {0} failed to deactivate'
                                  'within timeout {1} seconds').format(dp_name, timeout))
        changed = True
    
    
if __name__ == '__main__':
    main()

    
    '''
    
        if assign_public_ip is not None:
        launch_config['AssociatePublicIpAddress'] = assign_public_ip
    
        # If we're just listing volumes then do nothing, else get the latest update for the volume
    if state != 'list':
        volume.update()
    
            X = np.random.randn(n_samples, n_features)
        Y = np.random.randn(n_samples)
    
        Returns
    -------
    array of floats shaped like (metrics, formats, samples, classes, density)
        Time in seconds.
    '''
    metrics = np.atleast_1d(metrics)
    samples = np.atleast_1d(samples)
    classes = np.atleast_1d(classes)
    density = np.atleast_1d(density)
    formats = np.atleast_1d(formats)
    out = np.zeros((len(metrics), len(formats), len(samples), len(classes),
                    len(density)), dtype=float)
    it = itertools.product(samples, classes, density)
    for i, (s, c, d) in enumerate(it):
        _, y_true = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=42)
        _, y_pred = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=84)
        for j, f in enumerate(formats):
            f_true = f(y_true)
            f_pred = f(y_pred)
            for k, metric in enumerate(metrics):
                t = timeit(partial(metric, f_true, f_pred), number=n_times)
    
                gc.collect()
            print('benchmarking lasso_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lasso_path(X, y, precompute=False)
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lasso_path (without Gram)'].append(delta)
    
            tick_vals = []
        tick_labels = []
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
        ratio = n_samples / opts.n_population
    
    from __future__ import print_function
    
        revision is a git commit reference (hash or name)
    
      Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    file_extension: The extension (without the dot) of the filename.
    include_state: An _IncludeState instance in which the headers are inserted.
    nesting_state: A NestingState instance which maintains information about
                   the current stack of nested blocks being parsed.
    error: The function to call with any errors found.
  '''
  # If the line is empty or consists of entirely a comment, no need to
  # check it.
  line = clean_lines.elided[linenum]
  if not line:
    return