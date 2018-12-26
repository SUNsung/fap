
        
            >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.asymmetric import rsa
import josepy as jose
import OpenSSL
    
    
    def init_augeas(self):
        ''' Initialize the actual Augeas instance '''
        import augeas
        self.aug = augeas.Augeas(
            # specify a directory to load our preferred lens from
            loadpath=constants.AUGEAS_LENS_DIR,
            # Do not save backup (we do it ourselves), do not load
            # anything by default
            flags=(augeas.Augeas.NONE |
                   augeas.Augeas.NO_MODL_AUTOLOAD |
                   augeas.Augeas.ENABLE_SPAN))
        # See if any temporary changes need to be recovered
        # This needs to occur before VirtualHost objects are setup...
        # because this will change the underlying configuration and potential
        # vhosts
        self.recovery_routine()
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
            for addr in vhost.addrs:
            if '_default_' == addr.get_addr():
                addrs.add(default_addr)
            else:
                addrs.add(
                    addr.get_sni_addr(
                        self.configurator.config.tls_sni_01_port))
    
    # If false, no index is generated.
#html_use_index = True
    
      # Didn't find the corresponding '//' comment.  If this file does not
  # contain any '//' comments at all, it could be that the compiler
  # only wants '/**/' comments, look for those instead.
  no_single_line_comments = True
  for i in xrange(1, len(raw_lines) - 1):
    line = raw_lines[i]
    if Match(r'^(?:(?:\'(?:\.|[^\'])*\')|(?:'(?:\.|[^'])*')|[^\''])*//', line):
      no_single_line_comments = False
      break