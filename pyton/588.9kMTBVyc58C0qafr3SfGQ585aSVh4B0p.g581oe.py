
        
                '''
        assert not self.status.time_started
    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
def main():
    package_meta_map = {
        package_name: get_package_meta(package_name)
        for package_name in PACKAGES
    }
    httpie_meta = package_meta_map.pop('httpie')
    print()
    print('  url '{url}''.format(url=httpie_meta['url']))
    print('  sha256 '{sha256}''.format(sha256=httpie_meta['sha256']))
    print()
    for dep_meta in package_meta_map.values():
        print('  resource '{name}' do'.format(name=dep_meta['name']))
        print('    url '{url}''.format(url=dep_meta['url']))
        print('    sha256 '{sha256}''.format(sha256=dep_meta['sha256']))
        print('  end')
        print('')
    
    import json
import platform
import sys
import ssl
    
    
def default_hooks():
    return {event: [] for event in HOOKS}
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    # Keep OrderedDict for backwards compatibility.
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
        def __delitem__(self, key):
        del self._store[key.lower()]
    
    try:
    from urllib3.contrib.socks import SOCKSProxyManager
except ImportError:
    def SOCKSProxyManager(*args, **kwargs):
        raise InvalidSchema('Missing dependencies for SOCKS support.')
    
    import urllib3
import chardet
import warnings
from .exceptions import RequestsDependencyWarning
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
        if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
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
    
            link_list = []
    
    __all__ = ['cbs_download']
    
            url = ep_url.format(self.vid)
        meta = json.loads(get_content(url))
        streams = meta['playlist']
        for stream in streams:
            definition = stream['code']
            for s in stream['playinfo']:
                codec = 'h' + s['codec'][2:]
                # h.264 -> h264
                for st in self.__class__.stream_types:
                    s_id = '{}_{}'.format(definition, codec)
                    if codec == 'h264':
                        s_id = definition
                    if s_id == st['id']:
                        clear_info = self.__class__.dec_playinfo(s, self.__class__.coeff)
                        cdn_list = self.__class__.get_cdninfo(clear_info['hashid'])
                        base_url = cdn_list[0]
                        vf = urllib.parse.quote(s['vf'])
                        video_size = int(s['filesize'])
                        token = urllib.parse.quote(base64.b64encode(clear_info['token'].encode('utf8')))
                        video_url = '{}?token={}&vf={}'.format(base_url, token, vf)
                        self.streams[s_id] = dict(size=video_size, src=[video_url], container='mp4')
    
    
site_info = 'huomao.com'
download = huomaotv_download
download_playlist = playlist_not_supported('huomao')

    
        scores = dets[:, 4]
    order = np.argsort(-scores)
    
            # 3. remove predicted boxes with either height or width < min_size
        keep = _filter_boxes(proposals, min_size, im_info)
        proposals = proposals[keep, :]
        scores = scores[keep]
    
        def test_gpu_preserves_vals_at_odd_inds(self):
        X = np.array([0, 1, 2, 3, 4], dtype=np.float32)
        Y_exp = np.array([0, 1, 0, 3, 0], dtype=np.float32)
        Y_act = self._run_zero_even_op_gpu(X)
        np.testing.assert_allclose(Y_act[1::2], Y_exp[1::2])
    
    
def parse_args():
    parser = argparse.ArgumentParser(
        description='Convert a COCO pre-trained model for use with Cityscapes')
    parser.add_argument(
        '--coco_model', dest='coco_model_file_name',
        help='Pretrained network weights file path',
        default=None, type=str)
    parser.add_argument(
        '--convert_func', dest='convert_func',
        help='Blob conversion function',
        default='cityscapes_to_coco', type=str)
    parser.add_argument(
        '--output', dest='out_file_name',
        help='Output file path',
        default=None, type=str)
    
        def test_renamed_key_from_list(self):
        # You should see logger messages like:
        #  'Key EXAMPLE.RENAMED.KEY was renamed to EXAMPLE.KEY;
        #  please update your config'
        opts = ['EXAMPLE.RENAMED.KEY', 'foobar']
        with self.assertRaises(AttributeError):
            _ = cfg.EXAMPLE.RENAMED.KEY  # noqa
        with self.assertRaises(KeyError):
            core_config.merge_cfg_from_list(opts)
    
    '''Primitives for running multiple single-GPU jobs in parallel over subranges of
data. These are used for running multi-GPU inference. Subprocesses are used to
avoid the GIL since inference may involve non-trivial amounts of Python code.
'''
    
        # Load the Cityscapes eval script *after* setting the required env vars,
    # since the script reads their values into global variables (at load time).
    import cityscapesscripts.evaluation.evalInstanceLevelSemanticLabeling \
        as cityscapes_eval
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def datasets():
    '''Retrieve the list of available dataset names.'''
    return _DATASETS.keys()
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    import os
import sys
import codecs
import re