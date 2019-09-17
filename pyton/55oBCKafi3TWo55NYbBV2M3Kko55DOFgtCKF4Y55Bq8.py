    @pytest.fixture
    def key(self, monkeypatch):
        monkeypatch.setattr('thefuck.utils.Cache._get_key',
                            lambda *_: 'key')
        return 'key'
    
    if os.environ.get('CONVERT_README'):
    import pypandoc
    
    
@pytest.mark.usefixtures('isfile', 'no_memoize', 'no_cache')
class TestTcsh(object):
    @pytest.fixture
    def shell(self):
        return Tcsh()
    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['tcsh', '--version'], stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').split()[1]

    
    
@sudo_support
def match(command):
    return (not which(command.script_parts[0])
            and ('not found' in command.output
                 or 'is not recognized as' in command.output)
            and bool(get_close_matches(command.script_parts[0],
                                       get_all_executables())))
    
    The most similar choice to 'providers' is:
    provider
'''
    
    # Author: Yoshihiro Uchida <nimbus1after2a1sun7shower@gmail.com>
    
    from sklearn.datasets import fetch_openml
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.utils import check_random_state
    
        for i in range(1, n + 1):
        print('==================')
        print('Iteration %02d of %02d' % (i, n))
        print('==================')
        n_features = i * step
        n_informative = n_features / 10
    
        alpha = 0.01  # regularization parameter
    
    from sklearn.linear_model import Ridge, SGDRegressor, ElasticNet
from sklearn.metrics import mean_squared_error
from sklearn.datasets.samples_generator import make_regression
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    '''
=========================================================
Feature agglomeration
=========================================================
    
    # Incorrect number of clusters
y_pred = KMeans(n_clusters=2, random_state=random_state).fit_predict(X)
    
        if model.train:  # share computation with bbox head at training time
        dim_conv5 = 2048
        blob_conv5 = model.net.SampleAs(
            ['res5_2_sum', 'roi_has_mask_int32'],
            ['_[mask]_res5_2_sum_sliced']
        )
    else:  # re-compute at test time
        blob_conv5, dim_conv5 = add_ResNet_roi_conv5_head_for_masks(
            model,
            blob_in,
            dim_in,
            spatial_scale
        )
    
    
def _add_class_assignments(roidb):
    '''Compute object category assignment for each box associated with each
    roidb entry.
    '''
    for entry in roidb:
        gt_overlaps = entry['gt_overlaps'].toarray()
        # max overlap with gt over classes (columns)
        max_overlaps = gt_overlaps.max(axis=1)
        # gt class that had the max overlap
        max_classes = gt_overlaps.argmax(axis=1)
        entry['max_classes'] = max_classes
        entry['max_overlaps'] = max_overlaps
        # sanity checks
        # if max overlap is 0, the class must be background (class 0)
        zero_inds = np.where(max_overlaps == 0)[0]
        assert all(max_classes[zero_inds] == 0)
        # if max overlap > 0, the class must be a fg class (not class 0)
        nonzero_inds = np.where(max_overlaps > 0)[0]
        assert all(max_classes[nonzero_inds] != 0)
    
                        image['width'] = json_ann['imgWidth']
                    image['height'] = json_ann['imgHeight']
                    image['file_name'] = filename[:-len(
                        ends_in % data_set.split('_')[0])] + 'leftImg8bit.png'
                    image['seg_file_name'] = filename[:-len(
                        ends_in % data_set.split('_')[0])] + \
                        '%s_instanceIds.png' % data_set.split('_')[0]
                    images.append(image)
    
        return dataset_name, proposal_file
    
        splitlines = [x.strip().split(' ') for x in lines]
    image_ids = [x[0] for x in splitlines]
    confidence = np.array([float(x[1]) for x in splitlines])
    BB = np.array([[float(z) for z in x[2:]] for x in splitlines])
    
    
def zeros(shape, int32=False):
    '''Return a blob of all zeros of the given shape with the correct float or
    int data type.
    '''
    return np.zeros(shape, dtype=np.int32 if int32 else np.float32)
    
    
@contextlib.contextmanager
def NamedCudaScope(gpu_id):
    '''Creates a GPU name scope and CUDA device scope. This function is provided
    to reduce `with ...` nesting levels.'''
    with GpuNameScope(gpu_id):
        with CudaScope(gpu_id):
            yield
    
        def wait_for_stop(self):
        return self._event.wait()
    
    
