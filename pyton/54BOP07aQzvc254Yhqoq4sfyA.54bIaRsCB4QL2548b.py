
        
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
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_verbose_json(self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', 'foo=bar', 'baz=bar')
        assert HTTP_OK in r
        assert ''baz': 'bar'' in r
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 
    
      def NewCandidateInsertionText( to_insert, text_after_cursor ):
    overlap_len = OverlapLength( to_insert, text_after_cursor )
    if overlap_len:
      return to_insert[ :-overlap_len ]
    return to_insert
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      try:
    filepath = os.path.join( DIR_OF_YCMD, 'PYTHON_USED_DURING_BUILDING' )
    return utils.ReadFile( filepath ).strip()
  # We need to check for IOError for Python2 and OSError for Python3
  except ( IOError, OSError ):
    return None
    
    
def RawResponse_ConvertedFromOmniCompleter_test():
  vim_results = [
    { 'word': 'WORD', 'abbr': 'ABBR', 'menu': 'MENU',
      'kind': 'KIND', 'info': 'INFO' },
    { 'word': 'WORD2', 'abbr': 'ABBR2', 'menu': 'MENU2',
      'kind': 'KIND2', 'info': 'INFO' },
    { 'word': 'WORD', 'abbr': 'ABBR', },
    {},
  ]
  expected_results = [
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',
                   'extra_menu_info': 'MENU', 'kind': [ 'KIND' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD2', 'menu_text': 'ABBR2',
                   'extra_menu_info': 'MENU2', 'kind': [ 'KIND2' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR', } ),
    has_entries( {} ),
  ]
  request = BuildOmnicompletionRequest( vim_results )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]
    
    
def GetVariableValue_CompleteItemIs( word, abbr = None, menu = None,
                                     info = None, kind = None, **kwargs ):
  def Result( variable ):
    if variable == 'v:completed_item':
      return CompleteItemIs( word, abbr, menu, info, kind, **kwargs )
    return DEFAULT
  return MagicMock( side_effect = Result )
    
    class _WorkItem( object ):
  def __init__( self, future, fn, args, kwargs ):
    self.future = future
    self.fn = fn
    self.args = args
    self.kwargs = kwargs
    
        def __init__(self):
        self.trans = dict(dog='σκύλος', cat='γάτα')
    
        rm2.state = 'Zombie'
    
    
@contextmanager
def suppress_stdout():
    try:
        stdout, sys.stdout = sys.stdout, open(os.devnull, 'w')
        yield
    finally:
        sys.stdout = stdout
    
    
class NumObj(object):
    def __init__(self, value):
        self.value = value
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15

    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        '''A radio.     It has a scan button, and an AM/FM toggle switch.'''
    
        # Using an external constructor function:
    complex_house = construct_building(ComplexHouse)
    print(complex_house)
    
    *References:
bottle
https://github.com/bottlepy/bottle/blob/cafc15419cbb4a6cb748e6ecdccf92893bb25ce5/bottle.py#L270
django
https://github.com/django/django/blob/ffd18732f3ee9e6f0374aff9ccf350d85187fac2/django/utils/functional.py#L19
pip
https://github.com/pypa/pip/blob/cb75cca785629e15efb46c35903827b3eae13481/pip/utils/__init__.py#L821
pyramimd
https://github.com/Pylons/pyramid/blob/7909e9503cdfc6f6e84d2c7ace1d3c03ca1d8b73/pyramid/decorator.py#L4
werkzeug
https://github.com/pallets/werkzeug/blob/5a2bf35441006d832ab1ed5a31963cbc366c99ac/werkzeug/utils.py#L35
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
        try:
        smart_home_config = config[CONF_SMART_HOME]
    except KeyError:
        pass
    else:
        smart_home_config = smart_home_config or SMART_HOME_SCHEMA({})
        smart_home.async_setup(hass, smart_home_config)
    
    
class AxisDeviceEvent(Entity):
    '''Representation of a Axis device event.'''
    
            # Iterate through some keys that we want to have ordered in the output
        updated_value = OrderedDict()
        for key in ('id', 'alias', 'trigger', 'condition', 'action'):
            if key in cur_value:
                updated_value[key] = cur_value[key]
            if key in new_value:
                updated_value[key] = new_value[key]
    
        hass.bus.listen(EVENT_LOGBOOK_ENTRY, logbook_entry_listener)
    hass.bus.listen(EVENT_STATE_CHANGED, state_changed_listener)
    
                # Check for every light if it would be on if someone was home
            # when the fading in started and turn it on if so
            for index, light_id in enumerate(light_ids):
                if now > start_point + index * LIGHT_TRANSITION_TIME:
                    light.async_turn_on(light_id)
    
            box = pybbox.Bbox()
        result = box.get_all_connected_devices()
    
            return [device.mac for device in self.last_results]
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if self.mac2name is None:
            url = '{}/cgi-bin/luci/rpc/uci'.format(self.origin)
            result = _req_json_rpc(
                url, 'get_all', 'dhcp', params={'auth': self.token})
            if result:
                hosts = [x for x in result.values()
                         if x['.type'] == 'host' and
                         'mac' in x and 'name' in x]
                mac2name_list = [
                    (x['mac'].upper(), x['name']) for x in hosts]
                self.mac2name = dict(mac2name_list)
            else:
                # Error, handled in the _req_json_rpc
                return
        return self.mac2name.get(device.upper(), None)