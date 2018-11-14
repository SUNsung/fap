
        
        import io
import optparse
    
    lazy_extractors_filename = sys.argv[1]
if os.path.exists(lazy_extractors_filename):
    os.remove(lazy_extractors_filename)
    
    import os
from os.path import dirname as dirn
import sys
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            if error is None:
            # store the user id in a new session and return to the index
            session.clear()
            session['user_id'] = user['id']
            return redirect(url_for('index'))
    
    import pytest
from flaskr import create_app
from flaskr.db import get_db, init_db
    
    
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
            app = Flask(__name__)
        app.session_interface = MySessionInterface()
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    import idna
import urllib3
import chardet
    
    This module provides the capabilities for the Requests hooks system.
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
        def test_decode(self):
        self.assertEqual('x', self.field.decode('x'))
    
    AUTOHSTS_STEPS = [60, 300, 900, 3600, 21600, 43200, 86400]
'''AutoHSTS increase steps: 1min, 5min, 15min, 1h, 6h, 12h, 24h'''
    
        def verify_fnmatch(self, arg, hit=True):
        '''Test if Include was correctly parsed.'''
        from certbot_apache import parser
        self.parser.add_dir(parser.get_aug_path(self.parser.loc['default']),
                            'Include', [arg])
        if hit:
            self.assertTrue(self.parser.find_dir('FNMATCH_DIRECTIVE'))
        else:
            self.assertFalse(self.parser.find_dir('FNMATCH_DIRECTIVE'))
    
    import mock
    
            responses = self.sni.perform()
        mock_setup_cert.assert_called_once_with(achall)
    
        DocumentRoot {document_root}
</VirtualHost>