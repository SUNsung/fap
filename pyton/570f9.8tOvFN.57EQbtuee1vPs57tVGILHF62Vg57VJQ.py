
        
        
if __name__ == '__main__':
    main()
    
    
def main():
    test = TestQueueFromStacks()
    test.test_queue_from_stacks()
    
        def get_sorted_stack(self, stack, numbers):
        for x in numbers:
            stack.push(x)
        sorted_stack = stack.sort()
        return sorted_stack
    
        # TODO: It would be better if we had unit tests for each
    # method in addition to the following end-to-end test
    def test_end_to_end(self):
        hash_table = HashTable(10)
    
    
class Formatter(object):
    '''Format tabular data for printing.'''
    def table(self, headers, rows):
        table = texttable.Texttable(max_width=get_tty_width())
        table.set_cols_dtype(['t' for h in headers])
        table.add_rows([headers] + rows)
        table.set_deco(table.HEADER)
        table.set_chars(['-', '|', '+', '-'])
    
    # WindowsError is not defined on non-win32 platforms. Avoid runtime errors by
# defining it as OSError (its parent class) if missing.
try:
    WindowsError
except NameError:
    WindowsError = OSError
    
        def _download(self, url, full_dest):
        m = hashlib.sha256()
        with open(full_dest, 'wb') as f:
            r = self.get(url, stream=True)
            for chunk in r.iter_content(chunk_size=1024 * 600, decode_unicode=False):
                print('.', end='', flush=True)
                m.update(chunk)
                f.write(chunk)
    
        def test_api_error_version_mismatch(self, mock_logging):
        with pytest.raises(errors.ConnectionError):
            with handle_connection_errors(mock.Mock(api_version='1.22')):
                raise APIError(None, None, b'client is newer than server')
    
    
def make_log_record(level, message=None):
    return logging.LogRecord('name', level, 'pathame', 0, message or MESSAGE, (), None)