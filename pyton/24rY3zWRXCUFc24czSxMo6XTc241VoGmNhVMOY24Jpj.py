
        
            # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
        def test_car_adapter_shall_make_very_loud_noise(self):
        car = Car()
        car_adapter = Adapter(car, make_noise=car.make_noise)
        noise = car_adapter.make_noise(10)
        expected_noise = 'vroom!!!!!!!!!!'
    
        def test_tc2_output(self):
        self.tc2.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc2)
    
    if __name__ == '__main__':
    main()
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
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
    
        print(round(target_distance), round(jump_error_value), round(actual_distance), round(last_press_time))
    ''''# 将结果采集进学习字典
    if last_piece_x > 0 and last_press_time > 0:
        ai.add_data(round(actual_distance, 2), round(last_press_time))
        # print(round(actual_distance), round(last_press_time))'''
    
    
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