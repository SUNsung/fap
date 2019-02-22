
        
                return view(**kwargs)
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
        preserve_context = False
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        name = 'config'
    helpurl = 'https://httpie.org/doc#config'
    about = 'HTTPie configuration file'
    
        '''Get an elasticache connection'''
    try:
        conn = connect_to_region(region_name=region, **aws_connect_kwargs)
    except boto.exception.NoAuthHandlerFound as e:
        module.fail_json(msg=e.message)
    
        cert_name = module.params.get('name')
    results = get_server_certs(iam, cert_name)
    module.exit_json(results=results)
    
    
DOCUMENTATION = '''
---
module: gcpubsub_facts
version_added: '2.3'
short_description: List Topics/Subscriptions and Messages from Google PubSub.
description:
    - List Topics/Subscriptions from Google PubSub.  Use the gcpubsub module for
      topic/subscription management.
      See U(https://cloud.google.com/pubsub/docs) for an overview.
requirements:
  - 'python >= 2.6'
  - 'google-auth >= 0.5.0'
  - 'google-cloud-pubsub >= 0.22.0'
notes:
  - list state enables user to list topics or subscriptions in the project.  See examples for details.
author:
  - 'Tom Melendez (@supertom) <tom@supertom.com>'
options:
  topic:
    description:
       - GCP pubsub topic name.  Only the name, not the full path, is required.
    required: False
  view:
    description:
       - Choices are 'topics' or 'subscriptions'
    required: True
  state:
    description:
       - list is the only valid option.
    required: False
'''
    
        try:
        instance.update()
    except ValueError:
        # The ValueError here is the one we 'expect'.
        pass
    
            if state == 'absent' and user in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.remove_collaborator(user)
            affected_apps += [app]
            result_state = True
        elif state == 'present' and user not in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.add_collaborator(user_id_or_email=user, silent=module.params['suppress_invitation'])
            affected_apps += [app]
            result_state = True
    
            firewall_policy = oneandone_conn.add_firewall_policy_rule(
            firewall_id=firewall_id,
            firewall_policy_rules=firewall_rules
        )
        return firewall_policy
    except Exception as e:
        module.fail_json(msg=str(e))
    
        gateway = vca.get_gateway(vdc_name, gateway_name)
    if not gateway:
        module.fail_json(msg='Not able to find the gateway %s, please check '
                             'the gateway_name param' % gateway_name)
    
        try:
        client.login(
            username=module.params['ipa_user'],
            password=module.params['ipa_pass']
        )
        changed, zone = ensure(module, client)
        module.exit_json(changed=changed, zone=zone)
    except Exception as e:
        module.fail_json(msg=to_native(e))
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
    # Create groups like 'virt_kvm_host'
- group_by:
    key: virt_{{ ansible_virtualization_type }}_{{ ansible_virtualization_role }}
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.six.moves.urllib.parse import urlencode
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
        elif state == 'restarted':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('restart')
        if status in ['initializing', 'running'] or 'restart pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not restarted' % name, status=status)
    
    # datasets available: ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
datasets = ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    # Create a classifier: a support vector classifier
classifier = svm.SVC(gamma=0.001)
    
    from sklearn.cluster import AgglomerativeClustering
from sklearn.neighbors import kneighbors_graph
    
    labels = ('Waveform 1', 'Waveform 2', 'Waveform 3')
    
    iris = datasets.load_iris()
X = iris.data
y = iris.target
    
    plt.subplot(224)
plt.scatter(X_filtered[:, 0], X_filtered[:, 1], c=y_pred)
plt.title('Unevenly Sized Blobs')
    
    random_state = np.random.RandomState(0)
    
    import time
