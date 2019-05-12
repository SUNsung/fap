
        
        versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    
if __name__ == '__main__':
    main()

    
    
if __name__ == '__main__':
    unittest.main()

    
            jsi = JSInterpreter('var x5 = function(){return 42;}')
        self.assertEqual(jsi.call_function('x5'), 42)
    
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
    
    
def get_devkit_dir(name):
    '''Retrieve the devkit dir for the dataset.'''
    return _DATASETS[name][_DEVKIT_DIR]
    
    
# ---------------------------------------------------------------------------- #
# Fast R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
    
def _build_forward_graph(model, single_gpu_build_func):
    '''Construct the forward graph on each GPU.'''
    all_loss_gradients = {}  # Will include loss gradients from all GPUs
    # Build the model on each GPU with correct name and device scoping
    for gpu_id in range(cfg.NUM_GPUS):
        with c2_utils.NamedCudaScope(gpu_id):
            all_loss_gradients.update(single_gpu_build_func(model))
    return all_loss_gradients
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
import detectron.utils.boxes as box_utils
    
    from detectron.core.config import cfg
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.roi_data.retinanet as retinanet_roi_data
import detectron.roi_data.rpn as rpn_roi_data
import detectron.utils.blob as blob_utils
    
        for i, filename in enumerate(files, 1):
        out = str(dest.joinpath(filename))
        link = urllib.request.urljoin(base, filename)
        urllib.request.urlretrieve(link, out)
        print('Downloaded {link} to {out} [{i}/{N}]'.format(
            link=link, out=out, i=i, N=N
        ))
    
    
def test_getitem_callable():
    # GH 12533
    s = pd.Series(4, index=list('ABCD'))
    result = s[lambda x: 'A']
    assert result == s.loc['A']
    
        for isort, normalize, sort, ascending, dropna \
            in product((False, True), repeat=5):
    
    Libraries are expected to implement a few pytest fixtures to provide data
for the tests. The fixtures may be located in either
    
        ('8px', '6pt'),
    ('1.25pc', '15pt'),
    ('.25in', '18pt'),
    ('02.54cm', '72pt'),
    ('25.4mm', '72pt'),
    ('101.6q', '72pt'),
    ('101.6q', '72pt'),
])
@pytest.mark.parametrize('relative_to',  # invariant to inherited size
                         [None, '16pt'])
def test_css_absolute_font_size(size, relative_to, resolved):
    if relative_to is None:
        inherited = None
    else:
        inherited = {'font-size': relative_to}
    assert_resolves('font-size: {size}'.format(size=size),
                    {'font-size': resolved}, inherited=inherited)
    
    
def test_bin8():
    header = b'\xc4'
    data = b''
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x00'
    assert b[2:] == data
    assert unpackb(b) == data
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
from ycm.vimsupport import PostVimMessage
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    
def LevelWarnings_test():
  opts = _JavaFilter( { 'level' : 'warning' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
        Args:
        fs: The sequence of Futures (possibly created by different Executors) to
            iterate over.
        timeout: The maximum number of seconds to wait. If None, then there
            is no limit on the wait time.
    
    def main():
    for name, fn in [('sequential',
                      functools.partial(download_urls_sequential, URLS)),
                     ('processes',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ProcessPoolExecutor(10))),
                     ('threads',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ThreadPoolExecutor(10)))]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        url_map = fn()
        sys.stdout.write('%.2f seconds (%d of %d downloaded)\n' %
                         (time.time() - start, len(url_map), len(URLS)))
    
    
    class LogicalScreenDescriptorStruct(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.screen_width = self._io.read_u2le()
            self.screen_height = self._io.read_u2le()
            self.flags = self._io.read_u1()
            self.bg_color_index = self._io.read_u1()
            self.pixel_aspect_ratio = self._io.read_u1()
    
    
    class BkgdChunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            _on = self._root.ihdr.color_type
            if _on == self._root.ColorType.greyscale_alpha:
                self.bkgd = self._root.BkgdGreyscale(self._io, self, self._root)
            elif _on == self._root.ColorType.indexed:
                self.bkgd = self._root.BkgdIndexed(self._io, self, self._root)
            elif _on == self._root.ColorType.greyscale:
                self.bkgd = self._root.BkgdGreyscale(self._io, self, self._root)
            elif _on == self._root.ColorType.truecolor_alpha:
                self.bkgd = self._root.BkgdTruecolor(self._io, self, self._root)
            elif _on == self._root.ColorType.truecolor:
                self.bkgd = self._root.BkgdTruecolor(self._io, self, self._root)
    
            while True:
            iReturn <<= 7
            if (self.qsize() == 0):
                break
            else:
                singleByte = self.dequeueAndLog()
            iReturn += int(singleByte & 0x7F)
            if not self.checkContinuationBit(singleByte):
                return iReturn
    
    
class DummyReply(Reply):
    '''
    A reply object that is not connected to anything. In contrast to regular
    Reply objects, DummyReply objects are reset to 'start' at the end of an
    handler so that they can be used multiple times. Useful when we need an
    object to seem like it has a channel, and during testing.
    '''
    def __init__(self):
        super().__init__(None)
        self._should_reset = False