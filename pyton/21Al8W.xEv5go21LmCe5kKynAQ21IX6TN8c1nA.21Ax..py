
        
        import sys
import os
import textwrap
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    
if __name__ == '__main__':
    unittest.main()

    
        # register the database commands
    from flaskr import db
    db.init_app(app)
    
        if check_author and post['author_id'] != g.user['id']:
        abort(403)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        Internally, the dict key is suffixed with `__`, and the suffix is removed
    when deserializing.
    '''
    
        @app.route('/')
    def index():
        raise Exception('dummy')
    
        elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
            return '\r\n'.join(headers)
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
                yield line.decode(self.msg.encoding) \
                      .encode(self.output_encoding, 'replace') + lf
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        class Plugin(AuthPlugin):
        auth_type = 'test-require-false'
        auth_require = False
    
    
filenames = list(rst_filenames())
assert filenames
    
        E.g. if your `batch_size` is 64 and you use `gpus=2`,
    then we will divide the input into 2 sub-batches of 32 samples,
    process each sub-batch on one GPU, then return the full
    batch of 64 processed samples.
    
            # Load GoAgent CA
        with open(CertUtil.ca_keyfile, 'rb') as fp:
            content = fp.read()
        ca = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_privatekey = OpenSSL.crypto.load_privatekey(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_thumbprint = ca.digest('sha1')
        CertUtil.ca_subject = ca.get_subject()
        ca_cert_error = True
        if os.path.exists(CertUtil.ca_certfile):
            with open(CertUtil.ca_certfile, 'rb') as fp:
                ca_cert_error = fp.read() not in content
        if ca_cert_error:
            with open(CertUtil.ca_certfile, 'wb') as fp:
                fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, ca))
    
            network_ok = False
        for url in self.urls:
            if self._test_host(url):
                network_ok = True
                break
            else:
                if __name__ == '__main__':
                    xlog.warn('test %s fail', url)
                time.sleep(1)
    
    try:
    from io import BytesIO
except ImportError:
    from cStringIO import StringIO as BytesIO
try:
    from google.appengine.api import urlfetch
    from google.appengine.runtime import apiproxy_errors
except ImportError:
    urlfetch = None
try:
    import sae
except ImportError:
    sae = None
try:
    import bae.core.wsgi
except ImportError:
    bae = None
try:
    import socket
    import select
except ImportError:
    socket = None
try:
    import OpenSSL
except ImportError:
    OpenSSL = None
    
         CharStream input = new ANTLRFileStream('input');
     TLexer lex = new TLexer(input);
     TokenRewriteStream tokens = new TokenRewriteStream(lex);
     T parser = new T(tokens);
     parser.startRule();
    
    
    def getText(self):
        if self._text is not None:
            return self._text
    
    
def elu(x):
    '''指数线性单元'''
    return tf.nn.elu(x)
    
            a = softmax(tf.matmul(x, W) + b)  # attention
        o = tf.multiply(x, a)