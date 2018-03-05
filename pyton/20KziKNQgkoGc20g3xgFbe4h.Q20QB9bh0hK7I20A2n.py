
        
            Examples:
    
        def test_basics(self):
        d = deque(range(-5125, -5000))
        d.__init__(range(200))
        for i in range(200, 400):
            d.append(i)
        for i in reversed(range(-200, 0)):
            d.appendleft(i)
        self.assertEqual(list(d), list(range(-200, 400)))
        self.assertEqual(len(d), 600)
    
        objects = []
    libs = ['shell32.lib', 'comdlg32.lib', 'wsock32.lib', 'user32.lib', 'oleaut32.lib']
    for moddefn in moddefns:
        print('# Module', moddefn.name)
        for file in moddefn.sourceFiles:
            base = os.path.basename(file)
            base, ext = os.path.splitext(base)
            objects.append(base + '.obj')
            print(r'$(temp_dir)\%s.obj: '%s'' % (base, file))
            print('\t@$(CC) -c -nologo /Fo$* $(cdl) $(c_debug) /D BUILD_FREEZE', end=' ')
            print(''-I$(pythonhome)/Include'  '-I$(pythonhome)/PC' \\')
            print('\t\t$(cflags) $(cdebug) $(cinclude) \\')
            extra = moddefn.GetCompilerOptions()
            if extra:
                print('\t\t%s \\' % (' '.join(extra),))
            print('\t\t'%s'' % file)
            print()
    
    
def triplet_to_brightness(rgbtuple):
    # return the brightness (grey level) along the scale 0.0==black to
    # 1.0==white
    r = 0.299
    g = 0.587
    b = 0.114
    return r*rgbtuple[0] + g*rgbtuple[1] + b*rgbtuple[2]
    
            # Check that equality of ranges matches equality of the corresponding
        # tuples for each pair from the test lists above.
        ranges_eq = [a == b for a in test_ranges for b in test_ranges]
        tuples_eq = [a == b for a in test_tuples for b in test_tuples]
        self.assertEqual(ranges_eq, tuples_eq)