
        
            def __init__(self):
        self.name = 'unaccent'

    
        try:
        citext_oids = get_citext_oids(connection.alias)
        array_type = psycopg2.extensions.new_array_type(citext_oids, 'citext[]', psycopg2.STRING)
        psycopg2.extensions.register_type(array_type, None)
    except ProgrammingError:
        # citext is not available on the database.
        #
        # The same comments in the except block of the above call to
        # register_hstore() also apply here.
        pass

    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
        print('Writing private key to file %s_privkey.txt...' % name)
    with open('%s_privkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, privateKey[0], privateKey[1]))
    
    
'''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a * b = (a+a) * (b/2) ---- example : 4 * 4 = (4+4) * (4/2) = 8 * 2
* RULE 2 : IF b is ODD, then ---- a * b = a + (a * (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a * b
* Repeat the process till b = 1 OR b = 0, because a*1 = a AND a*0 = 0
*
* As far as the modulo is concerned,
* the fact : (a+b) % c = ((a%c) + (b%c)) % c
* Now apply RULE 1 OR 2, whichever is required.
'''

    
    def englishFreqMatchScore(message):
    '''
    >>> englishFreqMatchScore('Hello World')
    1
    '''
    freqOrder = getFrequencyOrder(message)
    matchScore = 0
    for commonLetter in ETAOIN[:6]:
        if commonLetter in freqOrder[:6]:
            matchScore += 1
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
                self.send_response(HTTPStatus.OK)
            self.send_header('Content-type', ctype)
            self.send_header('Content-Length', str(fs[6]))
            self.send_header('Last-Modified',
                self.date_time_string(fs.st_mtime))
            self.end_headers()
            return f
        except:
            f.close()
            raise
    
    REVERSE_IMPORT_MAPPING.update({
    '_bz2': 'bz2',
    '_dbm': 'dbm',
    '_functools': 'functools',
    '_gdbm': 'gdbm',
    '_pickle': 'pickle',
})
    
    import os
import smtplib
# For guessing MIME type based on file name extension
import mimetypes
    
    
def _ratio_enum(anchor, ratios):
    '''Enumerate a set of anchors for each aspect ratio wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    size = w * h
    size_ratios = size / ratios
    ws = np.round(np.sqrt(size_ratios))
    hs = np.round(ws * ratios)
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors
    
        # compute init for bias
    bias_init = get_retinanet_bias_init(model)
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
        def forward(self, inputs, outputs):
        '''See modeling.detector.GenerateProposalLabels for inputs/outputs
        documentation.
        '''
        # During training we reuse the data loader code. We populate roidb
        # entries on the fly using the rois generated by RPN.
        # im_info: [[im_height, im_width, im_scale], ...]
        rois = inputs[0].data
        roidb = blob_utils.deserialize(inputs[1].data)
        im_info = inputs[2].data
        im_scales = im_info[:, 2]
        output_blob_names = fast_rcnn_roi_data.get_fast_rcnn_blob_names()
        # For historical consistency with the original Faster R-CNN
        # implementation we are *not* filtering crowd proposals.
        # This choice should be investigated in the future (it likely does
        # not matter).
        json_dataset.add_proposals(roidb, rois, im_scales, crowd_thresh=0)
        roidb_utils.add_bbox_regression_targets(roidb)
        blobs = {k: [] for k in output_blob_names}
        fast_rcnn_roi_data.add_fast_rcnn_blobs(blobs, im_scales, roidb)
        for i, k in enumerate(output_blob_names):
            blob_utils.py_op_copy_blob(blobs[k], outputs[i])

    
        for i in range(masks.shape[0]):
        cls = int(mask_class_labels[i])
        start = M**2 * cls
        end = start + M**2
        # Ignore background instance
        # (only happens when there is no fg samples in an image)
        if cls > 0:
            mask_targets[i, start:end] = masks[i, :]
    
            # Fg label: for each gt use anchors with highest overlap
        # (including ties)
        gt_inds = anchor_to_gt_argmax[anchors_with_max_overlap]
        labels[anchors_with_max_overlap] = gt_classes[gt_inds]
        # Fg label: above threshold IOU
        inds = anchor_to_gt_max >= cfg.RETINANET.POSITIVE_OVERLAP
        gt_inds = anchor_to_gt_argmax[inds]
        labels[inds] = gt_classes[gt_inds]
    
        roi_data_loader.register_sigint_handler()
    roi_data_loader.start(prefill=True)
    total_time = 0
    for i in range(opts.num_batches):
        start_t = time.time()
        for _ in range(opts.x_factor):
            workspace.RunNetOnce(net)
        total_time += (time.time() - start_t) / opts.x_factor
        logger.info(
            '{:d}/{:d}: Averge dequeue time: {:.3f}s  [{:d}/{:d}]'.format(
                i + 1, opts.num_batches, total_time / (i + 1),
                roi_data_loader._minibatch_queue.qsize(),
                cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE
            )
        )
        # Sleep to simulate the time taken by running a little network
        time.sleep(opts.sleep_time)
        # To inspect:
        # blobs = workspace.FetchBlobs(all_blobs)
        # from IPython import embed; embed()
    logger.info('Shutting down data loader...')
    roi_data_loader.shutdown()