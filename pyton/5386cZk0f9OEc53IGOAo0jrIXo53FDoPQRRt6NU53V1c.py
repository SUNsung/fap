            return self.server_sock.accept()[0]
        except (select.error, socket.error):
            return None
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
        def __init__(self, data=None, **kwargs):
        self._store = OrderedDict()
        if data is None:
            data = {}
        self.update(data, **kwargs)
    
    
class _BenchServer(object):
    
            try:
            self.max_bound = int(self.args[2])
        except IndexError:
            self.max_bound = float('inf')
    
            respcls = responsetypes.from_args(body=body)
        return response.replace(body=body, cls=respcls)
    
    from scrapy import signals
    
    from scrapy.utils.job import job_dir
from scrapy.utils.request import request_fingerprint
    
    class NotConfigured(Exception):
    '''Indicates a missing configuration situation'''
    pass
    
        def item_dropped(self, item, spider, exception):
        reason = exception.__class__.__name__
        self.stats.inc_value('item_dropped_count', spider=spider)
        self.stats.inc_value('item_dropped_reasons_count/%s' % reason, spider=spider)

    
    
# -- Options for Texinfo output -------------------------------------------
    
    
class NS1LexiconClientTest(unittest.TestCase, dns_test_common_lexicon.BaseLexiconClientTest):
    DOMAIN_NOT_FOUND = HTTPError('404 Client Error: Not Found for url: {0}.'.format(DOMAIN))
    LOGIN_ERROR = HTTPError('401 Client Error: Unauthorized for url: {0}.'.format(DOMAIN))
    
            :param str domain_name: The domain to use to associate the record with.
        :param str record_name: The record name (typically beginning with '_acme-challenge.').
        :param str record_content: The record content (typically the challenge validation).
        :raises certbot.errors.PluginError: if an error occurs communicating with the DigitalOcean
                                            API
        '''
    
        def load_config(self):
        '''Returns the next config directory to be tested'''
        shutil.rmtree(self.le_config.work_dir, ignore_errors=True)
        backup = os.path.join(self.le_config.work_dir, constants.BACKUP_DIR)
        os.makedirs(backup)
        return self._configs.pop()
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_succesful_redirect(self, mock_get_request):
        mock_get_request.return_value = create_response(
            301, {'location': 'https://test.com'})
        self.assertTrue(self.validator.redirect('test.com'))
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
    site = Infoq()
download = site.download_by_url
download_playlist = site.download_by_url

    
    site = Pinterest()
download = site.download_by_url
# TBD: implement download_playlist

    
    
#----------------------------------------------------------------------
def showroom_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    ''''''
    if re.match( r'(\w+)://www.showroom-live.com/([-\w]+)', url):
        room_url_key = match1(url, r'\w+://www.showroom-live.com/([-\w]+)')
        room_id = showroom_get_roomid_by_room_url_key(room_url_key)
        showroom_download_by_room_id(room_id, output_dir, merge,
                                    info_only)