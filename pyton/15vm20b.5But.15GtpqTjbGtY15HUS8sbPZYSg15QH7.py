
        
                # Insert the include statement to MANIFEST.in if not present
        with open(manifest_path, 'a+') as manifest:
            manifest.seek(0)
            manifest_content = manifest.read()
            if not 'include fastentrypoints.py' in manifest_content:
                manifest.write(('\n' if manifest_content else '')
                               + 'include fastentrypoints.py')
    
    Options:
  -h  This help text.
  -q  Loggable output - no progress indicator
  -qq No output except for errors
  -d  Download only - do NOT install or unpack archives
  -s  No-act. Perform ordering simulation
  -y  Assume Yes to all queries and do not prompt
  -f  Attempt to correct a system with broken dependencies in place
  -m  Attempt to continue if archives are unlocatable
  -u  Show a list of upgraded packages as well
  -b  Build the source package after fetching it
  -V  Show verbose version numbers
  -c=? Read this configuration file
  -o=? Set an arbitrary configuration option, eg -o dir::cache=/tmp
See the apt-get(8), sources.list(5) and apt.conf(5) manual
pages for more information and options.
                       This APT has Super Cow Powers.
'''
apt_get_operations = ['update', 'upgrade', 'install', 'remove', 'autoremove',
                      'purge', 'source', 'build-dep', 'dist-upgrade',
                      'dselect-upgrade', 'clean', 'autoclean', 'check',
                      'changelog', 'download']
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
        def test_bad_save_finalize_checkpoint(self):
        self.config.reverter.finalize_checkpoint = mock.Mock(
            side_effect=errors.ReverterError)
        self.config.parser.add_dir(
            self.vh_truth[0].path, 'Test', 'bad_save_ckpt')
        self.assertRaises(errors.PluginError, self.config.save, 'Title')
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
            # Changing field 'Environment.project_id'
        if is_postgres():
            db.execute('ALTER TABLE sentry_environment ALTER COLUMN project_id DROP NOT NULL')
        else:
            db.alter_column(
                'sentry_environment',
                'project_id',
                self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
            )
    
                orm.Environment.objects.filter(id__in=from_env_ids).delete()
    
            # Deleting model 'ReleaseHeadCommit'
        db.delete_table('sentry_releaseheadcommit')
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'CommitAuthor.external_id'
        db.add_column(
            'sentry_commitauthor',
            'external_id',
            self.gf('django.db.models.fields.CharField')(max_length=164, null=True),
            keep_default=False
        )
    
    
def Main():
  build_file = p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        return self._cached_response if self._cached_response else []
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
                for pattern in _ConvertDiagnosticToMatchPatterns( diag ):
              # The id doesn't matter for matches that we may add.
              match = vimsupport.DiagnosticMatch( 0, group, pattern )
              try:
                matches_to_remove.remove( match )
              except ValueError:
                vimsupport.AddDiagnosticMatch( match )
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
      return request
    
      def ServerResponse( *args ):
    return {
      'completions': [ {
        'insertion_text': 'insertion_text',
        'menu_text': 'menu_text',
        'extra_menu_info': 'extra_menu_info',
        'detailed_info': 'detailed_info',
        'kind': 'kind',
        'extra_data': {
           'doc_string': 'doc_string'
        }
      } ],
      'completion_start_column': 3,
      'errors': [ {
        'exception': {
           'TYPE': 'Exception'
        },
        'message': 'message',
        'traceback': 'traceback'
      } ]
    }
    
    
def KeywordsFromSyntaxListOutput_PythonSyntax_test():
  expected_keywords = (
    'bytearray', 'IndexError', 'all', 'help', 'vars', 'SyntaxError', 'global',
    'elif', 'unicode', 'sorted', 'memoryview', 'isinstance', 'except',
    'nonlocal', 'NameError', 'finally', 'BytesWarning', 'dict', 'IOError',
    'pass', 'oct', 'bin', 'SystemExit', 'return', 'StandardError', 'format',
    'TabError', 'break', 'next', 'not', 'UnicodeDecodeError', 'False',
    'RuntimeWarning', 'list', 'iter', 'try', 'reload', 'Warning', 'round',
    'dir', 'cmp', 'set', 'bytes', 'UnicodeTranslateError', 'intern',
    'issubclass', 'yield', 'Ellipsis', 'hash', 'locals', 'BufferError',
    'slice', 'for', 'FloatingPointError', 'sum', 'VMSError', 'getattr', 'abs',
    'print', 'import', 'True', 'FutureWarning', 'ImportWarning', 'None',
    'EOFError', 'len', 'frozenset', 'ord', 'super', 'raise', 'TypeError',
    'KeyboardInterrupt', 'UserWarning', 'filter', 'range', 'staticmethod',
    'SystemError', 'or', 'BaseException', 'pow', 'RuntimeError', 'float',
    'MemoryError', 'StopIteration', 'globals', 'divmod', 'enumerate', 'apply',
    'LookupError', 'open', 'basestring', 'from', 'UnicodeError', 'zip', 'hex',
    'long', 'IndentationError', 'int', 'chr', '__import__', 'type',
    'Exception', 'continue', 'tuple', 'reduce', 'reversed', 'else', 'assert',
    'UnicodeEncodeError', 'input', 'with', 'hasattr', 'delattr', 'setattr',
    'raw_input', 'PendingDeprecationWarning', 'compile', 'ArithmeticError',
    'while', 'del', 'str', 'property', 'def', 'and', 'GeneratorExit',
    'ImportError', 'xrange', 'is', 'EnvironmentError', 'KeyError', 'coerce',
    'SyntaxWarning', 'file', 'in', 'unichr', 'ascii', 'any', 'as', 'if',
    'OSError', 'DeprecationWarning', 'min', 'UnicodeWarning', 'execfile', 'id',
    'complex', 'bool', 'ValueError', 'NotImplemented', 'map', 'exec', 'buffer',
    'max', 'class', 'object', 'repr', 'callable', 'ZeroDivisionError', 'eval',
    '__debug__', 'ReferenceError', 'AssertionError', 'classmethod',
    'UnboundLocalError', 'NotImplementedError', 'lambda', 'AttributeError',
    'OverflowError', 'WindowsError' )
    
      def _adjust_thread_count( self ):
    # When the executor gets lost, the weakref callback will wake up
    # the worker threads.
    def weakref_cb( _, q=self._work_queue ):
      q.put( None )
    # TODO(bquinlan): Should avoid creating new threads if there are more
    # idle threads than items in the work queue.
    if len( self._threads ) < self._max_workers:
      t = threading.Thread( target=_worker,
                            args=( weakref.ref( self, weakref_cb ),
                                   self._work_queue ) )
      t.daemon = True
      t.start()
      self._threads.add( t )