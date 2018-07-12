
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
        #Merging all the documents into a single PDF
    for doc in group:
        for p in doc.pages:
            ap.append(p)
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
            f = Future()
        self.assertTrue(f.cancel())
        f.add_done_callback(fn)
        self.assertTrue(was_cancelled[0])
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
tBaa xxx foo bar
         links to tFoo
tFoo xxx zoo goo
         links to tBar
tBar xxx qux moo
         links to Type
sBaa xxx na bar
         links to sFoo
sFoo xxx zoo nb
         links to sBar
sBar xxx qux nc
         links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo',
                                   'na', 'nb', 'nc' ) )
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]
    
    
  def done( self ):
    return self._done
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    import logging
    
        def test_sales_manager_shall_respond_through_proxy_with_delay(cls):
        cls.p.busy = 'Yes'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager is busy\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        test = CatalogInstance('param_value_1')
    test.main_method()
    
            # they can be executed later on
        for cmd in command_stack:
            cmd.execute()
    
    
if __name__ == '__main__':
    reporter = Reporter()
    db = DB()
    tm = TestManager()
    tm.setReporter(reporter)
    tm.setDB(db)
    reporter.setTM(tm)
    db.setTM(tm)
    # For simplification we are looping on the same test.
    # Practically, it could be about various unique test classes and their
    # objects
    for i in range(3):
        tc = TC()
        tc.setTM(tm)
        tm.setTC(tc)
        tc.setup()
        tc.execute()
        tc.tearDown()
    
        def __init__(self, name=''):
        Subject.__init__(self)
        self.name = name
        self._data = 0