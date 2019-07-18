
        
            def dispatch_call(self, call):
        if call.rank not in (Rank.OPERATOR, Rank.SUPERVISOR, Rank.DIRECTOR):
            raise ValueError('Invalid call rank: {}'.format(call.rank))
        employee = None
        if call.rank == Rank.OPERATOR:
            employee = self._dispatch_call(call, self.operators)
        if call.rank == Rank.SUPERVISOR or employee is None:
            employee = self._dispatch_call(call, self.supervisors)
        if call.rank == Rank.DIRECTOR or employee is None:
            employee = self._dispatch_call(call, self.directors)
        if employee is None:
            self.queued_calls.append(call)
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
            self.parser.env = MockEnvironment()
    
            actual = get_unique_filename(orig_name, attempts(unique_on_attempt))
        assert expected == actual
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        def format_body(self, content, mime):
        if is_valid_mime(mime):
            for p in self.enabled_plugins:
                content = p.format_body(content, mime)
        return content

    
        '''
    req_h = OUT_REQ_HEAD in output_options
    req_b = OUT_REQ_BODY in output_options
    resp_h = OUT_RESP_HEAD in output_options
    resp_b = OUT_RESP_BODY in output_options
    req = req_h or req_b
    resp = resp_h or resp_b
    
        # This be set automatically once the plugin has been loaded.
    package_name = None
    
    
class DigestAuthPlugin(BuiltinAuthPlugin):
    
    
class IHCDevice(Entity):
    '''Base class for all IHC devices.
    
    
def config_per_platform(config: ConfigType,
                        domain: str) -> Iterable[Tuple[Any, Any]]:
    '''Break a component config into different platforms.
    
    
async def test_if_not_fires_for_enter_on_zone_leave(hass, calls):
    '''Test for not firing on zone leave.'''
    hass.states.async_set('test.entity', 'hello', {
        'latitude': 32.880586,
        'longitude': -117.237564
    })
    await hass.async_block_till_done()
    
    
async def test_setup_entry_successful(hass):
    '''Test setup entry is successful.'''
    entry = MockConfigEntry(domain=hmipc.DOMAIN, data={
        hmipc.HMIPC_HAPID: 'ABC123',
        hmipc.HMIPC_AUTHTOKEN: '123',
        hmipc.HMIPC_NAME: 'hmip',
    })
    entry.add_to_hass(hass)
    with patch.object(hmipc, 'HomematicipHAP') as mock_hap:
        mock_hap.return_value.async_setup.return_value = mock_coro(True)
        assert await async_setup_component(hass, hmipc.DOMAIN, {
            hmipc.DOMAIN: {
                hmipc.CONF_ACCESSPOINT: 'ABC123',
                hmipc.CONF_AUTHTOKEN: '123',
                hmipc.CONF_NAME: 'hmip',
            }
        }) is True
    
    
@pytest.fixture(autouse=True)
def netdisco_mock():
    '''Mock netdisco.'''
    with patch.dict('sys.modules', {
        'netdisco.discovery': MagicMock(),
    }):
        yield
    
        @abc.abstractmethod
    def check_range(self, request):
        '''Compare passed value to predefined interval'''
    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
    '''
http://peter-hoffmann.com/2010/extrinsic-visitor-pattern-python-inheritance.html
    
    *TL;DR
Creates objects without having to specify the exact class.
'''
    
        def product_list(self):
        return self.data['products'].keys()
    
        # low-level i.e. Implementation specific
    def draw(self):
        self._drawing_api.draw_circle(self._x, self._y, self._radius)
    
    from pandas.compat import is_platform_windows
import pandas.util._test_decorators as td
    
            else:
            raise Exception('invalid pickle state')
    
    
def test_getitem_simple(multiindex_dataframe_random_data):
    df = multiindex_dataframe_random_data.T
    expected = df.values[:, 0]
    result = df['foo', 'one'].values
    tm.assert_almost_equal(result, expected)