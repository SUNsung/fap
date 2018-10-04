
        
        
@bp.route('/<int:id>/update', methods=('GET', 'POST'))
@login_required
def update(id):
    '''Update a post if the current user is the author.'''
    post = get_post(id)
    
    
def test_register(client, app):
    # test that viewing the page renders without template errors
    assert client.get('/auth/register').status_code == 200
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
    (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = '''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
    
@pytest.fixture(autouse=True)
def no_cache(monkeypatch):
    monkeypatch.setattr('thefuck.utils.cache.disabled', True)
    
    python_2 = (u'thefuck/python2-bash',
            u'FROM python:2',
            u'sh')
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument command: Invalid choice, valid choices are:
    
    - name: gather facts about Ubuntu 17.04 AMIs published by Canonical (099720109477)
  ec2_ami_facts:
    owners: 099720109477
    filters:
      name: 'ubuntu/images/ubuntu-zesty-17.04-*'
'''
    
    version_added: '1.6'
    
        module = AnsibleModule(argument_spec=argument_spec)
    
    RETURN = '''
image_id:
    description: AMI id
    returned: when Launch Configuration was found
    type: string
    sample: 'ami-0d75df7e'
user_data:
    description: User data used to start instance
    returned: when Launch Configuration was found
    type: string
    sample: 'ZXhwb3J0IENMT1VE'
name:
    description: Name of the Launch Configuration
    returned: when Launch Configuration was found
    type: string
    sample: 'myapp-v123'
arn:
    description: Name of the AMI
    returned: when Launch Configuration was found
    type: string
    sample: 'arn:aws:autoscaling:eu-west-1:12345:launchConfiguration:d82f050e-e315:launchConfigurationName/yourproject'
instance_type:
    description: Type of ec2 instance
    returned: when Launch Configuration was found
    type: string
    sample: 't2.small'
created_time:
    description: When it was created
    returned: when Launch Configuration was found
    type: string
    sample: '2016-06-29T14:59:22.222000+00:00'
ebs_optimized:
    description: Launch Configuration EBS optimized property
    returned: when Launch Configuration was found
    type: boolean
    sample: False
instance_monitoring:
    description: Launch Configuration instance monitoring property
    returned: when Launch Configuration was found
    type: string
    sample: {'Enabled': false}
classic_link_vpc_security_groups:
    description: Launch Configuration classic link vpc security groups property
    returned: when Launch Configuration was found
    type: list
    sample: []
block_device_mappings:
    description: Launch Configuration block device mappings property
    returned: when Launch Configuration was found
    type: list
    sample: []
keyname:
    description: Launch Configuration ssh key
    returned: when Launch Configuration was found
    type: string
    sample: mykey
security_groups:
    description: Launch Configuration security groups
    returned: when Launch Configuration was found
    type: list
    sample: []
kernel_id:
    description: Launch Configuration kernel to use
    returned: when Launch Configuration was found
    type: string
    sample: ''
ram_disk_id:
    description: Launch Configuration ram disk property
    returned: when Launch Configuration was found
    type: string
    sample: ''
associate_public_address:
    description: Assign public address or not
    returned: when Launch Configuration was found
    type: boolean
    sample: True
...
'''
import re
    
        alarms = connection.describe_alarms(alarm_names=[name])
    
        elif state == 'absent':
        placement_group = get_placement_group_details(connection, module)
        if placement_group is None:
            module.exit_json(changed=False)
        else:
            delete_placement_group(connection, module)
    
    # List all placement groups.
- ec2_placement_group_facts:
  register: all_ec2_placement_groups
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
    for image in TEST_IMAGES:
    size = image.split('-')[1].split('.')[0]
    print('Timings at {}:'.format(size))
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
                # If a match was found in known_face_encodings, just use the first one.
            if True in matches:
                first_match_index = matches.index(True)
                name = known_face_names[first_match_index]
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
        # Let's trace out each facial feature in the image with a line!
    for facial_feature in face_landmarks.keys():
        d.line(face_landmarks[facial_feature], width=5)
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()