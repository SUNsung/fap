
        
        def md5s(data):
    if not _md5:
        raise ValueError('MD5 not available.  Possibly running in FIPS mode')
    return secure_hash_s(data, _md5)
    
        args = parser.parse_args()
    
        headers = dict(
        Authorization='apiToken %s' % args.key,
    )
    
        'ipv4': re.compile(
        r'''^
            (?:{i4}\.){{3}}{i4}         # Three parts followed by dots plus one
            $
        '''.format(i4=ipv4_component), re.X | re.I
    ),
    
            expected = {
            'description': 'foo_url_map description',
            'hostRules': [
                {
                    'description': 'host rules description',
                    'hosts': [
                        'www.example.com',
                        'www2.example.com'
                    ],
                    'pathMatcher': 'host_rules_path_matcher'
                }
            ],
            'name': 'foo_url_map_name',
            'pathMatchers': [
                {
                    'defaultService': 'bes-pathmatcher-one-default',
                    'description': 'path matcher one',
                    'name': 'path_matcher_one',
                    'pathRules': [
                        {
                            'paths': [
                                '/',
                                '/aboutus'
                            ],
                            'service': 'my-one-bes'
                        }
                    ]
                },
                {
                    'defaultService': 'bes-pathmatcher-two-default',
                    'description': 'path matcher two',
                    'name': 'path_matcher_two',
                    'pathRules': [
                        {
                            'paths': [
                                '/webapp',
                                '/graphs'
                            ],
                            'service': 'my-two-bes'
                        }
                    ]
                }
            ]
        }
    
        def construct_yaml_str(self, node, unsafe=False):
        # Override the default string handling function
        # to always return unicode objects
        value = self.construct_scalar(node)
        ret = AnsibleUnicode(value)
    
        def test_full_jitter(self):
        retries = 5
        seed = 1
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    
def construct_url(url, **params):
    param_str = urlparse.urlencode(params)
    return url + '?' + param_str
    
    from ..common import *
from ..extractor import VideoExtractor
    
    
def mtv81_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    title = HTMLParser().unescape(
        '|'.join(match1(html, r'<title>(.*?)</title>').split('|')[:-2]))
    
            try:
            result = self.fn(*self.args, **self.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            self.future.set_exception(e)
        else:
            self.future.set_result(result)
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    
def CompileRegex( raw_regex ):
  pattern = re.compile( raw_regex, re.IGNORECASE )
    
    
def OverlapLength_LongestOverlap_test():
  eq_( 7, base.OverlapLength( 'bar foo foo', 'foo foo bar' ) )
    
      # 0 is not False
  assert_that( _HandlePollResponse( 0, None ), equal_to( True ) )