
        
            def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
    
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            cb = request.callback
    
    
class ScrapesContract(Contract):
    ''' Contract to check presence of fields in scraped items
        @scrapes page_name page_body
    '''
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
            result_item = result_queue.get(block=True)
        if result_item is not None:
            work_item = pending_work_items[result_item.work_id]
            del pending_work_items[result_item.work_id]
    
            self.assertEqual(set([SUCCESSFUL_FUTURE,
                              CANCELLED_AND_NOTIFIED_FUTURE,
                              future1]), finished)
        self.assertEqual(set([CANCELLED_FUTURE, future2]), pending)
    
    
  # These two methods exist to avoid importing the requests module at startup;
  # reducing loading time since this module is slow to import.
  @classmethod
  def Requests( cls ):
    try:
      return cls.requests
    except AttributeError:
      import requests
      cls.requests = requests
      return requests
    
            present_dialog.assert_has_exact_calls( [
          PresentDialog_Confirm_Call( MESSAGE ),
        ] )
        load_extra_conf.assert_has_exact_calls( [
          call( FILE_NAME ),
        ] )
    
    
class WSGIApplicationTest(AsyncHTTPTestCase):
    def get_app(self):
        class HelloHandler(RequestHandler):
            def get(self):
                self.write('Hello world!')
    
        This is a non-blocking and non-threaded resolver.  It may not produce
    the same results as the system resolver, but can be used for non-blocking
    resolution when threads cannot be used.
    
    # This import will fail if path is not set up correctly
import testapp
    
            'ExceptionBenchmark().enter_exit(50)',
        'ExceptionBenchmark().call_wrapped(50)',
        'ExceptionBenchmark().enter_exit(500)',
        'ExceptionBenchmark().call_wrapped(500)',
    ]
    for cmd in cmds:
        print(cmd)
        subprocess.check_call(base_cmd + [cmd])
    
    
class FeedHandler(BaseHandler):
    def get(self):
        entries = self.db.query('SELECT * FROM entries ORDER BY published '
                                'DESC LIMIT 10')
        self.set_header('Content-Type', 'application/atom+xml')
        self.render('feed.xml', entries=entries)
    
    project = 'Tornado'
copyright = '2009-%s, The Tornado Authors' % time.strftime('%Y')