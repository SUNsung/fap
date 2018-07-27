
        
            READY = 0
    IN_PROGRESS = 1
    COMPLETE = 2
    
    from mrjob.job import MRJob
    
        def remove_user(self, user_id):
        pass
    
    
class LookupService(object):
    
        exec('def reraise(tp, value, tb=None):\n raise tp, value, tb')
    
        if not git_is_clean():
        fail('You have uncommitted changes in git')
    
    
def test_installed_package_paths(limit_loader, modules_tmpdir,
                                 modules_tmpdir_prefix, purge_module,
                                 monkeypatch):
    installed_path = modules_tmpdir.mkdir('path')
    monkeypatch.syspath_prepend(installed_path)
    
    
def test_wsgi_errors_stream(app, client):
    @app.route('/')
    def index():
        app.logger.error('test')
        return ''
    
        flask.before_render_template.connect(record, app)
    try:
        rv = app.test_client().get('/')
        assert len(recorded) == 1
        template, context = recorded[0]
        assert template.name == 'simple_template.html'
        assert context['whiskey'] == 43
        assert rv.data == b'<h1>43</h1>'
    finally:
        flask.before_render_template.disconnect(record, app)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    from httpie import ExitStatus
from utils import http, HTTP_OK
    
        # This be set automatically once the plugin has been loaded.
    package_name = None
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
        def test_filename_from_url(self):
        assert 'foo.txt' == filename_from_url(
            url='http://example.org/foo',
            content_type='text/plain'
        )
        assert 'foo.html' == filename_from_url(
            url='http://example.org/foo',
            content_type='text/html; charset=utf8'
        )
        assert 'foo' == filename_from_url(
            url='http://example.org/foo',
            content_type=None
        )
        assert 'foo' == filename_from_url(
            url='http://example.org/foo',
            content_type='x-foo/bar'
        )
    
    import os
import sys
from .common import *
    
    EOF = -1
    
            This method has a side-effect: if we have seen this input for
        this rule and successfully parsed before, then seek ahead to
        1 past the stop token matched for this rule last time.
        '''