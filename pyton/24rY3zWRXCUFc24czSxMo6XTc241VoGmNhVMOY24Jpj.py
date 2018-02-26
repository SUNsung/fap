
        
        
if __name__ == '__main__':
    SpendingByCategory.run()

    
        Code is a simple port of what is already in the /scripts directory
    
        def test_create_other_buttons(self):
        for state in (False, True):
            var = self.engine.backvar
            var.set(state)
            frame, others = self.btn_test_setup(
                self.dialog.create_other_buttons)
            buttons = frame.pack_slaves()
            for spec, button in zip(others, buttons):
                val, label = spec
                self.assertEqual(button['text'], label)
                if val == state:
                    # hit other button, then this one
                    # indexes depend on button order
                    self.assertEqual(var.get(), state)
    
    def _ss(data, c=None):
    '''Return sum of square deviations of sequence data.
    
    class TestPyDecode(TestDecode, PyTest): pass
class TestCDecode(TestDecode, CTest): pass

    
        - linejunk: A function that should accept a single string argument and
      return true iff the string is junk.  The default is None, and is
      recommended; the underlying SequenceMatcher class has an adaptive
      notion of 'noise' lines.
    
        '''
    # Note that this exception is used from _json
    def __init__(self, msg, doc, pos):
        lineno = doc.count('\n', 0, pos) + 1
        colno = pos - doc.rfind('\n', 0, pos)
        errmsg = '%s: line %d column %d (char %d)' % (msg, lineno, colno, pos)
        ValueError.__init__(self, errmsg)
        self.msg = msg
        self.doc = doc
        self.pos = pos
        self.lineno = lineno
        self.colno = colno
    
    __all__ = ['make_scanner']
    
        def _generate_toc(self):
        '''Generate key-to-(start, stop) table of contents.'''
        starts, stops = [], []
        self._file.seek(0)
        next_pos = 0
        label_lists = []
        while True:
            line_pos = next_pos
            line = self._file.readline()
            next_pos = self._file.tell()
            if line == b'\037\014' + linesep:
                if len(stops) < len(starts):
                    stops.append(line_pos - len(linesep))
                starts.append(next_pos)
                labels = [label.strip() for label
                                        in self._file.readline()[1:].split(b',')
                                        if label.strip()]
                label_lists.append(labels)
            elif line == b'\037' or line == b'\037' + linesep:
                if len(stops) < len(starts):
                    stops.append(line_pos - len(linesep))
            elif not line:
                stops.append(line_pos - len(linesep))
                break
        self._toc = dict(enumerate(zip(starts, stops)))
        self._labels = dict(enumerate(label_lists))
        self._next_key = len(self._toc)
        self._file.seek(0, 2)
        self._file_length = self._file.tell()
    
        def head(self, message_spec=None, *, file=None):
        '''Process a HEAD command.  Argument:
        - message_spec: article number or message id
        - file: filename string or file object to store the headers in
        Returns:
        - resp: server response if successful
        - ArticleInfo: (article number, message id, list of header lines)
        '''
        if message_spec is not None:
            cmd = 'HEAD {0}'.format(message_spec)
        else:
            cmd = 'HEAD'
        return self._artcmd(cmd, file)
    
    subsystem_details = {
    # -s flag        : (C entry point template), (is it __main__?), (is it a DLL?)
    'console'        : (None,                    1,                 0),
    'windows'        : (WINMAINTEMPLATE,         1,                 0),
    'service'        : (SERVICETEMPLATE,         0,                 0),
    'com_dll'        : ('',                      0,                 1),
}
    
        X_RGB_TXT -- X Consortium rgb.txt format files.  Three columns of numbers
                 from 0 .. 255 separated by whitespace.  Arbitrary trailing
                 columns used as the color name.