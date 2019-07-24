
        
        
class LinkedList(object):
    
        def __init__(self):
        self.people = {}  # key: person_id, value: person
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    
class BitChuteIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?bitchute\.com/(?:video|embed|torrent/[^/]+)/(?P<id>[^/?#&]+)'
    _TESTS = [{
        'url': 'https://www.bitchute.com/video/szoMrox2JEI/',
        'md5': '66c4a70e6bfc40dcb6be3eb1d74939eb',
        'info_dict': {
            'id': 'szoMrox2JEI',
            'ext': 'mp4',
            'title': 'Fuck bitches get money',
            'description': 'md5:3f21f6fb5b1d17c3dee9cf6b5fe60b3a',
            'thumbnail': r're:^https?://.*\.jpg$',
            'uploader': 'Victoria X Rave',
        },
    }, {
        'url': 'https://www.bitchute.com/embed/lbb5G1hjPhw/',
        'only_matching': True,
    }, {
        'url': 'https://www.bitchute.com/torrent/Zee5BE49045h/szoMrox2JEI.webtorrent',
        'only_matching': True,
    }]
    
        def _extract_video_info(self, content_id, site='cbs', mpx_acc=2198311517):
        items_data = self._download_xml(
            'http://can.cbs.com/thunder/player/videoPlayerService.php',
            content_id, query={'partner': site, 'contentId': content_id})
        video_data = xpath_element(items_data, './/item')
        title = xpath_text(video_data, 'videoTitle', 'title', True)
        tp_path = 'dJ5BDC/media/guid/%d/%s' % (mpx_acc, content_id)
        tp_release_url = 'http://link.theplatform.com/s/' + tp_path
    
                sources = self._download_json(
                'http://vas.sim-technik.de/vas/live/v2/videos/%s/sources' % clip_id,
                clip_id, 'Downloading sources JSON', query={
                    'access_token': self._TOKEN,
                    'client_id': client_id,
                    'client_location': client_location,
                    'client_name': self._CLIENT_NAME,
                })
            server_id = sources['server_id']
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    with io.open(lazy_extractors_filename, 'wt', encoding='utf-8') as f:
    f.write(module_src)

    
            certfile = os.path.join(CertUtil.ca_certdir, commonname + '.crt')
        with open(certfile, 'wb') as fp:
            fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, cert))
            if CertUtil.cert_publickey is None:
                fp.write(OpenSSL.crypto.dump_privatekey(OpenSSL.crypto.FILETYPE_PEM, pkey))
        return certfile
    
        ca_certs = os.path.join(current_path, 'cacert.pem')
    openssl_context = SSLContext(
        logger, ca_certs=ca_certs,
        cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                       '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
    )
    host_manager = HostManagerBase()
    connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                     debug=True)
    check_ip = CheckIp(logger, config, connect_creator)
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
    def version_str_to_tuple(version_str):
    import re
    import sys
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
            installer.deploy_cert.side_effect = errors.PluginError
        self.assertRaises(errors.PluginError, self.client.deploy_certificate,
                          ['foo.bar'], 'key', 'cert', 'chain', 'fullchain')
        installer.recovery_routine.assert_called_once_with()
    
            data = {
            'kind': 'dns#change',
            'additions': [
                {
                    'kind': 'dns#resourceRecordSet',
                    'type': 'TXT',
                    'name': record_name + '.',
                    'rrdatas': add_records,
                    'ttl': record_ttl,
                },
            ],
        }
    
        def proposals_for_one_image(
        self, im_info, all_anchors, bbox_deltas, scores
    ):
        # Get mode-dependent configuration
        cfg_key = 'TRAIN' if self._train else 'TEST'
        pre_nms_topN = cfg[cfg_key].RPN_PRE_NMS_TOP_N
        post_nms_topN = cfg[cfg_key].RPN_POST_NMS_TOP_N
        nms_thresh = cfg[cfg_key].RPN_NMS_THRESH
        min_size = cfg[cfg_key].RPN_MIN_SIZE
        # Transpose and reshape predicted bbox transformations to get them
        # into the same order as the anchors:
        #   - bbox deltas will be (4 * A, H, W) format from conv output
        #   - transpose to (H, W, 4 * A)
        #   - reshape to (H * W * A, 4) where rows are ordered by (H, W, A)
        #     in slowest to fastest order to match the enumerated anchors
        bbox_deltas = bbox_deltas.transpose((1, 2, 0)).reshape((-1, 4))
    
                                len_p = [len(p) for p in obj['contours']]
                            if min(len_p) <= 4:
                                print('Warning: invalid contours.')
                                continue  # skip non-instance categories
    
    # Default value of the CMake install prefix
_CMAKE_INSTALL_PREFIX = '/usr/local'
# Detectron ops lib
_DETECTRON_OPS_LIB = 'libcaffe2_detectron_ops_gpu.so'
    
        if args.rpn_pkl is not None:
        proposal_boxes, _proposal_scores = get_rpn_box_proposals(im, args)
        workspace.ResetWorkspace()
    else:
        proposal_boxes = None
    
    
def _do_matlab_eval(json_dataset, salt, output_dir='output'):
    import subprocess
    logger.info('-----------------------------------------------------')
    logger.info('Computing results with the official MATLAB eval code.')
    logger.info('-----------------------------------------------------')
    info = voc_info(json_dataset)
    path = os.path.join(
        cfg.ROOT_DIR, 'detectron', 'datasets', 'VOCdevkit-matlab-wrapper')
    cmd = 'cd {} && '.format(path)
    cmd += '{:s} -nodisplay -nodesktop '.format(cfg.MATLAB)
    cmd += '-r 'dbstop if error; '
    cmd += 'voc_eval(\'{:s}\',\'{:s}\',\'{:s}\',\'{:s}\'); quit;'' \
       .format(info['devkit_path'], 'comp4' + salt, info['image_set'],
               output_dir)
    logger.info('Running:\n{}'.format(cmd))
    subprocess.call(cmd, shell=True)
    
        fc_dim = cfg.FAST_RCNN.MLP_HEAD_DIM
    model.FC(current, 'fc6', dim_in * roi_size * roi_size, fc_dim)
    model.Relu('fc6', 'fc6')
    return 'fc6', fc_dim
    
            if bw_limit == 0:
            # then we don't even need to care about backwards
            # just use forwards
            return f_idx
        else:
            b_idx = list(inner(invalid[::-1], bw_limit))
            b_idx = set(N - 1 - np.asarray(b_idx))
            if fw_limit == 0:
                return b_idx
    
        def time_get_loc(self):
        self.index.get_loc(self.category)
    
    
# ----------------------------------------------------------------------------
# test indexing of DataFrame with multi-level Index
# ----------------------------------------------------------------------------