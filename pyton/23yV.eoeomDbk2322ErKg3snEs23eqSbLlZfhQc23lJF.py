
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
        infile, outfile = args
    
    ZSH_COMPLETION_FILE = 'youtube-dl.zsh'
ZSH_COMPLETION_TEMPLATE = 'devscripts/zsh-completion.in'
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'youtube-dldoc'

    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        assert len(kernel_size) == 2
    assert len(strides) == 4
    
            return self._call(x)

    
    
    
            logit_masks = [logit(y) for y in masks_ts]
        logit_masks = np.mean(logit_masks, axis=0)
        masks_c = 1.0 / (1.0 + np.exp(-logit_masks))
    else:
        raise NotImplementedError(
            'Heuristic {} not supported'.format(cfg.TEST.MASK_AUG.HEUR)
        )
    
    
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
    
        if cfg.KRCNN.USE_DECONV_OUTPUT:
        # Use ConvTranspose to predict heatmaps; results in 2x upsampling
        blob_out = model.ConvTranspose(
            blob_in,
            blob_name,
            dim,
            cfg.KRCNN.NUM_KEYPOINTS,
            kernel=cfg.KRCNN.DECONV_KERNEL,
            pad=int(cfg.KRCNN.DECONV_KERNEL / 2 - 1),
            stride=2,
            weight_init=(cfg.KRCNN.CONV_INIT, {'std': 0.001}),
            bias_init=const_fill(0.0)
        )
    else:
        # Use Conv to predict heatmaps; does no upsampling
        blob_out = model.Conv(
            blob_in,
            blob_name,
            dim,
            cfg.KRCNN.NUM_KEYPOINTS,
            kernel=1,
            pad=0,
            stride=1,
            weight_init=(cfg.KRCNN.CONV_INIT, {'std': 0.001}),
            bias_init=const_fill(0.0)
        )
    
    
def ResNet101_rfcn(model):
    return build_generic_rfcn_model(
        model, ResNet.add_ResNet101_conv5_body, dim_reduce=1024
    )

    
    '''Construct minibatches for Mask R-CNN training when keypoints are enabled.
Handles the minibatch blobs that are specific to training Mask R-CNN for
keypoint detection. Other blobs that are generic to RPN or Fast/er R-CNN are
handled by their respecitive roi_data modules.
'''
    
        # Compute anchor labels:
    # label=1 is positive, 0 is negative, -1 is don't care (ignore)
    labels = np.empty((num_inside, ), dtype=np.float32)
    labels.fill(-1)
    if len(gt_boxes) > 0:
        # Compute overlaps between the anchors and the gt boxes overlaps
        anchor_by_gt_overlap = box_utils.bbox_overlaps(anchors, gt_boxes)
        # Map from anchor to gt box that has highest overlap
        anchor_to_gt_argmax = anchor_by_gt_overlap.argmax(axis=1)
        # For each anchor, amount of overlap with most overlapping gt box
        anchor_to_gt_max = anchor_by_gt_overlap[
            np.arange(num_inside), anchor_to_gt_argmax]
    
    _get_module_path = lambda path: os.path.normpath(os.path.join(os.getcwd(),
                                                 os.path.dirname(__file__), path))
_get_abs_path = jieba._get_abs_path
    
    seg_list = jieba.cut('我来到北京清华大学', cut_all=False)
print('Default Mode: ' + '/ '.join(seg_list))  # 默认模式
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    tags = jieba.analyse.extract_tags(content, topK=topK, withWeight=withWeight)
    
    nmf = decomposition.NMF(n_components=n_topic).fit(tfidf)
print('done in %0.3fs.' % (time.time() - t0))
    
    jieba.enable_parallel()
    
    jieba.enable_parallel(4)
    
            self.topwidget.wm_geometry('+%d+%d' % (xpos, ypos))
    
    
def backup_file(directory, filename):
    ''' Backup a given file by appending .bk to the end '''
    logger.trace('Backing up: '%s'', filename)
    origfile = os.path.join(directory, filename)
    backupfile = origfile + '.bk'
    if os.path.exists(backupfile):
        logger.trace('Removing existing file: '%s'', backup_file)
        os.remove(backupfile)
    if os.path.exists(origfile):
        logger.trace('Renaming: '%s' to '%s'', origfile, backup_file)
        os.rename(origfile, backupfile)