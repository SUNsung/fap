
        
                try:
            expected = int_to_float(n)
        except OverflowError:
            expected = 'overflow'
    
        def path_ok(self):
        'Simple validity check for menu file path'
        path = self.path.get().strip()
        if not path: #no path specified
            self.showerror('no help file path specified.', self.path_error)
            return None
        elif not path.startswith(('www.', 'http')):
            if path[:5] == 'file:':
                path = path[5:]
            if not os.path.exists(path):
                self.showerror('help file path does not exist.',
                               self.path_error)
                return None
            if platform == 'darwin':  # for Mac Safari
                path =  'file://' + path
        return path
    
            elements = 'ABCDEFGHI'
        for i in range(-len(elements), len(elements)):
            d = deque(elements, maxlen=len(elements)+1)
            d.insert(i, 'Z')
            if i >= 0:
                self.assertEqual(d[i], 'Z')
            else:
                self.assertEqual(d[i-1], 'Z')
    
            self.assertRaises(TypeError, Array.from_buffer_copy, b'123')
        self.assertRaises(TypeError, Structure.from_buffer_copy, b'123')
        self.assertRaises(TypeError, Union.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _CFuncPtr.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _Pointer.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _SimpleCData.from_buffer_copy, b'123')
    
        @classmethod
    def setUpClass(cls):
        cls.s = Subject()
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
    *What does this example do?
In this example queue.Queue is used to create the pool (wrapped in a
custom ObjectPool object to use with the with statement), and it is
populated with strings.
As we can see, the first string object put in 'yam' is USED by the
with statement. But because it is released back into the pool
afterwards it is reused by the explicit call to sample_queue.get().
Same thing happens with 'sam', when the ObjectPool created insided the
function is deleted (by the GC) and the object is returned.