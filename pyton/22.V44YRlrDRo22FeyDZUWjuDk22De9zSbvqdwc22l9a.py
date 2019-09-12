
        
        UNICODE = FILE_CONTENT

    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin and self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    # noinspection PyUnresolvedReferences
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    # Separators allowed in ITEM arguments
SEPARATOR_GROUP_ALL_ITEMS = frozenset({
    SEPARATOR_HEADER,
    SEPARATOR_HEADER_EMPTY,
    SEPARATOR_QUERY_PARAM,
    SEPARATOR_DATA_STRING,
    SEPARATOR_DATA_RAW_JSON,
    SEPARATOR_FILE_UPLOAD,
    SEPARATOR_DATA_EMBED_FILE_CONTENTS,
    SEPARATOR_DATA_EMBED_RAW_JSON_FILE,
})
    
            '''
        assert with_headers or with_body
        self.msg = msg
        self.with_headers = with_headers
        self.with_body = with_body
        self.on_body_chunk_downloaded = on_body_chunk_downloaded
    
    
def test_3xx_check_status_exits_3_and_stderr_when_stdout_redirected(
        httpbin):
    env = MockEnvironment(stdout_isatty=False)
    r = http('--check-status', '--headers',
             'GET', httpbin.url + '/status/301',
             env=env, tolerate_error_exit_status=True)
    assert '301 MOVED PERMANENTLY' in r
    assert r.exit_status == ExitStatus.ERROR_HTTP_3XX
    assert '301 moved permanently' in r.stderr.lower()
    
        @staticmethod
    def _get_aa_policy_id_of_server(clc, module, alias, server_id):
        '''
        retrieves the anti affinity policy id of the server based on the CLC server id
        :param clc: the clc-sdk instance to use
        :param module: the AnsibleModule object
        :param alias: the CLC account alias
        :param server_id: the CLC server id
        :return: aa_policy_id: The anti affinity policy id
        '''
        aa_policy_id = None
        try:
            result = clc.v2.API.Call(
                method='GET', url='servers/%s/%s/antiAffinityPolicy' %
                (alias, server_id))
            aa_policy_id = result.get('id')
        except APIFailedResponse as ex:
            if ex.response_status_code != 404:
                module.fail_json(msg='Unable to fetch anti affinity policy for server '{0}'. {1}'.format(
                    server_id, str(ex.response_text)))
        return aa_policy_id
    
    # Gracefully disable a member from a loadbalancer node:
- apache2_mod_proxy:
    balancer_vhost: '{{ vhost_host }}'
    member_host: '{{ member.host }}'
    state: drained
  delegate_to: myloadbalancernode
- wait_for:
    host: '{{ member.host }}'
    port: '{{ member.port }}'
    state: drained
  delegate_to: myloadbalancernode
- apache2_mod_proxy:
    balancer_vhost: '{{ vhost_host }}'
    member_host: '{{ member.host }}'
    state: absent
  delegate_to: myloadbalancernode
'''
    
        if username not in ht.users():
        return ('%s not present' % username, False)
    else:
        if not check_mode:
            ht.delete(username)
            ht.save()
        return ('Remove %s' % username, True)
    
        def passwd_check(self):
        try:
            tmp_con = ldap.initialize(self.server_uri)
        except ldap.LDAPError as e:
            self.fail('Cannot initialize LDAP connection', e)
    
        module.exit_json(**result)
    
    # (c) 2015, Matt Makai <matthew.makai@gmail.com>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        state, name, url = (module.params[key] for key in ['state', 'name', 'list_url'])
    
            if not props_match:
            if not module.check_mode:
                try:
                    ucs.login_handle.add_mo(mo, modify_present=True)
                    ucs.login_handle.commit()
                except Exception as e:
                    ucs.result['err'] = True
                    ucs.result['msg'] = 'setup error: %s ' % str(e)
    
        def run_loop(self):
        while self.blackboard.common_state['progress'] < 100:
            for expert in self.blackboard.experts:
                if expert.is_eager_to_contribute:
                    expert.contribute()
        return self.blackboard.common_state['contributions']
    
    The Chain of responsibility is an object oriented version of the
