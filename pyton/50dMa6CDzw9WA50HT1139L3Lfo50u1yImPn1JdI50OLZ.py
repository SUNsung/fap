
        
        
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
    
def test_index(client, auth):
    response = client.get('/')
    assert b'Log In' in response.data
    assert b'Register' in response.data
    
        In both cases (loading from any Python file or loading from modules),
    only uppercase keys are added to the config.  This makes it possible to use
    lowercase values in the config file for temporary values that are not added
    to the config or to define the config keys in the same file that implements
    the application.
    
        Filter the flashed messages to one or more categories by providing those
    categories in `category_filter`.  This allows rendering categories in
    separate html blocks.  The `with_categories` and `category_filter`
    arguments are distinct:
    
        return EnvironBuilder(path, base_url, *args, **kwargs)
    
        def dispatch_request(self):
        '''Subclasses have to override this method to implement the
        actual view function code.  This method is called with all
        the arguments from the URL rule.
        '''
        raise NotImplementedError()
    
    import numpy as np
    
                plt.text((i + 0.02) / len(algorithms), 0.98, alg,
                     transform=ax.transAxes,
                     ha='left',
                     va='top',
                     bbox=dict(facecolor='w', edgecolor='w', alpha=0.5))
    
    
if __name__ == '__main__':
    samples_range = np.linspace(1000, 5000, 5).astype(np.int)
    features_range = np.linspace(1000, 5000, 5).astype(np.int)
    results = compute_bench(samples_range, features_range)
    max_time = max(np.max(t) for t in results.values())
    
        ax.set_xlabel('n_samples')
    ax.set_ylabel('n_features')
    ax.set_zlabel('Time (s)')
    ax.legend()
    plt.show()

    
        scikit_classifier_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
    # Output in order: dev, stable, decreasing other version
seen = set()
for name in (NAMED_DIRS +
             sorted((k for k in dirs if k[:1].isdigit()),
                    key=LooseVersion, reverse=True)):
    version_num, pdf_size = dirs[name]
    if version_num in seen:
        # symlink came first
        continue
    else:
        seen.add(version_num)
    name_display = '' if name[:1].isdigit() else ' (%s)' % name
    path = 'http://scikit-learn.org/%s' % name
    out = ('* `Scikit-learn %s%s documentation <%s/documentation.html>`_'
           % (version_num, name_display, path))
    if pdf_size is not None:
        out += (' (`PDF %s <%s/_downloads/scikit-learn-docs.pdf>`_)'
                % (pdf_size, path))
    print(out)

    
    __version__ = '0.2.0'
__author__ = 'Steven Loria'
__license__ = 'MIT'
    
    del sys

    
        def start_parsing(self, url, opts):
        self.crawler_process.crawl(self.spidercls, **opts.spargs)
        self.pcrawler = list(self.crawler_process.crawlers)[0]
        self.crawler_process.start()
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
            if self.slot.scheduler.has_pending_requests():
            # scheduler has pending requests
            return False
    
    
def write_loop_file(records_number, loop_file_path, file_name):
    with open(loop_file_path, 'a') as file:
        for i in range(records_number):
            file.write('file '{}'\n'.format(file_name))
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(urls, title, ext, size, output_dir, merge=False)
    
        @classmethod
    def checksum(cls, sha1_str):
        if len(sha1_str) != 41:
            return False
        if not re.match(r'[0-9A-Za-z]{41}', sha1_str):
            return False
        sha1 = sha1_str[:-1]
        if (15 & sum([int(char, 16) for char in sha1])) == int(sha1_str[-1], 16):
            return True
        return False
    
    __all__ = ['giphy_download']
    
                if title is None:
                response = request.urlopen(request.Request(real_url))
                if response.headers['content-disposition']:
                    filename = parse.unquote(r1(r'filename='?(.+)'?', response.headers['content-disposition'])).split('.')
                    title = ''.join(filename[:-1])
        except: pass
    
    # The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#
# This is also used if you do content translation via gettext catalogs.
# Usually you set 'language' from the command line for these cases.
language = None
    
        def _on_up_down(self, channel, click_type, was_queued, time_diff):
        '''Update device state, if event was not queued.'''
        import pyflic
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
    
def _retrieve_list(host, token, **kwargs):
    '''Get device list for the given host.'''
    url = 'http://{}/cgi-bin/luci/;stok={}/api/misystem/devicelist'
    url = url.format(host, token)
    try:
        res = requests.get(url, timeout=5, **kwargs)
    except requests.exceptions.Timeout:
        _LOGGER.exception(
            'Connection to the router timed out at URL %s', url)
        return
    if res.status_code != 200:
        _LOGGER.exception(
            'Connection failed with http code %s', res.status_code)
        return
    try:
        result = res.json()
    except ValueError:
        # If json decoder could not parse the response
        _LOGGER.exception('Failed to parse response from mi router')
        return
    try:
        xiaomi_code = result['code']
    except KeyError:
        _LOGGER.exception(
            'No field code in response from mi router. %s', result)
        return
    if xiaomi_code == 0:
        try:
            return result['list']
        except KeyError:
            _LOGGER.exception('No list in response from mi router. %s', result)
            return
    else:
        _LOGGER.info(
            'Receive wrong Xiaomi code %s, expected 0 in response %s',
            xiaomi_code, result)
        return
    
    
class Dominos():
    '''Main Dominos service.'''
    
            if payload_dict:
            payload = '{%s}' % ','.join('{}:{}'.format(key, val)
                                        for key, val in
                                        payload_dict.items())
    
        def startup(self, event):
        '''Start the watcher.'''
        self._observer.start()
    
    
GRAPH_SCHEMA = vol.Schema({
    vol.Required(CONF_ENTITIES): cv.entity_ids,
    vol.Optional(CONF_NAME): cv.string,
    vol.Optional(CONF_HOURS_TO_SHOW, default=24): vol.Range(min=1),
    vol.Optional(CONF_REFRESH, default=0): vol.Range(min=0),
})