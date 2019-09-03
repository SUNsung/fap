
        
            def checker(self):
        while True:
            try:
                ip = self.get_ip()
            except Exception as e:
                xlog.info('no ip left')
                return
    
            # If you are parsing a tree node stream, you will encounter som
        # imaginary nodes w/o line/col info.  We now search backwards looking
        # for most recent token with line/col info, but notify getErrorHeader()
        # that info is approximate.
        self.approximateLineInfo = False
    
                elif opt in ('-f', '--force'):
                # Force download.
                conf['force'] = True
    
    from ..common import *
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']
    
    
def _get_file_md5sum(file_name):
    '''Compute the md5 hash of a file.'''
    hash_obj = hashlib.md5()
    with open(file_name, 'rb') as f:
        hash_obj.update(f.read())
    return hash_obj.hexdigest().encode('utf-8')
    
        def test_deprecated_key_from_file(self):
        # You should see logger messages like:
        #   'Deprecated config key (ignoring): MODEL.DILATION'
        with tempfile.NamedTemporaryFile() as f:
            cfg2 = copy.deepcopy(cfg)
            cfg2.MODEL.DILATION = 2
            envu.yaml_dump(cfg2, f)
            with self.assertRaises(AttributeError):
                _ = cfg.MODEL.DILATION  # noqa
            core_config.merge_cfg_from_file(f.name)
            with self.assertRaises(AttributeError):
                _ = cfg.MODEL.DILATION  # noqa
    
        if 'cfg' in src_blobs:
        saved_cfg = load_cfg(src_blobs['cfg'])
        configure_bbox_reg_weights(model, saved_cfg)
    if 'blobs' in src_blobs:
        # Backwards compat--dictionary used to be only blobs, now they are
        # stored under the 'blobs' key
        src_blobs = src_blobs['blobs']
    # Initialize weights on GPU gpu_id only
    unscoped_param_names = OrderedDict()  # Print these out in model order
    for blob in model.params:
        unscoped_param_names[c2_utils.UnscopeName(str(blob))] = True
    with c2_utils.NamedCudaScope(gpu_id):
        for unscoped_param_name in unscoped_param_names.keys():
            if (unscoped_param_name.find(']_') >= 0 and
                    unscoped_param_name not in src_blobs):
                # Special case for sharing initialization from a pretrained
                # model:
                # If a blob named '_[xyz]_foo' is in model.params and not in
                # the initialization blob dictionary, then load source blob
                # 'foo' into destination blob '_[xyz]_foo'
                src_name = unscoped_param_name[
                    unscoped_param_name.find(']_') + 2:]
            else:
                src_name = unscoped_param_name
            if src_name not in src_blobs:
                logger.info('{:s} not found'.format(src_name))
                continue
            dst_name = core.ScopedName(unscoped_param_name)
            has_momentum = src_name + '_momentum' in src_blobs
            has_momentum_str = ' [+ momentum]' if has_momentum else ''
            logger.info(
                '{:s}{:} loaded from weights file into {:s}: {}'.format(
                    src_name, has_momentum_str, dst_name, src_blobs[src_name]
                    .shape
                )
            )
            if dst_name in ws_blobs:
                # If the blob is already in the workspace, make sure that it
                # matches the shape of the loaded blob
                ws_blob = workspace.FetchBlob(dst_name)
                assert ws_blob.shape == src_blobs[src_name].shape, \
                    ('Workspace blob {} with shape {} does not match '
                     'weights file shape {}').format(
                        src_name,
                        ws_blob.shape,
                        src_blobs[src_name].shape)
            workspace.FeedBlob(
                dst_name,
                src_blobs[src_name].astype(np.float32, copy=False))
            if has_momentum:
                workspace.FeedBlob(
                    dst_name + '_momentum',
                    src_blobs[src_name + '_momentum'].astype(
                        np.float32, copy=False))
    
    from detectron.core.config import cfg
from detectron.utils.io import load_object
import detectron.utils.env as envu
    
    from detectron.core.config import assert_and_infer_cfg
