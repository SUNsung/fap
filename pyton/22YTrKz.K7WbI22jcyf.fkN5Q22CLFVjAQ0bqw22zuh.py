
        
        
@csrf_protect
def render_flatpage(request, f):
    '''
    Internal interface to the flat page view.
    '''
    # If registration is required for accessing this page, and the user isn't
    # logged in, redirect to the login page.
    if f.registration_required and not request.user.is_authenticated:
        from django.contrib.auth.views import redirect_to_login
        return redirect_to_login(request.path)
    if f.template_name:
        template = loader.select_template((f.template_name, DEFAULT_TEMPLATE))
    else:
        template = loader.get_template(DEFAULT_TEMPLATE)
    
        def test_conflicts(self):
        from certbot_apache.obj import Addr
        from certbot_apache.obj import VirtualHost
    
        def tearDown(self):
        logging.disable(logging.NOTSET)
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_smtp_failure(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
    from ..common import *
import urllib.error
from json import loads
from time import time, sleep
    
        def _format_chunk(self, chunk):
        if self._expected_content_remaining is not None:
            self._expected_content_remaining -= len(chunk)
            if self._expected_content_remaining < 0:
                # Close the stream now to stop further framing errors.
                self.stream.close()
                raise httputil.HTTPOutputError(
                    'Tried to write more data than Content-Length')
        if self._chunking_output and chunk:
            # Don't write out empty chunks because that means END-OF-STREAM
            # with chunked encoding
            return utf8('%x' % len(chunk)) + b'\r\n' + chunk + b'\r\n'
        else:
            return chunk
    
        def __exit__(self, type, value, traceback):
        _state.contexts = self.old_contexts
    
        @unittest.skipIf(os.name == 'nt', 'flaky on windows')
    def test_large_body_streaming_chunked(self):
        with ExpectLog(gen_log, '.*chunked body too large'):
            response = self.fetch('/streaming', method='PUT',
                                  body_producer=lambda write: write(b'a' * 10240))
        self.assertEqual(response.code, 400)
    
    
def try_close(f):
    # Avoid issue #875 (race condition when using the file in another
    # thread).
    for i in range(10):
        try:
            f.close()
        except IOError:
            # Yield to another thread
            time.sleep(1e-3)
        else:
            break
    # Try a last time and let raise
    f.close()
    
            future = c.wait()
        self.assertEqual(102, len(c._waiters))
    
        IoU_lo_thresh = 0.5
    IoU_hi_thresh = 0.95
    ind_lo = _get_thr_ind(coco_eval, IoU_lo_thresh)
    ind_hi = _get_thr_ind(coco_eval, IoU_hi_thresh)
    # precision has dims (iou, recall, cls, area range, max dets)
    # area range index 0: all area ranges
    # max dets index 2: 100 per image
    precision = coco_eval.eval['precision'][ind_lo:(ind_hi + 1), :, :, 0, 2]
    ap_default = np.mean(precision[precision > -1])
    logger.info(
        '~~~~ Mean and per-category AP @ IoU=[{:.2f},{:.2f}] ~~~~'.format(
            IoU_lo_thresh, IoU_hi_thresh))
    logger.info('{:.1f}'.format(100 * ap_default))
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        # minus 1 because of __background__
        precision = coco_eval.eval['precision'][
            ind_lo:(ind_hi + 1), :, cls_ind - 1, 0, 2]
        ap = np.mean(precision[precision > -1])
        logger.info('{:.1f}'.format(100 * ap))
    logger.info('~~~~ Summary metrics ~~~~')
    coco_eval.summarize()
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
        # subsample negative labels if we have too many
    # (samples with replacement, but since the set of bg inds is large most
    # samples will not have repeats)
    num_bg = cfg.TRAIN.RPN_BATCH_SIZE_PER_IM - np.sum(labels == 1)
    bg_inds = np.where(anchor_to_gt_max < cfg.TRAIN.RPN_NEGATIVE_OVERLAP)[0]
    if len(bg_inds) > num_bg:
        enable_inds = bg_inds[npr.randint(len(bg_inds), size=num_bg)]
        labels[enable_inds] = 0
    bg_inds = np.where(labels == 0)[0]
    
        def test_bbox_dataset_to_prediction_roundtrip(self):
        '''Simulate the process of reading a ground-truth box from a dataset,
        make predictions from proposals, convert the predictions back to the
        dataset format, and then use the COCO API to compute IoU overlap between
        the gt box and the predictions. These should have IoU of 1.
        '''
        weights = (5, 5, 10, 10)
        # 1/ 'read' a box from a dataset in the default (x1, y1, w, h) format
        gt_xywh_box = [10, 20, 100, 150]
        # 2/ convert it to our internal (x1, y1, x2, y2) format
        gt_xyxy_box = box_utils.xywh_to_xyxy(gt_xywh_box)
        # 3/ consider nearby proposal boxes
        prop_xyxy_boxes = random_boxes(gt_xyxy_box, 10, 10)
        # 4/ compute proposal-to-gt transformation deltas
        deltas = box_utils.bbox_transform_inv(
            prop_xyxy_boxes, np.array([gt_xyxy_box]), weights=weights
        )
        # 5/ use deltas to transform proposals to xyxy predicted box
        pred_xyxy_boxes = box_utils.bbox_transform(
            prop_xyxy_boxes, deltas, weights=weights
        )
        # 6/ convert xyxy predicted box to xywh predicted box
        pred_xywh_boxes = box_utils.xyxy_to_xywh(pred_xyxy_boxes)
        # 7/ use COCO API to compute IoU
        not_crowd = [int(False)] * pred_xywh_boxes.shape[0]
        ious = COCOmask.iou(pred_xywh_boxes, np.array([gt_xywh_box]), not_crowd)
        np.testing.assert_array_almost_equal(ious, np.ones(ious.shape))