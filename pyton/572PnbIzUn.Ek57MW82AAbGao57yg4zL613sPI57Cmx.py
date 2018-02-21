
        
        errors = []
    
    
def get(url, params=None, **kwargs):
    r'''Sends a GET request.
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        def raise_for_status(self):
        '''Raises stored :class:`HTTPError`, if one occurred.'''
    
        # Sometimes, urllib3 only reports its version as 16.1.
    if len(urllib3_version) == 2:
        urllib3_version.append('0')
    
    
class TooManyRedirects(RequestException):
    '''Too many redirects.'''
    
    _codes = {
    }
    
        with server as (host, port):
        url = u'http://{0}:{1}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{0}/{1}'.format(url, expected_path.decode('ascii'))
    
    
###############################################################################
# Data
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
    import matplotlib.pyplot as plt
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    The experiment is performed on an artificial dataset for binary classification
with 100.000 samples (1.000 of them are used for model fitting) with 20
features. Of the 20 features, only 2 are informative and 10 are redundant. The
first figure shows the estimated probabilities obtained with logistic
regression, Gaussian naive Bayes, and Gaussian naive Bayes with both isotonic
calibration and sigmoid calibration. The calibration performance is evaluated
with Brier score, reported in the legend (the smaller the better). One can
observe here that logistic regression is well calibrated while raw Gaussian
naive Bayes performs very badly. This is because of the redundant features
which violate the assumption of feature-independence and result in an overly
confident classifier, which is indicated by the typical transposed-sigmoid
curve.
    
    xx = np.linspace(3, 9, 100)
yy = np.linspace(1, 5, 100).T
xx, yy = np.meshgrid(xx, yy)
Xfull = np.c_[xx.ravel(), yy.ravel()]
    
    plt.xlabel('n_features / n_samples')
plt.ylabel('Classification accuracy')
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
    try:
    from test import test_support
except ImportError:
    from test import support as test_support
    
    
class BaseRequest( object ):
    
    from ycm.client.base_request import ( BaseRequest, BuildRequestData,
                                      HandleServerException )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      _assert_accepts( f, { 'text' : 'This is an IMPORTANT taco',
                        'kind' : 'WARNING' } )
  _assert_rejects( f, { 'text' : 'This taco will NOT be shown',
                        'kind' : 'ERROR' } )
    
    
def KeywordsFromSyntaxListOutput_StatementHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
baa xxx foo bar
        links to Foo
Foo xxx zoo goo
        links to Bar
Bar xxx qux moo
        links to Statement''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo' ) )
    
    
def on_click(event):
    global update
    global ix, iy
    global click_count
    global cor
    
    
def get_data(file_name):
    data = pandas.read_csv(file_name)
    distance_array = []
    press_time_array = []
    for distance, press_time in zip(data['Distance'], data['Press_time']):
        distance_array.append([float(distance.strip().strip('[]'))])
        press_time_array.append([float(press_time.strip().strip('[]'))])
    return distance_array, press_time_array
    
    
def computing_error(last_press_time, target_board_x, target_board_y, last_piece_x, last_piece_y, temp_piece_x,
                    temp_piece_y):
    '''
    计算跳跃实际误差
    '''
    target_distance = math.sqrt(
        (target_board_x - last_piece_x) ** 2 + (target_board_y - last_piece_y) ** 2)  # 上一轮目标跳跃距离
    actual_distance = math.sqrt((temp_piece_x - last_piece_x) ** 2 + (temp_piece_y - last_piece_y) ** 2)  # 上一轮实际跳跃距离
    jump_error_value = math.sqrt((target_board_x - temp_piece_x) ** 2 + (target_board_y - temp_piece_y) ** 2)  # 跳跃误差
    
        i, next_rest, next_rest_time = (0, random.randrange(3, 10),
                                    random.randrange(5, 10))
    while True:
        im = screenshot.pull_screenshot()
        # 获取棋子和 board 的位置
        piece_x, piece_y, board_x, board_y, delta_piece_y = find_piece_and_board(im)
        ts = int(time.time())
        print(ts, piece_x, piece_y, board_x, board_y)
        set_button_position(im)
        jump(math.sqrt((board_x - piece_x) ** 2 + (board_y - piece_y) ** 2), delta_piece_y)
        if DEBUG_SWITCH:
            debug.save_debug_screenshot(ts, im, piece_x,
                                        piece_y, board_x, board_y)
            debug.backup_screenshot(ts)
        im.close()
        i += 1
        if i == next_rest:
            print('已经连续打了 {} 下，休息 {}秒'.format(i, next_rest_time))
            for j in range(next_rest_time):
                sys.stdout.write('\r程序将在 {}秒 后继续'.format(next_rest_time - j))
                sys.stdout.flush()
                time.sleep(1)
            print('\n继续')
            i, next_rest, next_rest_time = (0, random.randrange(30, 100),
                                            random.randrange(10, 60))
        # 为了保证截图的时候应落稳了，多延迟一会儿，随机值防 ban
        time.sleep(random.uniform(1.2, 1.4))
    
            for j in range(w):
            pixel = im_pixel[j, i]
            # 修掉脑袋比下一个小格子还高的情况的 bug
            if abs(j - piece_x) < piece_body_width:
                continue