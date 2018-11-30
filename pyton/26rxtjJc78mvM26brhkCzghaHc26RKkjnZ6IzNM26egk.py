filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    entries_str = textwrap.indent(''.join(entries), '\t')
atom_template = atom_template.replace('@ENTRIES@', entries_str)
    
    with io.open(lazy_extractors_filename, 'wt', encoding='utf-8') as f:
    f.write(module_src)

    
    import io
import optparse
import os
import sys
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
    import sys
import os
# Allows to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    Commands:
   update - Retrieve new lists of packages
   upgrade - Perform an upgrade
   install - Install new packages (pkg is libc6 not libc6.deb)
   remove - Remove packages
   autoremove - Remove automatically all unused packages
   purge - Remove packages and config files
   source - Download source archives
   build-dep - Configure build-dependencies for source packages
   dist-upgrade - Distribution upgrade, see apt-get(8)
   dselect-upgrade - Follow dselect selections
   clean - Erase downloaded archive files
   autoclean - Erase old downloaded archive files
   check - Verify that there are no broken dependencies
   changelog - Download and display the changelog for the given package
   download - Download the binary package into the current directory
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
    # register the generator function baz; use `GeneratorProxy` to make proxies
MyManager.register('baz', baz, proxytype=GeneratorProxy)
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
        # Check if we need the P6 feature map
    if not cfg.FPN.EXTRA_CONV_LEVELS and max_level == HIGHEST_BACKBONE_LVL + 1:
        # Original FPN P6 level implementation from our CVPR'17 FPN paper
        P6_blob_in = blobs_fpn[0]
        P6_name = P6_blob_in + '_subsampled_2x'
        # Use max pooling to simulate stride 2 subsampling
        P6_blob = model.MaxPool(P6_blob_in, P6_name, kernel=1, pad=0, stride=2)
        blobs_fpn.insert(0, P6_blob)
        spatial_scales.insert(0, spatial_scales[0] * 0.5)
    
    
def build_generic_retinanet_model(
    model, add_conv_body_func, freeze_conv_body=False
):
    # TODO(rbg): fold this function into build_generic_detection_model
    def _single_gpu_build_func(model):
        '''Builds the model on a single GPU. Can be called in a loop over GPUs
        with name and device scoping to create a data parallel model.'''
        blobs, dim, spatial_scales = add_conv_body_func(model)
        if not model.train:
            model.conv_body_net = model.net.Clone('conv_body_net')
        retinanet_heads.add_fpn_retinanet_outputs(
            model, blobs, dim, spatial_scales
        )
        if model.train:
            loss_gradients = retinanet_heads.add_fpn_retinanet_losses(
                model
            )
        return loss_gradients if model.train else None
    
    
def _add_allreduce_graph(model):
    '''Construct the graph that performs Allreduce on the gradients.'''
    # Need to all-reduce the per-GPU gradients if training with more than 1 GPU
    all_params = model.TrainableParams()
    assert len(all_params) % cfg.NUM_GPUS == 0
    # The model parameters are replicated on each GPU, get the number
    # distinct parameter blobs (i.e., the number of parameter blobs on
    # each GPU)
    params_per_gpu = int(len(all_params) / cfg.NUM_GPUS)
    with c2_utils.CudaScope(0):
        # Iterate over distinct parameter blobs
        for i in range(params_per_gpu):
            # Gradients from all GPUs for this parameter blob
            gradients = [
                model.param_to_grad[p] for p in all_params[i::params_per_gpu]
            ]
            if len(gradients) > 0:
                if cfg.USE_NCCL:
                    model.net.NCCLAllreduce(gradients, gradients)
                else:
                    muji.Allreduce(model.net, gradients, reduced_affix='')
    
    
# octave and aspect fields are only used on RetinaNet. Octave corresponds to the
# scale of the anchor and aspect denotes which aspect ratio is used in the range
# of aspect ratios
FieldOfAnchors = namedtuple(
    'FieldOfAnchors', [
        'field_of_anchors', 'num_cell_anchors', 'stride', 'field_size',
        'octave', 'aspect'
    ]
)
    
        # Optionally add Keypoint R-CNN blobs
    if cfg.MODEL.KEYPOINTS_ON:
        keypoint_rcnn_roi_data.add_keypoint_rcnn_blobs(
            blob_dict, roidb, fg_rois_per_image, fg_inds, im_scale, batch_idx
        )
    
    # Incomplete list of encodings, using SAS nomenclature:
