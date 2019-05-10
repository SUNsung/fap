
        
        
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    \tDid you mean `build`?
'''
    
    
class BtreeGinExtension(CreateExtension):
    
            full_path = request.get_full_path()
        current_site = get_current_site(request)
    
        def _get_session_from_db(self):
        try:
            return self.model.objects.get(
                session_key=self.session_key,
                expire_date__gt=timezone.now()
            )
        except (self.model.DoesNotExist, SuspiciousOperation) as e:
            if isinstance(e, SuspiciousOperation):
                logger = logging.getLogger('django.security.%s' % e.__class__.__name__)
                logger.warning(str(e))
            self._session_key = None
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
    usage:
    
        def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.utils.versions import scrapy_components_versions
    
            def getContext(self, hostname=None, port=None):
            ctx = ClientContextFactory.getContext(self)
            # Enable all workarounds to SSL bugs as documented by
            # https://www.openssl.org/docs/manmaster/man3/SSL_CTX_set_options.html
            ctx.set_options(SSL.OP_ALL)
            return ctx

    
    from detectron.core.config import cfg
from detectron.datasets.dataset_catalog import get_raw_dir
    
        'Flipping' an entry means that that image and associated metadata (e.g.,
    ground truth boxes and object proposals) are horizontally flipped.
    '''
    flipped_roidb = []
    for entry in roidb:
        width = entry['width']
        boxes = entry['boxes'].copy()
        oldx1 = boxes[:, 0].copy()
        oldx2 = boxes[:, 2].copy()
        boxes[:, 0] = width - oldx2 - 1
        boxes[:, 2] = width - oldx1 - 1
        assert (boxes[:, 2] >= boxes[:, 0]).all()
        flipped_entry = {}
        dont_copy = ('boxes', 'segms', 'gt_keypoints', 'flipped')
        for k, v in entry.items():
            if k not in dont_copy:
                flipped_entry[k] = v
        flipped_entry['boxes'] = boxes
        flipped_entry['segms'] = segm_utils.flip_segms(
            entry['segms'], entry['height'], entry['width']
        )
        if dataset.keypoints is not None:
            flipped_entry['gt_keypoints'] = keypoint_utils.flip_keypoints(
                dataset.keypoints, dataset.keypoint_flip_map,
                entry['gt_keypoints'], entry['width']
            )
        flipped_entry['flipped'] = True
        flipped_roidb.append(flipped_entry)
    roidb.extend(flipped_roidb)
    
        # conv 1x1 -> BN (no ReLU)
    # NB: for now this AffineChannel op cannot be in-place due to a bug in C2
    # gradient computation for graphs like this
    cur = model.ConvAffine(
        cur,
        prefix + '_branch2c',
        dim_inner,
        dim_out,
        kernel=1,
        stride=1,
        pad=0,
        inplace=False
    )
    return cur
    
    
def _mkanchors(ws, hs, x_ctr, y_ctr):
    '''Given a vector of widths (ws) and heights (hs) around a center
    (x_ctr, y_ctr), output a set of anchors (windows).
    '''
    ws = ws[:, np.newaxis]
    hs = hs[:, np.newaxis]
    anchors = np.hstack(
        (
            x_ctr - 0.5 * (ws - 1),
            y_ctr - 0.5 * (hs - 1),
            x_ctr + 0.5 * (ws - 1),
            y_ctr + 0.5 * (hs - 1)
        )
    )
    return anchors
    
    
def VGG_CNN_M_1024_rpn_frozen_features(model):
    return build_generic_detection_model(
        model,
        VGG_CNN_M_1024.add_VGG_CNN_M_1024_conv5_body,
        freeze_conv_body=True
    )
    
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

    
    from collections import namedtuple
import logging
import numpy as np
import threading
    
        # Base Fast R-CNN blobs
    blob_dict = dict(
        labels_int32=sampled_labels.astype(np.int32, copy=False),
        rois=sampled_rois,
        bbox_targets=bbox_targets,
        bbox_inside_weights=bbox_inside_weights,
        bbox_outside_weights=bbox_outside_weights
    )
    
                res, grad, grad_estimated = gc.CheckSimple(op, [X, I], 0, [0])
            self.assertTrue(res, 'Grad check failed')
    
        @patch('r2.lib.authorize.interaction.request')
    @patch('r2.lib.authorize.interaction.api.create_authorization_hold')
    @patch('r2.lib.authorize.interaction.CustomerID.get_id')
    @patch('r2.lib.authorize.interaction.PayID.get_ids')
    def test_auth_transaction(self, get_ids, get_id, create_authorization_hold,
                              request):
        '''Test auth_transaction'''
        link = Mock(spec=Link)
        link._id = 99
        amount = 100
        payment_method_id = 50
        campaign_id = 99
        request.ip = '127.0.0.1'
        transaction_id = 123
    
    
    {                    'request_url': request.fullpath,
                    'domain': request.host,
                    'geoip_country': context.location,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'referrer_domain': self.domain_mock(),
                    'referrer_url': request.headers.get(),
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'obfuscated_data': {
                        'client_ip': request.ip,
                    }
                },
            )
        )
    
            perm_set = TestPermissionSet()
        self.assertTrue(perm_set.is_valid())
        perm_set['x'] = True
        self.assertTrue(perm_set.is_valid())
        perm_set[perm_set.ALL] = True
        self.assertTrue(perm_set.is_valid())
        perm_set['z'] = True
        self.assertFalse(perm_set.is_valid())
    
            self.patch_g(memoizecache=NonCache())
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def test_reddit_android_detector(self):
        user_agent = 'RedditAndroid 1.1.5'
        agent_parsed = {}
        result = RedditAndroidDetector().detect(user_agent, agent_parsed)
        self.assertTrue(result)
        self.assertEqual(agent_parsed['browser']['name'],
                         RedditAndroidDetector.name)
        self.assertEqual(agent_parsed['browser']['version'], '1.1.5')
        self.assertTrue(agent_parsed['app_name'],
                        agent_parsed['browser']['name'])
    
        def assert_invalid(self, body, header, error, **expected):
        expected.setdefault('global_version', -1)
        expected.setdefault('version', -1)
        expected.setdefault('platform', None)
        expected.setdefault('has_mac', False)
        expected['success'] = False
        expected['error'] = error
        return self._assert_validity(body, header, **expected)
    
        def test_timer(self):
        t = stats.Timer(self.client(), 't')
        t._time = iter(i / 10.0 for i in xrange(10)).next
        self.assertRaises(AssertionError, t.intermediate, 'fail')
        self.assertRaises(AssertionError, t.stop)