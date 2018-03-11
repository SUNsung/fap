
        
            return len(cmd) > 1 and 'x' in cmd[1]
    
    
def variable_batch_size_comparison(data):
    batch_sizes = [i.astype(int) for i in np.linspace(data.shape[0] // 10,
                                                      data.shape[0], num=10)]
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
        output_file.close()

    
        def reducer(self, key, value):
        '''Sum values for each key.
    
        def reducer(self, key, value):
        '''Sum values for each key.
    
        def _find_available_spot(self, vehicle):
        '''Find an available spot where vehicle can fit, or return None'''
        pass
    
    
def updatefig(*args):
    global update
    
            if from_left_find_board_y and from_right_find_board_y:
            break
    
    def main():
    '''
    主函数
    '''
    op = yes_or_no('请确保手机打开了 ADB 并连接了电脑，'
                   '然后打开跳一跳并【开始游戏】后再用本程序，确定开始？')
    if not op:
        print('bye')
        return
    print('程序版本号：{}'.format(VERSION))
    debug.dump_device_info()
    screenshot.check_screenshot()
    
    # 模拟按压的起始点坐标，需要自动重复游戏请设置成“再来一局”的坐标
swipe = config.get('swipe', {
    'x1': 320,
    'y1': 410,
    'x2': 320,
    'y2': 410
    })
VERSION = '1.1.4'
c = wda.Client()
s = c.session()
    
        def test_device_detail(self):
        process = os.popen(self.adb_path + ' shell getprop ro.product.device')
        output = process.read()
        return output
    
        print(round(target_distance), round(jump_error_value), round(actual_distance), round(last_press_time))
    ''''# 将结果采集进学习字典
    if last_piece_x > 0 and last_press_time > 0:
        ai.add_data(round(actual_distance, 2), round(last_press_time))
        # print(round(actual_distance), round(last_press_time))'''
    
    
def find_piece_and_board(im):
    '''
    寻找关键坐标
    '''
    w, h = im.size
    points = []  # 所有满足色素的点集合
    piece_y_max = 0
    board_x = 0
    board_y = 0
    scan_x_border = int(w / 8)  # 扫描棋子时的左右边界
    scan_start_y = 0  # 扫描的起始 y 坐标
    im_pixel = im.load()
    # 以 50px 步长，尝试探测 scan_start_y
    for i in range(int(h / 3), int(h * 2 / 3), 50):
        last_pixel = im_pixel[0, i]
        for j in range(1, w):
            pixel = im_pixel[j, i]
            # 不是纯色的线，则记录 scan_start_y 的值，准备跳出循环
            if pixel != last_pixel:
                scan_start_y = i - 50
                break
        if scan_start_y:
            break
    print('start scan Y axis: {}'.format(scan_start_y))