
        
        
class DefaultCategories(Enum):
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
                    condition_insert = dict(FieldToMatch=dict(Type=filtr.get('field_to_match').upper()),
                                        TextTransformation=filtr.get('transformation', 'none').upper())
    
        desired_tags = module.params.get('tags')
    if desired_tags is not None:
        current_tags = boto3_tag_list_to_ansible_dict(image.get('Tags'))
        tags_to_add, tags_to_remove = compare_aws_tags(current_tags, desired_tags, purge_tags=module.params.get('purge_tags'))
    
    - name: associate an elastic IP with a device
  ec2_eip:
    device_id: eni-c8ad70f3
    ip: 93.184.216.119
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (ansible_dict_to_boto3_filter_list,
                                      boto3_tag_list_to_ansible_dict,
                                      camel_dict_to_snake_dict)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported AnsibleAWSModule
    
    - ec2_lc:
    name: special
    image_id: ami-XXX
    key_name: default
    security_groups: ['group', 'group2' ]
    instance_type: t1.micro
    volumes:
    - device_name: /dev/sdf
      no_device: true
'''
    
    
@AWSRetry.exponential_backoff()
def get_placement_group_details(connection, module):
    name = module.params.get('name')
    try:
        response = connection.describe_placement_groups(
            Filters=[{
                'Name': 'group-name',
                'Values': [name]
            }])
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Couldn't find placement group named [%s]' % name)
    
        if not HAS_BOTO:
        module.fail_json(msg='boto required for this module')
    
                elif opt in ('-f', '--force'):
                # Force download.
                conf['force'] = True
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    __all__ = ['ehow_download']
    
    from ..common import *
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
        # Draw a label with a name below the face
    text_width, text_height = draw.textsize(name)
    draw.rectangle(((left, bottom - text_height - 10), (right, bottom)), fill=(0, 0, 255), outline=(0, 0, 255))
    draw.text((left + 6, bottom - text_height - 5), name, fill=(255, 255, 255, 255))
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)