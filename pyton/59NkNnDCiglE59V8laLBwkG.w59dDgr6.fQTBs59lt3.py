
        
            `mask` is a `bytes` object of length 4; `data` is a `bytes` object of any length.
    Returns a `bytes` object of the same length as `data` with the mask applied
    as specified in section 5.3 of RFC 6455.
    
            # We don't yield between get() and task_done(), so get() must wait for
        # the next tick. Otherwise we'd immediately call task_done and unblock
        # join() before q.put() resumes, and we'd only process the first four
        # items.
        @gen.coroutine
        def consumer():
            while True:
                history.append((yield q.get()))
                q.task_done()
    
    
class FeedHandler(BaseHandler):
    def get(self):
        entries = db.Query(Entry).order('-published').fetch(limit=10)
        self.set_header('Content-Type', 'application/atom+xml')
        self.render('feed.xml', entries=entries)
    
    
if __name__ == '__main__':
    main()

    
    See file_uploader.py in this directory for code that uploads files in this format.
'''
    
    
class BaseHandler(RequestHandler):
    COOKIE_NAME = 'twitterdemo_user'