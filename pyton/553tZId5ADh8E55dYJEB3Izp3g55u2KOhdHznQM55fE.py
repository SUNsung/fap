
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    
class ConnectCreator(object):
    def __init__(self, logger, config, openssl_context, host_manager,
                 timeout=5, debug=False,
                 check_cert=None):
        self.logger = logger
        self.config = config
        self.openssl_context = openssl_context
        self.host_manager = host_manager
        self.timeout = timeout
        self.debug = debug
        if check_cert:
            self.check_cert = check_cert
        self.update_config()
    
            if task.method == 'HEAD' or response.status in [204, 304]:
            response.content_length = 0
    
    
def inet_ntop(address_family, packed_ip):
    addr = sockaddr()
    addr.sa_family = address_family
    addr_size = ctypes.c_int(ctypes.sizeof(addr))
    ip_string = ctypes.create_string_buffer(128)
    ip_string_size = ctypes.c_int(ctypes.sizeof(ip_string))
    
    And tree.TreeParser finally fetches its input from a tree.TreeNodeStream:
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
            path = os.path.join(self.tempdir, 'file.ini')
        dns_test_common.write({'dnsimple_token': TOKEN}, path)
    
        # The font size ('10pt', '11pt' or '12pt').
    #
    # 'pointsize': '10pt',
    
        '''
    if cli.set_by_cli(cli_arg_path):
        return util.safe_open(pem_path, chmod=0o644, mode='wb'),\
            os.path.abspath(pem_path)
    else:
        uniq = util.unique_file(pem_path, 0o644, 'wb')
        return uniq[0], os.path.abspath(uniq[1])
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_error(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.side_effect = [acme_errors.Error]
        self.assertFalse(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
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
    
        # Perform detection at different aspect ratios
    for aspect_ratio in cfg.TEST.BBOX_AUG.ASPECT_RATIOS:
        scores_ar, boxes_ar = im_detect_bbox_aspect_ratio(
            model, im, aspect_ratio, box_proposals
        )
        add_preds_t(scores_ar, boxes_ar)
    
    
def add_keypoint_rcnn_blobs(
    blobs, roidb, fg_rois_per_image, fg_inds, im_scale, batch_idx
):
    '''Add Mask R-CNN keypoint specific blobs to the given blobs dictionary.'''
    # Note: gt_inds must match how they're computed in
    # datasets.json_dataset._merge_proposal_boxes_into_roidb
    gt_inds = np.where(roidb['gt_classes'] > 0)[0]
    max_overlaps = roidb['max_overlaps']
    gt_keypoints = roidb['gt_keypoints']
    
    logger = logging.getLogger(__name__)
    
        def test_size_exceptions(self):
        A = np.random.randn(2, 256, 42, 86).astype(np.float32)
        I = np.array(np.random.permutation(10), dtype=np.int32)
        with self.assertRaises(RuntimeError):
            self._run_op_test(A, I)