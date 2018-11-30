
        
            def deal_card(self):
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
        def __init__(self, results):
        self.results = results
        self.next = next
    
        def handle_budget_notifications(self, key, total):
        '''Call notification API if nearing or exceeded budget.'''
        ...
    
    
class HitCounts(MRJob):
    
    
class RemoveDuplicateUrls(MRJob):
    
        def crawled_similar(self, signature):
        '''Determine if we've already crawled a page matching the given signature'''
        pass
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    lazy_extractors_filename = sys.argv[1]
if os.path.exists(lazy_extractors_filename):
    os.remove(lazy_extractors_filename)
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
    import itertools
import json
import os
import re
import sys
    
    # -- Options for HTML output ----------------------------------------------
    
            password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x0b\xe6\xa4\xd9z\x0e\xb8\xb9\xd0\xd4i_\x85\x1d\x99\x98_\xe5\x80\xe7.\xbf\xa5\x83'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 32))
        self.assertEqual(decrypted, self.secret_msg)
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
            :param name: the optional name of the test, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_test(f, name=name)
            return f
        return decorator
    
    
def _lookup_app_object(name):
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return getattr(top, name)
    
            By default, this function returns ``SEND_FILE_MAX_AGE_DEFAULT`` from
        the configuration of :data:`~flask.current_app`.
    
            return list(result)
    
            # on exit we want to clean up earlier.  Normally the request context
        # stays preserved until the next request in the same thread comes
        # in.  See RequestGlobals.push() for the general behavior.
        top = _request_ctx_stack.top
        if top is not None and top.preserved:
            top.pop()
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
    
def get_requests_kwargs(args, base_headers=None):
    '''
    Translate our `args` into `requests.request` keyword arguments.
    
            status_line = 'HTTP/{version} {status} {reason}'.format(
            version=version,
            status=original.status,
            reason=original.reason
        )
        headers = [status_line]
        try:
            # `original.msg` is a `http.client.HTTPMessage` on Python 3
            # `_headers` is a 2-tuple
            headers.extend(
                '%s: %s' % header for header in original.msg._headers)
        except AttributeError:
            # and a `httplib.HTTPMessage` on Python 2.x
            # `headers` is a list of `name: val<CRLF>`.
            headers.extend(h.strip() for h in original.msg.headers)
    
        def __call__(self, r):
        '''
        Override username/password serialization to allow unicode.
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    import httpie
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME + SEP_CREDENTIALS + PASSWORD
            assert username == USERNAME
            assert password == PASSWORD
            return basic_auth()
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
KEY = jose.JWKRSA.load(test_util.load_vector('rsa512_key.pem'))
    
    csr = OpenSSL.crypto.load_certificate_request(
    OpenSSL.crypto.FILETYPE_ASN1, pkg_resources.resource_string(
        'acme', os.path.join('testdata', 'csr.der')))
try:
    acme.request_issuance(jose.util.ComparableX509(csr), (authzr,))
except messages.Error as error:
    print ('This script is doomed to fail as no authorization '
           'challenges are ever solved. Error from server: {0}'.format(error))

    
    ALL_SSL_OPTIONS_HASHES = [
    '2086bca02db48daf93468332543c60ac6acdb6f0b58c7bfdf578a5d47092f82a',
    '4844d36c9a0f587172d9fa10f4f1c9518e3bcfa1947379f155e16a70a728c21a',
    '5a922826719981c0a234b1fbcd495f3213e49d2519e845ea0748ba513044b65b',
    '4066b90268c03c9ba0201068eaa39abbc02acf9558bb45a788b630eb85dadf27',
    'f175e2e7c673bd88d0aff8220735f385f916142c44aa83b09f1df88dd4767a88',
    'cfdd7c18d2025836ea3307399f509cfb1ebf2612c87dd600a65da2a8e2f2797b',
    '80720bd171ccdc2e6b917ded340defae66919e4624962396b992b7218a561791',
    'c0c022ea6b8a51ecc8f1003d0a04af6c3f2bc1c3ce506b3c2dfc1f11ef931082',
]
'''SHA256 hashes of the contents of previous versions of all versions of MOD_SSL_CONF_SRC'''
    
        def test_include_missing(self):
        # This should miss
        self.verify_fnmatch('test_*.onf', False)
    
        def test_same_server(self):
        from certbot_apache.obj import VirtualHost
        no_name1 = VirtualHost(
            'fp', 'vhp', set([self.addr1]), False, False, None)
        no_name2 = VirtualHost(
            'fp', 'vhp', set([self.addr2]), False, False, None)
        no_name3 = VirtualHost(
            'fp', 'vhp', set([self.addr_default]),
            False, False, None)
        no_name4 = VirtualHost(
            'fp', 'vhp', set([self.addr2, self.addr_default]),
            False, False, None)
    
    
class ApacheTlsSni01(common.TLSSNI01):
    '''Class that performs TLS-SNI-01 challenges within the Apache configurator
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
            # avoid UnicodeDecodeError on Windows
        undecodable_path = b'' if sys.platform == 'win32' else b'f\xf2\xf2'
    
                p = subprocess.Popen(
                (sys.executable, '-c', 'import sys; print(ascii(sys.argv[1]))', text),
                stdout=subprocess.PIPE,
                env=env)
            stdout, stderr = p.communicate()
            self.assertEqual(stdout, expected)
            self.assertEqual(p.returncode, 0)
    
            # Decompress rest of data
        out.append(bzd.decompress(self.DATA[300:]))
        self.assertEqual(b''.join(out), self.TEXT)
    
    def test():
    PROCESSES = 4
    print('Creating pool with %d processes\n' % PROCESSES)