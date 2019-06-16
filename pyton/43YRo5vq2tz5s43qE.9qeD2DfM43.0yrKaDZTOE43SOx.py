
        
            if results.overwrite and os.path.exists(output_directory):
        shutil.rmtree(output_directory)
    
    
def _add_multilevel_rois_for_test(blobs, name):
    '''Distributes a set of RoIs across FPN pyramid levels by creating new level
    specific RoI blobs.
    
    import pycocotools.mask as mask_util
    
        dim_bottleneck = cfg.RESNETS.NUM_GROUPS * cfg.RESNETS.WIDTH_PER_GROUP
    (n1, n2, n3) = block_counts[:3]
    s, dim_in = add_stage(model, 'res2', p, n1, dim_in, 256, dim_bottleneck, 1)
    if freeze_at == 2:
        model.StopGradient(s, s)
    s, dim_in = add_stage(
        model, 'res3', s, n2, dim_in, 512, dim_bottleneck * 2, 1
    )
    if freeze_at == 3:
        model.StopGradient(s, s)
    s, dim_in = add_stage(
        model, 'res4', s, n3, dim_in, 1024, dim_bottleneck * 4, 1
    )
    if freeze_at == 4:
        model.StopGradient(s, s)
    if len(block_counts) == 4:
        n4 = block_counts[3]
        s, dim_in = add_stage(
            model, 'res5', s, n4, dim_in, 2048, dim_bottleneck * 8,
            cfg.RESNETS.RES5_DILATION
        )
        if freeze_at == 5:
            model.StopGradient(s, s)
        return s, dim_in, 1. / 32. * cfg.RESNETS.RES5_DILATION
    else:
        return s, dim_in, 1. / 16.
    
    
# ---------------------------------------------------------------------------- #
# ********************** DEPRECATED FUNCTIONALITY BELOW ********************** #
# ---------------------------------------------------------------------------- #
    
    
_RENAME = {
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up4convs':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up4convs',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0upshare':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0upshare',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0up',
    # Removed head_builder module in favor of the more specific fast_rcnn name
    'head_builder.add_roi_2mlp_head':
        'fast_rcnn_heads.add_roi_2mlp_head',
}
    
    
def compute_targets(ex_rois, gt_rois, weights=(1.0, 1.0, 1.0, 1.0)):
    '''Compute bounding-box regression targets for an image.'''
    return box_utils.bbox_transform_inv(ex_rois, gt_rois, weights).astype(
        np.float32, copy=False
    )

    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def loader_loop(roi_data_loader):
    load_timer = Timer()
    iters = 100
    for i in range(iters):
        load_timer.tic()
        roi_data_loader.get_next_minibatch()
        load_timer.toc()
        print('{:d}/{:d}: Average get_next_minibatch time: {:.3f}s'.format(
              i + 1, iters, load_timer.average_time))
    
        result = s[lambda x: ['A', 'B']]
    tm.assert_series_equal(result, s.loc[['A', 'B']])
    
    
# our starting frame
def seed_df(seed_nans, n, m):
    np.random.seed(1234)
    days = date_range('2015-08-24', periods=10)
    
    
   class TestMyDtype(BaseDtypeTests):
       pass
    
        with tm.ensure_clean() as path:
        df = pd.read_json('{'a': ['foo', 'bar', 'baz'], 'b': [4, 5, 6]}')
        df.to_json(path, orient='records', lines=True,
                   compression=compression)
    
    
class MyList(list):
    pass
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
        def textrank(self, sentence, topK=20, withWeight=False, allowPOS=('ns', 'n', 'vn', 'v'), withFlag=False):
        '''
        Extract keywords from sentence using TextRank algorithm.
        Parameter:
            - topK: return how many top keywords. `None` for all possible words.
            - withWeight: if True, return a list of (word, weight);
                          if False, return a list of words.
            - allowPOS: the allowed POS list eg. ['ns', 'n', 'vn', 'v'].
                        if the POS of w is not in this list, it will be filtered.
            - withFlag: if True, return a list of pair(word, weight) like posseg.cut
                        if False, return a list of words
        '''
        self.pos_filt = frozenset(allowPOS)
        g = UndirectWeightedGraph()
        cm = defaultdict(int)
        words = tuple(self.tokenizer.cut(sentence))
        for i, wp in enumerate(words):
            if self.pairfilter(wp):
                for j in xrange(i + 1, i + self.span):
                    if j >= len(words):
                        break
                    if not self.pairfilter(words[j]):
                        continue
                    if allowPOS and withFlag:
                        cm[(wp, words[j])] += 1
                    else:
                        cm[(wp.word, words[j].word)] += 1
    
        def __init__(self, idf_path=None):
        self.path = ''
        self.idf_freq = {}
        self.median_idf = 0.0
        if idf_path:
            self.set_new_path(idf_path)
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    cat abc.txt | python jiebacmd.py | sort | uniq -c | sort -nr -k1 | head -100