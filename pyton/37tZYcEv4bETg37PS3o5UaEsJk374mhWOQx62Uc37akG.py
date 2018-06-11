
def timedelta_to_seconds(td):
    # type: (datetime.timedelta) -> float
    '''Equivalent to td.total_seconds() (introduced in python 2.7).'''
    return (td.microseconds + (td.seconds + td.days * 24 * 3600) * 10 ** 6) / float(10 ** 6)
    
           WSGI is a *synchronous* interface, while Tornado's concurrency model
       is based on single-threaded asynchronous execution.  This means that
       running a WSGI app with Tornado's `WSGIContainer` is *less scalable*
       than running the same app in a multi-threaded WSGI server like
       ``gunicorn`` or ``uwsgi``.  Use `WSGIContainer` only when there are
       benefits to combining Tornado and WSGI in the same process that
       outweigh the reduced scalability.
    
        with StackContext(die_on_error):
        # Any exception thrown here *or in callback and its descendants*
        # will cause the process to exit instead of spinning endlessly
        # in the ioloop.
        http_client.fetch(url, callback)
    ioloop.start()
    
        def close(self):
        self.reader.close()
        try_close(self.writer)
