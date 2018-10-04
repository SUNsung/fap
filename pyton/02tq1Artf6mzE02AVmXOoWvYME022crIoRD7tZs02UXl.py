
        
            request.addfinalizer(_reset_settings)
    conf.settings.user_dir = Path('~/.thefuck')
    return conf.settings
    
    
@pytest.mark.parametrize('app, help_text, operations', [
    ('apt', apt_help, apt_operations),
    ('apt-get', apt_get_help, apt_get_operations)
])
def test_get_operations(set_help, app, help_text, operations):
    set_help(help_text)
    assert _get_operations(app) == operations
    
        def find_condition_in_rules(self, condition_set_id):
        rules_in_use = []
        try:
            all_rules = list_rules_with_backoff(self.client)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Could not list rules')
        for rule in all_rules:
            try:
                rule_details = get_rule_with_backoff(self.client, rule['RuleId'])
            except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Could not get rule details')
            if condition_set_id in [predicate['DataId'] for predicate in rule_details['Predicates']]:
                rules_in_use.append(rule_details['Name'])
        return rules_in_use
    
    
def remove_rule_conditions(client, module, rule_id):
    conditions = get_rule(client, module, rule_id)['Predicates']
    updates = [format_for_deletion(camel_dict_to_snake_dict(condition)) for condition in conditions]
    try:
        run_func_with_change_token_backoff(client, module, {'RuleId': rule_id, 'Updates': updates}, client.update_rule)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not remove rule conditions')
    
    notes:
  - does not support check mode
    
    
def define_pipeline(client, module, objects, dp_id):
    '''Puts pipeline definition
    
            else:
            result['changed'] = False
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
        params['Filters'] = ansible_dict_to_boto3_filter_list(module.params.get('filters'))
    params['CustomerGatewayIds'] = module.params.get('customer_gateway_ids')
    
    
def create_metric_alarm(connection, module):
    
    RETURN = '''
snapshot_id:
    description: The ID of the snapshot. Each snapshot receives a unique identifier when it is created.
    type: string
    returned: always
    sample: snap-01234567
volume_id:
    description: The ID of the volume that was used to create the snapshot.
    type: string
    returned: always
    sample: vol-01234567
state:
    description: The snapshot state (completed, pending or error).
    type: string
    returned: always
    sample: completed
state_message:
    description: Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy operation fails (for example, if the proper
                 AWS Key Management Service (AWS KMS) permissions are not obtained) this field displays error state details to help you diagnose why the
                 error occurred.
    type: string
    returned: always
    sample:
start_time:
    description: The time stamp when the snapshot was initiated.
    type: string
    returned: always
    sample: '2015-02-12T02:14:02+00:00'
progress:
    description: The progress of the snapshot, as a percentage.
    type: string
    returned: always
    sample: '100%'
owner_id:
    description: The AWS account ID of the EBS snapshot owner.
    type: string
    returned: always
    sample: '099720109477'
description:
    description: The description for the snapshot.
    type: string
    returned: always
    sample: 'My important backup'
volume_size:
    description: The size of the volume, in GiB.
    type: int
    returned: always
    sample: 8
owner_alias:
    description: The AWS account alias (for example, amazon, self) or AWS account ID that owns the snapshot.
    type: string
    returned: always
    sample: '033440102211'
tags:
    description: Any tags assigned to the snapshot.
    type: dict
    returned: always
    sample: '{ 'my_tag_key': 'my_tag_value' }'
encrypted:
    description: Indicates whether the snapshot is encrypted.
    type: boolean
    returned: always
    sample: 'True'
kms_key_id:
    description: The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to \
    protect the volume encryption key for the parent volume.
    type: string
    returned: always
    sample: '74c9742a-a1b2-45cb-b3fe-abcdef123456'
data_encryption_key_id:
    description: The data encryption key identifier for the snapshot. This value is a unique identifier that \
    corresponds to the data encryption key that was used to encrypt the original volume or snapshot copy.
    type: string
    returned: always
    sample: 'arn:aws:kms:ap-southeast-2:012345678900:key/74c9742a-a1b2-45cb-b3fe-abcdef123456'
    
    # The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#language = None
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
        # If no valid image file was uploaded, show the file upload form:
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
    # This is a demo of running face recognition on live video from your webcam. It's a little more complicated than the
# other example, but it includes some basic performance tweaks to make things run a lot faster:
#   1. Process each video frame at 1/4 resolution (though still display it at full resolution)
#   2. Only detect faces in every other frame of video.
    
        unknown_encodings = face_recognition.face_encodings(unknown_image)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]