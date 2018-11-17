
        
            def add_event(self, event, frame=None):
        '''Add an event to the log.'''
        if frame is None:
            frame = sys._getframe(1)
    
        @support.skip_unless_symlink
    def test_symlink_to(self):
        P = self.cls(BASE)
        target = P / 'fileA'
        # Symlinking a path target
        link = P / 'dirA' / 'linkAA'
        link.symlink_to(target)
        self.assertEqual(link.stat(), target.stat())
        self.assertNotEqual(link.lstat(), target.stat())
        # Symlinking a str target
        link = P / 'dirA' / 'linkAAA'
        link.symlink_to(str(target))
        self.assertEqual(link.stat(), target.stat())
        self.assertNotEqual(link.lstat(), target.stat())
        self.assertFalse(link.is_dir())
        # Symlinking to a directory
        target = P / 'dirB'
        link = P / 'dirA' / 'linkAAAA'
        link.symlink_to(target, target_is_directory=True)
        self.assertEqual(link.stat(), target.stat())
        self.assertNotEqual(link.lstat(), target.stat())
        self.assertTrue(link.is_dir())
        self.assertTrue(list(link.iterdir()))
    
            print('Ordered results using pool.apply_async():')
        for r in results:
            print('\t', r.get())
        print()