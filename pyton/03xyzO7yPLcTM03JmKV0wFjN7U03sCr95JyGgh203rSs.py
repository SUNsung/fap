
        
        
if __name__ == '__main__':
    main()

    
    if os.name == 'nt':
    from tornado.platform.windows import set_close_exec
else:
    from tornado.platform.posix import set_close_exec
    
        @gen.coroutine
    def resolve(
        self, host: str, port: int, family: int = 0
    ) -> 'Generator[Any, Any, List[Tuple[int, Any]]]':
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            fut = Future()  # type: Future[Tuple[Any, Any]]
            self.channel.gethostbyname(
                host, family, lambda result, error: fut.set_result((result, error))
            )
            result, error = yield fut
            if error:
                raise IOError(
                    'C-Ares returned error %s: %s while resolving %s'
                    % (error, pycares.errno.strerror(error), host)
                )
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError(
                    'Requested socket family %d but got %d' % (family, address_family)
                )
            addrinfo.append((typing.cast(int, address_family), (address, port)))
        return addrinfo

    
        def test_asyncio_callback(self):
        # Basic test that the asyncio loop is set up correctly.
        asyncio.get_event_loop().call_soon(self.stop)
        self.wait()
    
    
class GoogleOAuth2Test(AsyncHTTPTestCase):
    def get_app(self):
        return Application(
            [
                # test endpoints
                ('/client/login', GoogleLoginHandler, dict(test=self)),
                # simulated google authorization server endpoints
                ('/google/oauth2/authorize', GoogleOAuth2AuthorizeHandler),
                ('/google/oauth2/token', GoogleOAuth2TokenHandler),
                ('/google/oauth2/userinfo', GoogleOAuth2UserinfoHandler),
            ],
            google_oauth={
                'key': 'fake_google_client_id',
                'secret': 'fake_google_client_secret',
            },
        )
    
            o = Object()
        answer = yield o.f()
        self.assertEqual(answer, 42)
    
    
class auto_adb():
    def __init__(self):
        try:
            adb_path = 'adb'
            subprocess.Popen([adb_path], stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE)
            self.adb_path = adb_path
        except OSError:
            if platform.system() == 'Windows':
                adb_path = os.path.join('Tools', 'adb', 'adb.exe')
                try:
                    subprocess.Popen(
                        [adb_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
                    self.adb_path = adb_path
                except OSError:
                    pass
            else:
                try:
                    subprocess.Popen(
                        [adb_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
                except OSError:
                    pass
            print('请安装 ADB 及驱动并配置环境变量')
            print('具体链接: https://github.com/wangshub/wechat_jump_game/wiki')
            exit(1)
    
    
def open_accordant_config():
    '''
    调用配置文件
    '''
    screen_size = _get_screen_size()
    config_file = '{path}/config/{screen_size}/config.json'.format(
        path=sys.path[0],
        screen_size=screen_size
    )
    
        elif parser.mode == 'auto':
        bot = AutoBot(params=settings.get_bot_params(parser.model)) 
        bot.run()
    
        bot_params = {
        'TIME_COEFF': 2.,
        'COORD_Y_START_SCAN': 200,
        'PIECE_BASE_HEIGHT_HALF': 13,
        'PIECE_BODY_WIDTH': 49,
        'SWIPE_X1': 375,
        'SWIPE_Y1': 1055,
        'SWIPE_X2': 375,
        'SWIPE_Y2': 1055
    }
    
    
def main():
    '''
    主函数
    '''
    print('程序版本号：{}'.format(VERSION))
    print('激活窗口并按 CONTROL + C 组合键退出')
    debug.dump_device_info()
    screenshot.check_screenshot()
    
    
def jump(piece_x, board_x, im, swipe_x1, swipe_y1):
    distanceX = abs(board_x - piece_x)  # 起点到目标的水平距离
    shortEdge = min(im.size)  # 屏幕宽度
    jumpPercent = distanceX / shortEdge  # 跳跃百分比
    jumpFullWidth = 1700  # 跳过整个宽度 需要按压的毫秒数
    press_time = round(jumpFullWidth * jumpPercent)  # 按压时长
    press_time = 0 if not press_time else max(
        press_time, 200)  # press_time大于0时限定最小值
    print('%-12s %.2f%% (%s/%s) | Press: %sms' %
          ('Distance:', jumpPercent * 100, distanceX, shortEdge, press_time))
    
    
class ExitAutocall(IPyAutocall):
    '''An autocallable object which will be added to the user namespace so that
    exit, exit(), quit or quit() are all valid ways to close the shell.'''
    rewrite = False
    
    def __call__(self):
        self._ip.ask_exit()
        
class ZMQExitAutocall(ExitAutocall):
    '''Exit IPython. Autocallable, so it needn't be explicitly called.
    
    Parameters
    ----------
    keep_kernel : bool
      If True, leave the kernel alive. Otherwise, tell the kernel to exit too
      (default).
    '''
    def __call__(self, keep_kernel=False):
        self._ip.keepkernel_on_exit = keep_kernel
        self._ip.ask_exit()

    
    
class __BuiltinUndefined(object): pass
BuiltinUndefined = __BuiltinUndefined()
    
            # Colors for printing the exception
        excName = C.Red,
        #line = C.Brown,  # brown often is displayed as yellow
        line = C.Red,
        caret = C.Normal,
        Normal = C.Normal,
        ))
    
            you can also use the specific value `:memory:` (including the colon
        at both end but not the back ticks), to avoid creating an history file.
        
        ''').tag(config=True)
    
    enabled = Bool(True,
        help='''enable the SQLite history
        
        set enabled=False to disable the SQLite history,
        in which case there will be no stored history, no SQLite connection,
        and no background saving thread.  This may be necessary in some
        threaded environments where IPython is embedded.
        '''
    ).tag(config=True)
    
    connection_options = Dict(
        help='''Options for configuring the SQLite connection
        
        These options are passed as keyword args to sqlite3.connect
        when establishing database connections.
        '''
    ).tag(config=True)
    
        def start(self):
        if self.subapp is None:
            print('No subcommand specified. Must specify one of: %s' % \
                                                    (self.subcommands.keys()))
            print()
            self.print_description()
            self.print_subcommands()
            self.exit(1)
        else:
            return self.subapp.start()

    
    #*****************************************************************************
#       Copyright (C) 2001-2005 Fernando Perez <fperez@colorado.edu>
#
#  Distributed under the terms of the BSD License.  The full license is in
#  the file COPYING, distributed as part of this software.
#*****************************************************************************
    
            self.shell.logger.switch_log(1)
    
    from IPython import get_ipython
from IPython.core.display import display
from IPython.core.error import TryNext
from IPython.utils.data import chop
from IPython.utils.process import system
from IPython.utils.terminal import get_terminal_size
from IPython.utils import py3compat
    
    
def install_payload_page():
    '''DEPRECATED, use show_in_pager hook
    
    Install this version of page as IPython.core.page.page.
    '''
    warnings.warn('''install_payload_page is deprecated.
    Use `ip.set_hook('show_in_pager, page.as_hook(payloadpage.page))`
    ''')
    from IPython.core import page as corepage
    corepage.page = page
