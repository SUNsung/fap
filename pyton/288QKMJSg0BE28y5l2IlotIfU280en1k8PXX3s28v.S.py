
        
        header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
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
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
            return info_dict

    
    
class CloserToTruthIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?closertotruth\.com/(?:[^/]+/)*(?P<id>[^/?#&]+)'
    _TESTS = [{
        'url': 'http://closertotruth.com/series/solutions-the-mind-body-problem#video-3688',
        'info_dict': {
            'id': '0_zof1ktre',
            'display_id': 'solutions-the-mind-body-problem',
            'ext': 'mov',
            'title': 'Solutions to the Mind-Body Problem?',
            'upload_date': '20140221',
            'timestamp': 1392956007,
            'uploader_id': 'CTTXML'
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'http://closertotruth.com/episodes/how-do-brains-work',
        'info_dict': {
            'id': '0_iuxai6g6',
            'display_id': 'how-do-brains-work',
            'ext': 'mov',
            'title': 'How do Brains Work?',
            'upload_date': '20140221',
            'timestamp': 1392956024,
            'uploader_id': 'CTTXML'
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'http://closertotruth.com/interviews/1725',
        'info_dict': {
            'id': '1725',
            'title': 'AyaFr-002',
        },
        'playlist_mincount': 2,
    }]
    
    autodoc_member_order = 'bysource'
autodoc_default_flags = ['show-inheritance', 'private-members']
    
            self.eg_order.authorizations = authzr
        self.client.auth_handler.handle_authorizations.return_value = authzr
    
        def test_ne(self):
        self.assertTrue(self.vhost1 != self.vhost2)
        self.assertFalse(self.vhost1 != self.vhost1b)
    
    
def create_response(status_code=200, headers=None):
    '''Creates a requests.Response object for testing'''
    response = requests.Response()
    response.status_code = status_code
    
        # Some tests need more than one block of uncompressed data. Since one block
    # is at least 100,000 bytes, we gather some data dynamically and compress it.
    # Note that this assumes that compression works correctly, so we cannot
    # simply use the bigger test data for all tests.
    test_size = 0
    BIG_TEXT = bytearray(128*1024)
    for fname in glob.glob(os.path.join(os.path.dirname(__file__), '*.py')):
        with open(fname, 'rb') as fh:
            test_size += fh.readinto(memoryview(BIG_TEXT)[test_size:])
        if test_size > 128*1024:
            break
    BIG_DATA = bz2.compress(BIG_TEXT, compresslevel=1)
    
        def test_ctor(self):
        fut = asyncio.Future(loop=self.loop)
        tr = self.socket_transport(waiter=fut)
        test_utils.run_briefly(self.loop)
        self.assertIsNone(fut.result())
        self.protocol.connection_made(tr)
        self.proactor.recv_into.assert_called_with(self.sock, self.buf)
    
            try:
            idg_groups = set(int(g) for g in groups.split())
        except ValueError:
            idg_groups = set()
        if ret is not None or not idg_groups:
            raise unittest.SkipTest('need working 'id -G'')
    
    def _is_import_binding(node, name, package=None):
    ''' Will reuturn node if node will import name, or node
        will import * from package.  None is returned otherwise.
        See test cases for examples. '''
    
    # By Taek Joo Kim and Benjamin Peterson
    
        def test_lltrace_does_not_crash_on_subscript_operator(self):
        # If this test fails, it will reproduce a crash reported as
        # bpo-34113. The crash happened at the command line console of
        # debug Python builds with __ltrace__ enabled (only possible in console),
        # when the interal Python stack was negatively adjusted
        with open(support.TESTFN, 'w') as fd:
            self.addCleanup(os.unlink, support.TESTFN)
            fd.write(textwrap.dedent('''\
            import code
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        $ sudo dnf install gcc python-devel
    
        def create_blobs_queues(self):
        '''Create one BlobsQueue for each GPU to hold mini-batches.'''
        for gpu_id in range(self._num_gpus):
            with c2_utils.GpuNameScope(gpu_id):
                workspace.RunOperatorOnce(
                    core.CreateOperator(
                        'CreateBlobsQueue', [], [self._blobs_queue_name],
                        num_blobs=len(self.get_output_names()),
                        capacity=self._blobs_queue_capacity
                    )
                )
        return self.create_enqueue_blobs()
    
    
def remove_layers_without_parameters(caffenet, caffenet_weights):
    for i in reversed(range(len(caffenet_weights.layer))):
        if len(caffenet_weights.layer[i].blobs) == 0:
            # Search for the corresponding layer in caffenet and remove it
            name = caffenet_weights.layer[i].name
            found = False
            for j in range(len(caffenet.layer)):
                if caffenet.layer[j].name == name:
                    caffenet.layer.pop(j)
                    found = True
                    break
            if not found and name[-len('_split'):] != '_split':
                print('Warning: layer {} not found in caffenet'.format(name))
            caffenet_weights.layer.pop(i)
    
            # and sum (\Delta recall) * prec
        ap = np.sum((mrec[i + 1] - mrec[i]) * mpre[i + 1])
    return ap
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    '''Handle mapping from old network building function names to new names.
    
        if cfg.MODEL.FASTER_RCNN:
        if model.train:
            # Add op that generates training labels for in-network RPN proposals
            model.GenerateProposalLabels(['rpn_rois', 'roidb', 'im_info'])
        else:
            # Alias rois to rpn_rois for inference
            model.net.Alias('rpn_rois', 'rois')
    
    
def _filter_boxes(boxes, min_size, im_info):
    '''Only keep boxes with both sides >= min_size and center within the image.
    '''
    # Scale min_size to match image scale
    min_size *= im_info[2]
    ws = boxes[:, 2] - boxes[:, 0] + 1
    hs = boxes[:, 3] - boxes[:, 1] + 1
    x_ctr = boxes[:, 0] + ws / 2.
    y_ctr = boxes[:, 1] + hs / 2.
    keep = np.where(
        (ws >= min_size) & (hs >= min_size) &
        (x_ctr < im_info[1]) & (y_ctr < im_info[0]))[0]
    return keep

    
        sampled_fg_rois *= im_scale
    repeated_batch_idx = batch_idx * blob_utils.ones(
        (sampled_fg_rois.shape[0], 1)
    )
    sampled_fg_rois = np.hstack((repeated_batch_idx, sampled_fg_rois))
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals