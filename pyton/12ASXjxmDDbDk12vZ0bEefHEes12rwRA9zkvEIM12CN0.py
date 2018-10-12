
        
        (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = '''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
    
def test_on_run_after_other_commands(usage_tracker_io, shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.get_history.return_value = ['fuck', 'ls']
    _change_tracker(usage_tracker_io, 12)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    
class RequestsDependencyWarning(RequestsWarning):
    '''An imported dependency doesn't match the expected version range.'''
    pass

    
        def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
        @classmethod
    def basic_response_server(cls, **kwargs):
        return cls.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 0\r\n\r\n',
            **kwargs
        )
    
        @pytest.mark.parametrize(
        'url', (
            'http://192.168.0.1:5000/',
            'http://192.168.0.1/',
            'http://172.16.1.1/',
            'http://172.16.1.1:5000/',
            'http://localhost.localdomain:5000/v1.0/',
        ))
    def test_not_bypass_no_proxy_keyword(self, url, monkeypatch):
        # This is testing that the 'no_proxy' argument overrides the
        # environment variable 'no_proxy'
        monkeypatch.setenv('http_proxy', 'http://proxy.example.com:3128/')
        no_proxy = '192.168.1.1,requests.com'
        assert get_environ_proxies(url, no_proxy=no_proxy) != {}
    
    ]
test_requirements = [
    'pytest-httpbin==0.0.7',
    'pytest-cov',
    'pytest-mock',
    'pytest-xdist',
    'PySocks>=1.5.6, !=1.5.7',
    'pytest>=2.8.0'
]
    
            setting_name, refid = get_setting_name_and_refid(node)
    
        name = 'qps'
    benchurl = 'http://localhost:8880/'
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
        def print_requests(self, lvl=None, colour=True):
        if lvl is None:
            levels = list(self.requests.keys())
            if levels:
                requests = self.requests[max(levels)]
            else:
                requests = []
        else:
            requests = self.requests.get(lvl, [])
    
        def short_desc(self):
        return 'Run a self-contained spider (without creating a project)'
    
    _CODE_RE = re.compile('\d+')
class FTPDownloadHandler(object):
    
    from __future__ import print_function
    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')
    
        jim = Subscriber('jim', message_center)
    jim.subscribe('cartoon')
    jack = Subscriber('jack', message_center)
    jack.subscribe('music')
    gee = Subscriber('gee', message_center)
    gee.subscribe('movie')
    vani = Subscriber('vani', message_center)
    vani.subscribe('movie')
    vani.unsubscribe('movie')
    
    
# Show pets with various factories
if __name__ == '__main__':
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour, current_time.minute)
        return current_time_formatted
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)