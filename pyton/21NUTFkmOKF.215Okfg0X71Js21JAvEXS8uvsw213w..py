        with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
            assert r.status_code == 200
        headers, body = raw_request.split(b'\r\n\r\n', 1)
        status_line, headers = headers.split(b'\r\n', 1)
    
        def __init__(self):
        Resource.__init__(self)
        self.concurrent = 0
        self.tail = deque(maxlen=100)
        self._reset_stats()
    
        # default settings to be used for this command instead of global defaults
    default_settings = {}
    
    
class Command(ScrapyCommand):
    
    from . import Contract
    
        def adb_path(self):
        return self.adb_path

    
        # 从左从右取出两个数据进行对比,选出来更接近原来老算法的那个值
    if abs(board_y - from_left_find_board_y) > abs(from_right_find_board_y):
        new_board_y = from_right_find_board_y
    else:
        new_board_y = from_left_find_board_y
    
    
def yes_or_no(prompt, true_value='y', false_value='n', default=True):
    '''
    检查是否已经为启动程序做好了准备
    '''
    default_value = true_value if default else false_value
    prompt = '{} {}/{} [{}]: '.format(prompt, true_value,
        false_value, default_value)
    i = input(prompt)
    if not i:
        return default
    while True:
        if i == true_value:
            return True
        elif i == false_value:
            return False
        prompt = 'Please input {} or {}: '.format(true_value, false_value)
        i = input(prompt)
    
            jump(piece_x, board_x, im, swipe_x1, swipe_y1)