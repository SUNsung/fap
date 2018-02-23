
        
        # TODO: ensure that history changes.

    
    
@app.route('/')
def index():
    return render_template('index.html')
    
        def __init__(self, floor, total_spots):
        self.floor = floor
        self.num_spots = total_spots
        self.available_spots = 0
        self.spots = []  # List of ParkingSpots
    
            Emit key value pairs of the form:
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}
        self.linked_list = LinkedList()
    
        def test_data_name_shall_be_changeable(cls):
        cls.sub.name = 'New Data Name'
        cls.assertEqual(cls.sub.name, 'New Data Name')

    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    
            distance = (cor1[0][0] - cor2[0][0])**2 + (cor1[0][1] - cor2[0][1])**2
        distance = distance ** 0.5
        print('distance = ', distance)
        jump(distance)
        update = True
    
    
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
    
        # 限制棋盘扫描的横坐标，避免音符 bug
    if piece_x < w / 2:
        board_x_start = piece_x
        board_x_end = w
    else:
        board_x_start = 0
        board_x_end = piece_x
    
            for j in range(int(board_x_start), int(board_x_end)):
            pixel = im_pixel[j, i]
            # 修掉脑袋比下一个小格子还高的情况的 bug
            if abs(j - piece_x) < piece_body_width:
                continue
    
    c = wda.Client()
s = c.session()
    
        # 精查棋子位置
    piece_x, piece_x_set = 0, []  # 棋子x/棋子坐标集合
    piece_width = w // 14  # 估算棋子宽度
    piece_height = w // 5  # 估算棋子高度
    for ny in range(piece_fy + scan_piece_unit, piece_fy - piece_height, -4):
        for nx in range(max(piece_fx - piece_width, 0),
                        min(piece_fx + piece_width, w)):
            pixel = im_pixel[nx, ny]
            # print(nx,ny,pixel)
            if find_piece(pixel):
                piece_x_set.append(nx)
        if len(piece_x_set) > 10:
            piece_x = sum(piece_x_set) / len(piece_x_set)
            break
    print('%-12s %s' % ('p_exact_x:', piece_x))