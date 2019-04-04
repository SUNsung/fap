
        
        from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    try:
    from google.cloud import spanner
    from google.gax.errors import GaxError
    HAS_GOOGLE_CLOUD_SPANNER = True
except ImportError as e:
    HAS_GOOGLE_CLOUD_SPANNER = False
    
    - heroku_collaborator:
    api_key: YOUR_API_KEY
    user: '{{ item.user }}'
    apps: '{{ item.apps | default(apps) }}'
    suppress_invitation: '{{ item.suppress_invitation | default(suppress_invitation) }}'
    state: '{{ item.state | default('present') }}'
  with_items:
    - { user: 'a.b@example.com' }
    - { state: 'absent', user: 'b.c@example.com', suppress_invitation: false }
    - { user: 'x.y@example.com', apps: ['heroku-example-app'] }
'''
    
            firewall_rules = []
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    monitoring_policy: ansible monitoring policy updated
    add_ports:
     -
       protocol: TCP
       port: 33
       alert_if: RESPONDING
       email_notification: false
    wait: true
    state: update
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        try:
        client.login(
            username=module.params['ipa_user'],
            password=module.params['ipa_pass']
        )
        changed, zone = ensure(module, client)
        module.exit_json(changed=changed, zone=zone)
    except Exception as e:
        module.fail_json(msg=to_native(e))
    
    short_description: Manage Icinga2 feature
description:
    - This module can be used to enable or disable an Icinga2 feature.
version_added: '2.3'
author: 'Loic Blot (@nerzhul)'
options:
    name:
      description:
      - This is the feature name to enable or disable.
      required: True
    state:
      description:
      - If set to C(present) and feature is disabled, then feature is enabled.
      - If set to C(present) and feature is already enabled, then nothing is changed.
      - If set to C(absent) and feature is enabled, then feature is disabled.
      - If set to C(absent) and feature is already disabled, then nothing is changed.
      choices: [ 'present', 'absent' ]
      default: present
'''
    
        # get the first device
    model = root.find('ca:model-responses', namespace).find('ca:model', namespace)
    
    - stackdriver:
    key: AAAAAA
    event: annotation
    msg: Greetings from Ansible
    annotated_by: leeroyjenkins
    level: WARN
    instance_id: i-abcd1234
'''
    
            # Force reload if files were modified
        # This is needed to recalculate augeas directive span
        if save_files:
            for sf in save_files:
                self.aug.remove('/files/'+sf)
            self.aug.load()
        if title and not temporary:
            self.finalize_checkpoint(title)
    
    HSTS_ARGS = ['always', 'set', 'Strict-Transport-Security',
             '\'max-age=31536000\'']
'''Apache header arguments for HSTS'''
    
        def conflicts(self, addrs):
        '''See if vhost conflicts with any of the addrs.
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
    
# -- Options for manual page output ---------------------------------------
    
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
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
    
def im_detect_keypoints_aspect_ratio(
    model, im, aspect_ratio, boxes, hflip=False
):
    '''Detects keypoints at the given width-relative aspect ratio.'''
    
    
def add_stage(
    model,
    prefix,
    blob_in,
    n,
    dim_in,
    dim_out,
    dim_inner,
    dilation,
    stride_init=2
):
    '''Add a ResNet stage to the model by stacking n residual blocks.'''
    # e.g., prefix = res2
    for i in range(n):
        blob_in = add_residual_block(
            model,
            '{}_{}'.format(prefix, i),
            blob_in,
            dim_in,
            dim_out,
            dim_inner,
            dilation,
            stride_init,
            # Not using inplace for the last block;
            # it may be fetched externally or used by FPN
            inplace_sum=i < n - 1
        )
        dim_in = dim_out
    return blob_in, dim_in
    
    
_RENAME = {
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up4convs':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up4convs',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0upshare':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0upshare',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0up',
    # Removed head_builder module in favor of the more specific fast_rcnn name
    'head_builder.add_roi_2mlp_head':
        'fast_rcnn_heads.add_roi_2mlp_head',
}