
        
                print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
    Does two benchmarks
    
    if __name__ == '__main__':
    main(sys.argv)

    
    # Train random forest classifier, calibrate on validation data and evaluate
# on test data
clf = RandomForestClassifier(n_estimators=25)
clf.fit(X_train, y_train)
clf_probs = clf.predict_proba(X_test)
sig_clf = CalibratedClassifierCV(clf, method='sigmoid', cv='prefit')
sig_clf.fit(X_valid, y_valid)
sig_clf_probs = sig_clf.predict_proba(X_test)
sig_score = log_loss(y_test, sig_clf_probs)
    
        return ip_string[:ip_string_size.value - 1]
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            if self._state is None:
            # no shared state work to do
            return
        
        # wack Lexer state variables
        self._state.token = None
        self._state.type = INVALID_TOKEN_TYPE
        self._state.channel = DEFAULT_CHANNEL
        self._state.tokenStartCharIndex = -1
        self._state.tokenStartLine = -1
        self._state.tokenStartCharPositionInLine = -1
        self._state.text = None
    
    
    def getDescription(self):
        return 'n/a'
    
    # The name of a javascript file (relative to the configuration directory) that
# implements a search results scorer. If empty, the default will be used.
#html_search_scorer = 'scorer.js'
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    
class HTTP1ConnectionTest(AsyncTestCase):
    def setUp(self):
        super(HTTP1ConnectionTest, self).setUp()
        self.asyncSetUp()
    
        @gen.coroutine
    def _read_chunked_body(self, delegate):
        # TODO: 'chunk extensions' http://tools.ietf.org/html/rfc2616#section-3.6.1
        total_size = 0
        while True:
            chunk_len = yield self.stream.read_until(b'\r\n', max_bytes=64)
            chunk_len = int(chunk_len.strip(), 16)
            if chunk_len == 0:
                crlf = yield self.stream.read_bytes(2)
                if crlf != b'\r\n':
                    raise httputil.HTTPInputError('improperly terminated chunked request')
                return
            total_size += chunk_len
            if total_size > self._max_body_size:
                raise httputil.HTTPInputError('chunked body too large')
            bytes_to_read = chunk_len
            while bytes_to_read:
                chunk = yield self.stream.read_bytes(
                    min(bytes_to_read, self.params.chunk_size), partial=True)
                bytes_to_read -= len(chunk)
                if not self._write_finished or self.is_client:
                    with _ExceptionLoggingContext(app_log):
                        ret = delegate.data_received(chunk)
                        if ret is not None:
                            yield ret
            # chunk ends with \r\n
            crlf = yield self.stream.read_bytes(2)
            assert crlf == b'\r\n'
    
    
class SSLXHeaderTest(AsyncHTTPSTestCase, HandlerBaseTestCase):
    def get_app(self):
        return Application([('/', XHeaderTest.Handler)])
    
    from tornado.platform import interface
from tornado.util import errno_from_exception