import warnings
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          
    
                # if multiple releases have files, just rename them
            # instead of trying to merge
            if len(releases_with_files) > 1:
                for release in releases:
                    update_version(release, orm)
                continue
    
            # Adding field 'Environment.organization_id'
        db.add_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True),
            keep_default=False
        )
    
                from_env_ids = [e.id for e in from_envs]
            try:
                with transaction.atomic():
                    orm.ReleaseEnvironment.objects.filter(
                        environment_id__in=from_env_ids,
                    ).update(environment_id=to_env.id)
            except IntegrityError:
                for re in orm.ReleaseEnvironment.objects.filter(environment_id__in=from_env_ids):
                    try:
                        with transaction.atomic():
                            orm.ReleaseEnvironment.objects.filter(
                                id=re.id,
                            ).update(environment_id=to_env.id)
                    except IntegrityError:
                        re.delete()
    
        def backwards(self, orm):
        # Removing unique constraint on 'ReleaseHeadCommit', fields ['repository_id', 'release']
        db.delete_unique('sentry_releaseheadcommit', ['repository_id', 'release_id'])
    
            for user in RangeQuerySetWrapperWithProgressBar(users):
            orm.UserEmail.objects.get_or_create(user=user, email=user.email)
    
    import logging
import numpy as np
import os
import shutil
import uuid
    
    def map_rois_to_fpn_levels(rois, k_min, k_max):
    '''Determine which FPN level each RoI in a set of RoIs should map to based
    on the heuristic in the FPN paper.
    '''
    # Compute level ids
    s = np.sqrt(box_utils.boxes_area(rois))
    s0 = cfg.FPN.ROI_CANONICAL_SCALE  # default: 224
    lvl0 = cfg.FPN.ROI_CANONICAL_LEVEL  # default: 4
    
    
def _generate_anchors(base_size, scales, aspect_ratios):
    '''Generate anchor (reference) windows by enumerating aspect ratios X
    scales wrt a reference (0, 0, base_size - 1, base_size - 1) window.
    '''
    anchor = np.array([1, 1, base_size, base_size], dtype=np.float) - 1
    anchors = _ratio_enum(anchor, aspect_ratios)
    anchors = np.vstack(
        [_scale_enum(anchors[i, :], scales) for i in range(anchors.shape[0])]
    )
    return anchors
    
    
def ResNet50_rfcn(model):
    return build_generic_rfcn_model(
        model, ResNet.add_ResNet50_conv5_body, dim_reduce=1024
    )
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
        # Update blobs dict with Mask R-CNN blobs
    blobs['mask_rois'] = rois_fg
    blobs['roi_has_mask_int32'] = roi_has_mask
    blobs['masks_int32'] = masks
    
    import cv2
import logging
import numpy as np
    
            retinanet_blobs, fg_num, bg_num = _get_retinanet_blobs(
            foas, all_anchors, gt_rois, gt_classes, image_width, image_height)
        for i, foa in enumerate(foas):
            for k, v in retinanet_blobs[i].items():
                # the way it stacks is:
                # [[anchors for image1] + [anchors for images 2]]
                level = int(np.log2(foa.stride))
                key = '{}_fpn{}'.format(k, level)
                if k == 'retnet_roi_fg_bbox_locs':
                    v[:, 0] = im_i
                    # loc_stride: 80 * 4 if cls_specific else 4
                    loc_stride = 4  # 4 coordinate corresponding to bbox prediction
                    if cfg.RETINANET.CLASS_SPECIFIC_BBOX:
                        loc_stride *= (cfg.MODEL.NUM_CLASSES - 1)
                    anchor_ind = foa.octave * num_aspect_ratios + foa.aspect
                    # v[:, 1] is the class label [range 0-80] if we do
                    # class-specfic bbox otherwise it is 0. In case of class
                    # specific, based on the label, the location of current
                    # anchor is class_label * 4 and then we take into account
                    # the anchor_ind if the anchors
                    v[:, 1] *= 4
                    v[:, 1] += loc_stride * anchor_ind
                blobs[key].append(v)
        blobs['retnet_fg_num'] += fg_num
        blobs['retnet_bg_num'] += bg_num