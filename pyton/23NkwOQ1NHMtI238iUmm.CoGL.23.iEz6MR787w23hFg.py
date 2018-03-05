
        
        
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
        return response
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_everything_fails(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        proc.communicate.side_effect = OSError('What we have here is a '
                                               'failure to communicate.')
        self.assertFalse(notify('Goose', 'auntrhody@example.com',
                                'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
    
def _get_screen_size():
    '''
    获取手机屏幕大小
    '''
    size_str = adb.get_screen()
    m = re.search(r'(\d+)x(\d+)', size_str)
    if m:
        return '{height}x{width}'.format(height=m.group(2), width=m.group(1))
    return '1920x1080'

    
    
def backup_screenshot(ts):
    '''
    为了方便失败的时候 debug
    '''
    make_debug_dir(screenshot_backup_dir)
    shutil.copy('{}{}autojump.png'.format(os.getcwd(), path_split),
                os.path.join(os.getcwd(), screenshot_backup_dir,
                             str(ts) + '.png'))
    
        # 从 scan_start_y 开始往下扫描，棋子应位于屏幕上半部分，这里暂定不超过 2/3
    for i in range(scan_start_y, int(h * 2 / 3)):
        # 横坐标方面也减少了一部分扫描开销
        for j in range(scan_x_border, w - scan_x_border):
            pixel = im_pixel[j, i]
            # 根据棋子的最低行的颜色判断，找最后一行那些点的平均值，这个颜
            # 色这样应该 OK，暂时不提出来
            if (50 < pixel[0] < 60) \
                    and (53 < pixel[1] < 63) \
                    and (95 < pixel[2] < 110):
                piece_x_sum += j
                piece_x_c += 1
                piece_y_max = max(i, piece_y_max)
    
    
# Magic Number，不设置可能无法正常执行，请根据具体截图从上到下按需设置
under_game_score_y = config['under_game_score_y']
# 长按的时间系数，请自己根据实际情况调节
press_coefficient = config['press_coefficient']
# 二分之一的棋子底座高度，可能要调节
piece_base_height_1_2 = config['piece_base_height_1_2']
# 棋子的宽度，比截图中量到的稍微大一点比较安全，可能要调节
piece_body_width = config['piece_body_width']
time_coefficient = config['press_coefficient']
    
            # 标注截图并显示
        # draw = ImageDraw.Draw(im)
        # draw.line([piece_x, 0, piece_x, h], fill='blue', width=1)  # start
        # draw.line([board_x, 0, board_x, h], fill='red', width=1)  # end
        # draw.ellipse([swipe_x1 - 16, swipe_y1 - 16,
        #               swipe_x1 + 16, swipe_y1 + 16], fill='red')  # click
        # im.show()