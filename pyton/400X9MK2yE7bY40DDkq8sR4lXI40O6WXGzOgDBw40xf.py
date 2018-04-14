
        
                current = current.parent
    
        def get_expiration_time(self, app, session):
        '''A helper method that returns an expiration date for the session
        or ``None`` if the session is linked to the browser session.  The
        default implementation returns now + the permanent session
        lifetime configured on the application.
        '''
        if session.permanent:
            return datetime.utcnow() + app.permanent_session_lifetime
    
    from jinja2 import BaseLoader, Environment as BaseEnvironment, \
     TemplateNotFound
    
        When you want to decorate a pluggable view you will have to either do that
    when the view function is created (by wrapping the return value of
    :meth:`as_view`) or you can use the :attr:`decorators` attribute::
    
    
def parse_date(string):
    string = _date_strip_re.sub('', string)
    return datetime.strptime(string, '%B %d %Y')
    
        @subgroup.command(with_appcontext=True)
    def test2():
        click.echo(current_app.name)
    
    
def test_explicit_instance_paths(modules_tmpdir):
    with pytest.raises(ValueError) as excinfo:
        flask.Flask(__name__, instance_path='instance')
    assert 'must be absolute' in str(excinfo.value)
    
        def test_print(self):
        d = deque(range(200))
        d.append(d)
        try:
            support.unlink(support.TESTFN)
            fo = open(support.TESTFN, 'w')
            print(d, file=fo, end='')
            fo.close()
            fo = open(support.TESTFN, 'r')
            self.assertEqual(fo.read(), repr(d))
        finally:
            fo.close()
            support.unlink(support.TESTFN)
    
        def _scan_once(string, idx):
        try:
            nextchar = string[idx]
        except IndexError:
            raise StopIteration(idx) from None
    
            x.value = -99
        self.assertEqual(res.contents.value, -99)
    
        def test_print(self):
        try:
            fo = open(support.TESTFN, 'w')
            print(False, True, file=fo)
            fo.close()
            fo = open(support.TESTFN, 'r')
            self.assertEqual(fo.read(), 'False True\n')
        finally:
            fo.close()
            os.remove(support.TESTFN)