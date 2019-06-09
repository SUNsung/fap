
        
        match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    dynamodb                                 | dynamodbstreams
ec2                                      | ecr
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
            self.cert_verify(conn, request.url, verify, cert)
        url = self.request_url(request, proxies)
        self.add_headers(request, stream=stream, timeout=timeout, verify=verify, cert=cert, proxies=proxies)
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    # mapping coco categories to cityscapes (our converted json) id
# cityscapes
# INFO roidb.py: 220: 1       bicycle: 7286
# INFO roidb.py: 220: 2           car: 53684
# INFO roidb.py: 220: 3        person: 35704
# INFO roidb.py: 220: 4         train: 336
# INFO roidb.py: 220: 5         truck: 964
# INFO roidb.py: 220: 6    motorcycle: 1468
# INFO roidb.py: 220: 7           bus: 758
# INFO roidb.py: 220: 8         rider: 3504
    
    $ find . -name '*.yaml' -exec sed -i -e \
   's/head_builder\.add_roi_2mlp_head/fast_rcnn_heads.add_roi_2mlp_head/g' {} \;
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
        # Generate canonical proposals from shifted anchors
    # Enumerate all shifted positions on the (H, W) grid
    fpn_max_size = cfg.FPN.COARSEST_STRIDE * np.ceil(
        cfg.TRAIN.MAX_SIZE / float(cfg.FPN.COARSEST_STRIDE)
    )
    field_size = int(np.ceil(fpn_max_size / float(stride)))
    shifts = np.arange(0, field_size) * stride
    shift_x, shift_y = np.meshgrid(shifts, shifts)
    shift_x = shift_x.ravel()
    shift_y = shift_y.ravel()
    shifts = np.vstack((shift_x, shift_y, shift_x, shift_y)).transpose()
    
    import numpy as np
import unittest
    
            with self.mock_del_msg(message, False):
            res = self.do_del_msg(message.name)
    
        def assert_failure(self, res, code=None):
        self.assertEqual(res.status, 200)
        body = res.body
        body = json.loads(body)
        self.assertTrue('json' in body)
        errors = body['json'].get('errors')
        self.assertTrue(code in [x[0] for x in errors])
        data = body['json'].get('data')
        self.assertFalse(bool(data))
    
        def get_loggedin_users(self, num_users):
        users = []
        for i in xrange(num_users):
            users.append(MockAccount(name=str(i), _fullname='t2_%s' % str(i)))
        return users
    
        # Control chars break out of quotes in multiple browsers
    def test_control_chars(self):
        testcase = u'*{font-family:'foobar\x03;color:red;';}'
        self.assertInvalid(testcase)
    
    from r2.lib import js
    
        def test_simple_self_post(self):
        post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')
    
        def test_censor(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image, censor_nsfw=True)
        self.assertEqual(url, 'https://example.com/a.jpg?blur=600&px=32')

    
        def test_protocol_relative(self):
        self.assertIsNotSafeRedditUrl('//foobaz.example.com/aa/baz#quux')