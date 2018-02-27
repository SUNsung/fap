
        
                content_length = int(response.getheader('Content-Length', 0))
        content_range = response.getheader('Content-Range', '')
        if content_range:
            start, end, length = tuple(int(x) for x in re.search(r'bytes (\d+)-(\d+)/(\d+)', content_range).group(1, 2, 3))
        else:
            start, end, length = 0, content_length-1, content_length
    
        version_string = 'Version:%d-%d; Build:%d; Platform:%d; CSD:%s; ServicePack:%d-%d; Suite:%d; ProductType:%d' %  (
        os_version.dwMajorVersion, os_version.dwMinorVersion,
        os_version.dwBuildNumber,
        os_version.dwPlatformId,
        os_version.szCSDVersion,
        os_version.wServicePackMajor, os_version.wServicePackMinor,
        os_version.wSuiteMask,
        os_version.wReserved
    )
    
    
    def recover(self, input, re):
        '''
        Recover from an error found on the input stream.  This is
        for NoViableAlt and mismatched symbol exceptions.  If you enable
        single token insertion and deletion, this will usually not
        handle mismatched symbol exceptions but there could be a mismatched
        token that the match() routine could not recover from.
        '''
        
        # PROBLEM? what if input stream is not the same as last time
        # perhaps make lastErrorIndex a member of input
        if self._state.lastErrorIndex == input.index():
            # uh oh, another error at same token index; must be a case
            # where LT(1) is in the recovery token set so nothing is
            # consumed; consume a single token so at least to prevent
            # an infinite loop; this is a failsafe.
            input.consume()
    
        def browse_file(self):
        filetypes = [
            ('HTML Files', '*.htm *.html', 'TEXT'),
            ('PDF Files', '*.pdf', 'TEXT'),
            ('Windows Help Files', '*.chm'),
            ('Text Files', '*.txt', 'TEXT'),
            ('All Files', '*')]
        path = self.pathvar.get()
        if path:
            dir, base = os.path.split(path)
        else:
            base = None
            if platform[:3] == 'win':
                dir = os.path.join(os.path.dirname(executable), 'Doc')
                if not os.path.isdir(dir):
                    dir = os.getcwd()
            else:
                dir = os.getcwd()
        file = self.askfilename(filetypes, dir, base)
        if file:
            self.pathvar.set(file)
    
        def test_setitem(self):
        n = 200
        d = deque(range(n))
        for i in range(n):
            d[i] = 10 * i
        self.assertEqual(list(d), [10*i for i in range(n)])
        l = list(d)
        for i in range(1-n, 0, -1):
            d[i] = 7*i
            l[i] = 7*i
        self.assertEqual(list(d), l)
    
    This file contains one class, called ColorDB, and several utility functions.
The class must be instantiated by the get_colordb() function in this file,
passing it a filename to read a database out of.