
        
        def _worker(executor_reference, work_queue):
    try:
        while True:
            work_item = work_queue.get(block=True)
            if work_item is not None:
                work_item.run()
                continue
            executor = executor_reference()
            # Exit if:
            #   - The interpreter is shutting down OR
            #   - The executor that owns the worker has been collected OR
            #   - The executor that owns the worker has been shutdown.
            if _shutdown or executor is None or executor._shutdown:
                # Notice other workers
                work_queue.put(None)
                return
            del executor
    except BaseException:
        _base.LOGGER.critical('Exception in worker', exc_info=True)
    
    def download_urls_with_executor(urls, executor, timeout=60):
    try:
        url_to_content = {}
        future_to_url = dict((executor.submit(load_url, url, timeout), url)
                             for url in urls)
    
    # The encoding of source files.
#source_encoding = 'utf-8'
    
    
# Not caching the result of this function; users shouldn't have to restart Vim
# after running the install script or setting the
# `g:ycm_server_python_interpreter` option.
def PathToPythonInterpreter():
  # Not calling the Python interpreter to check its version as it significantly
  # impacts startup time.
  from ycmd import utils
    
    
# This is kind of hacky, but run some of the HTTPServer and web tests
# through WSGIContainer and WSGIApplication to make sure everything
# survives repeated disassembly and reassembly.
class WSGIConnectionTest(httpserver_test.HTTPConnectionTest):
    def get_app(self):
        return WSGIContainer(validator(WSGIApplication(self.get_handlers())))
    
        For use on platforms that don't have os.pipe() (or where pipes cannot
    be passed to select()), but do have sockets.  This includes Windows
    and Jython.
    '''
    def __init__(self):
        from .auto import set_close_exec
        # Based on Zope select_trigger.py:
        # https://github.com/zopefoundation/Zope/blob/master/src/ZServer/medusa/thread/select_trigger.py
    
    define('ioloop', type=str, default=None)
    
        def new_messages(self, messages):
        logging.info('Sending new message to %r listeners', len(self.waiters))
        for future in self.waiters:
            future.set_result(messages)
        self.waiters = set()
        self.cache.extend(messages)
        if len(self.cache) > self.cache_size:
            self.cache = self.cache[-self.cache_size:]