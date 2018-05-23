
        
        
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
            headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
        if include_debug_info:
        print_debug_info(env)
        if args == ['--debug']:
            return ExitStatus.OK
    
    
CLIENT_CERT = os.path.join(TESTS_ROOT, 'client_certs', 'client.crt')
CLIENT_KEY = os.path.join(TESTS_ROOT, 'client_certs', 'client.key')
CLIENT_PEM = os.path.join(TESTS_ROOT, 'client_certs', 'client.pem')
    
    
SSL_VERSION_ARG_MAPPING = {
    'ssl2.3': 'PROTOCOL_SSLv23',
    'ssl3': 'PROTOCOL_SSLv3',
    'tls1': 'PROTOCOL_TLSv1',
    'tls1.1': 'PROTOCOL_TLSv1_1',
    'tls1.2': 'PROTOCOL_TLSv1_2',
}
SSL_VERSION_ARG_MAPPING = {
    cli_arg: getattr(ssl, ssl_constant)
    for cli_arg, ssl_constant in SSL_VERSION_ARG_MAPPING.items()
    if hasattr(ssl, ssl_constant)
}
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    
@click.command()
@click.argument('catalog_file', type=click.Path())
def cli(catalog_file):
    # Read the old ones back.  Once we are in, we will never go.
    with open(catalog_file) as f:
        rv = json.load(f)['supported_locales']
    
    if __name__ == '__main__':
    main()

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def KeywordsFromSyntaxListOutput_JavaSyntax_test():
  expected_keywords = (
    'code', 'text', 'cols', 'datetime', 'disabled', 'shape', 'codetype', 'alt',
    'compact', 'style', 'valuetype', 'short', 'finally', 'continue', 'extends',
    'valign', 'bordercolor', 'do', 'return', 'rel', 'rules', 'void',
    'nohref', 'abbr', 'background', 'scrolling', 'instanceof', 'name',
    'summary', 'try', 'default', 'noshade', 'coords', 'dir', 'frame', 'usemap',
    'ismap', 'static', 'hspace', 'vlink', 'for', 'selected', 'rev', 'vspace',
    'content', 'method', 'version', 'volatile', 'above', 'new', 'charoff',
    'public', 'alink', 'enum', 'codebase', 'if', 'noresize', 'interface',
    'checked', 'byte', 'super', 'throw', 'src', 'language', 'package',
    'standby', 'script', 'longdesc', 'maxlength', 'cellpadding', 'throws',
    'tabindex', 'color', 'colspan', 'accesskey', 'float', 'while', 'private',
    'height', 'boolean', 'wrap', 'prompt', 'nowrap', 'size', 'rows', 'span',
    'clip', 'bgcolor', 'top', 'long', 'start', 'scope', 'scheme', 'type',
    'final', 'lang', 'visibility', 'else', 'assert', 'transient', 'link',
    'catch', 'true', 'serializable', 'target', 'lowsrc', 'this', 'double',
    'align', 'value', 'cite', 'headers', 'below', 'protected', 'declare',
    'classid', 'defer', 'false', 'synchronized', 'int', 'abstract', 'accept',
    'hreflang', 'char', 'border', 'id', 'native', 'rowspan', 'charset',
    'archive', 'strictfp', 'readonly', 'axis', 'cellspacing', 'profile',
    'multiple', 'object', 'action', 'pagex', 'pagey', 'marginheight', 'data',
    'class', 'frameborder', 'enctype', 'implements', 'break', 'gutter', 'url',
    'clear', 'face', 'switch', 'marginwidth', 'width', 'left' )
    
    
def Response_FromOmniCompleter_test():
  results = [ { 'word': 'test' } ]
  request = BuildOmnicompletionRequest( results )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
    js.load_plugin_modules(plugins)
modules = dict((k, m) for k, m in js.module.iteritems())
print 'JS_MODULES := ' + ' '.join(modules.iterkeys())
outputs = []
for name, module in modules.iteritems():
    outputs.extend(module.outputs)
    print 'JS_MODULE_OUTPUTS_%s := %s' % (name, ' '.join(module.outputs))
    print 'JS_MODULE_DEPS_%s := %s' % (name, ' '.join(module.dependencies))
    
    import os
import mimetypes
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
    
try:
    # place all r2 specific imports in here.  If there is a code error, it'll
    # get caught and the stack trace won't be presented to the user in
    # production
    from r2.config import extensions
    from r2.controllers.reddit_base import RedditController, UnloggedUser
    from r2.lib.cookies import Cookies
    from r2.lib.errors import ErrorSet
    from r2.lib.filters import (
        safemarkdown,
        scriptsafe_dumps,
        websafe,
        websafe_json,
    )
    from r2.lib import log, pages
    from r2.lib.strings import get_funny_translated_string
    from r2.lib.template_helpers import static
    from r2.lib.base import abort
    from r2.models.link import Link
    from r2.models.subreddit import DefaultSR, Subreddit
except Exception, e:
    if g.debug:
        # if debug mode, let the error filter up to pylons to be handled
        raise e
    else:
        # production environment: protect the code integrity!
        print 'HuffmanEncodingError: make sure your python compiles before deploying, stupid!'
        # kill this app
        os._exit(1)