
        
        import io
import optparse
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
        def __eq__(self, other):
        return (
            isinstance(other, self.__class__) and
            self.keys == other.keys and
            self.messages == other.messages and
            self.strict == other.strict
        )
    
        @cached_property
    def model(self):
        return self.get_model_class()
    
        @classmethod
    def get_session_store_class(cls):
        from django.contrib.sessions.backends.db import SessionStore
        return SessionStore
    
    
def voc_info(json_dataset):
    year = json_dataset.name[4:8]
    image_set = json_dataset.name[9:]
    devkit_path = get_devkit_dir(json_dataset.name)
    assert os.path.exists(devkit_path), \
        'Devkit directory {} not found'.format(devkit_path)
    anno_path = os.path.join(
        devkit_path, 'VOC' + year, 'Annotations', '{:s}.xml')
    image_set_path = os.path.join(
        devkit_path, 'VOC' + year, 'ImageSets', 'Main', image_set + '.txt')
    return dict(
        year=year,
        image_set=image_set,
        devkit_path=devkit_path,
        anno_path=anno_path,
        image_set_path=image_set_path)

    
    
def add_fpn_ResNet50_conv5_P2only_body(model):
    return add_fpn_onto_conv_body(
        model,
        ResNet.add_ResNet50_conv5_body,
        fpn_level_info_ResNet50_conv5,
        P2only=True
    )
    
    ... -> RoI ----\                               /-> box cls output -> cls loss
                -> RoIFeatureXform -> box head
... -> Feature /                               \-> box reg output -> reg loss
       Map
    
        assert len(blobs_in) == k_max - k_min + 1
    bbox_feat_list = []
    cls_pred_dim = (
        model.num_classes if cfg.RETINANET.SOFTMAX else (model.num_classes - 1)
    )
    # unpacked bbox feature and add prediction layers
    bbox_regr_dim = (
        4 * (model.num_classes - 1) if cfg.RETINANET.CLASS_SPECIFIC_BBOX else 4
    )
    
        def __init__(self, unpacked, extra):
        self.unpacked = unpacked
        self.extra = extra
    
    
def test_9():
    for o in [1 << 32, (1 << 64) - 1, -((1 << 31) + 1), -(1 << 63), 1.0, 0.1,
              -0.1, -1.0]:
        check(9, o)
    
    ax = fig.add_axes((0.63 + 0.18, 0.1, 0.16, 0.8))
y = np.row_stack((fnx(), fnx(), fnx()))
x = np.arange(10)
y1, y2, y3 = fnx(), fnx(), fnx()
ax.stackplot(x, y1, y2, y3)
ax.set_xticks([])
ax.set_yticks([])
    
    
@pytest.mark.parametrize('pct,exp', [
    (False, [3., 3., 3., 3., 3.]),
    (True, [.6, .6, .6, .6, .6])])
def test_rank_resets_each_group(pct, exp):
    df = DataFrame(
        {'key': ['a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b'],
         'val': [1] * 10}
    )
    result = df.groupby('key').rank(pct=pct)
    exp_df = DataFrame(exp * 2, columns=['val'])
    tm.assert_frame_equal(result, exp_df)
    
        with tm.ensure_clean() as path:
        df = pd.read_json('{'a': [1, 2, 3], 'b': [4, 5, 6]}')
        df.to_json(path, orient='records', lines=True,
                   compression=compression)
        roundtripped_df = pd.read_json(path, lines=True,
                                       compression=compression)
        assert_frame_equal(df, roundtripped_df)
    
    
class MyDict(dict):
    pass