# http://support.sas.com/documentation/cdl/en/nlsref/61893/HTML/default/viewer.htm#a002607278.htm
encoding_names = {29: 'latin1', 20: 'utf-8', 33: 'cyrillic', 60: 'wlatin2',
                  61: 'wcyrillic', 62: 'wlatin1', 90: 'ebcdic870'}
    
        def _encode_complex(self, obj):
        if isinstance(obj, complex):
            return {b'__complex__': True, b'real': 1, b'imag': 2}
        return obj
    
    
def test_incorrect_type_array():
    unpacker = Unpacker()
    unpacker.feed(packb(1))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'
    
    
class MyDict(dict):
    pass
    
    ln = fp.readline()
while ln:
    l = ln.rstrip('\r\n')
    result = delim.join(cutfunc(ln.rstrip('\r\n'), cutall, hmm))
    if PY2:
        result = result.encode(default_encoding)
    print(result)
    ln = fp.readline()
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    jieba.analyse.set_stop_words('../extra_dict/stop_words.txt')
jieba.analyse.set_idf_path('../extra_dict/idf.txt.big');
    
    
test_contents = [
    '这是一个伸手不见五指的黑夜。我叫孙悟空，我爱北京，我爱Python和C++。',
    '我不喜欢日本和服。',
    '雷猴回归人间。',
    '工信处女干事每月经过下属科室都要亲口交代24口交换机等技术性器件的安装工作',
    '我需要廉租房',
    '永和服装饰品有限公司',
    '我爱北京天安门',
    'abc',
    '隐马尔可夫',
    '雷猴是个好网站',
    '“Microsoft”一词由“MICROcomputer（微型计算机）”和“SOFTware（软件）”两部分组成',
    '草泥马和欺实马是今年的流行词汇',
    '伊藤洋华堂总府店',
    '中国科学院计算技术研究所',
    '罗密欧与朱丽叶',
    '我购买了道具和服装',
    'PS: 我觉得开源有一个好处，就是能够敦促自己不断改进，避免敞帚自珍',
    '湖北省石首市',
    '湖北省十堰市',
    '总经理完成了这件事情',
    '电脑修好了',
    '做好了这件事情就一了百了了',
    '人们审美的观点是不同的',
    '我们买了一个美的空调',
    '线程初始化时我们要注意',
    '一个分子是由好多原子组织成的',
    '祝你马到功成',
    '他掉进了无底洞里',
    '中国的首都是北京',
    '孙君意',
    '外交部发言人马朝旭',
    '领导人会议和第四届东亚峰会',
    '在过去的这五年',
    '还需要很长的路要走',
    '60周年首都阅兵',
    '你好人们审美的观点是不同的',
    '买水果然后来世博园',
    '买水果然后去世博园',
    '但是后来我才知道你是对的',
    '存在即合理',
    '的的的的的在的的的的就以和和和',
    'I love你，不以为耻，反以为rong',
    '因',
    '',
    'hello你好人们审美的观点是不同的',
    '很好但主要是基于网页形式',
    'hello你好人们审美的观点是不同的',
    '为什么我不能拥有想要的生活',
    '后来我才',
    '此次来中国是为了',
    '使用了它就可以解决一些问题',
    ',使用了它就可以解决一些问题',
    '其实使用了它就可以解决一些问题',
    '好人使用了它就可以解决一些问题',
    '是因为和国家',
    '老年搜索还支持',
    '干脆就把那部蒙人的闲法给废了拉倒！RT @laoshipukong : 27日，全国人大常委会第三次审议侵权责任法草案，删除了有关医疗损害责任“举证倒置”的规定。在医患纠纷中本已处于弱势地位的消费者由此将陷入万劫不复的境地。 ',
    '大',
    '',
    '他说的确实在理',
    '长春市长春节讲话',
    '结婚的和尚未结婚的',
    '结合成分子时',
    '旅游和服务是最好的',
    '这件事情的确是我的错',
    '供大家参考指正',
    '哈尔滨政府公布塌桥原因',
    '我在机场入口处',
    '邢永臣摄影报道',
    'BP神经网络如何训练才能在分类时增加区分度？',
    '南京市长江大桥',
    '应一些使用者的建议，也为了便于利用NiuTrans用于SMT研究',
    '长春市长春药店',
    '邓颖超生前最喜欢的衣服',
    '胡锦涛是热爱世界和平的政治局常委',
    '程序员祝海林和朱会震是在孙健的左面和右面, 范凯在最右面.再往左是李松洪',
    '一次性交多少钱',
    '两块五一套，三块八一斤，四块七一本，五块六一条',
    '小和尚留了一个像大和尚一样的和尚头',
    '我是中华人民共和国公民;我爸爸是共和党党员; 地铁和平门站',
    '张晓梅去人民医院做了个B超然后去买了件T恤',
    'AT&T是一件不错的公司，给你发offer了吗？',
    'C++和c#是什么关系？11+122=133，是吗？PI=3.14159',
    '你认识那个和主席握手的的哥吗？他开一辆黑色的士。',
    '枪杆子中出政权']
    
    cat abc.txt | python jiebacmd.py | sort | uniq -c | sort -nr -k1 | head -100
    
    jieba.enable_parallel(4)
    
    Usage:
  localstack [options] <command> [ <args> ... ]
  localstack (-v | --version)
  localstack (-h | --help)
    
    
