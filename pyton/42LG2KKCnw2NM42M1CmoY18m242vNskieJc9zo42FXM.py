
        
        
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
    
if __name__ == '__main__':
    unittest.main()

    
        def test_calc(self):
        jsi = JSInterpreter('function x4(a){return 2*a+1;}')
        self.assertEqual(jsi.call_function('x4', 3), 7)
    
        def test_secondary_proxy_https(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('https://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
        1. Single argument: Passed straight through to :func:`dumps`.
    2. Multiple arguments: Converted to an array before being passed to
       :func:`dumps`.
    3. Multiple keyword arguments: Converted to a dict before being passed to
       :func:`dumps`.
    4. Both args and kwargs: Behavior undefined and will throw an exception.
    
    
class PassList(JSONTag):
    __slots__ = ()
    
        def set_ip_to_mock(value):
        nonlocal ip_to_mock
        ip_to_mock = value
    
        c = model.Conv(
        blob_in,
        prefix + '_branch1',
        dim_in,
        dim_out,
        kernel=1,
        stride=stride,
        no_bias=1
    )
    return model.AffineChannel(c, prefix + '_branch1_bn', dim=dim_out)
    
        if upsample_heatmap:
        # Increase heatmap output size via bilinear upsampling
        blob_out = model.BilinearInterpolation(
            blob_out, 'kps_score', cfg.KRCNN.NUM_KEYPOINTS,
            cfg.KRCNN.NUM_KEYPOINTS, cfg.KRCNN.UP_SCALE
        )
    
    
def add_fpn_retinanet_outputs(model, blobs_in, dim_in, spatial_scales):
    '''RetinaNet head. For classification and box regression, we can chose to
    have the same conv tower or a separate tower. 'bl_feat_list' stores the list
    of feature blobs for bbox prediction. These blobs can be shared cls feature
    blobs if we share the tower or else are independent blobs.
    '''
    dim_out = dim_in
    k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    A = len(cfg.RETINANET.ASPECT_RATIOS) * cfg.RETINANET.SCALES_PER_OCTAVE
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--num-batches', dest='num_batches',
        help='Number of minibatches to run',
        default=200, type=int)
    parser.add_argument(
        '--sleep', dest='sleep_time',
        help='Seconds sleep to emulate a network running',
        default=0.1, type=float)
    parser.add_argument(
        '--cfg', dest='cfg_file', help='optional config file', default=None,
        type=str)
    parser.add_argument(
        '--x-factor', dest='x_factor', help='simulates x-factor more GPUs',
        default=1, type=int)
    parser.add_argument(
        '--profiler', dest='profiler', help='profile minibatch load time',
        action='store_true')
    parser.add_argument(
        'opts', help='See detectron/core/config.py for all options', default=None,
        nargs=argparse.REMAINDER)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args
    
    from caffe2.proto import caffe2_pb2
from caffe2.python import core
from caffe2.python import gradient_checker
from caffe2.python import workspace