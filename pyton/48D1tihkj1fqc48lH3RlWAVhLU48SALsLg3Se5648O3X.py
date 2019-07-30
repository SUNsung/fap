
        
                '''
        return MockEnvironment(config_dir=self.config_dir)
    
            `stdout` is represented by the instance itself (print r)
        `stderr`: text written to stderr
        `exit_status`: the exit status
        `json`: decoded JSON (if possible) or `None`
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
        if n == 1:
        return '1 B'
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        return inner
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def syntax(self):
        return '[options] <spider_file>'
    
            # set Content-Length based len of body
        if self.body is not None:
            self.headers['Content-Length'] = len(self.body)
            # just in case a broken http/1.1 decides to keep connection alive
            self.headers.setdefault('Connection', 'close')
        # Content-Length must be specified in POST method even with no body
        elif self.method == b'POST':
            self.headers['Content-Length'] = 0
    
        def _debug_cookie(self, request, spider):
        if self.debug:
            cl = [to_native_str(c, errors='replace')
                  for c in request.headers.getlist('Cookie')]
            if cl:
                cookies = '\n'.join('Cookie: {}\n'.format(c) for c in cl)
                msg = 'Sending cookies to: {}\n{}'.format(request, cookies)
                logger.debug(msg, extra={'spider': spider})
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        def __init__(self):
        super().__init__()
        self.api_data = None
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
    def fetch_photo_url_list_impl(url, size, method, id_field, id_parse_func, collection_name):
    page = get_html(url)
    api_key = get_api_key(page)
    ext_field = ''
    if id_parse_func:
        ext_field = '&%s=%s' % (id_field, id_parse_func(url, page))
    page_number = 1
    urls = []
    while True:
        call_url = tmpl_api_call % (api_key, method, ext_field, page_number)
        photoset = json.loads(get_content_headered(call_url))[collection_name]
        pagen = photoset['page']
        pages = photoset['pages']
        for info in photoset['photo']:
            url = get_url_of_largest(info, api_key, size)
            urls.append(url)
        page_number = page_number + 1
        # the typeof 'page' and 'pages' may change in different methods
        if str(pagen) == str(pages):
            break
    return urls, match1(page, pattern_inline_title)
    
    def send_video(self, fileDir=None, toUserName=None, mediaId=None, file_=None):
    logger.debug('Request to send a video(mediaId: %s) to %s: %s' % (
        mediaId, toUserName, fileDir))
    if fileDir or file_:
        if hasattr(fileDir, 'read'):
            file_, fileDir = fileDir, None
        if fileDir is None:
            fileDir = 'tmp.mp4' # specific fileDir to send other formats
    else:
        return ReturnValue({'BaseResponse': {
            'ErrMsg': 'Either fileDir or file_ should be specific',
            'Ret': -1005, }})
    if toUserName is None:
        toUserName = self.storageClass.userName
    if mediaId is None:
        r = self.upload_file(fileDir, isVideo=True, file_=file_)
        if r:
            mediaId = r['MediaId']
        else:
            return r
    url = '%s/webwxsendvideomsg?fun=async&f=json&pass_ticket=%s' % (
        self.loginInfo['url'], self.loginInfo['pass_ticket'])
    data = {
        'BaseRequest': self.loginInfo['BaseRequest'],
        'Msg': {
            'Type'         : 43,
            'MediaId'      : mediaId,
            'FromUserName' : self.storageClass.userName,
            'ToUserName'   : toUserName,
            'LocalID'      : int(time.time() * 1e4),
            'ClientMsgId'  : int(time.time() * 1e4), },
        'Scene': 0, }
    headers = {
        'User-Agent' : config.USER_AGENT,
        'Content-Type': 'application/json;charset=UTF-8', }
    r = self.s.post(url, headers=headers,
        data=json.dumps(data, ensure_ascii=False).encode('utf8'))
    return ReturnValue(rawResponse=r)
    
            allowed_warnings = (allowed_warnings or []) + self.get_allowed_warnings()
        allowed_errors = (allowed_errors or []) + self.get_allowed_errors()
    
    
@gen.engine
def e1():
    for i in range(10):
        yield gen.Task(e2)
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
        # HACK:  unittest.main will make its own changes to the warning
    # configuration, which may conflict with the settings above
    # or command-line flags like -bb.  Passing warnings=False
    # suppresses this behavior, although this looks like an implementation
    # detail.  http://bugs.python.org/issue15626
    kwargs['warnings'] = False
    
    
class LeakTest(unittest.TestCase):
    def setUp(self):
        # Trigger a cleanup of the mapping so we start with a clean slate.
        AsyncIOLoop().close()
        # If we don't clean up after ourselves other tests may fail on
        # py34.
        self.orig_policy = asyncio.get_event_loop_policy()
        asyncio.set_event_loop_policy(asyncio.DefaultEventLoopPolicy())
    
        def tearDown(self):
        self.server.stop()
        super(ClientTestMixin, self).tearDown()  # type: ignore
    
            self.assertFalse(sns_listener.get_topic_by_arn(topic_arn))
        sns_listener.do_create_topic(topic_arn)
        self.assertTrue(sns_listener.get_topic_by_arn(topic_arn) is not None)
        sns_listener.do_subscribe(
            topic_arn,
            'http://localhost:1234/listen',
            'http',
            sub_arn,
            {}
        )
        self.assertTrue(sns_listener.get_subscription_by_arn(sub_arn))
        sns_listener.do_unsubscribe(sub_arn)
        self.assertFalse(sns_listener.get_subscription_by_arn(sub_arn))
    
            alias_arn = lambda_api.func_arn(self.FUNCTION_NAME) + ':' + self.ALIAS_NAME
        self.assertEqual(self.ALIASEXISTS_EXCEPTION, result['__type'])
        self.assertEqual(self.ALIASEXISTS_MESSAGE % alias_arn,
                         result['message'])
    
    
package_data = {
    '': ['Makefile', '*.md'],
    'localstack': [
        'package.json',
        'dashboard/web/*.*',
        'dashboard/web/css/*',
        'dashboard/web/img/*',
        'dashboard/web/js/*',
        'dashboard/web/views/*',
        'ext/java/*.*',
        'ext/java/src/main/java/com/atlassian/localstack/*.*',
        'utils/kinesis/java/com/atlassian/*.*'
    ]}
    
    
def get_result(vec):
    max_value_index = 0
    max_value = 0
    for i in range(len(vec)):
        if vec[i] > max_value:
            max_value = vec[i]
            max_value_index = i
    return max_value_index
    
    
def train_and_perceptron():
    '''
    Desc:
        使用 and 真值表来训练我们的感知器
    Args:
        None
    Returns:
        p —— 返回训练好的感知器
    '''
    # 创建感知器，输入参数的个数是 2 个（因为 and 是个二元函数），激活函数为 f
    p = Perceptron(2, f)
    # 进行训练，迭代 10 轮，学习速率是我们设定的 rate ，为 0.1
    input_vecs, labels = get_training_dataset()
    p.train(input_vecs, labels, 10, 0.1)
    # 返回训练好的感知器
    return p
    
        # cov协方差=[(x1-x均值)*(y1-y均值)+(x2-x均值)*(y2-y均值)+...+(xn-x均值)*(yn-y均值)+]/(n-1)
    '''
    方差：（一维）度量两个随机变量关系的统计量
    协方差： （二维）度量各个维度偏离其均值的程度
    协方差矩阵：（多维）度量各个维度偏离其均值的程度
    
            self._colors = {
            'A': '#00cc00',
            'B': '#00cc00',
            'C': '#00aacc',
            'D': '#888888',
            'E': '#cccc00',
            'F': '#ff0000',
            'H': '#22aa22',
            'I': '#cc0000',
            'J': '#000000',
        }
    
    def _colorize(text):
    return \
        re.sub(
            r'`(.*?)`',
            colored.bg('dark_gray') \
                + colored.fg('white') \
                + ' ' + r'\1' + ' ' \
                + colored.attr('reset'),
            re.sub(
                r'\*\*(.*?)\*\*',
                colored.attr('bold') \
                    + colored.fg('white') \
                    + r'\1' \
                    + colored.attr('reset'),
                text))
    
            local_repository_dir = cls.local_repository_location()
        if not local_repository_dir:
            return None
    
            answer = sorted([
            os.path.basename(f_name) for f_name in glob.glob(template)])
        return '\n'.join(answer) + '\n'
    
        def _get_page(self, topic, request_options=None):
        from_, topic = topic.split('/', 1)
        to_ = request_options.get('lang', 'en')
        if '-' in from_:
            from_, to_ = from_.split('-', 1)
    
        def _get_page(self, topic, request_options=None):
        sys.path.append(os.path.join(self.local_repository_location(), 'bin'))
        import latencies
        return latencies.render()
    
                answer.append(line)
    
    def _limited_answer(answer):
    return colored.bg('dark_goldenrod') + colored.fg('yellow_1') \
        + ' ' +  answer + ' ' \
        + colored.attr('reset') + '\n'
    
        edit_button = ''
    if editable:
        # It's possible that topic directory starts with omitted underscore
        if '/' in query:
            query = '_' + query
        edit_page_link = 'https://github.com/chubin/cheat.sheets/edit/master/sheets/' + query
        edit_button = (
            '<pre style='position:absolute;padding-left:40em;overflow:visible;height:0;'>'
            '[<a href='%s' style='color:cyan'>edit</a>]'
            '</pre>') % edit_page_link
    result = re.sub('<pre>', edit_button + form_html + '<pre>', result)
    result = re.sub('<head>', '<head>' + title, result)
    if not request_options.get('quiet'):
        result = result.replace('</body>',
                                TWITTER_BUTTON \
                                + GITHUB_BUTTON \
                                + repository_button \
                                + GITHUB_BUTTON_FOOTER \
                                + '</body>')
    return result

    
            def __get_topic_type(topic):
            for regexp, route in self.routing_table:
                if re.search(regexp, topic):
                    if route in self._adapter:
                        if self._adapter[route].is_found(topic):
                            return route
                    else:
                        return route
            return CONFIG['routing.default']
    
        answers_found = []
    for topic in get_topics_list(skip_internal=True, skip_dirs=True):