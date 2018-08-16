
        
            def get_protocol(self):
        return self._protocol
    
        def test_loop_reading(self):
        tr = self.socket_transport()
        tr._loop_reading()
        self.loop._proactor.recv.assert_called_with(self.sock, 32768)
        self.assertFalse(self.protocol.data_received.called)
        self.assertFalse(self.protocol.eof_received.called)
    
    
for __func_name in __always_supported:
    # try them all, some may not work due to the OpenSSL
    # version not supporting that algorithm.
    try:
        globals()[__func_name] = __get_hash(__func_name)
    except ValueError:
        import logging
        logging.exception('code for hash %s was not found.', __func_name)
    
    # We will immediately double the length up to MAX_PATH, but the
# path may be longer, so we retry until the returned string is
# shorter than our buffer.
name_len = actual_len = 130
while actual_len == name_len:
    name_len *= 2
    name = create_unicode_buffer(name_len)
    actual_len = kernel32.GetModuleFileNameW(HANDLE(ucrtbased._handle),
                                             name, len(name))
    if not actual_len:
        print('Failed to get full module name.')
        sys.exit(2)
    
    from concurrent.futures import _base
    
    if __name__ == '__main__':
    main()

    
    
def ExtractKeywordsFromGroup_Commas_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo, bar,',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )