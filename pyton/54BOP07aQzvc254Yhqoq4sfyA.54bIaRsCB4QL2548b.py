
        
        if __name__ == '__main__':
    main()

    
    
total_bytes = 0
    
    # Allow direct execution
import os
import sys
import unittest
import collections
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            input_args = _find_spec('input')
        output = _find_spec('output')
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
    
    def mismatchIsMissingToken(self, input, follow):
        if follow is None:
            # we have no information about the follow; we can only consume
            # a single token and hope for the best
            return False
        
        # compute what can follow this grammar element reference
        if EOR_TOKEN_TYPE in follow:
            if len(self._state.following) > 0:
                # remove EOR if we're not the start symbol
                follow = follow - set([EOR_TOKEN_TYPE])
    
    
    def skipOffTokenChannels(self, i):
        '''
        Given a starting index, return the index of the first on-channel
        token.
        '''
    
            #Conversion of md to HTML
        for md in allmd:
    
                RuleRouter([
                ('/handler', Target),
            ])
    
            namespace = exec_test(globals(), locals(), '''
        async def f(idx):
            async with lock:
                history.append(idx)
        ''')
        futures = [namespace['f'](i) for i in range(N)]
        lock.release()
        yield futures
        self.assertEqual(list(range(N)), history)
    
            @gen.coroutine
        def connect(c):
            try:
                yield c.connect(server_addr)
            except EnvironmentError:
                pass
            else:
                connected_clients.append(c)
    
    
if __name__ == '__main__':
    main()

    
        @gen.coroutine
    def post(self):
        author = self.db.get('SELECT * FROM authors WHERE email = %s',
                             self.get_argument('email'))
        if not author:
            self.render('login.html', error='email not found')
            return
        hashed_password = yield executor.submit(
            bcrypt.hashpw, tornado.escape.utf8(self.get_argument('password')),
            tornado.escape.utf8(author.hashed_password))
        if hashed_password == author.hashed_password:
            self.set_secure_cookie('blogdemo_user', str(author.id))
            self.redirect(self.get_argument('next', '/'))
        else:
            self.render('login.html', error='incorrect password')
    
    
class BaseHandler(tornado.web.RequestHandler):
    def get_current_user(self):
        user_json = self.get_secure_cookie('fbdemo_user')
        if not user_json:
            return None
        return tornado.escape.json_decode(user_json)