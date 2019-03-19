
        
            with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post is None

    
    
def _find_app():
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return top.app
    
            return self.tags[key].to_python(value[key])
    
            current = current.parent
    
        .. versionadded:: 1.0
    '''
    
    
def get_git_tags():
    return set(
        Popen(['git', 'tag'], stdout=PIPE).communicate()[0].splitlines()
    )
    
        if not HAS_BOTO3:
        module.fail_json(msg='boto3 required for this module')
    
        i = None
    if mod_params['instance_id']:
        config_name = get_spanner_configuration_name(
            mod_params['configuration'], params['project_id'])
        i = spanner_client.instance(mod_params['instance_id'],
                                    configuration_name=config_name)
    d = None
    if mod_params['database_name']:
        # TODO(supertom): support DDL
        ddl_statements = ''
        d = i.database(mod_params['database_name'], ddl_statements)
    
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
    
            mutually_exclusive = [
            ['cluster_id', 'cluster_name']
        ]
    
    
VALID_RULE_KEYS = ['rule_type', 'original_ip', 'original_port',
                   'translated_ip', 'translated_port', 'protocol']
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True,
                           )
    
            request_url = url + '/data/events/deployments/start'
    else:
        message = module.params['message']
        if message is not None:
            body['errorMessage'] = message
    
    
DOCUMENTATION = '''
---
module: logentries
author: 'Ivan Vanderbyl (@ivanvanderbyl)'
short_description: Module for tracking logs via logentries.com
description:
    - Sends logs to LogEntries in realtime
version_added: '1.6'
options:
    path:
        description:
            - path to a log file
        required: true
    state:
        description:
            - following state of the log
        choices: [ 'present', 'absent' ]
        required: false
        default: present
    name:
        description:
            - name of the log
        required: false
    logtype:
        description:
            - type of the log
        required: false
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    import json
import re
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
    
    {
    {pattern_inline_title = r'<title>([^<]*)</title>'
pattern_inline_api_key = r'api\.site_key\s*=\s*'([^']+)''
pattern_inline_img_url = r''url':'([^']+)','key':'[^']+'}}'
pattern_inline_NSID = r''nsid'\s*:\s*'([^']+)''
pattern_inline_video_mark = r'('mediaType':'video')'
    
            if 'title' not in kwargs:
            url = 'http://pv.funshion.com/v5/video/profile/?id={}&cl=mweb&uc=111'.format(self.vid)
            meta = json.loads(get_content(url))
            self.title = meta['name']
        else:
            self.title = kwargs['title']
    
        title = r1(r'<meta property='og:title' content='(.*?)'>', html)
    
            #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
    
def compute_bbox_regression_targets(entry):
    '''Compute bounding-box regression targets for an image.'''
    # Indices of ground-truth ROIs
    rois = entry['boxes']
    overlaps = entry['max_overlaps']
    labels = entry['max_classes']
    gt_inds = np.where((entry['gt_classes'] > 0) & (entry['is_crowd'] == 0))[0]
    # Targets has format (class, tx, ty, tw, th)
    targets = np.zeros((rois.shape[0], 5), dtype=np.float32)
    if len(gt_inds) == 0:
        # Bail if the image has no ground-truth ROIs
        return targets
    
        # transformation blob
    tr = globals()[cfg.RESNETS.TRANS_FUNC](
        model,
        blob_in,
        dim_in,
        dim_out,
        stride,
        prefix,
        dim_inner,
        group=cfg.RESNETS.NUM_GROUPS,
        dilation=dilation
    )
    
    When renaming functions, it's generally a good idea to codemod existing yaml
config files. An easy way to batch edit, by example, is a shell command like
    
    from caffe2.python import muji
    
        def forward(self, inputs, outputs):
        '''See modeling.detector.GenerateProposalLabels for inputs/outputs
        documentation.
        '''
        # During training we reuse the data loader code. We populate roidb
        # entries on the fly using the rois generated by RPN.
        # im_info: [[im_height, im_width, im_scale], ...]
        rois = inputs[0].data
        roidb = blob_utils.deserialize(inputs[1].data)
        im_info = inputs[2].data
        im_scales = im_info[:, 2]
        output_blob_names = fast_rcnn_roi_data.get_fast_rcnn_blob_names()
        # For historical consistency with the original Faster R-CNN
        # implementation we are *not* filtering crowd proposals.
        # This choice should be investigated in the future (it likely does
        # not matter).
        json_dataset.add_proposals(roidb, rois, im_scales, crowd_thresh=0)
        roidb_utils.add_bbox_regression_targets(roidb)
        blobs = {k: [] for k in output_blob_names}
        fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
        for i, k in enumerate(output_blob_names):
            blob_utils.py_op_copy_blob(blobs[k], outputs[i])
