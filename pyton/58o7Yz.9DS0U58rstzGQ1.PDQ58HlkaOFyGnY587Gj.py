
        
        
class PackValueError(PackException, ValueError):
    pass

    
    
@pytest.mark.parametrize('levels', [
    'inner', 'outer', 'B',
    ['inner'], ['outer'], ['B'],
    ['inner', 'outer'], ['outer', 'inner'],
    ['inner', 'outer', 'B'], ['B', 'outer', 'inner']
])
def test_grouper_index_level_as_string_series(series, levels):