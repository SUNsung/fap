
        
            def save(self, must_create=False):
        '''
        To save, get the session key as a securely signed string and then set
        the modified flag so that the cookie is set on the client for the
        current request.
        '''
        self._session_key = self._get_session_key()
        self.modified = True
    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
        app.add_node(settingslist_node)
    app.add_directive('settingslist', SettingsListDirective)
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
    
class Command(ScrapyCommand):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider', default=None,
            help='use this spider without looking for one')
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
            help='set spider argument (may be repeated)')
        parser.add_option('--pipelines', action='store_true',
            help='process items through pipelines')
        parser.add_option('--nolinks', dest='nolinks', action='store_true',
            help='don't show links to follow (extracted requests)')
        parser.add_option('--noitems', dest='noitems', action='store_true',
            help='don't show scraped items')
        parser.add_option('--nocolour', dest='nocolour', action='store_true',
            help='avoid using pygments to colorize the output')
        parser.add_option('-r', '--rules', dest='rules', action='store_true',
            help='use CrawlSpider rules to discover the callback')
        parser.add_option('-c', '--callback', dest='callback',
            help='use this callback for parsing, instead looking for a callback')
        parser.add_option('-m', '--meta', dest='meta',
            help='inject extra meta into the Request, it must be a valid raw json string')
        parser.add_option('-d', '--depth', dest='depth', type='int', default=1,
            help='maximum depth for parsing requests [default: %default]')
        parser.add_option('-v', '--verbose', dest='verbose', action='store_true',
            help='print each depth level one by one')
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
            cookies = [self._format_cookie(x) for x in cookie_list]
        headers = {'Set-Cookie': cookies}
        response = Response(request.url, headers=headers)
    
    from . import case, suite, util
    
        def test_exception_in_except_clause(self):
        def f(p):
            1/0
        def g(p):
            try:
                f(p)
            except:
                try: f(p)
                except: pass
        f_ident = ident(f)
        g_ident = ident(g)
        self.check_events(g, [(1, 'call', g_ident),
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              (3, 'call', f_ident),
                              (3, 'return', f_ident),
                              (1, 'return', g_ident),
                              ])
    
    import os
import subprocess
import sys
import sysconfig
import tempfile
import unittest
from test import support
from test.support.script_helper import (
    spawn_python, kill_python, assert_python_ok, assert_python_failure,
    interpreter_requires_environment
)
    
        def testSeekForwardAcrossStreams(self):
        self.createTempFile(streams=2)
        with BZ2File(self.filename) as bz2f:
            self.assertRaises(TypeError, bz2f.seek)
            bz2f.seek(len(self.TEXT) + 150)
            self.assertEqual(bz2f.read(), self.TEXT[150:])
    
    from email.message import EmailMessage
from email.policy import SMTP