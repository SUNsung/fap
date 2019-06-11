
        
        # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
                if 'playlist_mincount' in test_case:
                assertGreaterEqual(
                    self,
                    len(res_dict['entries']),
                    test_case['playlist_mincount'],
                    'Expected at least %d in playlist %s, but got only %d' % (
                        test_case['playlist_mincount'], test_case['url'],
                        len(res_dict['entries'])))
            if 'playlist_count' in test_case:
                self.assertEqual(
                    len(res_dict['entries']),
                    test_case['playlist_count'],
                    'Expected %d entries in playlist %s, but got %d.' % (
                        test_case['playlist_count'],
                        test_case['url'],
                        len(res_dict['entries']),
                    ))
            if 'playlist_duration_sum' in test_case:
                got_duration = sum(e['duration'] for e in res_dict['entries'])
                self.assertEqual(
                    test_case['playlist_duration_sum'], got_duration)
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
            spider_loader = self.crawler_process.spider_loader
    
            return True
    
    import josepy as jose
import pyrfc3339
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
    '''

    
        # Additional stuff for the LaTeX preamble.
    #
    # 'preamble': '',
    
        def test_weak_etag_not_match(self):
        computed_etag = ''xyzzy2''
        etags = 'W/'xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=200)
    
    from tornado.options import options, define, parse_command_line
from tornado.template import Template
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    io_loop = ioloop.IOLoop.current()
    if io_loop in _io_loops:
        return
    _io_loops[io_loop] = True
    if len(_io_loops) > 1:
        gen_log.warning('tornado.autoreload started more than once in the same process')
    modify_times = {}  # type: Dict[str, float]
    callback = functools.partial(_reload_on_update, modify_times)
    scheduler = ioloop.PeriodicCallback(callback, check_time)
    scheduler.start()
    
    if typing.TYPE_CHECKING:
    from typing import Generator, Any, List, Tuple, Dict  # noqa: F401
    
    print('Starting')
sys.stdout.flush()
if 'TESTAPP_STARTED' not in os.environ:
    os.environ['TESTAPP_STARTED'] = '1'
    # Simulate an internal autoreload (one not caused
    # by the wrapper).
    tornado.autoreload._reload()
else:
    # Exit directly so autoreload doesn't catch it.
    os._exit(0)
'''
    
        def parse(self, argv):
        command_help = getdoc(self.command_class)
        options = docopt_full_help(command_help, argv, **self.options)
        command = options['COMMAND']
    
    
class ConsoleWarningFormatter(logging.Formatter):
    '''A logging.Formatter which prints WARNING and ERROR messages with
    a prefix of the log level colored appropriate for the log level.
    '''
    
        def download_all(self, version):
        files = {
            'docker-compose-Darwin-x86_64': None,
            'docker-compose-Linux-x86_64': None,
            'docker-compose-Windows-x86_64.exe': None,
        }
    
            assert net.ensure() is None

    
        @no_cluster('remove volume by name defect on Swarm Classic')
    def test_remove_volume(self):
        vol = Volume(self.client, 'composetest', 'volume01')
        vol.create()
        vol.remove()
        volumes = self.client.volumes()['Volumes']
        assert len([v for v in volumes if v['Name'] == vol.full_name]) == 0
    
        def test_sort_service_dicts_7(self):
        services = [
            {
                'network_mode': 'service:three',
                'name': 'four'
            },
            {
                'links': ['two'],
                'name': 'three'
            },
            {
                'name': 'two',
                'volumes_from': [VolumeFromSpec('one', 'rw', 'service')]
            },
            {
                'name': 'one'
            }
        ]