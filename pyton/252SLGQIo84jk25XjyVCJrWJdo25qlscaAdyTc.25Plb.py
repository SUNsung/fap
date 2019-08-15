
        
            if module.params['state'] == 'absent' and HAS_LLDP:
        commands.append('protocol lldp')
        commands.append('disable')
    elif module.params['state'] == 'present' and not HAS_LLDP:
        commands.append('protocol lldp')
        commands.append('no disable')
    
    
DOCUMENTATION = '''
---
module: os_auth
short_description: Retrieve an auth token
version_added: '2.0'
author: 'Monty Taylor (@emonty)'
description:
    - Retrieve an auth token from an OpenStack Cloud
requirements:
    - 'python >= 2.7'
    - 'openstacksdk'
options:
  availability_zone:
    description:
      - Ignored. Present for backwards compatibility
    required: false
extends_documentation_fragment: openstack
'''
    
                result['commands'] = commands
            result['updates'] = commands
    
        if module.params['save']:
        result['changed'] = True
        if not module.check_mode:
            cmd = {'command': 'copy running-config startup-config',
                   'prompt': r'\[confirm yes/no\]:\s?$', 'answer': 'yes'}
            run_commands(module, [cmd])
            result['saved'] = True
        else:
            module.warn('Skipping command `copy running-config startup-config`'
                        'due to check_mode.  Configuration not copied to '
                        'non-volatile storage')
    
    
def run(module, result):
    match = module.params['match']
    replace = module.params['replace']
    replace_config = replace == 'config'
    path = module.params['parents']
    comment = module.params['comment']
    admin = module.params['admin']
    check_mode = module.check_mode
    
        warnings = list()
    check_args(module, warnings)
    result['warnings'] = warnings
    
        def test_module_fail_when_required_args_missing(self):
        ''' required arguments are reported as errors '''
        with pytest.raises(AnsibleFailJson) as exc:
            set_module_args({})
            asup_module()
        print('Info: %s' % exc.value.args[0]['msg'])
    
        def test_path_endswith_role_main_yml(self):
        self.assertIn('main.yml', self._loader.path_dwim_relative(path='foo/bar/tasks/', dirname='/', source='main.yml'))
    
    - name: Remove a profile for a deleted account
  win_user_profile:
    name: ansible
    state: absent
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            sha1 = get_linux_ca_sha1(nss_path)
        ca_hash = CertUtil.ca_thumbprint.replace(':', '')
        if sha1 == ca_hash:
            xlog.info('Database $HOME/.pki/nssdb cert exist')
            return
    
        def _test_host(self, url):
        try:
            header = {
                'user-agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Safari/537.36',
                'accept': 'application/json, text/javascript, */*; q=0.01',
                'accept-encoding': 'gzip, deflate, sdch',
                'accept-language': 'en-US,en;q=0.8,ja;q=0.6,zh-CN;q=0.4,zh;q=0.2',
                'connection': 'keep-alive'
                }
            response = self.http_client.request('HEAD', url, header, '', read_payload=False)
            if response:
                return True
        except Exception as e:
            if __name__ == '__main__':
                xlog.exception('test %s e:%r', url, e)
    
        data = response.content
    response_headers = response.headers
    if 'content-encoding' not in response_headers and len(response.content) < URLFETCH_DEFLATE_MAXSIZE and response_headers.get('content-type', '').startswith(('text/', 'application/json', 'application/javascript')):
        if 'gzip' in accept_encoding:
            response_headers['Content-Encoding'] = 'gzip'
            compressobj = zlib.compressobj(zlib.Z_DEFAULT_COMPRESSION, zlib.DEFLATED, -zlib.MAX_WBITS, zlib.DEF_MEM_LEVEL, 0)
            dataio = BytesIO()
            dataio.write('\x1f\x8b\x08\x00\x00\x00\x00\x00\x02\xff')
            dataio.write(compressobj.compress(data))
            dataio.write(compressobj.flush())
            dataio.write(struct.pack('<LL', zlib.crc32(data) & 0xFFFFFFFFL, len(data) & 0xFFFFFFFFL))
            data = dataio.getvalue()
        elif 'deflate' in accept_encoding:
            response_headers['Content-Encoding'] = 'deflate'
            data = zlib.compress(data)[2:-4]
    if data:
         response_headers['Content-Length'] = str(len(data))
    response_headers_data = zlib.compress('\n'.join('%s:%s' % (k.title(), v) for k, v in response_headers.items() if not k.startswith('x-google-')))[2:-4]
    if 'rc4' not in options:
        start_response('200 OK', [('Content-Type', __content_type__)])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))+response_headers_data
        yield data
    else:
        start_response('200 OK', [('Content-Type', __content_type__), ('X-GOA-Options', 'rc4')])
        yield struct.pack('!hh', int(response.status_code), len(response_headers_data))
        yield rc4crypt(response_headers_data, __password__)
        yield rc4crypt(data, __password__)
    
            # If the user took their time to link their slack account, we may no
        # longer be able to respond, and we're not guaranteed able to post into
        # the channel. Ignore Expired url errors.
        #
        # XXX(epurkhiser): Yes the error string has a space in it.
        if not resp.get('ok') and resp.get('error') != 'Expired url':
            logger.error('slack.link-notify.response-error', extra={'response': resp})
    
        def __str__(self):
        return self.message
    
            # Removing index on 'GroupTagValue', fields ['project_id', '_key', '_value', 'last_seen']
        db.delete_index(
            u'tagstore_grouptagvalue', [
                'project_id', 'key_id', 'value_id', 'last_seen'])
    
            # Removing index on 'GroupTagValue', fields ['project_id', '_key', '_value', 'last_seen']
        db.delete_index(
            u'tagstore_grouptagvalue', [
                'project_id', 'key_id', 'value_id', 'last_seen'])
    
            # Changing field 'GroupTagKey.project_id'
        db.alter_column(u'tagstore_grouptagkey', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(null=True))
    
    from sentry.models import (Activity, GroupResolution, Release)
from sentry.tasks.base import instrumented_task
    
        Note that internationalised parameters (e.g., title*) are
    NOT percent-decoded.
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
    else:
    text_type = str
    string_types = (str,)
    xrange = range
    
        def set_new_path(self, new_idf_path):
        if self.path != new_idf_path:
            self.path = new_idf_path
            content = open(new_idf_path, 'rb').read().decode('utf-8')
            self.idf_freq = {}
            for line in content.splitlines():
                word, freq = line.strip().split(' ')
                self.idf_freq[word] = float(freq)
            self.median_idf = sorted(
                self.idf_freq.values())[len(self.idf_freq) // 2]
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)