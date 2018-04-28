
        
        from . import Contract
    
                elif opt in ('-f', '--force'):
                # Force download.
                conf['force'] = True
    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
        @property
    def is_eager_to_contribute(self):
        return True if self.blackboard.common_state['problems'] > 100 else False
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
            depending on self.param value
        '''
        self._class_method_choices[self.param].__get__(None, self.__class__)()
    
        def is_satisfied_by(self, candidate):
        return getattr(candidate, 'super_user', False)