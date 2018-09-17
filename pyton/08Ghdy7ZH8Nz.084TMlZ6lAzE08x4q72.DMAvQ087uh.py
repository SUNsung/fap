
        
            cert = None
    if args.cert:
        cert = args.cert
        if args.cert_key:
            cert = cert, args.cert_key
    
    from httpie.utils import repr_dict_nice
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        def run_tests(self):
        import pytest
        sys.exit(pytest.main(self.test_args))
    
            actual = get_unique_filename(orig_name, attempts(unique_on_attempt))
        assert expected == actual
    
    from utils import MockEnvironment, http, HTTP_OK, COLOR, CRLF
from httpie import ExitStatus
from httpie.compat import urlopen
from httpie.output.formatters.colors import get_lexer
    
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
    
    if os.environ.get('CONVERT_README'):
    import pypandoc
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    
@pytest.mark.parametrize('script, output', [
    ('vim', invalid_operation('vim')),
    ('apt-get', '')])
def test_not_match(script, output):
    assert not match(Command(script, output))
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def load(self):
        '''
        Load the session data and return a dictionary.
        '''
        raise NotImplementedError('subclasses of SessionBase must provide a load() method')
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
        @cached_property
    def model(self):
        return self.get_model_class()
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
        @staticmethod
    def get_linux_firefox_path():
        home_path = os.path.expanduser('~')
        firefox_path = os.path.join(home_path, '.mozilla/firefox')
        if not os.path.isdir(firefox_path):
            return
    
        def _simple_check_worker(self):
        time_now = time.time()
    
        return out
    
        ready = True  # checked by launcher.module_init
    
    proxy_server.serve_forever()
    
        kwargs = {}
    any(kwargs.__setitem__(x[2:].lower(), headers.pop(x)) for x in headers.keys() if x.startswith('G-'))
    
    
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue
    
    
class MissingTokenException(MismatchedTokenException):
    '''
    We were expecting a token but it's not found.  The current token
    is actually what we wanted next.
    '''
    
    
    def getLine(self):
        '''ANTLR tracks the line information automatically'''