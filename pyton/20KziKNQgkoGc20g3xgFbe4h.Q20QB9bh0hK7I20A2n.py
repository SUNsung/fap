
        
            @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
    
class GroupChat(Chat):
    
    
class DefaultCategories(Enum):
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
    
class HashTable(object):
    
    import datetime
import io
import json
import textwrap
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
        flags = [opt.get_opt_string() for opt in opts]
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_yahoo_https(self):
        # https://github.com/rg3/youtube-dl/issues/2701
        self.assertMatch(
            'https://screen.yahoo.com/smartwatches-latest-wearable-gadgets-163745379-cbs.html',
            ['Yahoo'])
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
    
no_suggestions = '''\
usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:
    
    
no_such_subcommand_old = '''No such subcommand
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
            return r
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
            assert len(server.handler_results) == 0
    
        Usage::
    
        By default this will get the strings from the blns.txt file
    
            if 'quality' in stream:
            print('      quality:       %s' % stream['quality'])
    
    site_info = 'baomihua.com'
download = baomihua_download
download_playlist = playlist_not_supported('baomihua')

    
            html = get_content(self.url)
    
    
def get_title_and_urls(json_data):
    title = legitimize(re.sub('[\s*]', '_', json_data['title']))
    video_info = json_data['file_versions']['html5']['video']
    if 'high' not in video_info:
        if 'med' not in video_info:
            video_url = video_info['low']['url']
        else:
            video_url = video_info['med']['url']
    else:
        video_url = video_info['high']['url']
    audio_info = json_data['file_versions']['html5']['audio']
    if 'high' not in audio_info:
        if 'med' not in audio_info:
            audio_url = audio_info['low']['url']
        else:
            audio_url = audio_info['med']['url']
    else:
        audio_url = audio_info['high']['url']
    return title, video_url, audio_url
    
        vids = matchall(content, tudou_embed_patterns)
    for vid in set(vids):
        found = True
        tudou_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    
def fantasy_download_by_id_channelId(id = 0, channelId = 0, output_dir = '.', merge = True, info_only = False,
                                     **kwargs):
    api_url = 'http://www.fantasy.tv/tv/playDetails.action?' \
              'myChannelId=1&id={id}&channelId={channelId}&t={t}'.format(id = id,
                                                                         channelId = channelId,
                                                                         t = str(random.random())
                                                                         )
    html = get_content(api_url)
    html = json.loads(html)
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.last_results = []
        host = config[CONF_HOST]
        self._url = 'http://{}/data/getConnectInfo.asp'.format(host)
        self._loginurl = 'http://{}/goform/login'.format(host)
    
    
def setup_scanner(hass, config: dict, see, discovery_info=None):
    '''Set up the iCloud Scanner.'''
    username = config.get(CONF_USERNAME)
    password = config.get(CONF_PASSWORD)
    account = config.get(CONF_ACCOUNTNAME, slugify(username.partition('@')[0]))
    max_interval = config.get(CONF_MAX_INTERVAL)
    gps_accuracy_threshold = config.get(CONF_GPS_ACCURACY_THRESHOLD)
    
            self.hosts = config[CONF_HOSTS]
        self.exclude = config[CONF_EXCLUDE]
        minutes = config[CONF_HOME_INTERVAL]
        self._options = config[CONF_OPTIONS]
        self.home_interval = timedelta(minutes=minutes)
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.last_results = {}
    
            def on_modified(self, event):
            '''File modified.'''
            self.process(event)