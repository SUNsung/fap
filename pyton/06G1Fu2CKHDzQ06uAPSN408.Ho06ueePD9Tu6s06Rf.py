
        
        
def test_login(client, auth):
    # test that viewing the page renders without template errors
    assert client.get('/auth/login').status_code == 200
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post is None

    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            try:
            with open(filename) as json_file:
                obj = json.loads(json_file.read())
        except IOError as e:
            if silent and e.errno in (errno.ENOENT, errno.EISDIR):
                return False
            e.strerror = 'Unable to load configuration file (%s)' % e.strerror
            raise
        return self.from_mapping(obj)
    
        def get_cookie_httponly(self, app):
        '''Returns True if the session cookie should be httponly.  This
        currently just returns the value of the ``SESSION_COOKIE_HTTPONLY``
        config var.
        '''
        return app.config['SESSION_COOKIE_HTTPONLY']
    
            :return: a :class:`~click.testing.Result` object.
        '''
        if cli is None:
            cli = self.app.cli
    
    
def test_on_first_run_from_current_shell(usage_tracker_io, shell_pid,
                                         shell, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    main()
    _assert_tracker_updated(usage_tracker_io, 12)
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    
no_such_subcommand_old = '''No such subcommand