
        
            return wrapped_view
    
    
@bp.route('/')
def index():
    '''Show all the posts, most recent first.'''
    db = get_db()
    posts = db.execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' ORDER BY created DESC'
    ).fetchall()
    return render_template('blog/index.html', posts=posts)
    
    
def test_index(client, auth):
    response = client.get('/')
    assert b'Log In' in response.data
    assert b'Register' in response.data
    
                app.config.from_object('yourapplication.default_config')
            from yourapplication import default_config
            app.config.from_object(default_config)
    
            def to_json(self, value):
            return [[k, self.serializer.tag(v)] for k, v in iteritems(value)]
    
        while current:
        if any(handler.level <= level for handler in current.handlers):
            return True
    
        @property
    def body(self):
        '''Return a `bytes` with the message's body.'''
        raise NotImplementedError()
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
        name = 'Digest HTTP auth'
    auth_type = 'digest'
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
        Assumes `from __future__ import division`.
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
        def __getitem__(self, alias):
        if hasattr(self._connections, alias):
            return getattr(self._connections, alias)
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    import numpy as np
import matplotlib.pyplot as plt
    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
        if __hostsdeny__ and netloc.endswith(__hostsdeny__):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Hosts Deny', 'Hosts Deny(%r)' % netloc, detail='共用appid因为资源有限，限制观看视频和文件下载等消耗资源过多的访问，请使用自己的appid <a href=' https://github.com/XX-net/XX-Net/wiki/Register-Google-appid' target='_blank'>帮助</a> ')
        raise StopIteration
    
    - BaseRecognizer: Base class with common recognizer functionality.
- Lexer: Base class for lexers.
- Parser: Base class for parsers.
- tree.TreeParser: Base class for %tree parser.
    
        platforms = 'any',
    zip_safe = True,
    include_package_data = True,
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    
def cntv_download(url, **kwargs):
    if re.match(r'http://tv\.cntv\.cn/video/(\w+)/(\w+)', url):
        rid = match1(url, r'http://tv\.cntv\.cn/video/\w+/(\w+)')
    elif re.match(r'http://tv\.cctv\.com/\d+/\d+/\d+/\w+.shtml', url):
        rid = r1(r'var guid = '(\w+)'', get_content(url))
    elif re.match(r'http://\w+\.cntv\.cn/(\w+/\w+/(classpage/video/)?)?\d+/\d+\.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/(\w+/)*VIDE\d+.shtml', url) or \
         re.match(r'http://(\w+).cntv.cn/(\w+)/classpage/video/(\d+)/(\d+).shtml', url) or \
         re.match(r'http://\w+.cctv.com/\d+/\d+/\d+/\w+.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/\d+/\d+/\d+/\w+.shtml', url): 
        page = get_content(url)
        rid = r1(r'videoCenterId','(\w+)'', page)
        if rid is None:
            guid = re.search(r'guid\s*=\s*'([0-9a-z]+)'', page).group(1)
            rid = guid
    elif re.match(r'http://xiyou.cntv.cn/v-[\w-]+\.html', url):
        rid = r1(r'http://xiyou.cntv.cn/v-([\w-]+)\.html', url)
    else:
        raise NotImplementedError(url)
    
    
def get_file_path(merge, output_dir, title, url):
    mime, ext, size = url_info(url)
    file_name = get_output_filename([], title, ext, output_dir, merge)
    file_path = os.path.join(output_dir, file_name)
    return file_name, file_path
    
        def _colision_resolution(self, key, data=None):
        i = 1
        new_key = self.hash_function(data)
    
            print('Enter the second string: ', end='')
        S2 = raw_input().strip()
    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
    def main():
    '''
    In this demonstration we're generating a sample data set from the sin function in numpy.
    We then train a decision tree on the data set and use the decision tree to predict the
    label of 10 different test values. Then the mean squared error over this test is displayed.
    '''
    X = np.arange(-1., 1., 0.005)
    y = np.sin(X)
    
    '''
Port of the Java example of 'Constructor Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    production code which is untestable:
    
        def find_path(self, start, end, path=None):
        path = path or []