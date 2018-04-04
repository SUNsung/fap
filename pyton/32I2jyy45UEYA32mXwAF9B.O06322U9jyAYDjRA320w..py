
        
                if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
            # include stuff after end if it's last index in buffer
        # So, if they did an insertAfter(lastValidIndex, 'foo'), include
        # foo if end==lastValidIndex.
        if end == len(self.tokens) - 1:
            # Scan any remaining operations after last token
            # should be included (they will be inserts).
            for i in sorted(indexToOp.keys()):
                op = indexToOp[i]
                if op.index >= len(self.tokens)-1:
                    buf.write(op.text)
    
        def test_small_ints(self):
        for i in range(-5, 257):
            self.assertIs(i, i + 0)
            self.assertIs(i, i * 1)
            self.assertIs(i, i - 0)
            self.assertIs(i, i // 1)
            self.assertIs(i, i & -1)
            self.assertIs(i, i | 0)
            self.assertIs(i, i ^ 0)
            self.assertIs(i, ~~i)
            self.assertIs(i, i**1)
            self.assertIs(i, int(str(i)))
            self.assertIs(i, i<<2>>2, str(i))
        # corner cases
        i = 1 << 70
        self.assertIs(i - i, 0)
        self.assertIs(0 * i, 0)
    
            self.assertIn(entry.get(), 'hello')
        egi = entry.grid_info()
        equal(int(egi['row']), 0)
        equal(int(egi['column']), 1)
        equal(int(egi['rowspan']), 1)
        equal(int(egi['columnspan']), 1)
        equal(self.dialog.row, 1)
    
            for case in cases:
            C = cookies.SimpleCookie()
            C.load(case['data'])
            self.assertEqual(repr(C), case['repr'])
            self.assertEqual(C.output(sep='\n'), case['output'])
            for k, v in sorted(case['dict'].items()):
                self.assertEqual(C[k].value, v)
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if not self.seekable:
            raise OSError('cannot seek')
        if whence == 1:
            pos = pos + self.size_read
        elif whence == 2:
            pos = pos + self.chunksize
        if pos < 0 or pos > self.chunksize:
            raise RuntimeError
        self.file.seek(self.offset + pos, 0)
        self.size_read = pos
    
        def _append_message(self, message):
        '''Append message to mailbox and return (start, stop) offsets.'''
        self._file.seek(0, 2)
        before = self._file.tell()
        if len(self._toc) == 0 and not self._pending:
            # This is the first message, and the _pre_mailbox_hook
            # hasn't yet been called. If self._pending is True,
            # messages have been removed, so _pre_mailbox_hook must
            # have been called already.
            self._pre_mailbox_hook(self._file)
        try:
            self._pre_message_hook(self._file)
            offsets = self._install_message(message)
            self._post_message_hook(self._file)
        except BaseException:
            self._file.truncate(before)
            raise
        self._file.flush()
        self._file_length = self._file.tell()  # Record current length of mailbox
        return offsets
    
        def _get_baseURI(self):
        return self.baseURI
    def _set_baseURI(self, uri):
        self.baseURI = uri
    
        # override in derived classes
    def _extractrgb(self, mo):
        return [int(x) for x in mo.group('red', 'green', 'blue')]
    
            # C function: METH_NOARGS
        (globals, (), IGNORE_RESULT),
    
            Returns a string containing documentation for the specified method.'''
    
            pyop_m_self = self.pyop_field('m_self')
        if pyop_m_self.is_null():
            return BuiltInFunctionProxy(ml_name)
        else:
            return BuiltInMethodProxy(ml_name, pyop_m_self)
    
            def NoNullHandle(value):
            if not value:
                raise WinError()
            return value