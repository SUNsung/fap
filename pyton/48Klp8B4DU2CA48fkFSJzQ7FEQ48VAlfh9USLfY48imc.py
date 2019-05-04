
        
            infile, outfile = args
    
    print('WARNING: Lazy loading extractors is an experimental feature that may not always work', file=sys.stderr)
    
    
if __name__ == '__main__':
    unittest.main()

    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
                        try_num += 1
                else:
                    break
    
            #Required string to create directory title pages
        dir_title = '<h2 class=titledir>' + operating_sys.capitalize() + '</h2></body></html>'
    
    
if __name__ == '__main__':
    front_controller = RequestController()
    front_controller.dispatch_request(Request('mobile'))
    front_controller.dispatch_request(Request('tablet'))
    
        @staticmethod
    def capitalizer(string):
        return string[0].upper() + string[1:].lower()
    
        def test_calling_next_state_shall_change_current_state(cls):
        cls.hsm._current_state = Standby  # initial state
        cls.hsm._next_state('active')
        cls.assertEqual(isinstance(cls.hsm._current_state, Active), True)
        cls.hsm._current_state = Standby(cls.hsm)  # initial state
    
    
def test_array32():
    check_array(5, (1 << 16))
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
    
def parse_args(args=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('version', type=str, help='Pandas version (0.23.0)')
    return parser.parse_args(args)
    
    
@pytest.mark.parametrize('levels', [
    'inner', 'outer', 'B',
    ['inner'], ['outer'], ['B'],
    ['inner', 'outer'], ['outer', 'inner'],
    ['inner', 'outer', 'B'], ['B', 'outer', 'inner']
])
def test_grouper_index_level_as_string_series(series, levels):
    
            gr = df.groupby(keys, sort=isort)
        right = gr['3rd'].apply(Series.value_counts, **kwargs)
        right.index.names = right.index.names[:-1] + ['3rd']
    
    
@pytest.mark.parametrize('size,resolved', [
    ('xx-small', '6pt'),
    ('x-small', '{pt:f}pt'.format(pt=7.5)),
    ('small', '{pt:f}pt'.format(pt=9.6)),
    ('medium', '12pt'),
    ('large', '{pt:f}pt'.format(pt=13.5)),
    ('x-large', '18pt'),
    ('xx-large', '24pt'),
    
        ('border-top-style: dotted',
     {'border': {'top': {'style': 'mediumDashDotDot'}}}),
    ('border-top-style: dotted; border-top-width: thin',
     {'border': {'top': {'style': 'dotted'}}}),
    ('border-top-style: dashed',
     {'border': {'top': {'style': 'mediumDashed'}}}),
    ('border-top-style: dashed; border-top-width: thin',
     {'border': {'top': {'style': 'dashed'}}}),
    ('border-top-style: double',
     {'border': {'top': {'style': 'double'}}}),
    # - color
    ('border-style: solid; border-color: #0000ff',
     {'border': {'top': {'style': 'medium', 'color': '0000FF'},
                 'right': {'style': 'medium', 'color': '0000FF'},
                 'bottom': {'style': 'medium', 'color': '0000FF'},
                 'left': {'style': 'medium', 'color': '0000FF'}}}),
    ('border-top-style: double; border-top-color: blue',
     {'border': {'top': {'style': 'double', 'color': '0000FF'}}}),
    ('border-top-style: solid; border-top-color: #06c',
     {'border': {'top': {'style': 'medium', 'color': '0066CC'}}}),
    # ALIGNMENT
    # - horizontal
    ('text-align: center',
     {'alignment': {'horizontal': 'center'}}),
    ('text-align: left',
     {'alignment': {'horizontal': 'left'}}),
    ('text-align: right',
     {'alignment': {'horizontal': 'right'}}),
    ('text-align: justify',
     {'alignment': {'horizontal': 'justify'}}),
    # - vertical
    ('vertical-align: top',
     {'alignment': {'vertical': 'top'}}),
    ('vertical-align: text-top',
     {'alignment': {'vertical': 'top'}}),
    ('vertical-align: middle',
     {'alignment': {'vertical': 'center'}}),
    ('vertical-align: bottom',
     {'alignment': {'vertical': 'bottom'}}),
    ('vertical-align: text-bottom',
     {'alignment': {'vertical': 'bottom'}}),
    # - wrap_text
    ('white-space: nowrap',
     {'alignment': {'wrap_text': False}}),
    ('white-space: pre',
     {'alignment': {'wrap_text': False}}),
    ('white-space: pre-line',
     {'alignment': {'wrap_text': False}}),
    ('white-space: normal',
     {'alignment': {'wrap_text': True}}),
    # NUMBER FORMAT
    ('number-format: 0%',
     {'number_format': {'format_code': '0%'}}),
])
def test_css_to_excel(css, expected):
    convert = CSSToExcelConverter()
    assert expected == convert(css)