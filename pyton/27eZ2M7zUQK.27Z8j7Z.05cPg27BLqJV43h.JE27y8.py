
        
            pass
    
    
class HerokuHelper():
    def __init__(self, module):
        self.module = module
        self.check_lib()
        self.api_key = module.params['api_key']
    
        def compare(self, first_resource, second_resource):
        '''
        Recursively compares dictionary contents equivalence, ignoring types and elements order.
        Particularities of the comparison:
            - Inexistent key = None
            - These values are considered equal: None, empty, False
            - Lists are compared value by value after a sort, if they have same size.
            - Each element is converted to str before the comparison.
        :arg dict first_resource: first dictionary
        :arg dict second_resource: second dictionary
        :return: bool: True when equal, False when different.
        '''
        resource1 = first_resource
        resource2 = second_resource
    
            # Password successfully changed
        return True
    
        :param config: the layman's configuration to use (optional)
    '''
    if config is None:
        config = BareConfig(read_configfile=True, quietness=1)
    return LaymanAPI(config)
    
    SELINUX_IMP_ERR = None
try:
    import selinux
    HAVE_SELINUX = True
except ImportError:
    SELINUX_IMP_ERR = traceback.format_exc()
    HAVE_SELINUX = False
    
        test_suite = 'tests',
    
            if title is None:
            self.title = '_'.join([i.text for i in self.tree.iterfind('video/videomarks/videomark/markdesc')])
        else:
            self.title = title
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
            elif re.search(r'i\.imgur\.com/', self.url):
            # direct image
            _, container, size = url_info(self.url)
            self.streams = {
                'original': {
                    'src': [self.url],
                    'size': size,
                    'container': container
                }
            }
            self.title = r1(r'i\.imgur\.com/([^./]*)', self.url)
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3