    def test_encode(self):
        self.assertEqual('x', self.field.encode('x'))
    
    REWRITE_HTTPS_ARGS_WITH_END = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,NE,R=permanent]']
'''Apache version >= 2.3.9 rewrite rule arguments used for redirections to
    https vhost'''
    
    logger = logging.getLogger(__name__)