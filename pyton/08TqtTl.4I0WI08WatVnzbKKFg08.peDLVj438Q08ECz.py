
        
            def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
        def get_connection(self, url, proxies=None):
        '''Returns a urllib3 connection for the given URL. This should not be
        called from user code, and is only exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    ipv4_component = r'''
    (?:
        [01]?[0-9]{{1,2}}|              # 0..199
        2[0-4][0-9]|                    # 200..249
        25[0-5]|                        # 250..255
        {range}                         # or a numeric range
    )
'''.format(range=numeric_range)
    
    
def build_distribution(version):
    obj = mock.MagicMock()
    obj.version = '0.5.0'
    return obj
    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        return results

    
            # Add our extra information to the returned value
        mapping.ansible_pos = self._node_position_info(node)
    
    
class Command(ScrapyCommand):
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
    from scrapy.exceptions import NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.boto import is_botocore
from .http import HTTPDownloadHandler
    
        text = html.remove_tags_with_content(text, ('script', 'noscript'))
    text = html.replace_entities(text)
    text = html.remove_comments(text)
    return _ajax_crawlable_re.search(text) is not None

    
        def spider_opened(self, spider):
        usr = getattr(spider, 'http_user', '')
        pwd = getattr(spider, 'http_pass', '')
        if usr or pwd:
            self.auth = basic_auth_header(usr, pwd)
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')