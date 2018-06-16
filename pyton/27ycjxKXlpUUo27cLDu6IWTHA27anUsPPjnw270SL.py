
        
            Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
    
class _BenchServer(object):
    
        def crawled_similar(self, signature):
        '''Determine if we've already crawled a page matching the given signature'''
        pass
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
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
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def reducer(self, key, values):
        '''Sum values for each key.
    
            # What is index of token/char were we looking at when the error
        # occurred?
        self.index = None
    
    import logging
import numpy as np
import os
import shutil
import uuid
    
                        image['width'] = json_ann['imgWidth']
                    image['height'] = json_ann['imgHeight']
                    image['file_name'] = filename[:-len(
                        ends_in % data_set.split('_')[0])] + 'leftImg8bit.png'
                    image['seg_file_name'] = filename[:-len(
                        ends_in % data_set.split('_')[0])] + \
                        '%s_instanceIds.png' % data_set.split('_')[0]
                    images.append(image)
    
    
if __name__ == '__main__':
    args = parse_args()
    print(args)
    assert os.path.exists(args.coco_model_file_name), \
        'Weights file does not exist'
    weights = load_and_convert_coco_model(args)
    
    from detectron.datasets.dataset_catalog import get_ann_fn
from detectron.utils.timer import Timer
    
    
def evaluate_all(
    dataset, all_boxes, all_segms, all_keyps, output_dir, use_matlab=False
):
    '''Evaluate 'all' tasks, where 'all' includes box detection, instance
    segmentation, and keypoint detection.
    '''
    all_results = evaluate_boxes(
        dataset, all_boxes, output_dir, use_matlab=use_matlab
    )
    logger.info('Evaluating bounding boxes is done!')
    if cfg.MODEL.MASK_ON:
        results = evaluate_masks(dataset, all_boxes, all_segms, output_dir)
        all_results[dataset.name].update(results[dataset.name])
        logger.info('Evaluating segmentations is done!')
    if cfg.MODEL.KEYPOINTS_ON:
        results = evaluate_keypoints(dataset, all_boxes, all_keyps, output_dir)
        all_results[dataset.name].update(results[dataset.name])
        logger.info('Evaluating keypoints is done!')
    return all_results
    
        # compute precision recall
    fp = np.cumsum(fp)
    tp = np.cumsum(tp)
    rec = tp / float(npos)
    # avoid divide by zero in case the first detection matches a difficult
    # ground truth
    prec = tp / np.maximum(tp + fp, np.finfo(np.float64).eps)
    ap = voc_ap(rec, prec, use_07_metric)
    
        if cfg.KRCNN.USE_DECONV:
        # Apply ConvTranspose to the feature representation; results in 2x
        # upsampling
        blob_in = model.ConvTranspose(
            blob_in,
            'kps_deconv',
            dim,
            cfg.KRCNN.DECONV_DIM,
            kernel=cfg.KRCNN.DECONV_KERNEL,
            pad=int(cfg.KRCNN.DECONV_KERNEL / 2 - 1),
            stride=2,
            weight_init=gauss_fill(0.01),
            bias_init=const_fill(0.0)
        )
        model.Relu('kps_deconv', 'kps_deconv')
        dim = cfg.KRCNN.DECONV_DIM
    
    import numpy as np
    
    setup_face_landmarks = '''
import face_recognition
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
    # If not '', a 'Last updated on:' timestamp is inserted at every page
# bottom, using the given strftime format.
#html_last_updated_fmt = '%b %d, %Y'
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, model) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), cpus, model)
    else:
        test_image(image_to_check, model)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]