
        
                '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    
def print_debug_info(env):
    env.stderr.writelines([
        'HTTPie %s\n' % httpie_version,
        'Requests %s\n' % requests_version,
        'Pygments %s\n' % pygments_version,
        'Python %s\n%s\n' % (sys.version, sys.executable),
        '%s %s' % (platform.system(), platform.release()),
    ])
    env.stderr.write('\n\n')
    env.stderr.write(repr(env))
    env.stderr.write('\n')
    
        http://docs.python-requests.org/en/latest/user/advanced/#transport-adapters
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
        strings = []
    with open(filepath, 'r') as f:
    
        def test_karatsuba(self):
        digits = list(range(1, 5)) + list(range(KARATSUBA_CUTOFF,
                                                KARATSUBA_CUTOFF + 10))
        digits.extend([KARATSUBA_CUTOFF * 10, KARATSUBA_CUTOFF * 100])
    
    to_benchmark = [pi_float, pi_decimal]
if C is not None:
    to_benchmark.insert(1, pi_cdecimal)
    
    Usage:
while True:
    try:
        chunk = Chunk(file)
    except EOFError:
        break
    chunktype = chunk.getname()
    while True:
        data = chunk.read(nbytes)
        if not data:
            pass
        # do something with data
    
            readermode is sometimes necessary if you are connecting to an
        NNTP server on the local machine and intend to call
        reader-specific commands, such as `group'.  If you get
        unexpected NNTPPermanentErrors, you might need to set
        readermode.
        '''
        self.host = host
        self.file = file
        self.debugging = 0
        self.welcome = self._getresp()
    
            Interpret all HTTP GET requests as requests for server
        documentation.
        '''
        # Check that the path is legal
        if not self.is_rpc_path_valid():
            self.report_404()
            return
    
                env['HOME'] = '/tmp'
            self.assertEqual(p1.expanduser(), P('/tmp/Documents'))
            self.assertEqual(p2.expanduser(), P(userhome) / 'Documents')
            self.assertEqual(p3.expanduser(), P(otherhome) / 'Documents')
            self.assertEqual(p4.expanduser(), p4)
            self.assertEqual(p5.expanduser(), p5)
            self.assertEqual(p6.expanduser(), p6)
            self.assertRaises(RuntimeError, p7.expanduser)
    
        Args:
        call_queue: A multiprocessing.Queue of _CallItems that will be read and
            evaluated by the worker.
        result_queue: A multiprocessing.Queue of _ResultItems that will written
            to by the worker.
        shutdown: A multiprocessing.Event that will be set as a signal to the
            worker that it should exit when call_queue is empty.
    '''
    while True:
        call_item = call_queue.get(block=True)
        if call_item is None:
            # Wake up queue management thread
            result_queue.put(None)
            return
        try:
            r = call_item.fn(*call_item.args, **call_item.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            result_queue.put(_ResultItem(call_item.work_id,
                                         exception=e))
        else:
            result_queue.put(_ResultItem(call_item.work_id,
                                         result=r))
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
    
class TestSplunk(unittest.TestCase):
    '''Test the Splunk component.'''
    
    
def volume_mute(hass):
    '''Press the keyboard button for muting volume.'''
    hass.services.call(DOMAIN, SERVICE_VOLUME_MUTE)
    
    
def _get_homehub_data(url):
    '''Return mock homehub data.'''
    return '''
    [
        {
            'mac': 'AA:BB:CC:DD:EE:FF,
            'hostname': 'hostname',
            'ip': '192.168.1.43',
            'ipv6': '',
            'name': 'hostname',
            'activity': '1',
            'os': 'Unknown',
            'device': 'Unknown',
            'time_first_seen': '2016/06/05 11:14:45',
            'time_last_active': '2016/06/06 11:33:08',
            'dhcp_option': '39043T90430T9TGK0EKGE5KGE3K904390K45GK054',
            'port': 'wl0',
            'ipv6_ll': 'fe80::gd67:ghrr:fuud:4332',
            'activity_ip': '1',
            'activity_ipv6_ll': '0',
            'activity_ipv6': '0',
            'device_oui': 'NA',
            'device_serial': 'NA',
            'device_class': 'NA'
        }
    ]
    '''
    
    
class TestRecorderRuns(unittest.TestCase):
    '''Test recorder run model.'''