
        
        
class GitHubReleaser(object):
    _API_URL = 'https://api.github.com/repos/rg3/youtube-dl/releases'
    _UPLOADS_URL = 'https://uploads.github.com/repos/rg3/youtube-dl/releases/%s/assets?name=%s'
    _NETRC_MACHINE = 'github.com'
    
    # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_vimeo_matching(self):
        self.assertMatch('https://vimeo.com/channels/tributes', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259/53576664', ['vimeo'])
        self.assertMatch('https://vimeo.com/user7108434', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user7108434/videos', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user21297594/review/75524534/3c257a1b5d', ['vimeo:review'])
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
        By default this will get the strings from the blns.txt file
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def __init__(self, json_name, value):
        self.value = value
        super(Fixed, self).__init__(
            json_name=json_name, default=value, omitempty=False)
    
    
class Signature(jose.Signature):
    '''ACME-specific Signature. Uses ACME-specific Header for customer fields.'''
    __slots__ = jose.Signature._orig_slots  # pylint: disable=no-member
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]
    
        return file_path, '/'.join(reversed(internal_path))
    
        def test_view_config_changes_error(self):
        self.config.reverter.view_config_changes = mock.Mock(
            side_effect=errors.ReverterError)
        self.assertRaises(errors.PluginError, self.config.view_config_changes)
    
            achall = self.achalls[0]
        self.sni.add_chall(achall)
        response = self.achalls[0].response(self.auth_key)
        mock_setup_cert = mock.MagicMock(return_value=response)
        # pylint: disable=protected-access
        self.sni._setup_challenge_cert = mock_setup_cert
    
        :param list indices: Meant to hold indices of challenges in a
        larger array. ApacheTlsSni01 is capable of solving many challenges
        at once which causes an indexing issue within ApacheConfigurator
        who must return all responses in order.  Imagine ApacheConfigurator
        maintaining state about where all of the http-01 Challenges,
        TLS-SNI-01 Challenges belong in the response array.  This is an
        optional utility.
    
      # Except after an opening paren, or after another opening brace (in case of
  # an initializer list, for instance), you should have spaces before your
  # braces when they are delimiting blocks, classes, namespaces etc.
  # And since you should never have braces at the beginning of a line,
  # this is an easy test.  Except that braces used for initialization don't
  # follow the same rule; we often don't want spaces before those.
  match = Match(r'^(.*[^ ({>]){', line)
    }
    }