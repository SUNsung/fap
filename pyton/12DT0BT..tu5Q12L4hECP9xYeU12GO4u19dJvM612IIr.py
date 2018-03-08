
        
        signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
            self.server_process.terminate()
        self.server_process.communicate()
    
    
import errno
import io
import json
import re
import subprocess
    
            return self._extract_nuevo(
            'http://www.anitube.se/nuevo/econfig.php?key=%s' % key, video_id)

    
            # Audiomack wraps a lot of soundcloud tracks in their branded wrapper
        # if so, pass the work off to the soundcloud extractor
        if SoundcloudIE.suitable(api_response['url']):
            return {'_type': 'url', 'url': api_response['url'], 'ie_key': 'Soundcloud'}
    
        _TESTS = [{
        'url': 'http://camwithher.tv/view_video.php?viewkey=6e9a24e2c0e842e1f177&page=&viewtype=&category=',
        'info_dict': {
            'id': '5644',
            'ext': 'flv',
            'title': 'Periscope Tease',
            'description': 'In the clouds teasing on periscope to my favorite song',
            'duration': 240,
            'view_count': int,
            'comment_count': int,
            'uploader': 'MileenaK',
            'upload_date': '20160322',
        },
        'params': {
            'skip_download': True,
        }
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=6dfd8b7c97531a459937',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?page=&viewkey=6e9a24e2c0e842e1f177&viewtype=&category=',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=b6c3b5bea9515d1a1fc4&page=&viewtype=&category=mv',
        'only_matching': True,
    }]
    
    
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    
def linear_model_main(_distances, _press_times, target_distance):
    regr = LinearRegression()
    regr.fit(_distances, _press_times)
    predict_press_time = regr.predict(target_distance)
    result = {}
    # 截距 b
    result['intercept'] = regr.intercept_
    # 斜率值 k
    result['coefficient'] = regr.coef_
    # 预估的按压时间
    result['value'] = predict_press_time
    return result
    
    
def jumpbot(parser):
 
    if parser.mode == 'manual':
        bot = ManualBot(params=settings.get_bot_params(parser.model))
        bot.run()
    
            self.client = wda.Client()
        self.session = self.client.session()
    
        # 如果游戏结束 点击再来一局
    left = int(w / 2)  # 按钮半宽约uiw//5
    # 根据9:16实测按钮高度中心0.825 按钮半高约uiw//28
    top = int((h - uih) / 2 + uih * 0.825)
    if gameover:
        return left, top
    
    
def update_data():
    return np.array(Image.open('autojump.png'))