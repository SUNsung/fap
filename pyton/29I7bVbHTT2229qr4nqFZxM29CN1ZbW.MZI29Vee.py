    def download(self, x):
        self.result.append(x)
    
        def test_youtube_search_matching(self):
        self.assertMatch('http://www.youtube.com/results?search_query=making+mustard', ['youtube:search_url'])
        self.assertMatch('https://www.youtube.com/results?baz=bar&search_query=youtube-dl+test+video&filters=video&lclk=video', ['youtube:search_url'])
    
    import shutil
    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
    
class AnySexIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?anysex\.com/(?P<id>\d+)'
    _TEST = {
        'url': 'http://anysex.com/156592/',
        'md5': '023e9fbb7f7987f5529a394c34ad3d3d',
        'info_dict': {
            'id': '156592',
            'ext': 'mp4',
            'title': 'Busty and sexy blondie in her bikini strips for you',
            'description': 'md5:de9e418178e2931c10b62966474e1383',
            'categories': ['Erotic'],
            'duration': 270,
            'age_limit': 18,
        }
    }
    
    
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
            res = AdminPage(content = AdminAwardWinners(award),
                        title='award winners').render()
        return res
