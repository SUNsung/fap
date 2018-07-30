
        
            def test_facebook_matching(self):
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/Shiniknoh#!/photo.php?v=10153317450565268'))
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/cindyweather?fref=ts#!/photo.php?v=10152183998945793'))
    
        def test_secondary_proxy_http(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('http://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
            info_dict = self._extract_from_id(mvp_id, webpage)
        info_dict['display_id'] = display_id
    
            # XXX not implemented yet
        entdig = None
        p_parsed = urlparse(url)
        #: path is request-uri defined in RFC 2616 which should not be empty
        path = p_parsed.path or '/'
        if p_parsed.query:
            path += '?' + p_parsed.query
    
    
class CookieConflictError(RuntimeError):
    '''There are two cookies that meet the criteria specified in the cookie jar.
    Use .get and .set and include domain and path args in order to be more specific.
    '''
    
        def get(self, url, **kwargs):
        r'''Sends a GET request. Returns :class:`Response` object.
    
        def _advance(self):
        ''' Return the value of the current token and read the next one into
            self.cur_token.
        '''
        cur_val = None if self.cur_token is None else self.cur_token.value
        try:
            self.cur_token = next(self._tokenizer)
        except StopIteration:
            self.cur_token = None
        return cur_val
    
    
def main(root=ROOT_DIR, filename=GLOBALS_FILE,
         filters=None, columns=COLUMN_NAMES, sort=None, group=None,
         verbosity=VERBOSITY, rc=1):
    
    def run_latency_tests(max_threads):
    for task in latency_tasks:
        print('Background CPU task:', task.__doc__)
        print()
        func, args = task()
        nthreads = 0
        while nthreads <= max_threads:
            results = run_latency_test(func, args, nthreads)
            n = len(results)
            # We print out milliseconds
            lats = [1000 * (t2 - t1) for (t1, t2) in results]
            #print(list(map(int, lats)))
            avg = sum(lats) / n
            dev = (sum((x - avg) ** 2 for x in lats) / n) ** 0.5
            print('CPU threads=%d: %d ms. (std dev: %d ms.)' % (nthreads, avg, dev), end='')
            print()
            #print('    [... from %d samples]' % n)
            nthreads += 1
        print()
    
    By Guido van Rossum, demystified after a version by Fredrik Lundh.
'''
    
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