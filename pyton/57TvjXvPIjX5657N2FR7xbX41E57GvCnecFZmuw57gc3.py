
        
        # Get a reference to webcam #0 (the default one)
video_capture = cv2.VideoCapture(0)
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    for face_location in face_locations:
    
            file = request.files['file']
    
        :param file: image file name or file object to load
    :param mode: format to convert the image to. Only 'RGB' (8-bit RGB, 3 channels) and 'L' (black and white) are supported.
    :return: image contents as numpy array
    '''
    im = PIL.Image.open(file)
    if mode:
        im = im.convert(mode)
    return np.array(im)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
        function_parameters = zip(
        images_to_check,
        itertools.repeat(known_names),
        itertools.repeat(known_face_encodings),
        itertools.repeat(tolerance),
        itertools.repeat(show_distance)
    )
    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    import face_recognition
from flask import Flask, jsonify, request, redirect
    
      def CanonicalizeAlphabeticalOrder(self, header_path):
    '''Returns a path canonicalized for alphabetical comparison.
    
    
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
    
        ind_kp = gt_inds[roidb['box_to_gt_ind_map']]
    within_box = _within_box(gt_keypoints[ind_kp, :, :], roidb['boxes'])
    vis_kp = gt_keypoints[ind_kp, 2, :] > 0
    is_visible = np.sum(np.logical_and(vis_kp, within_box), axis=1) > 0
    kp_fg_inds = np.where(
        np.logical_and(max_overlaps >= cfg.TRAIN.FG_THRESH, is_visible)
    )[0]
    
    import logging
import numpy as np
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--num-batches', dest='num_batches',
        help='Number of minibatches to run',
        default=200, type=int)
    parser.add_argument(
        '--sleep', dest='sleep_time',
        help='Seconds sleep to emulate a network running',
        default=0.1, type=float)
    parser.add_argument(
        '--cfg', dest='cfg_file', help='optional config file', default=None,
        type=str)
    parser.add_argument(
        '--x-factor', dest='x_factor', help='simulates x-factor more GPUs',
        default=1, type=int)
    parser.add_argument(
        '--profiler', dest='profiler', help='profile minibatch load time',
        action='store_true')
    parser.add_argument(
        'opts', help='See detectron/core/config.py for all options', default=None,
        nargs=argparse.REMAINDER)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args
    
    
if __name__ == '__main__':