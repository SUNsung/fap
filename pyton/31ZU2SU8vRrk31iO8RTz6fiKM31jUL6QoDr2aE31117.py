
        
            @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    
_auth_plugins = plugin_manager.get_auth_plugins()
auth.add_argument(
    '--auth-type', '-A',
    choices=_AuthTypeLazyChoices(),
    default=None,
    help='''
    The authentication mechanism to be used. Defaults to '{default}'.
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
            # behaviour near extremes of floating-point range
        int_dbl_max = int(DBL_MAX)
        top_power = 2**DBL_MAX_EXP
        halfway = (int_dbl_max + top_power)//2
        self.assertEqual(float(int_dbl_max), DBL_MAX)
        self.assertEqual(float(int_dbl_max+1), DBL_MAX)
        self.assertEqual(float(halfway-1), DBL_MAX)
        self.assertRaises(OverflowError, float, halfway)
        self.assertEqual(float(1-halfway), -DBL_MAX)
        self.assertRaises(OverflowError, float, -halfway)
        self.assertRaises(OverflowError, float, top_power-1)
        self.assertRaises(OverflowError, float, top_power)
        self.assertRaises(OverflowError, float, top_power+1)
        self.assertRaises(OverflowError, float, 2*top_power-1)
        self.assertRaises(OverflowError, float, 2*top_power)
        self.assertRaises(OverflowError, float, top_power*top_power)
    
        def test_extra_spaces(self):
        C = cookies.SimpleCookie()
        C.load('eggs  =  scrambled  ;  secure  ;  path  =  bar   ; foo=foo   ')
        self.assertEqual(C.output(),
            'Set-Cookie: eggs=scrambled; Path=bar; Secure\r\nSet-Cookie: foo=foo')
    
    The __init__ method has one required argument, a file-like object
(including a chunk instance), and one optional argument, a flag which
specifies whether or not chunks are aligned on 2-byte boundaries.  The
default is 1, i.e. aligned.
'''
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def safe_tp_name(self):
        try:
            return self.type().field('tp_name').string()
        except NullPyObjectPtr:
            # NULL tp_name?
            return 'unknown'
        except RuntimeError:
            # Can't even read the object at all?
            return 'unknown'
    
        def test_car_adapter_shall_make_loud_noise(self):
        car = Car()
        car_adapter = Adapter(car, make_noise=car.make_noise)
        noise = car_adapter.make_noise(1)
        expected_noise = 'vroom!'
        self.assertEqual(noise, expected_noise)
    
        @classmethod
    def __get_test_directory(self):
        '''
        Get the temporary directory for the tests.
        '''
        self.test_dir = os.path.join(os.path.dirname(
            os.path.realpath(__file__)), 'test_command')
    
    ### OUTPUT ###
# Jack move 5m then stop

    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    
def main():
    command_stack = []
    
            return coord_y_start_scan
    
    '''
# === 思路 ===
# 核心：每次落稳之后截图，根据截图算出棋子的坐标和下一个块顶面的中点坐标，
#      根据两个点的距离乘以一个时间系数获得长按的时间
# 识别棋子：靠棋子的颜色来识别位置，通过截图发现最下面一行大概是一条
           直线，就从上往下一行一行遍历，比较颜色（颜色用了一个区间来比较）
           找到最下面的那一行的所有点，然后求个中点，求好之后再让 Y 轴坐标
           减小棋子底盘的一半高度从而得到中心点的坐标
# 识别棋盘：靠底色和方块的色差来做，从分数之下的位置开始，一行一行扫描，
           由于圆形的块最顶上是一条线，方形的上面大概是一个点，所以就
           用类似识别棋子的做法多识别了几个点求中点，这时候得到了块中点的 X
           轴坐标，这时候假设现在棋子在当前块的中心，根据一个通过截图获取的
           固定的角度来推出中点的 Y 坐标
# 最后：根据两点的坐标算距离乘以系数来获取长按时间（似乎可以直接用 X 轴距离）
'''
import os
import shutil
import time
import math
import random
import json
from PIL import Image, ImageDraw
import wda
    
        click_count += 1
    if click_count > 1:
        click_count = 0
        cor1 = cor.pop()
        cor2 = cor.pop()
    
        def get_screen(self):
        process = os.popen(self.adb_path + ' shell wm size')
        output = process.read()
        return output
    
    
def open_accordant_config():
    '''
    调用配置文件
    '''
    screen_size = _get_screen_size()
    config_file = '{path}/config/{screen_size}/config.json'.format(
        path=sys.path[0],
        screen_size=screen_size
    )
    
    
def jump(distance, delta_piece_y):
    '''
    跳跃一定的距离
    '''
    # 计算程序长度与截图测得的距离的比例
    scale = 0.945 * 2 / head_diameter
    actual_distance = distance * scale * (math.sqrt(6) / 2)
    press_time = (-945 + math.sqrt(945 ** 2 + 4 * 105 *
                                   36 * actual_distance)) / (2 * 105) * 1000
    press_time *= press_coefficient
    press_time = max(press_time, 200)  # 设置 200ms 是最小的按压时间
    press_time = int(press_time)