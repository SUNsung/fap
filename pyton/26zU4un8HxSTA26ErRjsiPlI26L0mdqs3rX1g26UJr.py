    @property
    def is_eager_to_contribute(self):
        return True
    
    
class AdapterTest(unittest.TestCase):
    
        def __init__(self, name):
        self.name = name
    
        def update(self):
        for msg in self.msg_queue:
            for sub in self.subscribers.get(msg, []):
                sub.run(msg)
        self.msg_queue = []
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)

    
    class TimeDisplay(object):
    
        def is_satisfied_by(self, candidate):
        return bool(self._one.is_satisfied_by(candidate) and
                    self._other.is_satisfied_by(candidate))