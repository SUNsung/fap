
        
            if not opts and not args:
        # Display help.
        print(_help)
        # Enter GUI mode.
        #from .gui import gui_main
        #gui_main()
    else:
        conf = {}
        for opt, arg in opts:
            if opt in ('-h', '--help'):
                # Display help.
                print(_help)
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
    
download = huaban_download
download_playlist = playlist_not_supported('huaban')

    
    
    
        stream_types = [
        {'id': '720p HD'},
        {'id': '360p SD'},
    ]
    
                # log10(value) == exp, so log(value) == log10(value)/log10(e) ==
            # exp/LOG10E
            expected = exp / LOG10E
            log = math.log(value)
            self.assertAlmostEqual(log, expected)
    
        def test_create_entries(self):
        self.dialog.top = self.root
        self.dialog.row = 0
        self.engine.setpat('hello')
        self.dialog.create_entries()
        self.assertIn(self.dialog.ent.get(), 'hello')
    
            User enters a name for the Help resource and a web url or file
        name. The user can browse for the file.
        '''
        self.filepath = filepath
        message = 'Name for item on Help menu:'
        super().__init__(
                parent, title, message, text0=menuitem,
                used_names=used_names, _htest=_htest, _utest=_utest)
    
            # Handle comparison errors
        d = deque(['a', 'b', BadCmp(), 'c'])
        e = deque(d)
        self.assertRaises(RuntimeError, d.remove, 'c')
        for x, y in zip(d, e):
            # verify that original order and values are retained.
            self.assertTrue(x is y)
    
                    if not args:
                    # args=NULL, nargs=0
                    result = _testcapi.pyobject_fastcall(func, None)
                    self.check_result(result, expected)
    
    try:
    import zlib
except ImportError:
    zlib = None
    
            # unregister an unknown file obj
        self.assertRaises(KeyError, s.unregister, 999999)
    
        except (AttributeError, OSError):
        return default
    output = proc.communicate()[0].decode('latin-1')
    rc = proc.wait()
    if not output or rc:
        return default
    else:
        return output
    
        def test_exec_failure(self):
        self.create_module('foo', '1/0')
        try:
            import foo
        except ZeroDivisionError as e:
            tb = e.__traceback__
        else:
            self.fail('ZeroDivisionError should have been raised')
        self.assert_traceback(tb, [__file__, 'foo.py'])