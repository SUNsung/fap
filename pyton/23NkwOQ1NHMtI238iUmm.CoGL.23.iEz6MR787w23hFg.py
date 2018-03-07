
        
            cmd = cmd.split()
    
    
class CaresResolver(Resolver):
    '''Name resolver based on the c-ares library.
    
    
def try_close(f):
    # Avoid issue #875 (race condition when using the file in another
    # thread).
    for i in range(10):
        try:
            f.close()
        except IOError:
            # Yield to another thread
            time.sleep(1e-3)
        else:
            break
    # Try a last time and let raise
    f.close()
    
        def _on_auth(self, user):
        if not user:
            raise tornado.web.HTTPError(500, 'Facebook auth failed')
        self.set_secure_cookie('fbdemo_user', tornado.escape.json_encode(user))
        self.redirect(self.get_argument('next', '/'))