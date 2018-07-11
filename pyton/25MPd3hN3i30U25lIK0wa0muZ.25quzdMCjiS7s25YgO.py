
        
            def test_subsequent_wait_calls(self):
        '''
        This test makes sure that a second call to wait()
        clears the first timeout.
        '''
        self.io_loop.add_timeout(self.io_loop.time() + 0.00, self.stop)
        self.wait(timeout=0.02)
        self.io_loop.add_timeout(self.io_loop.time() + 0.03, self.stop)
        self.wait(timeout=0.15)
    
        def finish(self):
        if self._decompressor is not None:
            tail = self._decompressor.flush()
            if tail:
                # I believe the tail will always be empty (i.e.
                # decompress will return all it can).  The purpose
                # of the flush call is to detect errors such
                # as truncated input.  But in case it ever returns
                # anything, treat it as an extra chunk
                self._delegate.data_received(tail)
        return self._delegate.finish()