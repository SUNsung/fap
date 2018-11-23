
        
            @app.route('/hello')
    def hello():
        return 'Hello, World!'
    
    from flask import (
    Blueprint, flash, g, redirect, render_template, request, session, url_for
)
from werkzeug.security import check_password_hash, generate_password_hash
    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        def record(self, func):
        '''Registers a function that is called when the blueprint is
        registered on the application.  This function is called with the
        state as argument as returned by the :meth:`make_setup_state`
        method.
        '''
        if self._got_registered_once and self.warn_on_modifications:
            from warnings import warn
            warn(Warning('The blueprint was already registered once '
                         'but is getting modified now.  These changes '
                         'will not show up.'))
        self.deferred_functions.append(func)
    
        def __init__(self, app):
        self.app = app
    
        assert (
        not (base_url or subdomain or url_scheme)
        or (base_url is not None) != bool(subdomain or url_scheme)
    ), 'Cannot pass 'subdomain' or 'url_scheme' with 'base_url'.'
    
            The arguments passed to :meth:`as_view` are forwarded to the
        constructor of the class.
        '''
        def view(*args, **kwargs):
            self = view.view_class(*class_args, **class_kwargs)
            return self.dispatch_request(*args, **kwargs)
    
    (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = '''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
    
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
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
    
    
class RetryError(RequestException):
    '''Custom retries logic failed'''
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        def test_repr(self):
        assert repr(self.case_insensitive_dict) == '{'Accept': 'application/json'}'
    
                    try:
                    low_conn.putrequest(request.method,
                                        url,
                                        skip_accept_encoding=True)
    
        def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = []
        self.test_suite = True
    
        try:
        json_data = get_coub_data(html)
        title, video_url, audio_url = get_title_and_urls(json_data)
        video_file_name, video_file_path = get_file_path(merge, output_dir, title, video_url)
        audio_file_name, audio_file_path = get_file_path(merge, output_dir, title, audio_url)
        download_url(audio_url, merge, output_dir, title, info_only)
        download_url(video_url, merge, output_dir, title, info_only)
        if not info_only:
            try:
                fix_coub_video_file(video_file_path)
                audio_duration = float(ffmpeg.ffprobe_get_media_duration(audio_file_path))
                video_duration = float(ffmpeg.ffprobe_get_media_duration(video_file_path))
                loop_file_path = get_loop_file_path(title, output_dir)
                single_file_path = audio_file_path
                if audio_duration > video_duration:
                    write_loop_file(int(audio_duration / video_duration), loop_file_path, video_file_name)
                else:
                    single_file_path = audio_file_path
                    write_loop_file(int(video_duration / audio_duration), loop_file_path, audio_file_name)
    
        bokecc_metas = matchall(content, bokecc_patterns)
    for meta in bokecc_metas:
        found = True
        bokecc.bokecc_download_by_id(meta[1], output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    
        def hash_function(self, key):
        return key % self.size_table
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
    start_time = time.time()
print('creating word list...')
path = os.path.split(os.path.realpath(__file__))
word_list = sorted(list(set([word.strip().lower() for word in open(path[0] + '/words')])))