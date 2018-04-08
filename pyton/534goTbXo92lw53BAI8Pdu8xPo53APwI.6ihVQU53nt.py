
        
        import os
    
        def test_get_entity_name_from_resource_name(self):
        input_data = 'urlMaps'
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual('urlMap', actual)
        input_data = 'targetHttpProxies'
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual('targetHttpProxy', actual)
        input_data = 'globalForwardingRules'
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual('forwardingRule', actual)
        input_data = ''
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual(None, actual)
        input_data = 666
        actual = GCPUtils.get_entity_name_from_resource_name(input_data)
        self.assertEqual(None, actual)
    
        terminal_length = os.getenv('ANSIBLE_VYOS_TERMINAL_LENGTH', 10000)
    
        results = {}
    for group in sort_groups(groups):
        results = combine_vars(results, group.get_vars())
    
            Terence implemented packed table initializers, because Java has a
        size restriction on .class files and the lookup tables can grow
        pretty large. The generated JavaLexer.java of the Java.g example
        would be about 15MB with uncompressed array initializers.
    
            Using setter/getter methods is deprecated. Use o.charPositionInLine instead.'''
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '0'
# The full version, including alpha/beta/rc tags.
release = '0'
    
        def get_all_names_answer(self):
        '''Returns the set of domain names that the plugin should find'''
        if self._all_names:
            return self._all_names
        else:
            raise errors.Error('No configuration file loaded')
    
    # Custom sidebar templates, maps document names to template names.
#html_sidebars = {}
    
        def test_maxlen_attribute(self):
        self.assertEqual(deque().maxlen, None)
        self.assertEqual(deque('abc').maxlen, None)
        self.assertEqual(deque('abc', maxlen=4).maxlen, 4)
        self.assertEqual(deque('abc', maxlen=2).maxlen, 2)
        self.assertEqual(deque('abc', maxlen=0).maxlen, 0)
        with self.assertRaises(AttributeError):
            d = deque('abc')
            d.maxlen = 10
    
    class Chunk:
    def __init__(self, file, align=True, bigendian=True, inclheader=False):
        import struct
        self.closed = False
        self.align = align      # whether to align to word (2-byte) boundaries
        if bigendian:
            strflag = '>'
        else:
            strflag = '<'
        self.file = file
        self.chunkname = file.read(4)
        if len(self.chunkname) < 4:
            raise EOFError
        try:
            self.chunksize = struct.unpack_from(strflag+'L', file.read(4))[0]
        except struct.error:
            raise EOFError from None
        if inclheader:
            self.chunksize = self.chunksize - 8 # subtract header
        self.size_read = 0
        try:
            self.offset = self.file.tell()
        except (AttributeError, OSError):
            self.seekable = False
        else:
            self.seekable = True
    
    

if __name__ == '__main__':
    colordb = get_colordb('/usr/openwin/lib/rgb.txt')
    if not colordb:
        print('No parseable color database found')
        sys.exit(1)
    # on my system, this color matches exactly
    target = 'navy'
    red, green, blue = rgbtuple = colordb.find_byname(target)
    print(target, ':', red, green, blue, triplet_to_rrggbb(rgbtuple))
    name, aliases = colordb.find_byrgb(rgbtuple)
    print('name:', name, 'aliases:', COMMASPACE.join(aliases))
    r, g, b = (1, 1, 128)                         # nearest to navy
    r, g, b = (145, 238, 144)                     # nearest to lightgreen
    r, g, b = (255, 251, 250)                     # snow
    print('finding nearest to', target, '...')
    import time
    t0 = time.time()
    nearest = colordb.nearest(r, g, b)
    t1 = time.time()
    print('found nearest color', nearest, 'in', t1-t0, 'seconds')
    # dump the database
    for n in colordb.unique_names():
        r, g, b = colordb.find_byname(n)
        aliases = colordb.aliases_of(r, g, b)
        print('%20s: (%3d/%3d/%3d) == %s' % (n, r, g, b,
                                             SPACE.join(aliases[1:])))

    
            for denom_real, denom_imag in [(0, NAN), (NAN, 0), (NAN, NAN)]:
            z = complex(0, 0) / complex(denom_real, denom_imag)
            self.assertTrue(isnan(z.real))
            self.assertTrue(isnan(z.imag))
    
            self.assertIn(a, [obj.obj if isinstance(obj, memoryview) else obj
                          for obj in x._objects.values()])