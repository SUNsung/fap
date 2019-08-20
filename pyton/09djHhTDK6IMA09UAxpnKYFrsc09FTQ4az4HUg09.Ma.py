
        
                if not CLC_FOUND:
            self.module.fail_json(msg=missing_required_lib('clc-sdk'),
                                  exception=CLC_IMP_ERR)
        if not REQUESTS_FOUND:
            self.module.fail_json(msg=missing_required_lib('requests'),
                                  exception=REQUESTS_IMP_ERR)
        if requests.__version__ and LooseVersion(requests.__version__) < LooseVersion('2.5.0'):
            self.module.fail_json(
                msg='requests library  version should be >= 2.5.0')
    
            return self.module.exit_json(
            changed=changed,
            firewall_policy_id=firewall_policy_id,
            firewall_policy=firewall_policy)
    
        def _ensure_group_is_present(
            self,
            group_name,
            parent_name,
            group_description):
        '''
        Checks to see if a server group exists, creates it if it doesn't.
        :param group_name: the name of the group to validate/create
        :param parent_name: the name of the parent group for group_name
        :param group_description: a short description of the server group (used when creating)
        :return: (changed, group) -
            changed:  Boolean- whether a change was made,
            group:  A clc group object for the group
        '''
        if not self.root_group:
            raise AssertionError('Implementation Error: Root Group not set')
        parent = parent_name if parent_name is not None else self.root_group.name
        description = group_description
        changed = False
        group = group_name
    
    RETURN = '''
server_ids:
    description: The list of server ids that are changed
    returned: success
    type: list
    sample:
        [
            'UC1TEST-SVR01',
            'UC1TEST-SVR02'
        ]
servers:
    description: The list of server objects that are changed
    returned: success
    type: list
    sample:
        [
           {
              'changeInfo':{
                 'createdBy':'service.wfad',
                 'createdDate':1438196820,
                 'modifiedBy':'service.wfad',
                 'modifiedDate':1438196820
              },
              'description':'test-server',
              'details':{
                 'alertPolicies':[
    }
    }
    
    
DOCUMENTATION = '''
module: clc_publicip
short_description: Add and Delete public ips on servers in CenturyLink Cloud.
description:
  - An Ansible module to add or delete public ip addresses on an existing server or servers in CenturyLink Cloud.
version_added: '2.0'
options:
  protocol:
    description:
      - The protocol that the public IP will listen for.
    default: TCP
    choices: ['TCP', 'UDP', 'ICMP']
  ports:
    description:
      - A list of ports to expose. This is required when state is 'present'
  server_ids:
    description:
      - A list of servers to create public ips on.
    required: True
  state:
    description:
      - Determine whether to create or delete public IPs. If present module will not create a second public ip if one
        already exists.
    default: present
    choices: ['present', 'absent']
  wait:
    description:
      - Whether to wait for the tasks to finish before returning.
    type: bool
    default: 'yes'
requirements:
    - python = 2.7
    - requests >= 2.5.0
    - clc-sdk
author: 'CLC Runner (@clc-runner)'
notes:
    - To use this module, it is required to set the below environment variables which enables access to the
      Centurylink Cloud
          - CLC_V2_API_USERNAME, the account login id for the centurylink cloud
          - CLC_V2_API_PASSWORD, the account password for the centurylink cloud
    - Alternatively, the module accepts the API token and account alias. The API token can be generated using the
      CLC account login and password via the HTTP api call @ https://api.ctl.io/v2/authentication/login
          - CLC_V2_API_TOKEN, the API token generated from https://api.ctl.io/v2/authentication/login
          - CLC_ACCT_ALIAS, the account alias associated with the centurylink cloud
    - Users can set CLC_V2_API_URL to specify an endpoint for pointing to a different CLC environment.
