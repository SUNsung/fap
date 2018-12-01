
        
        
def get_cloudwatchevents_client(module):
    '''Returns a boto3 client for accessing CloudWatch Events'''
    region, ec2_url, aws_conn_kwargs = get_aws_connection_info(module, boto3=True)
    return boto3_conn(module, conn_type='client',
                      resource='events',
                      region=region, endpoint=ec2_url,
                      **aws_conn_kwargs)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (boto3_conn, AWSRetry, camel_dict_to_snake_dict,
                                      ec2_argument_spec, get_aws_connection_info)
    
        launch_config_name = module.params.get('name')
    sort = module.params.get('sort')
    sort_order = module.params.get('sort_order')
    sort_start = module.params.get('sort_start')
    sort_end = module.params.get('sort_end')
    
    # Snapshot of volume mounted on device_name attached to instance_id
- ec2_snapshot:
    instance_id: i-12345678
    device_name: /dev/sdb1
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
    
try:
    import boto3
    import botocore.exceptions
    HAS_BOTO3 = True
except ImportError:
    HAS_BOTO3 = False
    
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
    
                while wait_timeout > time.time() and resource['ClusterStatus'] != 'available':
                time.sleep(5)
                if wait_timeout <= time.time():
                    module.fail_json(msg='Timeout waiting for resource %s' % resource.id)
    
    EXAMPLES = '''
    - name: Get facts for one Azure Kubernetes Service
      azure_rm_aks_facts:
        name: Testing
        resource_group: TestRG
    
    plt.xlim([-0.05, 1.05])
plt.ylim([-0.05, 1.05])
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('Receiver operating characteristic')
plt.legend(loc='lower right')
plt.show()

    
        clf = clone(transfomer)
    
                X_train = X[:n_train]
            y_train = y[:n_train]
            X_test = X[n_train:]
            y_test = y[n_train:]
    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # See if the first face in the uploaded image matches the known face of Obama
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
                # If a match was found in known_face_encodings, just use the first one.
            if True in matches:
                first_match_index = matches.index(True)
                name = known_face_names[first_match_index]
    
            face_encoding_a1 = api.face_encodings(img_a1)[0]
        face_encoding_a2 = api.face_encodings(img_a2)[0]
        face_encoding_a3 = api.face_encodings(img_a3)[0]
        face_encoding_b1 = api.face_encodings(img_b1)[0]
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('two_people.jpg')
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()