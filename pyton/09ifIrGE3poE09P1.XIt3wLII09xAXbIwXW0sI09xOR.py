
        
        password = key + 16 * [0]
new_key = aes_encrypt(password, key_expansion(password)) * (32 // 16)
r = openssl_encode('aes-256-ctr', new_key, iv)
print('aes_decrypt_text 32')
print(repr(r))

    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    
# find the correct sorting and add the required base classes so that sublcasses
# can be correctly created
classes = _ALL_CLASSES[:-1]
ordered_cls = []
while classes:
    for c in classes[:]:
        bases = set(c.__bases__) - set((object, InfoExtractor, SearchInfoExtractor))
        stop = False
        for b in bases:
            if b not in classes and b not in ordered_cls:
                if b.__name__ == 'GenericIE':
                    exit()
                classes.insert(0, b)
                stop = True
        if stop:
            break
        if all(b in ordered_cls for b in bases):
            ordered_cls.append(c)
            classes.remove(c)
            break
ordered_cls.append(_ALL_CLASSES[-1])
    
        outfile, = args
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'youtube-dldoc'

    
    
if __name__ == '__main__':
    unittest.main()

    
            '''
        assert all(hasattr(type(self), attr) for attr in kwargs.keys())
        self.__dict__.update(**kwargs)
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
    test_encode_face = '''
encoding = face_recognition.face_encodings(image, known_face_locations=face_locations)[0]
'''
    
    '''
Structure:
        <test_image>.jpg
        <train_dir>/
            <person_1>/
                <person_1_face-1>.jpg
                <person_1_face-2>.jpg
                .
                .
                <person_1_face-n>.jpg
           <person_2>/
                <person_2_face-1>.jpg
                <person_2_face-2>.jpg
                .
                .
                <person_2_face-n>.jpg
            .
            .
            <person_n>/
                <person_n_face-1>.jpg
                <person_n_face-2>.jpg
                .
                .
                <person_n_face-n>.jpg
'''
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # 看看图片中的第一张脸是不是奥巴马
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
            coro = foo()
        task = self.new_task(self.loop, coro)
        Future.set_exception(task, MyExc())
    
        def test_get_source_encoding(self):
        # Source is considered encoded in UTF-8 by default unless otherwise
        # specified by an encoding line.
        source = '_ = 'ü''
        self.loader.source = source.encode('utf-8')
        returned_source = self.loader.get_source(self.name)
        self.assertEqual(returned_source, source)
        source = '# coding: latin-1\n_ = ü'
        self.loader.source = source.encode('latin-1')
        returned_source = self.loader.get_source(self.name)
        self.assertEqual(returned_source, source)
    
        def test_scope_isolation_from_global(self):
        expected = {0: None, 1: None, 2: None, 3: None, 4: None, 5: None,
                    6: None, 7: None, 8: None, 9: None}
        actual = {g: None for g in range(10)}
        self.assertEqual(actual, expected)
        self.assertEqual(g, 'Global variable')
    
        def getwelcome(self):
        return self.welcome
    
    
def printy(ret):
    '''
    
    
def softmax(x, axis=-1):
    '''
    Examples:
        n_dim = x.get_shape().ndims
        assert n_dim >= 2
    
    
def relu6(x):
    '''
    `o = min(max(x, 0), 6)`
    '''
    return tf.nn.relu6(x)
    
    
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
    
        def test_deprecated_key_from_list(self):
        # You should see logger messages like:
        #   'Deprecated config key (ignoring): MODEL.DILATION'
        opts = ['FINAL_MSG', 'foobar', 'MODEL.DILATION', 2]
        with self.assertRaises(AttributeError):
            _ = cfg.FINAL_MSG  # noqa
        with self.assertRaises(AttributeError):
            _ = cfg.MODEL.DILATION  # noqa
        core_config.merge_cfg_from_list(opts)
        with self.assertRaises(AttributeError):
            _ = cfg.FINAL_MSG  # noqa
        with self.assertRaises(AttributeError):
            _ = cfg.MODEL.DILATION  # noqa
    
    
def get_rpn_box_proposals(im, args):
    cfg.immutable(False)
    merge_cfg_from_file(args.rpn_cfg)
    cfg.NUM_GPUS = 1
    cfg.MODEL.RPN_ONLY = True
    cfg.TEST.RPN_PRE_NMS_TOP_N = 10000
    cfg.TEST.RPN_POST_NMS_TOP_N = 2000
    assert_and_infer_cfg(cache_urls=False)
    
    
def add_rpn_blobs(blobs, im_scales, roidb):
    '''Add blobs needed training RPN-only and end-to-end Faster R-CNN models.'''
    if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_RPN:
        # RPN applied to many feature levels, as in the FPN paper
        k_max = cfg.FPN.RPN_MAX_LEVEL
        k_min = cfg.FPN.RPN_MIN_LEVEL
        foas = []
        for lvl in range(k_min, k_max + 1):
            field_stride = 2.**lvl
            anchor_sizes = (cfg.FPN.RPN_ANCHOR_START_SIZE * 2.**(lvl - k_min), )
            anchor_aspect_ratios = cfg.FPN.RPN_ASPECT_RATIOS
            foa = data_utils.get_field_of_anchors(
                field_stride, anchor_sizes, anchor_aspect_ratios
            )
            foas.append(foa)
        all_anchors = np.concatenate([f.field_of_anchors for f in foas])
    else:
        foa = data_utils.get_field_of_anchors(
            cfg.RPN.STRIDE, cfg.RPN.SIZES, cfg.RPN.ASPECT_RATIOS
        )
        all_anchors = foa.field_of_anchors
    
        # detections (N, 6) format:
    #   detections[:, :4] - boxes
    #   detections[:, 4] - scores
    #   detections[:, 5] - classes
    detections = np.vstack(detections)
    # sort all again
    inds = np.argsort(-detections[:, 4])
    detections = detections[inds[0:cfg.TEST.DETECTIONS_PER_IM], :]
    
        def GetMedianValue(self):
        return np.median(self.deque)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def do_reval(dataset_name, output_dir, args):
    dataset = JsonDataset(dataset_name)
    dets = load_object(os.path.join(output_dir, 'detections.pkl'))
    
    file_name = args[0]
    
    
'''
    
    print(','.join(tags))
    
    