
        
        
@pytest.mark.parametrize('style,equiv', [
    ('margin: 1px; margin-top: inherit',
     'margin-bottom: 1px; margin-right: 1px; margin-left: 1px'),
    ('margin-top: inherit', ''),
    ('margin-top: initial', ''),
])
def test_css_none_absent(style, equiv):
    assert_same_resolution(style, equiv)
    
    
@pytest.mark.parametrize('css,inherited,expected', [
    ('font-weight: bold', '',
     {'font': {'bold': True}}),
    ('', 'font-weight: bold',
     {'font': {'bold': True}}),
    ('font-weight: bold', 'font-style: italic',
     {'font': {'bold': True, 'italic': True}}),
    ('font-style: normal', 'font-style: italic',
     {'font': {'italic': False}}),
    ('font-style: inherit', '', {}),
    ('font-style: normal; font-style: inherit', 'font-style: italic',
     {'font': {'italic': True}}),
])
def test_css_to_excel_inherited(css, inherited, expected):
    convert = CSSToExcelConverter(inherited)
    assert expected == convert(css)
    
    
def test_compression_roundtrip(compression):
    df = pd.DataFrame([[0.123456, 0.234567, 0.567567],
                       [12.32112, 123123.2, 321321.2]],
                      index=['A', 'B'], columns=['X', 'Y', 'Z'])