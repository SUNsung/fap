
        
            try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        iam = boto3_conn(module, conn_type='client', resource='iam', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Boto3 Client Error - ' + str(e.msg))
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    name: ansible-firewall-policy
    description: Testing creation of firewall policies with ansible
    rules:
     -
       protocol: TCP
       port_from: 80
       port_to: 80
       source: 0.0.0.0
    wait: true
    wait_timeout: 500
    
            _check_mode(module, True)
        monitoring_policy = oneandone_conn.create_monitoring_policy(
            monitoring_policy=_monitoring_policy,
            thresholds=_thresholds,
            ports=_ports,
            processes=_processes
        )
    
            change_applied = False
        if self.state == 'present':
            if rc != 0:
                self.module.fail_json(msg='Failed to %s feature %s.'
                                          ' icinga2 command returned %s' % (feature_enable_str,
                                                                            self.feature_name,
                                                                            out))
    
        le_path = module.get_bin_path('le', True, ['/usr/local/bin'])