'''
    
    
def initialise_module():
    '''Initialise the module parameter specification.'''
    return AnsibleModule(
        argument_spec=dict(
            label=dict(type='str', required=True),
            state=dict(
                type='str',
                required=True,
                choices=['present', 'absent']
            ),
            access_token=dict(
                type='str',
                required=True,
                no_log=True,
                fallback=(env_fallback, ['LINODE_ACCESS_TOKEN']),
            ),
            authorized_keys=dict(type='list', required=False),
            group=dict(type='str', required=False),
            image=dict(type='str', required=False),
            region=dict(type='str', required=False),
            root_pass=dict(type='str', required=False, no_log=True),
            tags=dict(type='list', required=False),
            type=dict(type='str', required=False),
        ),
        supports_check_mode=False,
        required_one_of=(
            ['state', 'label'],
        ),
        required_together=(
            ['region', 'image', 'type'],
        )
    )
    
    # Deletes the previously created issue
- taiga_issue:
    taiga_host: https://mytaigahost.example.com
    project: myproject
    subject: An error has been found
    issue_type: Bug
    state: absent
'''
    
        changed = False
    try:
        if state == 'present':
            changed = install_overlay(module, name, url)
    
        name = module.params['name']
    port = module.params['port']
    user = module.params['user']
    password = module.params['password']
    state = module.params['state']
    bootdev = module.params['bootdev']
    persistent = module.params['persistent']
    uefiboot = module.params['uefiboot']
    request = dict()
    
    IMPORT_MAPPING.update({
    'cPickle': 'pickle',
    '_elementtree': 'xml.etree.ElementTree',
    'FileDialog': 'tkinter.filedialog',
    'SimpleDialog': 'tkinter.simpledialog',
    'DocXMLRPCServer': 'xmlrpc.server',
    'SimpleHTTPServer': 'http.server',
    'CGIHTTPServer': 'http.server',
    # For compatibility with broken pickles saved in old Python 3 versions
    'UserDict': 'collections',
    'UserList': 'collections',
    'UserString': 'collections',
    'whichdb': 'dbm',
    'StringIO':  'io',
    'cStringIO': 'io',
})
    
        imagepath = os.path.join(outdir,
                    'python-%s-macosx%s'%(getFullVersion(),DEPTARGET))
    if INCLUDE_TIMESTAMP:
        imagepath = imagepath + '-%04d-%02d-%02d'%(time.localtime()[:3])
    imagepath = imagepath + '.dmg'
    
        # If you add to these, please keep them sorted by mime type.
    # Make sure the entry with the preferred file extension for a particular mime type
    # appears before any others of the same mimetype.
    types_map = _types_map_default = {
        '.js'     : 'application/javascript',
        '.mjs'    : 'application/javascript',
        '.json'   : 'application/json',
        '.doc'    : 'application/msword',
        '.dot'    : 'application/msword',
        '.wiz'    : 'application/msword',
        '.bin'    : 'application/octet-stream',
        '.a'      : 'application/octet-stream',
        '.dll'    : 'application/octet-stream',
        '.exe'    : 'application/octet-stream',
        '.o'      : 'application/octet-stream',
        '.obj'    : 'application/octet-stream',
        '.so'     : 'application/octet-stream',
        '.oda'    : 'application/oda',
        '.pdf'    : 'application/pdf',
        '.p7c'    : 'application/pkcs7-mime',
        '.ps'     : 'application/postscript',
        '.ai'     : 'application/postscript',
        '.eps'    : 'application/postscript',
        '.m3u'    : 'application/vnd.apple.mpegurl',
        '.m3u8'   : 'application/vnd.apple.mpegurl',
        '.xls'    : 'application/vnd.ms-excel',
        '.xlb'    : 'application/vnd.ms-excel',
        '.ppt'    : 'application/vnd.ms-powerpoint',
        '.pot'    : 'application/vnd.ms-powerpoint',
        '.ppa'    : 'application/vnd.ms-powerpoint',
        '.pps'    : 'application/vnd.ms-powerpoint',
        '.pwz'    : 'application/vnd.ms-powerpoint',
        '.wasm'   : 'application/wasm',
        '.bcpio'  : 'application/x-bcpio',
        '.cpio'   : 'application/x-cpio',
        '.csh'    : 'application/x-csh',
        '.dvi'    : 'application/x-dvi',
        '.gtar'   : 'application/x-gtar',
        '.hdf'    : 'application/x-hdf',
        '.latex'  : 'application/x-latex',
        '.mif'    : 'application/x-mif',
        '.cdf'    : 'application/x-netcdf',
        '.nc'     : 'application/x-netcdf',
        '.p12'    : 'application/x-pkcs12',
        '.pfx'    : 'application/x-pkcs12',
        '.ram'    : 'application/x-pn-realaudio',
        '.pyc'    : 'application/x-python-code',
        '.pyo'    : 'application/x-python-code',
        '.sh'     : 'application/x-sh',
        '.shar'   : 'application/x-shar',
        '.swf'    : 'application/x-shockwave-flash',
        '.sv4cpio': 'application/x-sv4cpio',
        '.sv4crc' : 'application/x-sv4crc',
        '.tar'    : 'application/x-tar',
        '.tcl'    : 'application/x-tcl',
        '.tex'    : 'application/x-tex',
        '.texi'   : 'application/x-texinfo',
        '.texinfo': 'application/x-texinfo',
        '.roff'   : 'application/x-troff',
        '.t'      : 'application/x-troff',
        '.tr'     : 'application/x-troff',
        '.man'    : 'application/x-troff-man',
        '.me'     : 'application/x-troff-me',
        '.ms'     : 'application/x-troff-ms',
        '.ustar'  : 'application/x-ustar',
        '.src'    : 'application/x-wais-source',
        '.xsl'    : 'application/xml',
        '.rdf'    : 'application/xml',
        '.wsdl'   : 'application/xml',
        '.xpdl'   : 'application/xml',
        '.zip'    : 'application/zip',
        '.au'     : 'audio/basic',
        '.snd'    : 'audio/basic',
        '.mp3'    : 'audio/mpeg',
        '.mp2'    : 'audio/mpeg',
        '.aif'    : 'audio/x-aiff',
        '.aifc'   : 'audio/x-aiff',
        '.aiff'   : 'audio/x-aiff',
        '.ra'     : 'audio/x-pn-realaudio',
        '.wav'    : 'audio/x-wav',
        '.bmp'    : 'image/bmp',
        '.gif'    : 'image/gif',
        '.ief'    : 'image/ief',
        '.jpg'    : 'image/jpeg',
        '.jpe'    : 'image/jpeg',
        '.jpeg'   : 'image/jpeg',
        '.png'    : 'image/png',
        '.svg'    : 'image/svg+xml',
        '.tiff'   : 'image/tiff',
        '.tif'    : 'image/tiff',
        '.ico'    : 'image/vnd.microsoft.icon',
        '.ras'    : 'image/x-cmu-raster',
        '.bmp'    : 'image/x-ms-bmp',
        '.pnm'    : 'image/x-portable-anymap',
        '.pbm'    : 'image/x-portable-bitmap',
        '.pgm'    : 'image/x-portable-graymap',
        '.ppm'    : 'image/x-portable-pixmap',
        '.rgb'    : 'image/x-rgb',
        '.xbm'    : 'image/x-xbitmap',
        '.xpm'    : 'image/x-xpixmap',
        '.xwd'    : 'image/x-xwindowdump',
        '.eml'    : 'message/rfc822',
        '.mht'    : 'message/rfc822',
        '.mhtml'  : 'message/rfc822',
        '.nws'    : 'message/rfc822',
        '.css'    : 'text/css',
        '.csv'    : 'text/csv',
        '.html'   : 'text/html',
        '.htm'    : 'text/html',
        '.txt'    : 'text/plain',
        '.bat'    : 'text/plain',
        '.c'      : 'text/plain',
        '.h'      : 'text/plain',
        '.ksh'    : 'text/plain',
        '.pl'     : 'text/plain',
        '.rtx'    : 'text/richtext',
        '.tsv'    : 'text/tab-separated-values',
        '.py'     : 'text/x-python',
        '.etx'    : 'text/x-setext',
        '.sgm'    : 'text/x-sgml',
        '.sgml'   : 'text/x-sgml',
        '.vcf'    : 'text/x-vcard',
        '.xml'    : 'text/xml',
        '.mp4'    : 'video/mp4',
        '.mpeg'   : 'video/mpeg',
        '.m1v'    : 'video/mpeg',
        '.mpa'    : 'video/mpeg',
        '.mpe'    : 'video/mpeg',
        '.mpg'    : 'video/mpeg',
        '.mov'    : 'video/quicktime',
        '.qt'     : 'video/quicktime',
        '.webm'   : 'video/webm',
        '.avi'    : 'video/x-msvideo',
        '.movie'  : 'video/x-sgi-movie',
        }
    
        def test_keywords_args_api(self):
        self.assertEqual(self.db.guess_type(
            url='foo.html', strict=True), ('text/html', None))
        self.assertEqual(self.db.guess_all_extensions(
            type='image/jpg', strict=True), [])
        self.assertEqual(self.db.guess_extension(
            type='image/jpg', strict=False), '.jpg')
    
    def task_sort():
    '''list sorting (C)'''
    def list_sort(l):
        l = l[::-1]
        l.sort()
    
        def _init(self, maxsize):
        self.queue = []
    
    
