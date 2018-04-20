
        
        
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        def init_per_thread_state(self):
        # Ensure state is initialized just once per-thread
        if not hasattr(self._thread_local, 'init'):
            self._thread_local.init = True
            self._thread_local.last_nonce = ''
            self._thread_local.nonce_count = 0
            self._thread_local.chal = {}
            self._thread_local.pos = None
            self._thread_local.num_401_calls = None
    
    
class UnrewindableBodyError(RequestException):
    '''Requests encountered an error when trying to rewind a body'''
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
    
class _BenchServer(object):
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
            try:
            result = self.fn(*self.args, **self.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            self.future.set_exception(e)
        else:
            self.future.set_result(result)
    
        return True
    
      def NewCandidateInsertionText( to_insert, text_after_cursor ):
    overlap_len = OverlapLength( to_insert, text_after_cursor )
    if overlap_len:
      return to_insert[ :-overlap_len ]
    return to_insert
    
    
def RawResponse_ConvertedFromOmniCompleter_test():
  vim_results = [
    { 'word': 'WORD', 'abbr': 'ABBR', 'menu': 'MENU',
      'kind': 'KIND', 'info': 'INFO' },
    { 'word': 'WORD2', 'abbr': 'ABBR2', 'menu': 'MENU2',
      'kind': 'KIND2', 'info': 'INFO' },
    { 'word': 'WORD', 'abbr': 'ABBR',  },
    {  },
  ]
  expected_results = [
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',
                   'extra_menu_info': 'MENU', 'kind': [ 'KIND' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD2', 'menu_text': 'ABBR2',
                   'extra_menu_info': 'MENU2', 'kind': [ 'KIND2' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',  } ),
    has_entries( {  } ),
  ]
  request = BuildOmnicompletionRequest( vim_results )
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
            def find_handler(self, request, **kwargs):
            handler = GetResource if request.method == 'GET' else PostResource
            return self.app.get_handler_delegate(request, handler, path_args=[request.path])
    
            class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code
    
    
globals().update(wrap_web_tests_application())
    
    
class Waker(interface.Waker):
    '''Create an OS independent asynchronous pipe.
    
        def test_single(self):
        # As a sanity check, run the single-process version through this test
        # harness too.
        code = textwrap.dedent('''
            from __future__ import print_function
            from tornado.ioloop import IOLoop
            from tornado.tcpserver import TCPServer