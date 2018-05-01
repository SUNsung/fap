
        
                # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
            status_line = 'HTTP/{version} {status} {reason}'.format(
            version=version,
            status=original.status,
            reason=original.reason
        )
        headers = [status_line]
        try:
            # `original.msg` is a `http.client.HTTPMessage` on Python 3
            # `_headers` is a 2-tuple
            headers.extend(
                '%s: %s' % header for header in original.msg._headers)
        except AttributeError:
            # and a `httplib.HTTPMessage` on Python 2.x
            # `headers` is a list of `name: val<CRLF>`.
            headers.extend(h.strip() for h in original.msg.headers)
    
    
def get_filename_max_length(directory):
    max_len = 255
    try:
        pathconf = os.pathconf
    except AttributeError:
        pass  # non-posix
    else:
        try:
            max_len = pathconf(directory, 'PC_NAME_MAX')
        except OSError as e:
            if e.errno != errno.EINVAL:
                raise
    return max_len
    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
        def __init__(self, license_plate):
        super(Bus, self).__init__(VehicleSize.LARGE, license_plate, spot_size=5)
    
        def handle_budget_notifications(self, key, total):
        '''Call notification API if nearing or exceeded budget.'''
        ...
    
    
class ProxyTest(unittest.TestCase):
    
        def unsubscribe(self, msg, subscriber):
        self.subscribers[msg].remove(subscriber)
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    Test code which will almost always fail (if not exactly 12:01) when untestable
production code (have a look into constructor_injection.py) is used:
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    ### OUTPUT ###
# Counting to two...
# one two
# Counting to five...
# one two three four five

    
    
class Transaction(object):
    '''A transaction guard.
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)