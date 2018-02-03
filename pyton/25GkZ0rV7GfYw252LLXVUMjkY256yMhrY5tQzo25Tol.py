
        
        try:
    input = raw_input
except NameError:
    pass
    
    import io
import sys
import re
    
                    m = re.search(r'(?<=\s)u[\''](?!\)|,|$)', code)
                if m is not None:
                    self.assertTrue(
                        m is None,
                        'u present in %s, around %s' % (
                            fn, code[m.start() - 10:m.end() + 10]))
    
            return {
            '_type': 'playlist',
            'id': playlist_id,
            'title': title,
            'description': description,
            'entries': entries,
        }

    
            # API is inconsistent with errors
        if 'url' not in api_response or not api_response['url'] or 'error' in api_response:
            raise ExtractorError('Invalid url %s' % url)
    
    import re
    
    from .onet import OnetBaseIE
    
    
def secure_hash(filename, hash_func=sha1):
    ''' Return a secure hash hex digest of local file, None if file is not present or a directory. '''
    
    AnsibleDumper.add_representer(
    AnsibleMapping,
    yaml.representer.SafeRepresenter.represent_dict,
)
    
    import random
import threading
import time
    
    # change to False when exit: system tray exit menu, or Ctrl+C in console
# then GoAgent will quit
# Every long running thread should check it and exit when False
# gae_proxy/local/proxy.py will check 'keep_running' continuously in a loop
# if gae_proxy wants to be up, 'keep_running' should NOT be False
keep_running = True
    
                to_read = end - start + 1
            data = response.read(to_read)
            if not data:
                if time.time() - time_last_read > 20:
                    google_ip.report_connect_closed(response.ssl_sock.ip, 'receive fail')
                    response.close()
                    xlog.warn('read timeout t:%d len:%d left:%d %s %s', (time.time()-time_request)*1000, length, (end-start), host, url)
                    return
                else:
                    time.sleep(0.1)
                    continue
    
    
mimetypes.init()
    
        def __call__(self, environ, start_response):
        def safe_start_response(status, headers, exc_info=None):
            sanitized = []
            for name, value in headers:
                if self.has_bad_characters.search(value):
                    value = self.sanitizer.sub('', value)
                sanitized.append((name, value))
            return start_response(status, sanitized, exc_info)
        return self.app(environ, safe_start_response)
    
    
def register_api_templates(template_name, template_class):
    for style in ('api', 'api-html', 'api-compact'):
        tpm.add_handler(
            name=template_name,
            style=style,
            handler=template_class,
        )
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
        def __call__(self, environ, start_response):
        try:
            return RedditController.__call__(self, environ, start_response)
        except Exception as e:
            return handle_awful_failure('ErrorController.__call__: %r' % e)
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()