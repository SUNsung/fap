
        
        
class Car(Vehicle):
    
        def bfs(self, source, dest):
        # Use self.visited_ids to track visited nodes
        # Use self.lookup to translate a person_id to a Person
        pass

    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    
def main():
    filters_subspec = dict(
        country=dict(),
        field_to_match=dict(choices=['uri', 'query_string', 'header', 'method', 'body']),
        header=dict(),
        transformation=dict(choices=['none', 'compress_white_space',
                                     'html_entity_decode', 'lowercase',
                                     'cmd_line', 'url_decode']),
        position=dict(choices=['exactly', 'starts_with', 'ends_with',
                               'contains', 'contains_word']),
        comparison=dict(choices=['EQ', 'NE', 'LE', 'LT', 'GE', 'GT']),
        target_string=dict(),  # Bytes
        size=dict(type='int'),
        ip_address=dict(),
        regex_pattern=dict(),
    )
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True),
            type=dict(required=True, choices=['byte', 'geo', 'ip', 'regex', 'size', 'sql', 'xss']),
            filters=dict(type='list'),
            purge_filters=dict(type='bool', default=False),
            state=dict(default='present', choices=['present', 'absent']),
        ),
    )
    module = AnsibleAWSModule(argument_spec=argument_spec,
                              required_if=[['state', 'present', ['filters']]])
    state = module.params.get('state')
    
    notes:
  - does not support check mode
    
    
DYNAMO_TYPE_DEFAULT = 'STRING'
INDEX_REQUIRED_OPTIONS = ['name', 'type', 'hash_key_name']
INDEX_OPTIONS = INDEX_REQUIRED_OPTIONS + ['hash_key_type', 'range_key_name', 'range_key_type', 'includes', 'read_capacity', 'write_capacity']
INDEX_TYPE_OPTIONS = ['all', 'global_all', 'global_include', 'global_keys_only', 'include', 'keys_only']
    
    
def deregister_image(module, connection):
    image_id = module.params.get('image_id')
    delete_snapshot = module.params.get('delete_snapshot')
    wait = module.params.get('wait')
    wait_timeout = module.params.get('wait_timeout')
    image = get_image_by_id(module, connection, image_id)
    
    try:
    from botocore.exceptions import ClientError, BotoCoreError
except ImportError:
    pass
    
    
DOCUMENTATION = '''
---
module: ec2_lc_facts
short_description: Gather facts about AWS Autoscaling Launch Configurations
description:
    - Gather facts about AWS Autoscaling Launch Configurations
version_added: '2.3'
author: 'Loïc Latreille (@psykotox)'
requirements: [ boto3 ]
options:
  name:
    description:
      - A name or a list of name to match.
    default: []
  sort:
    description:
      - Optional attribute which with to sort the results.
    choices: ['launch_configuration_name', 'image_id', 'created_time', 'instance_type', 'kernel_id', 'ramdisk_id', 'key_name']
  sort_order:
    description:
      - Order in which to sort results.
      - Only used when the 'sort' parameter is specified.
    choices: ['ascending', 'descending']
    default: 'ascending'
  sort_start:
    description:
      - Which result to start with (when sorting).
      - Corresponds to Python slice notation.
  sort_end:
    description:
      - Which result to end with (when sorting).
      - Corresponds to Python slice notation.
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        if state == 'present':
        placement_group = get_placement_group_details(connection, module)
        if placement_group is None:
            create_placement_group(connection, module)
        else:
            strategy = module.params.get('strategy')
            if placement_group['strategy'] == strategy:
                module.exit_json(
                    changed=False, placement_group=placement_group)
            else:
                name = module.params.get('name')
                module.fail_json(
                    msg=('Placement group '{}' exists, can't change strategy' +
                         ' from '{}' to '{}'').format(
                             name,
                             placement_group['strategy'],
                             strategy))
    
    # Ignore any .rst files in the venv/ directory.
venvdir = os.getenv('VENVDIR', 'venv')
exclude_patterns = [venvdir+'/*', 'README.rst']
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
        # STEP 2: Using the trained classifier, make predictions for unknown images
    for image_file in os.listdir('knn_examples/test'):
        full_file_path = os.path.join('knn_examples/test', image_file)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        :param file: image file name or file object to load
    :param mode: format to convert the image to. Only 'RGB' (8-bit RGB, 3 channels) and 'L' (black and white) are supported.
    :return: image contents as numpy array
    '''
    im = PIL.Image.open(file)
    if mode:
        im = im.convert(mode)
    return np.array(im)
    
            print('I see someone named {}!'.format(name))

    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)