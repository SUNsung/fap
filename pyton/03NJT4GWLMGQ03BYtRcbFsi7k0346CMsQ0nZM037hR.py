
        
            def check_lib(self):
        if not HAS_HEROKU:
            self.module.fail_json(msg=missing_required_lib('heroku3'), exception=HEROKU_IMP_ERR)
    
        def _get_policies_for_datacenter(self, p):
        '''
        Get the Policies for a datacenter by calling the CLC API.
        :param p: datacenter to get policies from
        :return: policies in the datacenter
        '''
        response = {}
    
        clc_group = ClcGroup(module)
    clc_group.process_request()
    
    DOCUMENTATION = '''
---
module: linode_v4
short_description: Manage instances on the Linode cloud.
description: Manage instances on the Linode cloud.
version_added: '2.8'
requirements:
  - python >= 2.7
  - linode_api4 >= 2.0.0
author:
  - Luke Murphy (@lwm)
notes:
  - No Linode resizing is currently implemented. This module will, in time,
    replace the current Linode module which uses deprecated API bindings on the
    Linode side.
options:
  region:
    description:
      - The region of the instance. This is a required parameter only when
        creating Linode instances. See
        U(https://developers.linode.com/api/v4#tag/Regions).
    required: false
    type: str
  image:
    description:
      - The image of the instance. This is a required parameter only when
        creating Linode instances. See
        U(https://developers.linode.com/api/v4#tag/Images).
    type: str
    required: false
  type:
    description:
      - The type of the instance. This is a required parameter only when
        creating Linode instances. See
        U(https://developers.linode.com/api/v4#tag/Linode-Types).
    type: str
    required: false
  label:
    description:
      - The instance label. This label is used as the main determiner for
        idempotence for the module and is therefore mandatory.
    type: str
    required: true
  group:
    description:
       - The group that the instance should be marked under. Please note, that
         group labelling is deprecated but still supported. The encouraged
         method for marking instances is to use tags.
    type: str
    required: false
  tags:
    description:
      - The tags that the instance should be marked under. See
        U(https://developers.linode.com/api/v4#tag/Tags).
    required: false
    type: list
  root_pass:
    description:
      - The password for the root user. If not specified, one will be
        generated. This generated password will be available in the task
        success JSON.
    required: false
    type: str
  authorized_keys:
    description:
      - A list of SSH public key parts to deploy for the root user.
    required: false
    type: list
  state:
    description:
      - The desired instance state.
    type: str
    choices:
        - present
        - absent
    required: true
  access_token:
    description:
      - The Linode API v4 access token. It may also be specified by exposing
        the C(LINODE_ACCESS_TOKEN) environment variable. See
        U(https://developers.linode.com/api/v4#section/Access-and-Authentication).
    required: true
'''
    
    
@api_wrapper
def update_pool(module, system, pool):
    '''Update Pool'''
    changed = False
    
            if device in devices_by_nickname:
            target = devices_by_nickname[device]
        else:
            module.fail_json(msg='Device '%s' not found. Available devices: '%s'' % (device, '', ''.join(devices_by_nickname.keys())))
    
            if 'error' in response:
            module.fail_json(msg=response['error'])
    
        name = module.params['name']
    port = module.params['port']
    user = module.params['user']
    password = module.params['password']
    state = module.params['state']
    timeout = module.params['timeout']
    
        if not HAS_GITHUB_API:
        module.fail_json(msg=missing_required_lib('github3.py >= 1.0.0a3'),
                         exception=GITHUB_IMP_ERR)
    
    log.basicConfig(format='%(message)s', level=log.INFO)
    
    
def softsign(x):
    '''
    o = x / (1 + abs(x))
    '''
    return tf.nn.softsign(x)
    
    
def clip_relu(x, max_value):
    '''截断 ReLU
    `o = min(max(0., x), max_value)`
    '''
    o = tf.nn.relu(x)
    o = tf.minimum(o, max_value)
    return o
    
    References：
    [1509.01626] Character-level Convolutional Networks for Text Classification https://arxiv.org/abs/1509.01626
'''
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()
    
    
def write(values, path):
    '''Write the specified values to a config file.
    
        @mock.patch('certbot.client.enhancements')
    def test_unsupported(self, mock_enhancements):
        self.client.installer = mock.MagicMock()
        self.client.installer.supported_enhancements.return_value = []
    
            if request.method != 'POST':
            return render_to_response('sentry/auth-link-identity.html', request=request, context={
                'organization': organization,
                'provider': integration.get_provider(),
            })
    
    from sentry.models import ProjectKey
from sentry.web.helpers import render_to_response
    
            # Removing index on 'TagValue', fields ['project_id', '_key', 'last_seen']
        db.delete_index(u'tagstore_tagvalue', ['project_id', 'key_id', 'last_seen'])
    
    
@instrumented_task(name='sentry.tasks.clear_expired_resolutions',
                   time_limit=15, soft_time_limit=10)
def clear_expired_resolutions(release_id):
    '''
    This should be fired when ``release_id`` is created, and will indicate to
    the system that any pending resolutions older than the given release can now
    be safely transitioned to resolved.
    
        # remove (likely) unused platform associations
    ProjectPlatform.objects.filter(
        last_seen__lte=now - timedelta(days=90),
    ).delete()

    
    if args.dict:
    jieba.initialize(args.dict)
else:
    jieba.initialize()
if args.user_dict:
    jieba.load_userdict(args.user_dict)
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
            for terms, w in cm.items():
            g.addEdge(terms[0], terms[1], w)
        nodes_rank = g.rank()
        if withWeight:
            tags = sorted(nodes_rank.items(), key=itemgetter(1), reverse=True)
        else:
            tags = sorted(nodes_rank, key=nodes_rank.__getitem__, reverse=True)
    
    seg_list = jieba.cut('我来到北京清华大学', cut_all=True)
print('Full Mode: ' + '/ '.join(seg_list))  # 全模式
    
    USAGE = 'usage:    python extract_tags_idfpath.py [file name] -k [top k]'
    
    log_f = open('1.log','wb')
log_f.write(words.encode('utf-8'))