def install_elasticmq():
    if not os.path.exists(INSTALL_DIR_ELASTICMQ):
        LOGGER.info('Downloading and installing local ElasticMQ server. This may take some time.')
        mkdir(INSTALL_DIR_ELASTICMQ)
        # download archive
        if not os.path.exists(TMP_ARCHIVE_ELASTICMQ):
            download(ELASTICMQ_JAR_URL, TMP_ARCHIVE_ELASTICMQ)
        shutil.copy(TMP_ARCHIVE_ELASTICMQ, INSTALL_DIR_ELASTICMQ)
    
    
def get_client(resource):
    resource_type = get_resource_type(resource)
    service = get_service_name(resource)
    resource_config = RESOURCE_TO_FUNCTION.get(resource_type)
    if resource_config is None:
        raise Exception('CloudFormation deployment for resource type %s not yet implemented' % resource_type)
    if ACTION_CREATE not in resource_config:
        # nothing to do for this resource
        return
    try:
        if resource_config[ACTION_CREATE].get('boto_client') == 'resource':
            return aws_stack.connect_to_resource(service)
        return aws_stack.connect_to_service(service)
    except Exception as e:
        LOGGER.warning('Unable to get client for '%s' API, skipping deployment: %s' % (service, e))
        return None
    
        :type paths: list
    :param paths: List of strings. Additional paths to prepend to the classpath.
    
    
def replay_command(command):
    function = getattr(requests, command['m'].lower())
    data = command['d']
    if data:
        data = base64.b64decode(data)
    endpoint = aws_stack.get_local_service_url(command['a'])
    full_url = (endpoint[:-1] if endpoint.endswith('/') else endpoint) + command['p']
    result = function(full_url, data=data, headers=command['h'], verify=False)
    return result
    
            stack_queues = [r for r in list_stack_summaries if r['ResourceType'] == 'AWS::SQS::Queue']
        for resource in stack_queues:
            assert resource['PhysicalResourceId'] in queue_urls
    
    
def add_document(id, document):
    article_path = '{}/{}/employee/{}?pretty'.format(ES_URL, TEST_INDEX, id)
    resp = requests.put(
        article_path,
        data=json.dumps(document),
        headers=COMMON_HEADERS)
    # Pause to allow the document to be indexed
    time.sleep(1)
    return resp
    
    
def test_environment():
    env = aws_stack.Environment.from_json({'prefix': 'foobar1'})
    assert env.prefix == 'foobar1'
    env = aws_stack.Environment.from_string('foobar2')
    assert env.prefix == 'foobar2'
    
        def test_get_non_existent_function_returns_error(self):
        with self.app.test_request_context():
            result = json.loads(lambda_api.get_function('non_existent_function_name').get_data())
            self.assertEqual(self.RESOURCENOTFOUND_EXCEPTION, result['__type'])
            self.assertEqual(
                self.RESOURCENOTFOUND_MESSAGE % lambda_api.func_arn('non_existent_function_name'),
                result['message'])