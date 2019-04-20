
        
            if check_author and post['author_id'] != g.user['id']:
        abort(403)
    
        # test that successful login redirects to the index page
    response = auth.login()
    assert response.headers['Location'] == 'http://localhost/'
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
                try:
                environ = builder.get_environ()
            finally:
                builder.close()
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    no_match_output = '''
Listing... Done
'''
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
        def run_callback(self, response, cb):
        items, requests = [], []
    
    from scrapy.exceptions import NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.boto import is_botocore
from .http import HTTPDownloadHandler
    
            Same as Twisted's private _sslverify.ClientTLSOptions,
        except that VerificationError, CertificateError and ValueError
        exceptions are caught, so that the connection is not closed, only
        logging warnings.
        '''
    
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
    
    def message_html(title, banner, detail=''):
    MESSAGE_TEMPLATE = '''
    <html><head>
    <meta http-equiv='content-type' content='text/html;charset=utf-8'>
    <title>$title</title>
    <style><!--
    body {font-family: arial,sans-serif}
    div.nav {margin-top: 1ex}
    div.nav A {font-size: 10pt; font-family: arial,sans-serif}
    span.nav {font-size: 10pt; font-family: arial,sans-serif; font-weight: bold}
    div.nav A,span.big {font-size: 12pt; color: #0000cc}
    div.nav A {font-size: 10pt; color: black}
    A.l:link {color: #6f6f6f}
    A.u:link {color: green}
    //--></style>
    </head>
    <body text=#000000 bgcolor=#ffffff>
    <table border=0 cellpadding=2 cellspacing=0 width=100%>
    <tr><td bgcolor=#3366cc><font face=arial,sans-serif color=#ffffff><b>Message</b></td></tr>
    <tr><td> </td></tr></table>
    <blockquote>
    <H1>$banner</H1>
    $detail
    <p>
    </blockquote>
    <table width=100% cellpadding=0 cellspacing=0><tr><td bgcolor=#3366cc><img alt='' width=1 height=4></td></tr></table>
    </body></html>
    '''
    return string.Template(MESSAGE_TEMPLATE).substitute(title=title, banner=banner, detail=detail)
    
                    # not in range and not EOF/EOT, must be invalid symbol
                self.noViableAlt(s, input)
                return 0
    
                if isinstance(self.input, TreeNodeStream):
                self.extractInformationFromTreeNodeStream(self.input)
    
    class ClassicToken(Token):
    '''@brief Alternative token implementation.
    
    A Token object like we'd use in ANTLR 2.x; has an actual string created
    and associated with this object.  These objects are needed for imaginary
    tree nodes that have payload objects.  We need to create a Token object
    that has a string; the tree node will point at this token.  CommonToken
    has indexes into a char stream and hence cannot be used to introduce
    new strings.
    '''
    
    from homeassistant.core import HomeAssistant
from homeassistant.util.temperature import convert as convert_temperature
from homeassistant.const import PRECISION_HALVES, PRECISION_TENTHS
    
        args = parser.parse_args()
    
    from homeassistant.const import (
    LENGTH_KILOMETERS,
    LENGTH_MILES,
    LENGTH_FEET,
    LENGTH_METERS,
    UNIT_NOT_RECOGNIZED_TEMPLATE,
    LENGTH,
)
    
            if version.is_devrelease:
            to_change['dev'] = None
            to_change['pre'] = ('b', 0)
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b