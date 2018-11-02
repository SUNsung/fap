
        
            def get(self, key, default=None):
        return self.__dict__.get(key, default)

    
    
    builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
    
if __name__ == '__main__':
    main()

    
    from ansible.module_utils.ec2 import get_aws_connection_info, ec2_argument_spec
from ansible.module_utils.ec2 import boto3_conn
from ansible.module_utils.aws.cloudfront_facts import CloudFrontFactsServiceManager
from ansible.module_utils.ec2 import camel_dict_to_snake_dict
from ansible.module_utils.aws.core import AnsibleAWSModule
import datetime
from functools import partial
import json
import traceback
    
    EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
    
if __name__ == '__main__':
    main()

    
    # Gather facts about launch configuration with name 'example'
- ec2_lc_facts:
    name: example
    
    - debug: msg='{{ specific_ec2_placement_groups | json_query(\'[?name=='my-cluster']\') }}'
    
            final_state = camel_dict_to_snake_dict(get_vpc(module, connection, vpc_id))
        final_state['tags'] = boto3_tag_list_to_ansible_dict(final_state.get('tags', []))
        final_state['id'] = final_state.pop('vpc_id')
    
        if state == 'present':
        for required in ['name', 'description', 'subnets']:
            if not module.params.get(required):
                module.fail_json(msg=str('Parameter %s required for state='present'' % required))
    else:
        for not_allowed in ['description', 'subnets']:
            if module.params.get(not_allowed):
                module.fail_json(msg=str('Parameter %s not allowed for state='absent'' % not_allowed))
    
    
try:
    import boto3
    import botocore.exceptions
    HAS_BOTO3 = True
except ImportError:
    HAS_BOTO3 = False
    
    
def main():
    '''
    Main entry point.
    
        CNTV().download_by_vid(rid, **kwargs)
    
        mime, ext, size = url_info(real_url)
    
    site_info = 'dilidili'
download = dilidili_download
download_playlist = playlist_not_supported('dilidili')

    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
    
setup_locate_faces = '''
import face_recognition
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # For a definition of each point index, see https://cdn-images-1.medium.com/max/1600/1*AbEg31EgkbXSQehuNJBlWg.png
    if model == 'large':
        return [{
            'chin': points[0:17],
            'left_eyebrow': points[17:22],
            'right_eyebrow': points[22:27],
            'nose_bridge': points[27:31],
            'nose_tip': points[31:36],
            'left_eye': points[36:42],
            'right_eye': points[42:48],
            'top_lip': points[48:55] + [points[64]] + [points[63]] + [points[62]] + [points[61]] + [points[60]],
            'bottom_lip': points[54:60] + [points[48]] + [points[60]] + [points[67]] + [points[66]] + [points[65]] + [points[64]]
        } for points in landmarks_as_tuples]
    elif model == 'small':
        return [{
            'nose_tip': [points[4]],
            'left_eye': points[2:4],
            'right_eye': points[0:2],
        } for points in landmarks_as_tuples]
    else:
        raise ValueError('Invalid landmarks model type. Supported models are ['small', 'large'].')