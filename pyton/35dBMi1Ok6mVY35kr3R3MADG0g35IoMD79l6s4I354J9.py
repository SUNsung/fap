
        
        
def word_clean(word):
    '''单词清洗'''
    word = word.lower()  # 小写化
    word = stemmer.stem(word)  # 提取词干
    return word
    
    References:
    https://github.com/philipperemy/keras-attention-mechanism
'''
    
        in_channels = int(x.get_shape()[-1])
    kernel_shape = list(kernel_size) + [in_channels, in_channels]
    
        def test_multiple_strong_etag_match(self):
        computed_etag = ''xyzzy1''
        etags = ''xyzzy1', 'xyzzy2''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    from tornado import gen
from tornado.options import options, define, parse_command_line
    
    
def _reload() -> None:
    global _reload_attempted
    _reload_attempted = True
    for fn in _reload_hooks:
        fn()
    if hasattr(signal, 'setitimer'):
        # Clear the alarm signal set by
        # ioloop.set_blocking_log_threshold so it doesn't fire
        # after the exec.
        signal.setitimer(signal.ITIMER_REAL, 0, 0)
    # sys.path fixes: see comments at top of file.  If __main__.__spec__
    # exists, we were invoked with -m and the effective path is about to
    # change on re-exec.  Reconstruct the original command line to
    # ensure that the new process sees the same path we did.  If
    # __spec__ is not available (Python < 3.4), check instead if
    # sys.path[0] is an empty string and add the current directory to
    # $PYTHONPATH.
    if _autoreload_is_main:
        assert _original_argv is not None
        spec = _original_spec
        argv = _original_argv
    else:
        spec = getattr(sys.modules['__main__'], '__spec__', None)
        argv = sys.argv
    if spec:
        argv = ['-m', spec.name] + argv[1:]
    else:
        path_prefix = '.' + os.pathsep
        if sys.path[0] == '' and not os.environ.get('PYTHONPATH', '').startswith(
            path_prefix
        ):
            os.environ['PYTHONPATH'] = path_prefix + os.environ.get('PYTHONPATH', '')
    if not _has_execv:
        subprocess.Popen([sys.executable] + argv)
        os._exit(0)
    else:
        try:
            os.execv(sys.executable, [sys.executable] + argv)
        except OSError:
            # Mac OS X versions prior to 10.6 do not support execv in
            # a process that contains multiple threads.  Instead of
            # re-executing in the current process, start a new one
            # and cause the current process to exit.  This isn't
            # ideal since the new process is detached from the parent
            # terminal and thus cannot easily be killed with ctrl-C,
            # but it's better than not being able to autoreload at
            # all.
            # Unfortunately the errno returned in this case does not
            # appear to be consistent, so we can't easily check for
            # this error specifically.
            os.spawnv(  # type: ignore
                os.P_NOWAIT, sys.executable, [sys.executable] + argv
            )
            # At this point the IOLoop has been closed and finally
            # blocks will experience errors if we allow the stack to
            # unwind, so just exit uncleanly.
            os._exit(0)
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
            # Use the adapter, but two degrees from the tornado coroutine.
        async def native_coroutine_with_adapter2():
            return await to_asyncio_future(native_coroutine_without_adapter())
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']
    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test