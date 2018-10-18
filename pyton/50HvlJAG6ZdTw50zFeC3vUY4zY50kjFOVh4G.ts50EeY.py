
        
            def get(self, query):
        '''Get the stored query result from the cache.
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=False),
        )
    )
    module = AnsibleAWSModule(argument_spec=argument_spec, supports_check_mode=True)
    
    
def create_rule_lookup(client, module):
    try:
        rules = list_rules_with_backoff(client)
        return dict((rule['Name'], rule) for rule in rules)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not list rules')
    
    # Facts are published in ansible_facts['cloudformation'][<stack_name>]
- debug:
    msg: '{{ ansible_facts['cloudformation']['my-cloudformation-stack'] }}'
    
        for response in response_iterator:
        response['LaunchConfigurations'] = filter(lambda lc: re.compile(name_regex).match(lc['LaunchConfigurationName']),
                                                  response['LaunchConfigurations'])
    
        results = []
    for placement_group in response['PlacementGroups']:
        results.append({
            'name': placement_group['GroupName'],
            'state': placement_group['State'],
            'strategy': placement_group['Strategy'],
        })
    return results
    
        except BotoServerError as e:
        if e.error_message != 'No modifications were requested.':
            module.fail_json(msg=e.error_message)
        else:
            changed = False
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
        # Loop through each person in the training set
    for class_dir in os.listdir(train_dir):
        if not os.path.isdir(os.path.join(train_dir, class_dir)):
            continue
    
    # Initialize some variables
face_locations = []
face_encodings = []
face_names = []
frame_number = 0
    
    # This is a super simple (but slow) example of running face recognition on live video from your webcam.
# There's a second example that's a little more complicated but runs faster.
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)