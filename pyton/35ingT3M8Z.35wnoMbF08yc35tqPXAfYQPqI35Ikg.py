
        
        # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
            If the return values are relative paths, they will be passed to
        `RequestHandler.static_url`; otherwise they will be used as-is.
        '''
        return None
    
    
def re_unescape(s):
    # type: (str) -> str
    '''Unescape a string escaped by `re.escape`.
    
    from tornado.escape import json_decode
from tornado.test.httpserver_test import TypeCheckHandler
from tornado.testing import AsyncHTTPTestCase
from tornado.web import RequestHandler, Application
from tornado.wsgi import WSGIApplication, WSGIContainer, WSGIAdapter
    
            with ExceptionStackContext(error_handler):
            request = HTTPRequest(self.get_url('/custom_reason'),
                                  prepare_curl_callback=lambda curl: 1 / 0)
        yield [error_event.wait(), self.http_client.fetch(request)]
        self.assertEqual(1, len(exc_info))
        self.assertIs(exc_info[0][0], ZeroDivisionError)
    
        @gen_test
    def test_stop_in_callback(self):
        # Issue #2069: calling server.stop() in a loop callback should not
        # raise EBADF when the loop handles other server connection
        # requests in the same loop iteration
    
        def call_wrapped_inner(self, queue, count):
        if count < 0:
            return
        with self.make_context():
            queue.append(stack_context.wrap(
                functools.partial(self.call_wrapped_inner, queue, count - 1)))
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    from __future__ import print_function
    
        def not_specification(self):
        return NotSpecification(self)
    
    
def get_data(file_name):
    data = pandas.read_csv(file_name)
    distance_array = []
    press_time_array = []
    for distance, press_time in zip(data['Distance'], data['Press_time']):
        distance_array.append([float(distance.strip().strip('[]'))])
        press_time_array.append([float(press_time.strip().strip('[]'))])
    return distance_array, press_time_array
    
    template = cv2.imread('./resource/image/character.png')
template = cv2.resize(template, (0, 0), fx=scale, fy=scale)
template_size = template.shape[:2]
    
    '''
=== 思路 ===
核心：每次落稳之后截图，根据截图算出棋子的坐标和下一个块顶面的中点坐标，
    根据两个点的距离乘以一个时间系数获得长按的时间
识别棋子：靠棋子的颜色来识别位置，通过截图发现最下面一行大概是一条
    直线，就从上往下一行一行遍历，比较颜色（颜色用了一个区间来比较）
    找到最下面的那一行的所有点，然后求个中点，求好之后再让 Y 轴坐标
    减小棋子底盘的一半高度从而得到中心点的坐标
识别棋盘：靠底色和方块的色差来做，从分数之下的位置开始，一行一行扫描，
    由于圆形的块最顶上是一条线，方形的上面大概是一个点，所以就
    用类似识别棋子的做法多识别了几个点求中点，这时候得到了块中点的 X
    轴坐标，这时候假设现在棋子在当前块的中心，根据一个通过截图获取的
    固定的角度来推出中点的 Y 坐标
最后：根据两点的坐标算距离乘以系数来获取长按时间（似乎可以直接用 X 轴距离）
'''
    
    '''
##基于python3.5(64位)
###如果缺少scikit-image库，建议进下面网址下载whl直接安装
##https://www.lfd.uci.edu/~gohlke/pythonlibs/#scikit-image
    
        # 寻找棋子 ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