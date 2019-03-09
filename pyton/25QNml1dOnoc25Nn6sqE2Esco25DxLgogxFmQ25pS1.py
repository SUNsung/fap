
        
            return _set_text
    
    
@pytest.mark.parametrize('command, result', [
    (Command('aws dynamdb scan', misspelled_command),
     ['aws dynamodb scan']),
    (Command('aws dynamodb scn', misspelled_subcommand),
     ['aws dynamodb scan']),
    (Command('aws dynamodb t-item',
             misspelled_subcommand_with_multiple_options),
     ['aws dynamodb put-item', 'aws dynamodb get-item'])])
def test_get_new_command(command, result):
    assert get_new_command(command) == result

    
    # For every line, fix the respective file
for line in output_lines:
    match = re.match(line_re, line)
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        def set_spidercls(self, url, opts):
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            try:
                self.spidercls = spider_loader.load(opts.spider)
            except KeyError:
                logger.error('Unable to find spider: %(spider)s',
                             {'spider': opts.spider})
        else:
            self.spidercls = spidercls_for_request(spider_loader, Request(url))
            if not self.spidercls:
                logger.error('Unable to find spider for: %(url)s',
                             {'url': url})
    
    
class Command(ScrapyCommand):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        try:
        # XXX: this try-except is not needed in Twisted 17.0.0+ because
        # it requires pyOpenSSL 0.16+.
        from OpenSSL.SSL import SSL_CB_HANDSHAKE_DONE, SSL_CB_HANDSHAKE_START
    except ImportError:
        SSL_CB_HANDSHAKE_START = 0x10
        SSL_CB_HANDSHAKE_DONE = 0x20
    
            # set Host header based on url
        self.headers.setdefault('Host', self.netloc)