from detectron.core.config import cfg
from detectron.core.config import load_cfg
from detectron.core.config import merge_cfg_from_cfg
from detectron.core.config import merge_cfg_from_file
from detectron.utils.io import cache_url
from detectron.utils.logging import setup_logging
import detectron.core.rpn_generator as rpn_engine
import detectron.core.test_engine as model_engine
import detectron.datasets.dummy_datasets as dummy_datasets
import detectron.utils.c2 as c2_utils
import detectron.utils.env as envu
import detectron.utils.vis as vis_utils
    
    
def get_rpn_blob_names(is_training=True):
    '''Blob names used by RPN.'''
    # im_info: (height, width, image scale)
    blob_names = ['im_info']
    if is_training:
        # gt boxes: (batch_idx, x1, y1, x2, y2, cls)
        blob_names += ['roidb']
        if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_RPN:
            # Same format as RPN blobs, but one per FPN level
            for lvl in range(cfg.FPN.RPN_MIN_LEVEL, cfg.FPN.RPN_MAX_LEVEL + 1):
                blob_names += [
                    'rpn_labels_int32_wide_fpn' + str(lvl),
                    'rpn_bbox_targets_wide_fpn' + str(lvl),
                    'rpn_bbox_inside_weights_wide_fpn' + str(lvl),
                    'rpn_bbox_outside_weights_wide_fpn' + str(lvl)
                ]
        else:
            # Single level RPN blobs
            blob_names += [
                'rpn_labels_int32_wide',
                'rpn_bbox_targets_wide',
                'rpn_bbox_inside_weights_wide',
                'rpn_bbox_outside_weights_wide'
            ]
    return blob_names
    
        detpath: Path to detections
        detpath.format(classname) should produce the detection results file.
    annopath: Path to annotations
        annopath.format(imagename) should be the xml annotations file.
    imagesetfile: Text file containing the list of images, one image per line.
    classname: Category name (duh)
    cachedir: Directory for caching the annotations
    [ovthresh]: Overlap threshold (default = 0.5)
    [use_07_metric]: Whether to use VOC07's 11 point AP computation
        (default False)
    '''
    # assumes detections are in detpath.format(classname)
    # assumes annotations are in annopath.format(imagename)
    # assumes imagesetfile is a text file with each line an image name
    # cachedir caches the annotations in a pickle file
    
        # Add suffix ops
    new_net.Proto().op.extend(net.Proto().op[prefix_len:])
    # Add external input blobs
    # Treat any undefined blobs as external inputs
    input_names = [
        i for op in new_net.Proto().op for i in op.input
        if not new_net.BlobIsDefined(i)]
    new_net.Proto().external_input.extend(input_names)
    # Add external output blobs
    output_names = [str(o) for o in outputs]
    new_net.Proto().external_output.extend(output_names)
    return new_net, [new_net.GetBlobRef(o) for o in output_names]
    
    log = logging.getLogger(__name__)
    
    # Copyright (c) 2017-present, Facebook, Inc.
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##############################################################################
    
        dt_testdev = []
    print('Filtering test-dev from test...')
    t = Timer()
    t.tic()
    for i in range(len(dt)):
        if i % 1000 == 0:
            print('{}/{}'.format(i, len(dt)))
        if dt[i]['image_id'] in image_testdev_id:
            dt_testdev.append(dt[i])
    print('Done filtering ({:2}s)!'.format(t.toc()))
    
    if args.quiet:
    jieba.setLogLevel(60)
if args.pos:
    import jieba.posseg
    posdelim = args.pos
    def cutfunc(sentence, _, HMM=True):
        for w, f in jieba.posseg.cut(sentence, HMM):
            yield w + posdelim + f
else:
    cutfunc = jieba.cut
    
        route = [None] * len(obs)
    i = len(obs) - 1
    while i >= 0:
        route[i] = state
        state = mem_path[i][state]
        i -= 1
    return (prob, route)

    
    USAGE = 'usage:    python extract_tags_with_weight.py [file name] -k [top k] -w [with weight=1 or 0]'
    
        def testTokenize_NOHMM(self):
        for content in test_contents:
            result = jieba.tokenize(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Tokenize Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Tokenize error on content: %s' % content
            for tk in result:
                print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]), file=sys.stderr)
        print('testTokenize_NOHMM', file=sys.stderr)
    
    while True:
    line = sys.stdin.readline()
    if line=='':
        break
    line = line.strip()
    for word in jieba.cut(line):
        print(word)