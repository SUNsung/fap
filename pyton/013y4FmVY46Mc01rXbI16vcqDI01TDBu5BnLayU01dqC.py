
        
        
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
        def report_not_exist(self, appid, ip):
        self.logger.debug('report_not_exist:%s %s', appid, ip)
        th = threading.Thread(target=self.process_appid_not_exist, args=(appid, ip))
        th.start()
    
            if ret == 0 and __name__ != '__main__':
            #res = CertUtil.win32_notify(msg=u'Import GoAgent Ca?', title=u'Authority need')
            #if res == 2:
            #    return -1
    
        def write(self, content):
        self.fd.write(content + '\n')
        self.fd.flush()
    
        m = re.match(r'(\d+)\.(\d+)(\.(\d+))?(b(\d+))?', version_str)
    if m is None:
        raise ValueError('Bad version string %r' % version_str)
    
                    #print 'LA = %d (%r)' % (c, unichr(c) if c >= 0 else 'EOF')
                #print 'range = %d..%d' % (self.min[s], self.max[s])
    
    
    def __str__(self):
        return 'NoViableAltException(%r!=[%r])' % (
            self.unexpectedType, self.grammarDecisionDescription
            )
    __repr__ = __str__
    
    
    	# Record every single token pulled from the source so we can reproduce
        # chunks of it later.
        self.tokens = []
    
        parser = argparse.ArgumentParser(description = 'Download all the PDF/HTML links into README.md')
    parser.add_argument('-d', action='store', dest='directory')
    parser.add_argument('--no-html', action='store_true', dest='nohtml', default = False)
    parser.add_argument('--overwrite', action='store_true', default = False)    
    results = parser.parse_args()
    
        @property
    def name(self):
        '''Return the name of the device.'''
        return 'flic_{}'.format(self.address.replace(':', ''))
    
        def get_swisscom_data(self):
        '''Retrieve data from Swisscom and return parsed result.'''
        url = 'http://{}/ws'.format(self.host)
        headers = {CONTENT_TYPE: 'application/x-sah-ws-4-call+json'}
        data = '''
        {'service':'Devices', 'method':'get',
        'parameters':{'expression':'lan and not self'}}'''
    
    from homeassistant.components.notify import (
    ATTR_TITLE, ATTR_TITLE_DEFAULT, PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_PASSWORD, CONF_PORT
import homeassistant.helpers.config_validation as cv
    
            if kwargs.get(ATTR_DATA) is not None:
            data = kwargs.get(ATTR_DATA)
            if ((data.get(CONF_COLOR) is not None)
                    and (data.get(CONF_COLOR) in VALID_COLORS)):
                color = data.get(CONF_COLOR)
            if ((data.get(CONF_NOTIFY) is not None)
                    and isinstance(data.get(CONF_NOTIFY), bool)):
                notify = data.get(CONF_NOTIFY)
            if ((data.get(CONF_FORMAT) is not None)
                    and (data.get(CONF_FORMAT) in VALID_FORMATS)):
                message_format = data.get(CONF_FORMAT)
    
    from urllib.parse import urlencode
import socket
import voluptuous as vol
    
    
def get_kcl_app_command(java, multi_lang_daemon_class, properties, paths=[]):
    '''
    Generates a command to run the MultiLangDaemon.
    
        def test_list_non_existant_function_versions_returns_error(self):
        with self.app.test_request_context():
            result = json.loads(lambda_api.list_versions(self.FUNCTION_NAME).get_data())
            self.assertEqual(self.RESOURCENOTFOUND_EXCEPTION, result['__type'])
            self.assertEqual(self.RESOURCENOTFOUND_MESSAGE % lambda_api.func_arn(self.FUNCTION_NAME),
                             result['message'])