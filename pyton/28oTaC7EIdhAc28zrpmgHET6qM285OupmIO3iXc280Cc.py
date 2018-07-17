
        
        Available hooks:
    
    
_schemes_by_var_prefix = [
    ('http', ['http']),
    ('https', ['https']),
    ('all', ['http', 'https']),
]
    
            HA1 = hash_utf8(A1)
        HA2 = hash_utf8(A2)
    
    def shorten_title(title):
    m1 = re.search('[[0-9]*]', title)
    m2 = re.search(''.*'', title)
    if m1:
        title = m1.group(0)
    if m2:
        title = ' '.join((title, m2.group(0)))   
    return title[:50] + ' [...]'    
    
    define('port', default=8888, help='run on the given port', type=int)
    
    
if __name__ == '__main__':
    main()

    
        html = response.body.decode(errors='ignore')
    return [urljoin(url, remove_fragment(new_url))
            for new_url in get_links(html)]
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
        def put(self, bucket_name):
        path = os.path.abspath(os.path.join(
            self.application.directory, bucket_name))
        if not path.startswith(self.application.directory) or \
           os.path.exists(path):
            raise web.HTTPError(403)
        os.makedirs(path)
        self.finish()
    
    
@gen.coroutine
def put(filenames):
    client = httpclient.AsyncHTTPClient()
    for filename in filenames:
        mtype = mimetypes.guess_type(filename)[0] or 'application/octet-stream'
        headers = {'Content-Type': mtype}
        producer = partial(raw_producer, filename)
        url_path = quote(os.path.basename(filename))
        response = yield client.fetch('http://localhost:8888/%s' % url_path,
                                      method='PUT',
                                      headers=headers,
                                      body_producer=producer)
        print(response)
    
    define('family', default='unspec',
       help='Address family to query: unspec, inet, or inet6')
    
    
def main():
    if not os.path.exists(TMPDIR):
        os.mkdir(TMPDIR)
    os.chdir(TMPDIR)
    for exe, url in PYTHON_VERSIONS:
        if os.path.exists(exe):
            print('%s already exists, skipping' % exe)
            continue
        print('Installing %s' % url)
        filename = download_to_cache(url)
        # http://blog.jaraco.com/2012/01/how-i-install-python-on-windows.html
        subprocess.check_call(['msiexec', '/i', filename,
                               'ALLUSERS=1', '/passive'])