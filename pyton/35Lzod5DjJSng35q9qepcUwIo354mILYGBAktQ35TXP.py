    with open('README.md', 'w+') as sorted_file:
        sorted_file.write(final_README)
    
        def test_decoder_optimizations(self):
        # Several optimizations were made that skip over calls to
        # the whitespace regex, so this test is designed to try and
        # exercise the uncommon cases. The array cases are already covered.
        rval = self.loads('{   'key'    :    'value'    ,  'k':'v'    }')
        self.assertEqual(rval, {'key':'value', 'k':'v'})
    
        '''
    
        def _install_message(self, message):
        '''Format a message and blindly write to self._file.'''
        from_line = None
        if isinstance(message, str):
            message = self._string_to_bytes(message)
        if isinstance(message, bytes) and message.startswith(b'From '):
            newline = message.find(b'\n')
            if newline != -1:
                from_line = message[:newline]
                message = message[newline + 1:]
            else:
                from_line = message
                message = b''
        elif isinstance(message, _mboxMMDFMessage):
            author = message.get_from().encode('ascii')
            from_line = b'From ' + author
        elif isinstance(message, email.message.Message):
            from_line = message.get_unixfrom()  # May be None.
            if from_line is not None:
                from_line = from_line.encode('ascii')
        if from_line is None:
            from_line = b'From MAILER-DAEMON ' + time.asctime(time.gmtime()).encode()
        start = self._file.tell()
        self._file.write(from_line + linesep)
        self._dump_message(message, self._file, self._mangle_from_)
        stop = self._file.tell()
        return (start, stop)
    
    >>> from nntplib import NNTP
>>> s = NNTP('news')
>>> resp, count, first, last, name = s.group('comp.lang.python')
>>> print('Group', name, 'has', count, 'articles, range', first, 'to', last)
Group comp.lang.python has 51 articles, range 5770 to 5821
>>> resp, subs = s.xhdr('subject', '{0}-{1}'.format(first, last))
>>> resp = s.quit()
>>>
    
    FILETYPES = [
    (re.compile('Xorg'), RGBColorDB),
    (re.compile('XConsortium'), RGBColorDB),
    (re.compile('HTML'), HTML40DB),
    (re.compile('lightlink'), LightlinkDB),
    (re.compile('Websafe'), WebsafeDB),
    ]
    
        Simple XML-RPC server that allows functions and a single instance
    to be installed to handle requests. The default implementation
    attempts to dispatch XML-RPC calls to the functions or instance
    installed in the server. Override the _dispatch method inherited
    from SimpleXMLRPCDispatcher to change this behavior.
    '''
    
            if not self.is_optimized_out():
            self.co = PyCodeObjectPtr.from_pyobject_ptr(self.field('f_code'))
            self.co_name = self.co.pyop_field('co_name')
            self.co_filename = self.co.pyop_field('co_filename')
    
            # empty presentation type should still be analogous to str,
        # even when format string is nonempty (issue #5920).
        self.assertEqual(format(3.2+0j, '-'), str(3.2+0j))
        self.assertEqual(format(3.2+0j, '<'), str(3.2+0j))
        z = 4/7. - 100j/7.
        self.assertEqual(format(z, ''), str(z))
        self.assertEqual(format(z, '-'), str(z))
        self.assertEqual(format(z, '<'), str(z))
        self.assertEqual(format(z, '10'), str(z))
        z = complex(0.0, 3.0)
        self.assertEqual(format(z, ''), str(z))
        self.assertEqual(format(z, '-'), str(z))
        self.assertEqual(format(z, '<'), str(z))
        self.assertEqual(format(z, '2'), str(z))
        z = complex(-0.0, 2.0)
        self.assertEqual(format(z, ''), str(z))
        self.assertEqual(format(z, '-'), str(z))
        self.assertEqual(format(z, '<'), str(z))
        self.assertEqual(format(z, '3'), str(z))
    
        def test_odd_bug(self):
        # This used to raise a 'SystemError: NULL result without error'
        # because the range validation step was eating the exception
        # before NULL was returned.
        with self.assertRaises(TypeError):
            range([], 1, -1)