    seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
    
def test_safe_join_toplevel_pardir():
    from flask.helpers import safe_join
    with pytest.raises(NotFound):
        safe_join('/foo', '..')
    
    
class CommandTest(unittest.TestCase):
    
        message_center.update()
    
    
class RegistryHolder(type):
    
        def test_bear_eng_localization(self):
        self.assertEqual(self.e.get('bear'), 'bear')
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        '''catalog of multiple methods that are executed depending on an init
    
    ### OUTPUT ###
# Counting to two...
# one two
# Counting to five...
# one two three four five

    
        def __init__(self):
        self._tm = None
    
    
class Transactional(object):
    '''Adds transactional semantics to methods. Methods decorated  with