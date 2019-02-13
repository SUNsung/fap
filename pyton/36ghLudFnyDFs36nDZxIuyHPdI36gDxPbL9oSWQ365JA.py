
        
        import pytest
from flaskr.db import get_db
    
        indent = None
    separators = (',', ':')
    
        def to_python(self, value):
        return Markup(value)
    
    :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
    
    
class Environment(BaseEnvironment):
    '''Works like a regular Jinja2 environment but has some additional
    knowledge of how Flask's blueprint works so that it can prepend the
    name of the blueprint to referenced templates if necessary.
    '''
    
            The arguments passed to :meth:`as_view` are forwarded to the
        constructor of the class.
        '''
        def view(*args, **kwargs):
            self = view.view_class(*class_args, **class_kwargs)
            return self.dispatch_request(*args, **kwargs)
    
        yield out
    mp.undo()
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        return results
    
        for index, rule in updates:
        if not module.check_mode:
            rule = create_fw_rule(**rule)
            fwservice.replace_FirewallRule_at(index, rule)
        result['changed'] = True
    
    EXAMPLES = '''
# Ensure rule to allow all users to access any host from any host
- ipa_hbacrule:
    name: allow_all
    description: Allow all users to access any host from any host
    hostcategory: all
    servicecategory: all
    usercategory: all
    state: present
    ipa_host: ipa.example.com
    ipa_user: admin
    ipa_pass: topsecret
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
        url = module.params.get('url')
    
        def get_status():
        '''Return the status of the process in monit, or the empty string if not present.'''
        rc, out, err = module.run_command('%s %s' % (MONIT, SUMMARY_COMMAND), check_rc=True)
        for line in out.split('\n'):
            # Sample output lines:
            # Process 'name'    Running
            # Process 'name'    Running - restart pending
            parts = parse(line.split())
            if parts != '':
                return parts
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
        return ciphertext
    
    
def im_detect_mask_hflip(model, im, target_scale, target_max_size, boxes):
    '''Performs mask detection on the horizontally flipped image.
    Function signature is the same as for im_detect_mask_aug.
    '''
    # Compute the masks for the flipped image
    im_hf = im[:, ::-1, :]
    boxes_hf = box_utils.flip_boxes(boxes, im.shape[1])
    
    
def cityscapes_to_coco_all_random(cityscapes_id):
    lookup = {
        0: -1,  # ... background
        1: -1,  # bicycle
        2: -1,  # car
        3: -1,  # person (ignore)
        4: -1,  # train
        5: -1,  # truck
        6: -1,  # motorcycle
        7: -1,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]

    
    
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
    
    
def keypoint_rcnn_frozen_features(model):
    logger.warn('Deprecated: use `TRAIN.FREEZE_CONV_BODY: True` instead')
    return build_generic_detection_model(
        model,
        get_func(cfg.MODEL.CONV_BODY),
        add_roi_box_head_func=get_func(cfg.FAST_RCNN.ROI_BOX_HEAD),
        add_roi_keypoint_head_func=get_func(cfg.KRCNN.ROI_KEYPOINTS_HEAD),
        freeze_conv_body=True
    )
    
    When renaming functions, it's generally a good idea to codemod existing yaml
config files. An easy way to batch edit, by example, is a shell command like