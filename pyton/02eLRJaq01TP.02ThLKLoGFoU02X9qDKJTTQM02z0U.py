
        
            def test_download_interrupted(self, httpbin_both):
        with open(os.devnull, 'w') as devnull:
            downloader = Downloader(output_file=devnull, progress_file=devnull)
            downloader.start(Response(
                url=httpbin_both.url + '/',
                headers={'Content-Length': 5}
            ))
            downloader.chunk_downloaded(b'1234')
            downloader.finish()
            assert downloader.interrupted
            downloader._progress_reporter.join()
    
        Exceptions are propagated.
    
    
class Environment(object):
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
            new_content = sock.recv(chunks)
        if not new_content:
            break
    
                    try:
                    low_conn.putrequest(request.method,
                                        url,
                                        skip_accept_encoding=True)
    
    # -------
# Pythons
# -------
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        close_server = threading.Event()
    server = Server(response_handler, wait_to_close_event=close_server)
    
            def handler(sock):
            text = sock.recv(1000)
            assert text == question
            sock.sendall(answer)
    
            body, content_type = encode_multipart_formdata(new_fields)
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
    for face_landmarks in face_landmarks_list:
    
        # 讲识别结果以json键值对的数据结构输出
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Only process every other frame of video to save time
    if process_this_frame:
        # Find all the faces and face encodings in the current frame of video
        face_locations = face_recognition.face_locations(rgb_small_frame)
        face_encodings = face_recognition.face_encodings(rgb_small_frame, face_locations)
    
        # Or instead, use the known face with the smallest distance to the new face
    face_distances = face_recognition.face_distance(known_face_encodings, face_encoding)
    best_match_index = np.argmin(face_distances)
    if matches[best_match_index]:
        name = known_face_names[best_match_index]
    
    
def mask_rcnn_fcn_head_v0upshare(model, blob_in, dim_in, spatial_scale):
    '''Use a ResNet 'conv5' / 'stage5' head for mask prediction. Weights and
    computation are shared with the conv5 box head. Computation can only be
    shared during training, since inference is cascaded.
    
            ann_dict['images'] = images
        categories = [{'id': category_dict[name], 'name': name} for name in
                      category_dict]
        ann_dict['categories'] = categories
        ann_dict['annotations'] = annotations
        print('Num categories: %s' % len(categories))
        print('Num images: %s' % len(images))
        print('Num annotations: %s' % len(annotations))
        with open(os.path.join(out_dir, json_name % data_set), 'wb') as outfile:
            outfile.write(json.dumps(ann_dict))
    
    
def test_net_on_dataset(
    weights_file,
    dataset_name,
    proposal_file,
    output_dir,
    multi_gpu=False,
    gpu_id=0
):
    '''Run inference on a dataset.'''
    dataset = JsonDataset(dataset_name)
    test_timer = Timer()
    test_timer.tic()
    if multi_gpu:
        num_images = len(dataset.get_roidb())
        all_boxes, all_segms, all_keyps = multi_gpu_test_net_on_dataset(
            weights_file, dataset_name, proposal_file, num_images, output_dir
        )
    else:
        all_boxes, all_segms, all_keyps = test_net(
            weights_file, dataset_name, proposal_file, output_dir, gpu_id=gpu_id
        )
    test_timer.toc()
    logger.info('Total inference time: {:.3f}s'.format(test_timer.average_time))
    results = task_evaluation.evaluate_all(
        dataset, all_boxes, all_segms, all_keyps, output_dir
    )
    return results
    
    
def get_group_gn(dim):
    '''
    get number of groups used by GroupNorm, based on number of channels
    '''
    dim_per_gp = cfg.GROUP_NORM.DIM_PER_GP
    num_groups = cfg.GROUP_NORM.NUM_GROUPS
    
    '''Primitives for running multiple single-GPU jobs in parallel over subranges of
data. These are used for running multi-GPU inference. Subprocesses are used to
avoid the GIL since inference may involve non-trivial amounts of Python code.
'''
    
        # Perform detection on the horizontally flipped image
    if cfg.TEST.BBOX_AUG.H_FLIP:
        scores_hf, boxes_hf, _ = im_detect_bbox_hflip(
            model,
            im,
            cfg.TEST.SCALE,
            cfg.TEST.MAX_SIZE,
            box_proposals=box_proposals
        )
        add_preds_t(scores_hf, boxes_hf)
    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
    
# ------------------------------------------------------------------------------
# various shortcuts (may expand and may consider a new helper)
# ------------------------------------------------------------------------------
    
    The Fast R-CNN head produces a feature representation of the RoI for the purpose
of bounding box classification and regression. The box output module converts
the feature representation into classification and regression predictions.
'''