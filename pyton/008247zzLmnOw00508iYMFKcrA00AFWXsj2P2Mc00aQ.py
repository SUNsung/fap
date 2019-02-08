
        
        
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
    
def info(message, *args):
    print(message % args, file=sys.stderr)
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        @classmethod
    def supports(cls, mime):
        raise NotImplementedError
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        def test_request_body_from_file_by_path_no_field_name_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=True)
        r = http('POST', httpbin.url + '/post', 'field-name@' + FILE_PATH_ARG,
                 env=env, error_exit_ok=True)
        assert 'perhaps you meant --form?' in r.stderr
    
        name = None
    helpurl = None
    about = None
    
            plugin = plugin_manager.get_auth_plugin(auth['type'])()
    
            :param progress_file: Where to report download progress.
    
                appid = random.choice(self.working_appid_list)
            return str(appid)
        else:
            for _ in xrange(0, 10):
                appid = self.public_appid.get()
                if appid in self.out_of_quota_appids or appid in self.not_exist_appids:
                    continue
                else:
                    return appid
            return None
    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
    EOF = -1
    
                    # EOF Transition to accept state?
                if c == EOF and self.eof[s] >= 0:
                    #print 'EOF Transition to accept state %d' \
                    #  % self.accept[self.eof[s]]
                    return self.accept[self.eof[s]]
    
    
def b_expo_mod(a, b, c):
    res = 1
    while b > 0:
        if b&1:
            res = ((res%c) * (a%c)) % c
    
                # Get RLE encoding used by the COCO evaluation API
            rle = mask_util.encode(
                np.array(im_mask[:, :, np.newaxis], order='F')
            )[0]
            segms.append(rle)
    
    
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
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
        # Anchors at a single feature cell
    cell_anchors = generate_anchors(
        stride=stride, sizes=anchor_sizes, aspect_ratios=anchor_aspect_ratios
    )
    num_cell_anchors = cell_anchors.shape[0]
    
            # data for select_smooth_l1 loss
        num_classes = cfg.MODEL.NUM_CLASSES - 1
        inds_4d = np.where(_labels > 0)
        M = len(inds_4d)
        _roi_bbox_targets = np.zeros((0, 4))
        _roi_fg_bbox_locs = np.zeros((0, 4))
        if M > 0:
            im_inds, y, x = inds_4d[0], inds_4d[2], inds_4d[3]
            _roi_bbox_targets = np.zeros((len(im_inds), 4))
            _roi_fg_bbox_locs = np.zeros((len(im_inds), 4))
            lbls = _labels[im_inds, :, y, x]
            for i, lbl in enumerate(lbls):
                l = lbl[0] - 1
                if not cfg.RETINANET.CLASS_SPECIFIC_BBOX:
                    l = 0
                assert l >= 0 and l < num_classes, 'label out of the range'
                _roi_bbox_targets[i, :] = _bbox_targets[:, :, y[i], x[i]]
                _roi_fg_bbox_locs[i, :] = np.array([[0, l, y[i], x[i]]])
        blobs_out.append(
            dict(
                retnet_cls_labels=_labels[:, :, 0:h, 0:w].astype(np.int32),
                retnet_roi_bbox_targets=_roi_bbox_targets.astype(np.float32),
                retnet_roi_fg_bbox_locs=_roi_fg_bbox_locs.astype(np.float32),
            ))
    out_num_fg = np.array([num_fg + 1.0], dtype=np.float32)
    out_num_bg = (
        np.array([num_bg + 1.0]) * (cfg.MODEL.NUM_CLASSES - 1) +
        out_num_fg * (cfg.MODEL.NUM_CLASSES - 2))
    return blobs_out, out_num_fg, out_num_bg
