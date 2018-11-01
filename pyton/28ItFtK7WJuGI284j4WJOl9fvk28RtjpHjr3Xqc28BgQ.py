
        
        
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
        releaser = GitHubReleaser()
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
if __name__ == '__main__':
    main()

    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    ROOT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
README_FILE = os.path.join(ROOT_DIR, 'README.md')
    
        def test_vimeo_matching(self):
        self.assertMatch('https://vimeo.com/channels/tributes', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259/53576664', ['vimeo'])
        self.assertMatch('https://vimeo.com/user7108434', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user7108434/videos', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user21297594/review/75524534/3c257a1b5d', ['vimeo:review'])
    
            if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password))
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
            if not title:
            error = 'Title is required.'
    
    
# Certain versions of pypy have a bug where clearing the exception stack
# breaks the __exit__ function in a very peculiar way.  The second level of
# exception blocks is necessary because pypy seems to forget to check if an
# exception happened until the next bytecode instruction?
#
# Relevant PyPy bugfix commit:
# https://bitbucket.org/pypy/pypy/commits/77ecf91c635a287e88e60d8ddb0f4e9df4003301
# According to ronan on #pypy IRC, it is released in PyPy2 2.3 and later
# versions.
#
# Ubuntu 14.04 has PyPy 2.2.1, which does exhibit this bug.
BROKEN_PYPY_CTXMGR_EXIT = False
if hasattr(sys, 'pypy_version_info'):
    class _Mgr(object):
        def __enter__(self):
            return self
        def __exit__(self, *args):
            if hasattr(sys, 'exc_clear'):
                # Python 3 (PyPy3) doesn't have exc_clear
                sys.exc_clear()
    try:
        try:
            with _Mgr():
                raise AssertionError()
        except:
            raise
    except TypeError:
        BROKEN_PYPY_CTXMGR_EXIT = True
    except AssertionError:
        pass

    
        def after_app_request(self, f):
        '''Like :meth:`Flask.after_request` but for a blueprint.  Such a function
        is executed after each request, even if outside of the blueprint.
        '''
        self.record_once(lambda s: s.app.after_request_funcs
            .setdefault(None, []).append(f))
        return f
    
            -   a string: in this case the object with that name will be imported
        -   an actual object reference: that object is used directly
    
    
def _render(template, context, app):
    '''Renders the template and fires the signal'''
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
        @property
    def body(self):
        '''Return a `bytes` with the message's body.'''
        raise NotImplementedError()
    
        Assumes `from __future__ import division`.
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    This is useful as it reduces the number of connections between objects,
since the sender does not need explicit knowledge of the handler, and
the receiver won't need to refer to all potential receivers, but keeps
a reference to a single successor.
    
    
if __name__ == '__main__':
    main()
    
    ### OUTPUT ###
# Counting to two...
# one two
# Counting to five...
# one two three four five

    
        def insert(self):
        print('Inserting the execution begin status in the Database')
        time.sleep(0.1)
        # Following code is to simulate a communication from DB to TC
        if random.randrange(1, 4) == 3:
            return -1
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)
    
    
if __name__ == '__main__':
    main()
    
        def or_specification(self, candidate):
        raise NotImplementedError()
    
        def toggle_amfm(self):
        self.state.toggle_amfm()
    
        '''A pet shop'''
    
    class TimeDisplay(object):
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.