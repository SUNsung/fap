
        
        for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
            retval = subprocess.call(args)
        if retval == 0:
            fsize = os.path.getsize(encodeFilename(tmpfilename))
            self.to_screen('\r[%s] %s bytes' % (args[0], fsize))
            self.try_rename(tmpfilename, filename)
            self._hook_progress({
                'downloaded_bytes': fsize,
                'total_bytes': fsize,
                'filename': filename,
                'status': 'finished',
            })
            return True
        else:
            self.to_stderr('\n')
            self.report_error('%s exited with code %d' % (args[0], retval))
            return False

    
        def _real_extract(self, url):
        playlist_id = self._match_id(url)
    
            runtime = self._search_regex(
            r'Runtime\s*:\s*(.+?) \|', webpage, 'duration', default=None)
        if runtime:
            runtime = re.sub(r'[\s-]', '', runtime)
        duration = parse_duration(runtime)
        view_count = int_or_none(self._search_regex(
            r'Views\s*:\s*(\d+)', webpage, 'view count', default=None))
        comment_count = int_or_none(self._search_regex(
            r'Comments\s*:\s*(\d+)', webpage, 'comment count', default=None))
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            if index == -1:
            self.order.append(tag)
        else:
            self.order.insert(index, tag)
    
        return logger

    
    
def test_custom_config_class():
    class Config(flask.Config):
        pass
    
        Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
    
def post(url, data=None, json=None, **kwargs):
    r'''Sends a POST request.
    
        def prepare(self,
            method=None, url=None, headers=None, files=None, data=None,
            params=None, auth=None, cookies=None, hooks=None, json=None):
        '''Prepares the entire request with the given parameters.'''
    
    from requests.structures import CaseInsensitiveDict, LookupDict
    
            if self._thread_local.pos is not None:
            # Rewind the file position indicator of the body to where
            # it was to resend the request.
            r.request.body.seek(self._thread_local.pos)
        s_auth = r.headers.get('www-authenticate', '')
    
    # Syntax sugar.
_ver = sys.version_info
    
    import pytest
    
    
class StreamConsumedError(RequestException, TypeError):
    '''The content for this response was already consumed'''
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
    
def get_args(args_list):
    parser = argparse.ArgumentParser(
        description='ansible inventory script reading from landscape cluster')
    mutex_group = parser.add_mutually_exclusive_group(required=True)
    help_list = 'list all hosts from landscape cluster'
    mutex_group.add_argument('--list', action='store_true', help=help_list)
    help_host = 'display variables for a host'
    mutex_group.add_argument('--host', help=help_host)
    return parser.parse_args(args_list)
    
    # Dynamic inventory script which lets you use nodes discovered by Serf
# (https://serfdom.io/).
#
# Requires the `serfclient` Python module from
# https://pypi.python.org/pypi/serfclient
#
# Environment variables
# ---------------------
#   - `SERF_RPC_ADDR`
#   - `SERF_RPC_AUTH`
#
# These variables are described at https://www.serfdom.io/docs/commands/members.html#_rpc_addr
    
        digest = hash_func()
    data = to_bytes(data, errors='surrogate_or_strict')
    digest.update(data)
    return digest.hexdigest()
    
        The host identifier may be a hostname (qualified or not), an IPv4 address,
    or an IPv6 address. If allow_ranges is True, then any of those may contain
    [x:y] range specifications, e.g. foo[1:3] or foo[0:5]-bar[x-z].
    
        @mock.patch('pkg_resources.get_distribution', side_effect=build_distribution)
    def test_check_minimum_pkg_version(self, mockobj):
        self.assertTrue(check_min_pkg_version('foobar', '0.4.0'))
        self.assertTrue(check_min_pkg_version('foobar', '0.5.0'))
        self.assertFalse(check_min_pkg_version('foobar', '0.6.0'))
    
    
class TerminalModule(TerminalBase):
    
        def on_open_shell(self):
        try:
            self._exec_cli_command(b'environment no more')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
            cert = os.path.join(cert_and_key_dir, 'cert')
        shutil.copy(cert_path, cert)
        key = os.path.join(cert_and_key_dir, 'key')
        shutil.copy(key_path, key)
        if chain_path:
            chain = os.path.join(cert_and_key_dir, 'chain')
            shutil.copy(chain_path, chain)
        else:
            chain = None
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
    'repoze.sphinx.autointerface',
]
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
    def kuwo_playlist_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_content(url)
    matched=set(re.compile('yinyue/(\d+)').findall(html))#reduce duplicated
    for rid in matched:
        kuwo_download_by_rid(rid,output_dir,merge,info_only)
    
        print_info(site_info, title, ext, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir=output_dir, merge=merge)
    
        # mgid%3Auma%3Avideo%3Amtv81.com%3A897974
    vid = match1(html, r'getTheVideo\('(.*?)'')
    xml = parseString(
        get_content('http://intl.esperanto.mtvi.com/www/xml/media/mediaGen.jhtml?uri={}&flashPlayer=LNX%2013,0,0,206&geo=CN&sid=123456'.format(vid)))