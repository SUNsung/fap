
        
        
def test_log_view_exception(app, client):
    @app.route('/')
    def index():
        raise Exception('test')
    
        def record(sender, message, category):
        recorded.append((message, category))
    
        Returned ``port`` will be ``None`` if not present.
    
        def get_app(self):
        return Application([
            ('/digest', DigestAuthHandler),
            ('/custom_reason', CustomReasonHandler),
            ('/custom_fail_reason', CustomFailReasonHandler),
        ])
    
    
class ChunkHandler(RequestHandler):
    @gen.coroutine
    def get(self):
        self.write('asdf')
        self.flush()
        # Wait a bit to ensure the chunks are sent and received separately.
        yield gen.sleep(0.01)
        self.write('qwer')
    
        def test_add_timeout_timedelta(self):
        self.io_loop.add_timeout(datetime.timedelta(microseconds=1), self.stop)
        self.wait()
    
            self.fail('import timed out')
    
            def library_inner_callback(callback):
            self.assertEqual(self.active_contexts[-2:],
                             ['application', 'library'])
            callback()