`if ... elif ... elif ... else ...` idiom, with the
benefit that the condition–action blocks can be dynamically rearranged
and reconfigured at runtime.
    
        # Verify that none of the target files exist
    >>> assert not lexists('foo.txt')
    >>> assert not lexists('bar.txt')
    >>> assert not lexists('baz.txt')
    
    from __future__ import print_function
    
    
class Subject(object):
    def __init__(self):
        self._observers = []
    
        def __init__(self, wrapped):
        self._wrapped = wrapped
    
    
def get_localizer(language='English'):
    '''Factory'''
    localizers = {
        'English': EnglishLocalizer,
        'Greek': GreekLocalizer,
    }
    return localizers[language]()
    
        return _lazy_property
    
        def test_to_json_categorical_index(self):
        data = pd.Series(1, pd.CategoricalIndex(['a', 'b']))
        result = data.to_json(orient='table', date_format='iso')
        result = json.loads(result, object_pairs_hook=OrderedDict)
        result['schema'].pop('pandas_version')
    
        def set_output(self, data):
        '''
        Desc:
            设置层的输出，当层是输入层时会用到
        Args:
            data --- 输出的值的 list
        Returns:
            None
        '''
        # 设置输入层中各个节点的 output
        for i in range(len(data)):
            self.nodes[i].set_output(data[i])
    
        @staticmethod
    def calculate_output_size(input_size, filter_size, zero_padding, stride):
        '''
        Desc:
            用来确定卷积层输出的大小
        '''
        return (input_size - filter_size + 
            2 * zero_padding) / stride + 1
    
    
def data_set():
    x = [np.array([[1], [2], [3]]),
         np.array([[2], [3], [4]])]
    d = np.array([[1], [2]])
    return x, d
    
            在mapper 和 mapper_final中还可以共享状态，mapper 或 mapper_final 不能 reducer之间共享状态。
        '''
        return ([self.mr(mapper=self.map, mapper_final=self.map_final, reducer=self.reduce,)])
    
        Args:
        dataMat    特征集合
        labels     分类结果集合
        lam        固定值
        T          迭代次数
        k          待处理列表大小
    Returns:
        w          回归系数
    '''
    m, n = shape(dataSet)
    w = zeros(n)  # 回归系数
    dataIndex = range(m)
    for t in range(1, T+1):
        wDelta = mat(zeros(n))  # 重置 wDelta
    
        def __str__(self):
        answer = ''
        skip_next = False
        for i, line in enumerate(self.field):
            for j, c in enumerate(line):
                fg_ansi = ''
                bg_ansi = ''
                stop = ''
    
            self._clear_counters_if_needed()
    
    def format_text(text, config=None, highlighter=None):
    '''
    Renders `text` according to markdown rules.
    Uses `highlighter` for syntax highlighting.
    Returns a dictionary with 'output' and 'links'.
    '''
    return _format_section(text, config=config, highlighter=highlighter)
    
            if not cls._repository_url:
            return None
    
        https://www.youtube.com/watch?v=PmiK0JCdh5A
    
        '''
    Connect to the upstream server `CONFIG['upstream.url']` and fetch
    response from it. The response is supposed to have the 'ansi' format.
    If the server does not respond within `CONFIG['upstream.timeout']` seconds,
    or if a connection error occurs, the 'are you offline' banner is displayed.
    
    _REDIS_PREFIX = ''
if CONFIG.get('cache.redis.prefix', ''):
    _REDIS_PREFIX = CONFIG['cache.redis.prefix'] + ':'
    
        nonce = ''.join(random.choice(string.ascii_uppercase + string.digits) for _ in range(9))
    filename = topic_name.replace('/', '.') + '.' + nonce
    filename = os.path.join(CONFIG['path.spool'], filename)