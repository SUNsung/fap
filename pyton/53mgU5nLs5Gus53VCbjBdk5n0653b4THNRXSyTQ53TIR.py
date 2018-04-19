
        
            def test_create_command_buttons(self):
        self.dialog.top = self.root
        self.dialog.create_command_buttons()
        # Look for close button command in buttonframe
        closebuttoncommand = ''
        for child in self.dialog.buttonframe.winfo_children():
            if child['text'] == 'close':
                closebuttoncommand = child['command']
        self.assertIn('close', closebuttoncommand)
    
        def test_pickle(self):
        for d in deque(range(200)), deque(range(200), 100):
            for i in range(pickle.HIGHEST_PROTOCOL + 1):
                s = pickle.dumps(d, i)
                e = pickle.loads(s)
                self.assertNotEqual(id(e), id(d))
                self.assertEqual(list(e), list(d))
                self.assertEqual(e.maxlen, d.maxlen)
    
    def ISEOF(x):
    return x == ENDMARKER
    
        It will call readline a maximum of twice, and return the encoding used
    (as a string) and a list of any lines (left as bytes) it has read in.
    
        def test_oldargs0_1_kw(self):
        msg = r'keys\(\) takes no keyword arguments'
        self.assertRaisesRegex(TypeError, msg, {}.keys, x=2)
    
        def test_hash(self):
        for x in range(-30, 30):
            self.assertEqual(hash(x), hash(complex(x, 0)))
            x /= 3.0    # now check against floating point
            self.assertEqual(hash(x), hash(complex(x, 0.)))
    
            #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
                if isinstance(c.user, basestring):
                # somehow requests are getting here with c.user unset
                c.user_is_loggedin = False
                c.user = UnloggedUser(browser_langs=None)