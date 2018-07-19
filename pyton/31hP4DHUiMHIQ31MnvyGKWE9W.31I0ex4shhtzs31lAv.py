
        
        if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
        def assertMatch(self, url, ie_list):
        self.assertEqual(self.matching_ies(url), ie_list)
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
    
def list_extractors(age_limit):
    '''
    Return a list of extractors that are suitable for the given age,
    sorted by extractor ID.
    '''
    
    
    {        webpage = self._download_webpage(url, text_id)
        sohu_video_info_str = self._search_regex(
            r'var\s+sohuVideoInfo\s*=\s*({[^}]+});', webpage, 'Sohu video info', default=None)
        if sohu_video_info_str:
            sohu_video_info = self._parse_json(
                sohu_video_info_str, text_id, transform_source=js_to_json)
            return self.url_result(sohu_video_info['url'], 'Sohu')
    
    
def test_auth_plugin_require_auth_false(httpbin):
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
    
def test_unicode_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['json'] == {'test': UNICODE}
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
        '''
)
positional.add_argument(
    'url',
    metavar='URL',
    help='''
    The scheme defaults to 'http://' if the URL does not include one.
    (You can override this with: --default-scheme=https)
    
    
class BaseConfigDict(dict):
    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
        # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
        def create_enqueue_blobs(self):
        blob_names = self.get_output_names()
        enqueue_blob_names = [
            '{}_enqueue_{}'.format(b, self._loader_id) for b in blob_names
        ]
        for gpu_id in range(self._num_gpus):
            with c2_utils.NamedCudaScope(gpu_id):
                for blob in enqueue_blob_names:
                    workspace.CreateBlob(core.ScopedName(blob))
        return enqueue_blob_names
    
        # Column 0 is the batch index in the (batch ind, x1, y1, x2, y2) encoding,
    # so we remove it since we just want to return boxes
    # Scale proposals back to the original input image scale
    boxes = boxes[:, 1:] / im_scale
    return boxes, scores
    
                kps_score = 0
            for k in range(kps_dets[j].shape[1]):
                xy.append(float(kps_dets[j][0, k]))
                xy.append(float(kps_dets[j][1, k]))
                xy.append(1)
                if not use_box_score:
                    kps_score += kps_dets[j][score_index, k]
    
    
# ---------------------------------------------------------------------------- #
# Functions for bolting FPN onto a backbone architectures
# ---------------------------------------------------------------------------- #
    
    from detectron.core.config import cfg
import detectron.utils.blob as blob_utils
    
    '''Construct minibatches for Detectron networks.'''
    
        retnet_roi_fg_bbox_locs -> for the bbox regression, since we are only
                               interested in regressing on fg bboxes which are
                               M in number and the output prediction of the network
                               is of shape N x (A * 4) x H x W
                               (in case of non class-specific bbox), so we
                               store the locations of positive fg boxes in this
                               blob retnet_roi_fg_bbox_locs of shape M x 4 where
                               each row looks like: [img_id, anchor_id, x_loc, y_loc]
    '''
    # im_info: (height, width, image scale)
    blob_names = ['im_info']
    assert cfg.FPN.FPN_ON, 'RetinaNet uses FPN for dense detection'
    # Same format as RPN blobs, but one per FPN level
    if is_training:
        blob_names += ['retnet_fg_num', 'retnet_bg_num']
        for lvl in range(cfg.FPN.RPN_MIN_LEVEL, cfg.FPN.RPN_MAX_LEVEL + 1):
            suffix = 'fpn{}'.format(lvl)
            blob_names += [
                'retnet_cls_labels_' + suffix,
                'retnet_roi_bbox_targets_' + suffix,
                'retnet_roi_fg_bbox_locs_' + suffix,
            ]
    return blob_names
    
            X = np.random.randn(N, 256, 14, 14)
        for _i in range(iters):
            I = np.random.permutation(N)
            workspace.FeedBlob('X', X.astype(np.float32))
            workspace.FeedBlob('I', I.astype(np.int32))
            workspace.RunNet(net.Proto().name)
            np.testing.assert_allclose(
                workspace.FetchBlob('Y'), X[I], rtol=1e-5, atol=1e-08
            )
    
        def __init__(self):
        self.graph = defaultdict(list)