# Execute a function that blocks, and in a separate thread, a function that
# triggers the release.  Returns the result of the blocking function.  Caution:
# block_func must guarantee to block until trigger_func is called, and
# trigger_func must guarantee to change queue state so that block_func can make
# enough progress to return.  In particular, a block_func that just raises an
# exception regardless of whether trigger_func is called will lead to
# timing-dependent sporadic failures, and one of those went rarely seen but
# undiagnosed for years.  Now block_func must be unexceptional.  If block_func
# is supposed to raise an exception, call do_exceptional_blocking_test()
# instead.
    
            If charset is specified, the parameter will be encoded according to RFC
        2231.  Optional language specifies the RFC 2231 language, defaulting
        to the empty string.  Both charset and language should be strings.
        '''
        if not isinstance(value, tuple) and charset:
            value = (charset, language, value)
    
        def test_irepeat(self):
        b = bytearray(b'abc')
        b1 = b
        b *= 3
        self.assertEqual(b, b'abcabcabc')
        self.assertEqual(b, b1)
        self.assertIs(b, b1)
    
            self.assertEqual(messages, [])
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
        def say(self, message):
        self.chat_room.display_message(self, message)
    
        This is, in fact, just syntactic sugar around a memento closure.
    '''
    
    
def main():
    '''
    >>> Order(100)
    <Price: 100, price after discount: 100>
    
    
def main():
    '''
    >>> template_function(get_text, to_save=True)
    Got `plain-text`
    Skip conversion
    [SAVE]
    `plain-text` was processed
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
    
