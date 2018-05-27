
        
            def reject_friend_request(self, from_user_id, to_user_id):
        pass
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def __setitem__(self, key, message):
        '''Replace the keyed message; raise KeyError if it doesn't exist.'''
        old_subpath = self._lookup(key)
        temp_key = self.add(message)
        temp_subpath = self._lookup(temp_key)
        if isinstance(message, MaildirMessage):
            # temp's subdir and suffix were specified by message.
            dominant_subpath = temp_subpath
        else:
            # temp's subdir and suffix were defaults from add().
            dominant_subpath = old_subpath
        subdir = os.path.dirname(dominant_subpath)
        if self.colon in dominant_subpath:
            suffix = self.colon + dominant_subpath.split(self.colon)[-1]
        else:
            suffix = ''
        self.discard(key)
        tmp_path = os.path.join(self._path, temp_subpath)
        new_path = os.path.join(self._path, subdir, key + suffix)
        if isinstance(message, MaildirMessage):
            os.utime(tmp_path,
                     (os.path.getatime(tmp_path), message.get_date()))
        # No file modification should be done after the file is moved to its
        # final position in order to prevent race conditions with changes
        # from other programs
        os.rename(tmp_path, new_path)
    
        print('$(temp_dir):')
    print(r'  if not exist $(temp_dir)\. mkdir $(temp_dir)')
    print()
    
    
def triplet_to_brightness(rgbtuple):
    # return the brightness (grey level) along the scale 0.0==black to
    # 1.0==white
    r = 0.299
    g = 0.587
    b = 0.114
    return r*rgbtuple[0] + g*rgbtuple[1] + b*rgbtuple[2]
    
        def docserver(self, server_name, package_documentation, methods):
        '''Produce HTML documentation for an XML-RPC server.'''
    
    def set_memlimit(limit):
    global max_memuse
    global real_max_memuse
    sizes = {
        'k': 1024,
        'm': _1M,
        'g': _1G,
        't': 1024*_1G,
    }
    m = re.match(r'(\d+(\.\d+)?) (K|M|G|T)b?$', limit,
                 re.IGNORECASE | re.VERBOSE)
    if m is None:
        raise ValueError('Invalid memory limit %r' % (limit,))
    memlimit = int(float(m.group(1)) * sizes[m.group(3).lower()])
    real_max_memuse = memlimit
    if memlimit > MAX_Py_ssize_t:
        memlimit = MAX_Py_ssize_t
    if memlimit < _2G - 1:
        raise ValueError('Memory limit %r too low to be useful' % (limit,))
    max_memuse = memlimit
    
        def test_mkdir_no_parents_file(self):
        p = self.cls(BASE, 'fileA')
        self.assertTrue(p.exists())
        # An exception is raised when the last path component is an existing
        # regular file, regardless of whether exist_ok is true or not.
        with self.assertRaises(FileExistsError) as cm:
            p.mkdir()
        self.assertEqual(cm.exception.errno, errno.EEXIST)
        with self.assertRaises(FileExistsError) as cm:
            p.mkdir(exist_ok=True)
        self.assertEqual(cm.exception.errno, errno.EEXIST)
    
        def testWriteText(self): pass
    
        def createDOMInputSource(self):
        return DOMInputSource()

    
        def test_stderr_none(self):
        rc, stdout, stderr = assert_python_ok('-c',
            'import sys; sys.stderr = None; '
            'import warnings; warnings.simplefilter('always'); '
            'warnings.warn('Warning!')')
        self.assertEqual(stdout, b'')
        self.assertNotIn(b'Warning!', stderr)
        self.assertNotIn(b'Error', stderr)