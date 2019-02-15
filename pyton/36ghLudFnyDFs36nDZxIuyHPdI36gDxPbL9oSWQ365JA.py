
        
        
class HStoreExtension(CreateExtension):
    
        def flush(self):
        '''
        Remove the current session data from the database and regenerate the
        key.
        '''
        self.clear()
        self.delete(self.session_key)
        self._session_key = None

    
    from django.contrib.sessions.backends.base import (
    CreateError, SessionBase, UpdateError,
)
from django.core.exceptions import SuspiciousOperation
from django.db import DatabaseError, IntegrityError, router, transaction
from django.utils import timezone
from django.utils.functional import cached_property
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
    import pytest
from requests.compat import urljoin
    
            Currently, this closes the PoolManager and any active ProxyManager,
        which closes any pooled connections.
        '''
        self.poolmanager.clear()
        for proxy in self.proxy_manager.values():
            proxy.clear()
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
    # The scheme of the identifier. Typical schemes are ISBN or URL.
#epub_scheme = ''
    
    
def session():
    '''
    Returns a :class:`Session` for context-management.
    
    
def default_headers():
    '''
    :rtype: requests.structures.CaseInsensitiveDict
    '''
    return CaseInsensitiveDict({
        'User-Agent': default_user_agent(),
        'Accept-Encoding': ', '.join(('gzip', 'deflate')),
        'Accept': '*/*',
        'Connection': 'keep-alive',
    })
    
        def ensure_absent(self):
        '''Ensures the rule and targets are absent'''
        rule_description = self.rule.describe()
        if not rule_description:
            # Rule doesn't exist so don't need to delete
            return
        self.rule.delete()
    
    - debug: msg='{{ my_vm_eips.addresses | json_query(\'[?private_ip_address=='10.0.0.5']\') }}'
    
        if state == 'present':
        for required in ['name', 'description', 'subnets']:
            if not module.params.get(required):
                module.fail_json(msg=str('Parameter %s required for state='present'' % required))
    else:
        for not_allowed in ['description', 'subnets']:
            if module.params.get(not_allowed):
                module.fail_json(msg=str('Parameter %s not allowed for state='absent'' % not_allowed))
    
            _check_mode(module, True)
        firewall_policy = oneandone_conn.create_firewall_policy(
            firewall_policy=firewall_policy_obj,
            firewall_policy_rules=firewall_rules
        )
    
            _thresholds = []
        for treshold in thresholds:
            key = treshold.keys()[0]
            if key in threshold_entities:
                _threshold = oneandone.client.Threshold(
                    entity=key,
                    warning_value=treshold[key]['warning']['value'],
                    warning_alert=str(treshold[key]['warning']['alert']).lower(),
                    critical_value=treshold[key]['critical']['value'],
                    critical_alert=str(treshold[key]['critical']['alert']).lower())
                _thresholds.append(_threshold)
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
    #example for a DNAT
- hosts: localhost
  connection: local
  tasks:
   - vca_nat:
       instance_id: 'b15ff1e5-1024-4f55-889f-ea0209726282'
       vdc_name: 'benz_ansible'
       state: 'present'
       nat_rules:
         - rule_type: DNAT
           original_ip: 203.0.113.23
           original_port: 22
           translated_ip: 192.0.2.42
           translated_port: 22
    
    
DOCUMENTATION = '''
---
module: ipa_dnszone
author: Fran Fitzpatrick (@fxfitz)
short_description: Manage FreeIPA DNS Zones
description:
- Add and delete an IPA DNS Zones using IPA API
options:
  zone_name:
    description:
    - The DNS zone name to which needs to be managed.
    required: true
  state:
    description: State to ensure
    required: false
    default: present
    choices: ['present', 'absent']
extends_documentation_fragment: ipa.documentation
version_added: '2.5'
'''
    
    # Create nested groups
- group_by:
    key: el{{ ansible_distribution_major_version }}-{{ ansible_architecture }}
    parents:
      - el{{ ansible_distribution_major_version }}
    
    - bigpanda:
    component: '{{ deployment.component }}'
    version: '{{ deployment.version }}'
    token: '{{ deployment.token }}'
    state: finished
  delegate_to: localhost
'''
    
        def test_default_encoder(self):
        from acme.fields import RFC3339Field
        self.assertEqual(
            self.encoded, RFC3339Field.default_encoder(self.decoded))
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    
class JWSTest(unittest.TestCase):
    '''Tests for acme.jws.JWS.'''
    
    # Documents to append as an appendix to all manuals.
#texinfo_appendices = []
    
            '''
        error_files = self.aug.match('/augeas//error')
    
            self.assertEqual(len(matches), 1)
        self.assertEqual(self.parser.get_arg(matches[0]), '1234')
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
            # Deleting model 'EnvironmentProject'
        db.delete_table('sentry_environmentproject')
    
            # Adding field 'ApiToken.application'
        db.add_column(
            'sentry_apitoken',
            'application',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.ApiApplication'], null=True
            ),
            keep_default=False
        )
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
        def backwards(self, orm):
        # Removing unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.delete_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])
    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
            return self.net.Conv(
            blobs_in, blob_out, kernel=kernel, order=self.order, **kwargs
        )
    
    
def _add_fast_rcnn_head(
    model, add_roi_box_head_func, blob_in, dim_in, spatial_scale_in
):
    '''Add a Fast R-CNN head to the model.'''
    blob_frcn, dim_frcn = add_roi_box_head_func(
        model, blob_in, dim_in, spatial_scale_in
    )
    fast_rcnn_heads.add_fast_rcnn_outputs(model, blob_frcn, dim_frcn)
    if model.train:
        loss_gradients = fast_rcnn_heads.add_fast_rcnn_losses(model)
    else:
        loss_gradients = None
    return loss_gradients
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
    
def compute_targets(ex_rois, gt_rois, weights=(1.0, 1.0, 1.0, 1.0)):
    '''Compute bounding-box regression targets for an image.'''
    return box_utils.bbox_transform_inv(ex_rois, gt_rois, weights).astype(
        np.float32, copy=False
    )

    
    
def add_keypoint_rcnn_blobs(
    blobs, roidb, fg_rois_per_image, fg_inds, im_scale, batch_idx
):
    '''Add Mask R-CNN keypoint specific blobs to the given blobs dictionary.'''
    # Note: gt_inds must match how they're computed in
    # datasets.json_dataset._merge_proposal_boxes_into_roidb
    gt_inds = np.where(roidb['gt_classes'] > 0)[0]
    max_overlaps = roidb['max_overlaps']
    gt_keypoints = roidb['gt_keypoints']