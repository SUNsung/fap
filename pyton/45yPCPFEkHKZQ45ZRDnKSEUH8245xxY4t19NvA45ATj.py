
        
            def _perform_switchover(self):
        return 'perform switchover'
    
        # if not sample_queue.empty():

    
    ###  OUTPUT ###
# Before subclassing:
# BaseRegisteredClass
# After subclassing:
# BaseRegisteredClass
# ClassRegistree

    
        def test_bear_greek_localization(self):
        self.assertEqual(self.g.get('bear'), 'bear')

    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    class TimeDisplay(object):
    
    
@coroutine
def coroutine1(target):
    while True:
        request = yield
        if 0 < request <= 10:
            print('request {} handled in coroutine 1'.format(request))
        else:
            target.send(request)
    
        def and_specification(self, candidate):
        return AndSpecification(self, candidate)