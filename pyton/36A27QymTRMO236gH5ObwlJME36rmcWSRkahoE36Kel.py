
        
            def test_socks4a(self):
        self.assertTrue(isinstance(self._get_ip('socks4a'), compat_str))
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
    import re
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.

    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
            close_server.set()

    
        pyopenssl_info = {
        'version': None,
        'openssl_version': '',
    }
    if OpenSSL:
        pyopenssl_info = {
            'version': OpenSSL.__version__,
            'openssl_version': '%x' % OpenSSL.SSL.OPENSSL_VERSION_NUMBER,
        }
    cryptography_info = {
        'version': getattr(cryptography, '__version__', ''),
    }
    idna_info = {
        'version': getattr(idna, '__version__', ''),
    }
    
            self.concurrent -= 1
        return ''
    
        def extract_contracts(self, method):
        contracts = []
        for line in method.__doc__.split('\n'):
            line = line.strip()
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    
class UserAgentMiddleware(object):
    '''This middleware allows spiders to override the user_agent'''
    
        def request_seen(self, request):
        fp = self.request_fingerprint(request)
        if fp in self.fingerprints:
            return True
        self.fingerprints.add(fp)
        if self.file:
            self.file.write(fp + os.linesep)
    
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