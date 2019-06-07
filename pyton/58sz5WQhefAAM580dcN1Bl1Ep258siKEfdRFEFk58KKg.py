
        
            if last_snapshot_min_age > 0:
        try:
            current_snapshots = ec2.get_all_snapshots(filters={'volume_id': volume_id})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
    EXAMPLES = '''
# Retrieve server certificate
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
    
            if module.params.get('next_marker'):
            params['Marker'] = module.params.get('next_marker')
    
    EXAMPLES = '''
- heroku_collaborator:
    api_key: YOUR_API_KEY
    user: max.mustermann@example.com
    apps: heroku-example-app
    state: present
    
    
def protocol_to_string(protocol):
    protocol = protocol_to_tuple(protocol)
    if protocol[0] is True:
        return 'Tcp'
    elif protocol[1] is True:
        return 'Udp'
    elif protocol[2] is True:
        return 'Icmp'
    elif protocol[3] is True:
        return 'Other'
    elif protocol[4] is True:
        return 'Any'