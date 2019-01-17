
        
        if len(sys.argv) > 1:
    METHOD = 'LIST'
    LIST = open(sys.argv[1]).read().decode('utf8').strip()
else:
    METHOD = 'EURISTIC'
    
    EXTRA_ARGS = {
    'recode-video': ['--arguments', 'mp4 flv ogg webm mkv', '--exclusive'],
    }
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
        diropts = []
    for opt in opts_dir:
        if opt._short_opts:
            diropts.extend(opt._short_opts)
        if opt._long_opts:
            diropts.extend(opt._long_opts)
    
        def test_add_extra_info(self):
        test_dict = {
            'extractor': 'Foo',
        }
        extra_info = {
            'extractor': 'Bar',
            'playlist': 'funny videos',
        }
        YDL.add_extra_info(test_dict, extra_info)
        self.assertEqual(test_dict['extractor'], 'Foo')
        self.assertEqual(test_dict['playlist'], 'funny videos')
    
    from __future__ import unicode_literals
    
        def test_main_exec(self):
        subprocess.check_call([sys.executable, 'youtube_dl/__main__.py', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
        Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
    
def test_update(client, auth, app):
    auth.login()
    assert client.get('/1/update').status_code == 200
    client.post('/1/update', data={'title': 'updated', 'body': ''})
    
        def fake_init_db():
        Recorder.called = True
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            # push a context so flask.json can use app's json attributes
        with app.app_context():
            kwargs['data'] = json_dumps(kwargs.pop('json'))
    
        @property
    def max_content_length(self):
        '''Read-only view of the ``MAX_CONTENT_LENGTH`` config key.'''
        if current_app:
            return current_app.config['MAX_CONTENT_LENGTH']
    
        auto_json = args.data and not args.form
    if args.json or auto_json:
        default_headers['Accept'] = JSON_ACCEPT
        if args.json or (auto_json and args.data):
            default_headers['Content-Type'] = JSON_CONTENT_TYPE
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
        message = BINARY_SUPPRESSED_NOTICE
    
        def __call__(self, r):
        '''
        Override username/password serialization to allow unicode.
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    import pytest
    
    error_msg = None
    
    del sys

    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
        def syntax(self):
        return '[options]'
    
            if self.paused:
            return
    
        def match(self, request: httputil.HTTPServerRequest) -> Optional[Dict[str, Any]]:
        # Look for default host if not behind load balancer (for debugging)
        if 'X-Real-Ip' not in request.headers:
            if self.host_pattern.match(self.application.default_host):
                return {}
        return None
    
        def generate(self, writer: '_CodeWriter') -> None:
        writer.write_line('%s:' % self.statement, self.line)
        with writer.indent():
            self.body.generate(writer)
            # Just in case the body was empty
            writer.write_line('pass', self.line)