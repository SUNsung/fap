
        
        import youtube_dl.extractor
from youtube_dl import YoutubeDL
from youtube_dl.compat import (
    compat_os_name,
    compat_str,
)
from youtube_dl.utils import (
    preferredencoding,
    write_string,
)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    
class AnitubeIE(NuevoBaseIE):
    IE_NAME = 'anitube.se'
    _VALID_URL = r'https?://(?:www\.)?anitube\.se/video/(?P<id>\d+)'
    
        def to_json(self, value):
        return b64encode(value).decode('ascii')
    
        s = TaggedJSONSerializer()
    pytest.raises(KeyError, s.register, TagDict)
    s.register(TagDict, force=True, index=0)
    assert isinstance(s.tags[' d'], TagDict)
    assert isinstance(s.order[0], TagDict)
    
    
def test_send_file_max_age():
    app = flask.Flask(__name__)
    app.config['SEND_FILE_MAX_AGE_DEFAULT'] = 3600
    assert app.send_file_max_age_default.seconds == 3600
    app.config['SEND_FILE_MAX_AGE_DEFAULT'] = timedelta(hours=2)
    assert app.send_file_max_age_default.seconds == 7200
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
            (foo, 2), p1
        (bar, 3), p1
        (foo, 3), p2
        (bar, 10), p3
        (foo, 1), p4
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
            # end paren
        test = '''
            one'test';
            ('two');
            'test')red;
            'test')'blue';
            'test')'three;
            (one'test')one;
            one';
            one'test;
            one'test'one;
        '''
        parsed = loads(test)
        self.assertEqual(parsed, [
            ['one'test''],
            ['('two')'],
            [''test')red'],
            [''test')'blue''],
            [''test')'three'],
            ['(one'test')one'],
            ['one''],
            ['one'test'],
            ['one'test'one']
        ])
        self.assertRaises(ParseException, loads, r''test'one;') # fails
        self.assertRaises(ParseException, loads, r''test;') # fails
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
        description = 'Example Installer plugin'
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))