def log_json_stats(stats, sort_keys=True):
    # hack to control precision of top-level floats
    stats = {
        k: '{:.6f}'.format(v) if isinstance(v, float) else v
        for k, v in stats.items()
    }
    print('json_stats: {:s}'.format(json.dumps(stats, sort_keys=sort_keys)))
    
        def __init__(self, model):
        # Window size for smoothing tracked values (with median filtering)
        self.WIN_SZ = 20
        # Output logging period in SGD iterations
        self.LOG_PERIOD = 20
        self.smoothed_losses_and_metrics = {
            key: SmoothedValue(self.WIN_SZ)
            for key in model.losses + model.metrics
        }
        self.losses_and_metrics = {
            key: 0
            for key in model.losses + model.metrics
        }
        self.smoothed_total_loss = SmoothedValue(self.WIN_SZ)
        self.smoothed_mb_qsize = SmoothedValue(self.WIN_SZ)
        self.iter_total_loss = np.nan
        self.iter_timer = Timer()
        self.model = model
    
        boxes = []
    scores = []
    ids = []
    for i in range(raw_data.shape[0]):
        if i % 1000 == 0:
            print('{}/{}'.format(i + 1, len(roidb)))
        # selective search boxes are 1-indexed and (y1, x1, y2, x2)
        i_boxes = raw_data[i][:, (1, 0, 3, 2)] - 1
        boxes.append(i_boxes.astype(np.float32))
        scores.append(np.zeros((i_boxes.shape[0]), dtype=np.float32))
        ids.append(roidb[i]['id'])
    
    
if __name__ == '__main__':
    args = parse_args()
    assert os.path.exists(args.prototxt_file_name), \
        'Prototxt file does not exist'
    assert os.path.exists(args.caffemodel_file_name), \
        'Weights file does not exist'
    net, weights = load_and_convert_caffe_model(
        args.prototxt_file_name, args.caffemodel_file_name
    )
    pickle_weights(args.out_file_name, weights)

    
    from detectron.core.config import assert_and_infer_cfg
from detectron.core.config import cfg
from detectron.core.config import merge_cfg_from_file
from detectron.core.config import merge_cfg_from_list
from detectron.core.test_engine import run_inference
from detectron.utils.logging import setup_logging
import detectron.utils.c2 as c2_utils
    
    
class ModeratorPermissionSetTest(unittest.TestCase):
    def test_loads(self):
        self.assertTrue(ModeratorPermissionSet.loads(None).is_superuser())
        self.assertFalse(ModeratorPermissionSet.loads('').is_superuser())
    
        def test_alian_blue_detector(self):
        user_agent = 'AlienBlue/2.9.10.0.2 CFNetwork/758.4.3 Darwin/15.5.0'
        agent_parsed = {}
        result = AlienBlueDetector().detect(user_agent, agent_parsed)
        self.assertTrue(result)
        self.assertEqual(agent_parsed['browser']['name'],
                         AlienBlueDetector.name)
        self.assertEqual(agent_parsed['browser']['version'], '2.9.10.0.2')
        self.assertEqual(agent_parsed['app_name'],
                         agent_parsed['app_name'])
    
        def make_sig_header(self, body, platform='test', version=1, epoch=None):
        return signing.sign_v1_message(
            body,
            platform=platform,
            version=version,
            epoch=epoch,
        )
    
    class StatsdConnectionUnderTest(stats.StatsdConnection):
    _make_socket = FakeUdpSocket
    
        def test_root_file(self):
        u = UrlParser('http://example.com/a.jpg')
        self.assertEquals('jpg', u.path_extension())
    
        def get_city_id(self):
        '''
        获取所有城市md5参数
        :return:
        '''
        try:
            if self.host:
                while True:
                    url = self.urlConf['cdn_host']['req_url']
                    data = {'host': self.host, 'lintType': '电信,多线,联通,移动'}
                    rep = self.httpClint.post(url, data, headers=self._set_header(), timeout=self.timeout)
                    city_re = re.compile(r'<li id=\'(\S+)\' class=\'PingListCent PingRLlist')
                    self.city_list = re.findall(city_re, rep.content)
                    if self.city_list:
                        print(self.city_list)
                        break
            else:
                pass
        except:
            pass
    
    
def download_image():
    # 抓取验证码
    # 存放到指定path下
    # 文件名为图像的MD5
    url = 'https://kyfw.12306.cn/otn/passcodeNew/getPassCodeNew?module=login&rand=sjrand'
    r = requests.get(url)
    fn = hashlib.md5(r.content).hexdigest()
    with open(f'{PATH}/{fn}.jpg', 'wb') as fp:
        fp.write(r.content)
    
        LOGIN_SESSION_FAIL = u'用户检查失败：{0}，可能未登录，可能session已经失效, 正在重新登录中'

    
        def set_graph_height(self, height):
        '''Set Graph height'''
        self.height = str(height)
    
    
def upgrade():
    '''
    Make TaskInstance.pool field not nullable.
    '''
    with create_session() as session:
        session.query(TaskInstance)\
            .filter(TaskInstance.pool.is_(None))\
            .update({TaskInstance.pool: 'default_pool'},
                    synchronize_session=False)  # Avoid select updated rows
        session.commit()
    
        def test_init(self):
        # Given / When
        operator = SnsPublishOperator(
            task_id=TASK_ID,
            aws_conn_id=AWS_CONN_ID,
            target_arn=TARGET_ARN,
            message=MESSAGE
        )
    
            mock_insecure_client.assert_has_calls([
            call('http://{host}:{port}'.format(host=connection.host, port=connection.port),
                 user=connection.login)
            for connection in mock_get_connections.return_value
        ])
        mock_insecure_client.return_value.status.assert_called_once_with('/')
        self.assertEqual(conn, mock_insecure_client.return_value)