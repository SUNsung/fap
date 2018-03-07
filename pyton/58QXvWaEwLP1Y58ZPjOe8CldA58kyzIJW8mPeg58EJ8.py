
        
            def _get_having_obj(self, col, op, eq):
        cond = None
        if op == '==':
            if col in self.column_names:
                cond = DimSelector(dimension=col, value=eq)
            else:
                cond = Aggregation(col) == eq
        elif op == '>':
            cond = Aggregation(col) > eq
        elif op == '<':
            cond = Aggregation(col) < eq
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
            # schema
        self.assertEquals(
            {'schemaname.tbname'},
            self.extract_tables('SELECT * FROM schemaname.tbname'))
    
        for pvm_list in duplicates:
        first_prm = pvm_list[0]
        roles = set(first_prm.role)
        for pvm in pvm_list[1:]:
            roles = roles.union(pvm.role)
            sm.get_session.delete(pvm)
        first_prm.roles = list(roles)
    sm.get_session.commit()
    
        print('Loading [Misc Charts] dashboard')
    data.load_misc_dashboard()
    
    
appbuilder.add_view(
    TableModelView,
    'Tables',
    label=__('Tables'),
    category='Sources',
    category_label=__('Sources'),
    icon='fa-table',
)
    
    import re
    
    
class Board:
    def __init__(self, title, pins):
        self.title = title
        self.pins = pins
        self.pin_count = len(pins)
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    from html.parser import HTMLParser
    
    
class HelpSource(Query):
    'Get menu name and help source for Help menu.'
    # Used in ConfigDialog.HelpListItemAdd/Edit, (941/9)
    
        def test_extend(self):
        d = deque('a')
        self.assertRaises(TypeError, d.extend, 1)
        d.extend('bcd')
        self.assertEqual(list(d), list('abcd'))
        d.extend(d)
        self.assertEqual(list(d), list('abcdabcd'))
    
    +----------------+
| ID (4 bytes)   |
+----------------+
| size (4 bytes) |
+----------------+
| data           |
| ...            |
+----------------+
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)
    
        X_RGB_TXT -- X Consortium rgb.txt format files.  Three columns of numbers
                 from 0 .. 255 separated by whitespace.  Arbitrary trailing
                 columns used as the color name.
    
    ctype_types = [c_byte, c_ubyte, c_short, c_ushort, c_int, c_uint,
                 c_long, c_ulong, c_longlong, c_ulonglong, c_double, c_float]
python_types = [int, int, int, int, int, int,
                int, int, int, int, float, float]
    
    
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
    
    
    def _find_board(self, image, piece_x, piece_y):
        width, height = image.size
        pixels = image.load()
    
    
def pull_screenshot():  # 获取截图
    global screenshot_way
    if screenshot_way in [1, 2]:
        process = subprocess.Popen(
            'adb shell screencap -p', shell=True, stdout=subprocess.PIPE)
        screenshot = process.stdout.read()
        if screenshot_way == 2:
            binary_screenshot = screenshot.replace(b'\r\n', b'\n')
        else:
            binary_screenshot = screenshot.replace(b'\r\r\n', b'\n')
        return binary_screenshot
    elif screenshot_way == 0:
        os.system('adb shell screencap -p /sdcard/autojump.png')
        os.system('adb pull /sdcard/autojump.png .')