class ComplexBuilding(object):
    def __repr__(self):
        return 'Floor: {0.floor} | Size: {0.size}'.format(self)
    
        value = 'default'
    
    # 构造简单的数据集
def get_training_dataset():
    '''
    Desc:
        构建一个简单的训练数据集
    Args:
        None
    Returns:
        input_vecs —— 训练数据集的特征部分
        labels —— 训练数据集的数据对应的标签，是一一对应的
    '''
    # 构建数据集，输入向量列表，每一项是工作年限
    input_vecs = [[5], [3], [8], [1.4], [10.1]]
    # 期望的输出列表，也就是输入向量的对应的标签，与工作年限对应的收入年薪
    labels = [5500, 2300, 7600, 1800, 11400]
    return input_vecs, labels
    
        def _update_weights(self, input_vec, output, label, rate):
        '''
        Desc:
            按照感知器规则更新权重
        Args:
            input_vec —— 输入向量
            output —— 经过感知器规则计算得到的输出
            label —— 输入向量对应的标签
            rate —— 学习率
        Returns:
            None
        '''
        # 利用感知器规则更新权重
        delta = label - output
        # map() 接收一个函数 f 和一个 list ，并通过把函数 f 依次作用在 list 的每个元素上，得到一个新的 list 返回。比如我们的 f 函数是计算平方， map(f, [1,2,3,4,5]) ===> 返回 [1,4,9,16,25]
        # zip() 接收任意多个（包括 0 个和 1个）序列作为参数，返回一个 tuple 列表。例：x = [1,2,3] y = [4,5,6] z = [7,8,9] xyz = zip(x, y, z) ===> [(1,4,7), (2,5,8), (3,6,9)]
        self.weights = map(lambda (x, w): w + rate * delta * x, zip(input_vec, self.weights))
        # 更新 bias
        self.bias += rate * delta
    
    
def data_set():
    x = [np.array([[1], [2], [3]]),
         np.array([[2], [3], [4]])]
    d = np.array([[1], [2]])
    return x, d
    
    
def seqPegasos(dataSet, labels, lam, T):
    m, n = shape(dataSet)
    w = zeros(n)
    for t in range(1, T+1):
        i = random.randint(m)
        eta = 1.0/(lam*t)
        p = predict(w, dataSet[i, :])
        if labels[i]*p < 1:
            w = (1.0 - 1/t)*w + eta*labels[i]*dataSet[i, :]
        else:
            w = (1.0 - 1/t)*w
        print(w)
    return w
    
        def reset(self):
        self._total_rel = 0  # total sequence received
        # category counters, each integer counts sequence in its category
        self._rel_sample = [0] * self.NUM_OF_CATEGORY
        # if last byte in current buffer is not the last byte of a character,
        # we need to know how many bytes to skip in next buffer
        self._need_to_skip_char_num = 0
        self._last_char_order = -1  # The order of previous char
        # If this flag is set to True, detection is done and conclusion has
        # been made
        self._done = False
    
        def feed(self, byte_str):
        for i in range(len(byte_str)):
            coding_state = self.coding_sm.next_state(byte_str[i])
            if coding_state == MachineState.ERROR:
                self.logger.debug('%s %s prober hit error at byte %s',
                                  self.charset_name, self.language, i)
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                char_len = self.coding_sm.get_current_charlen()
                if i == 0:
                    self._last_char[1] = byte_str[0]
                    self.distribution_analyzer.feed(self._last_char, char_len)
                else:
                    self.distribution_analyzer.feed(byte_str[i - 1:i + 1],
                                                    char_len)
    
            charset_name = self._model['charset_name']
        if self.state == ProbingState.DETECTING:
            if self._total_seqs > self.SB_ENOUGH_REL_THRESHOLD:
                confidence = self.get_confidence()
                if confidence > self.POSITIVE_SHORTCUT_THRESHOLD:
                    self.logger.debug('%s confidence = %s, we have a winner',
                                      charset_name, confidence)
                    self._state = ProbingState.FOUND_IT
                elif confidence < self.NEGATIVE_SHORTCUT_THRESHOLD:
                    self.logger.debug('%s confidence = %s, below negative '
                                      'shortcut threshhold %s', charset_name,
                                      confidence,
                                      self.NEGATIVE_SHORTCUT_THRESHOLD)
                    self._state = ProbingState.NOT_ME