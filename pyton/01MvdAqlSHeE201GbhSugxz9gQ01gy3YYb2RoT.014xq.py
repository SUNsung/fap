
        
            SPOTS_PER_ROW = 10
    
        def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#
# html_short_title = None
    
        content = re.sub('MAJOR_VERSION = .*\n',
                     'MAJOR_VERSION = {}\n'.format(major),
                     content)
    content = re.sub('MINOR_VERSION = .*\n',
                     'MINOR_VERSION = {}\n'.format(minor),
                     content)
    content = re.sub('PATCH_VERSION = .*\n',
                     'PATCH_VERSION = '{}'\n'.format(patch),
                     content)
    
    
class UnpackValueError(UnpackException, ValueError):
    pass
    
    
def test_getitem_callable():
    # GH 12533
    s = pd.Series(4, index=list('ABCD'))
    result = s[lambda x: 'A']
    assert result == s.loc['A']
    
        ('smaller', None, '10pt'),
    ('smaller', '18pt', '15pt'),
    ('larger', None, '{pt:f}pt'.format(pt=14.4)),
    ('larger', '15pt', '18pt'),
])
def test_css_relative_font_size(size, relative_to, resolved):
    if relative_to is None:
        inherited = None
    else:
        inherited = {'font-size': relative_to}
    assert_resolves('font-size: {size}'.format(size=size),
                    {'font-size': resolved}, inherited=inherited)

    
        # FILL
    # - color, fillType
    ('background-color: red', {'fill': {'fgColor': 'FF0000',
                                        'patternType': 'solid'}}),
    ('background-color: #ff0000', {'fill': {'fgColor': 'FF0000',
                                            'patternType': 'solid'}}),
    ('background-color: #f0a', {'fill': {'fgColor': 'FF00AA',
                                         'patternType': 'solid'}}),
    # BORDER
    # - style
    ('border-style: solid',
     {'border': {'top': {'style': 'medium'},
                 'bottom': {'style': 'medium'},
                 'left': {'style': 'medium'},
                 'right': {'style': 'medium'}}}),
    ('border-style: solid; border-width: thin',
     {'border': {'top': {'style': 'thin'},
                 'bottom': {'style': 'thin'},
                 'left': {'style': 'thin'},
                 'right': {'style': 'thin'}}}),
    
    
def test_str8():
    header = b'\xd9'
    data = b'x' * 32
    b = packb(data.decode(), use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x20'
    assert b[2:] == data
    assert unpackb(b) == data
    
    
def test_read_map_header():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': 'A'}))
    assert unpacker.read_map_header() == 1
    assert unpacker.unpack() == B'a'
    assert unpacker.unpack() == B'A'
    try:
        unpacker.unpack()
        assert 0, 'should raise exception'
    except OutOfData:
        assert 1, 'okay'
    
    
def gen_binary_data(idx):
    return binarydata[:idx % 300]