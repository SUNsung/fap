
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
        def __init__(self, unpacked, extra):
        self.unpacked = unpacked
        self.extra = extra
    
    
def testSimpleValue():
    check(b'\x93\xc0\xc2\xc3', (None, False, True, ))
    
    
@pytest.mark.parametrize('na_option', [True, 'bad', 1])
@pytest.mark.parametrize('ties_method', [
    'average', 'min', 'max', 'first', 'dense'])
@pytest.mark.parametrize('ascending', [True, False])
@pytest.mark.parametrize('pct', [True, False])
@pytest.mark.parametrize('vals', [
    ['bar', 'bar', 'foo', 'bar', 'baz'],
    ['bar', np.nan, 'foo', np.nan, 'baz'],
    [1, np.nan, 2, np.nan, 3]
])
def test_rank_naoption_raises(ties_method, ascending, na_option, pct, vals):
    df = DataFrame({'key': ['foo'] * 5, 'val': vals})
    msg = 'na_option must be one of 'keep', 'top', or 'bottom''
    
    All the tests in these modules use ``self.assert_frame_equal`` or
``self.assert_series_equal`` for dataframe or series comparisons. By default,
they use the usual ``pandas.testing.assert_frame_equal`` and
``pandas.testing.assert_series_equal``. You can override the checks used
by defining the staticmethods ``assert_frame_equal`` and
``assert_series_equal`` on your base test class.
    
    
class Formatter(object):
    '''Format tabular data for printing.'''
    def table(self, headers, rows):
        table = texttable.Texttable(max_width=get_tty_width())
        table.set_cols_dtype(['t' for h in headers])
        table.add_rows([headers] + rows)
        table.set_deco(table.HEADER)
        table.set_chars(['-', '|', '+', '-'])
    
    import re
    
        def test_unicode_path_from_options(self):
        paths = [b'\xe5\xb0\xb1\xe5\x90\x83\xe9\xa5\xad/docker-compose.yml']
        opts = {'--file': paths}
        environment = Environment.from_env_file('.')
        assert get_config_path_from_options(
            '.', opts, environment
        ) == ['就吃饭/docker-compose.yml']
    
    from compose.cli import verbose_proxy
from tests import unittest
    
    
def test_hour_minute():
    assert timeparse.timeparse('2h32m') == 9120
    
        def test_remove_local_volume(self, mock_client):
        vol = volume.Volume(mock_client, 'foo', 'project')
        vol.remove()
        mock_client.remove_volume.assert_called_once_with('foo_project')
    
        def configure(self, updated):
        if 'stickycookie' in updated:
            if ctx.options.stickycookie:
                flt = flowfilter.parse(ctx.options.stickycookie)
                if not flt:
                    raise exceptions.OptionsError(
                        'stickycookie: invalid filter expression: %s' % ctx.options.stickycookie
                    )
                self.flt = flt
            else:
                self.flt = None
    
        def __init__(self, address, source_address=None, spoof_source_address=None):
        tcp.TCPClient.__init__(self, address, source_address, spoof_source_address)
    
    				strTag = self.codePages[self.currentCodePage].getTag(token)
				if (strTag == None):
					strTag = 'UNKNOWN_TAG_{0,2:X}'.format(token)
    
    
def save_flows(path: pathlib.Path, flows: typing.Iterable[flow.Flow]) -> None:
    with open(str(path / 'flows.json'), 'w') as f:
        json.dump(
            [flow_to_json(f) for f in flows],
            f
        )
    
                    line = next_line