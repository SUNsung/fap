
        
                formats = []
        for f_id, f_url in item.get('files', {}).items():
            if f_id == 'external':
                return self.url_result(f_url)
            ext, height = f_id.split('_')
            formats.append({
                'format_id': height + 'p',
                'url': f_url,
                'height': int_or_none(height),
                'ext': ext,
            })
        self._sort_formats(formats)
    
        _TESTS = [{
        'url': 'http://www.southpark.de/clips/uygssh/the-government-wont-respect-my-privacy#tab=featured',
        'info_dict': {
            'id': '85487c96-b3b9-4e39-9127-ad88583d9bf2',
            'ext': 'mp4',
            'title': 'South Park|The Government Won\'t Respect My Privacy',
            'description': 'Cartman explains the benefits of 'Shitter' to Stan, Kyle and Craig.',
            'timestamp': 1380160800,
            'upload_date': '20130926',
        },
    }, {
        # non-ASCII characters in initial URL
        'url': 'http://www.southpark.de/alle-episoden/s18e09-hashtag-aufwärmen',
        'info_dict': {
            'title': 'Hashtag „Aufwärmen“',
            'description': 'Kyle will mit seinem kleinen Bruder Ike Videospiele spielen. Als der nicht mehr mit ihm spielen will, hat Kyle Angst, dass er die Kids von heute nicht mehr versteht.',
        },
        'playlist_count': 3,
    }, {
        # non-ASCII characters in redirect URL
        'url': 'http://www.southpark.de/alle-episoden/s18e09',
        'info_dict': {
            'title': 'Hashtag „Aufwärmen“',
            'description': 'Kyle will mit seinem kleinen Bruder Ike Videospiele spielen. Als der nicht mehr mit ihm spielen will, hat Kyle Angst, dass er die Kids von heute nicht mehr versteht.',
        },
        'playlist_count': 3,
    }, {
        'url': 'http://www.southpark.de/collections/2476/superhero-showdown/1',
        'only_matching': True,
    }]
    
            try:
            video = self._download_json(
                'https://api.redbull.tv/v3/products/' + video_id,
                video_id, note='Downloading video information',
                headers={'Authorization': token}
            )
        except ExtractorError as e:
            if isinstance(e.cause, compat_HTTPError) and e.cause.code == 404:
                error_message = self._parse_json(
                    e.cause.read().decode(), video_id)['error']
                raise ExtractorError('%s said: %s' % (
                    self.IE_NAME, error_message), expected=True)
            raise
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    try:
    input = raw_input
except NameError:
    pass
    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    
# find the correct sorting and add the required base classes so that sublcasses
# can be correctly created
classes = _ALL_CLASSES[:-1]
ordered_cls = []
while classes:
    for c in classes[:]:
        bases = set(c.__bases__) - set((object, InfoExtractor, SearchInfoExtractor))
        stop = False
        for b in bases:
            if b not in classes and b not in ordered_cls:
                if b.__name__ == 'GenericIE':
                    exit()
                classes.insert(0, b)
                stop = True
        if stop:
            break
        if all(b in ordered_cls for b in bases):
            ordered_cls.append(c)
            classes.remove(c)
            break
ordered_cls.append(_ALL_CLASSES[-1])
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    from test.helper import try_rm
    
        def get(self):
        if len(self.config.GAE_APPIDS):
            if len(self.working_appid_list) == 0:
                time_to_reset = 600 - (time.time() - self.last_reset_time)
                if time_to_reset > 0:
                    self.logger.warn('all appid out of quota, wait %d seconds to reset', time_to_reset)
                    time.sleep(time_to_reset)
                    return None
                else:
                    self.logger.warn('reset appid')
                    self.reset_appid()
    
        lp = rls[n].split(':')
    if len(lp) < 2:
        return None
    
        >>> data1.data = 10
    DecimalViewer: Subject Data 1 has data 10
    
        def __str__(self):
        return 'Dog'
    
    '''*What is this pattern about?
A Factory is an object for creating other objects.
    
    *References:
http://stackoverflow.com/questions/1514120/python-implementation-of-the-object-pool-design-pattern
https://sourcemaking.com/design_patterns/object_pool
    
        def __init__(self, delegate):
        self.delegate = delegate