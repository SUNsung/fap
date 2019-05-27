
        
            '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
                for prefix in SESSION_IGNORED_HEADER_PREFIXES:
                if name.lower().startswith(prefix.lower()):
                    break
            else:
                self['headers'][name] = value
    
    
def delete(module, connection, name):
    ''' Delete an Elasticache backup. '''
    try:
        response = connection.delete_snapshot(SnapshotName=name)
        changed = True
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Code'] == 'SnapshotNotFoundFault':
            response = {}
            changed = False
        elif e.response['Error']['Code'] == 'InvalidSnapshotState':
            module.fail_json(msg='Error: InvalidSnapshotState. The snapshot is not in an available state or failed state to allow deletion.'
                             'You may need to wait a few minutes.')
        else:
            module.fail_json(msg='Unable to delete the snapshot.', exception=traceback.format_exc())
    return response, changed
    
        module = AnsibleModule(argument_spec=argument_spec,)
    
            monitoring_policy = oneandone_conn.detach_monitoring_policy_server(
            monitoring_policy_id=monitoring_policy_id,
            server_id=server_id)
        return monitoring_policy
    except Exception as ex:
        module.fail_json(msg=str(ex))
    
                if self.requires_template_update(host.TEMPLATE, desired_template_changes):
                # setup the root element so that pyone will generate XML instead of attribute vector
                desired_template_changes = {'TEMPLATE': desired_template_changes}
                if one.host.update(host.ID, desired_template_changes, 1):  # merge the template
                    result['changed'] = True
                else:
                    self.fail(msg='failed to update the host template')
    
    notes:
    - Requires the LogEntries agent which can be installed following the instructions at logentries.com
'''
EXAMPLES = '''
# Track nginx logs
- logentries:
    path: /var/log/nginx/access.log
    state: present
    name: nginx-access-log
    
        return do_send_request(module, annotation_api, params, key)
    
    Linkfix - a companion to sphinx's linkcheck builder.
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
    # Documents to append as an appendix to all manuals.
#latex_appendices = []
    
        :param X_img_path: path to image to be recognized
    :param knn_clf: (optional) a knn classifier object. if not specified, model_save_path must be specified.
    :param model_path: (optional) path to a pickled knn classifier. if not specified, model_save_path must be knn_clf.
    :param distance_threshold: (optional) distance threshold for face classification. the larger it is, the more chance
           of mis-classifying an unknown person as a known one.
    :return: a list of names and face locations for the recognized faces in the image: [(name, bounding box), ...].
        For faces of unrecognized persons, the name 'unknown' will be returned.
    '''
    if not os.path.isfile(X_img_path) or os.path.splitext(X_img_path)[1][1:] not in ALLOWED_EXTENSIONS:
        raise Exception('Invalid image path: {}'.format(X_img_path))
    
        # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    # Initialize some variables
face_locations = []
face_encodings = []
face_names = []
process_this_frame = True
    
    
def clip_relu(x, max_value):
    '''截断 ReLU
    `o = min(max(0., x), max_value)`
    '''
    o = tf.nn.relu(x)
    o = tf.minimum(o, max_value)
    return o
    
    
def highway_conv2d(x, kernel_size,
                   act_fn=relu,
                   strides=1,
                   padding='SAME',
                   carry_bias=-1.0,
                   name=None):
    '''用于 conv2d 的 highway
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, in_h, in_w, in_channels]
    
    # 构建 FastText 模型
sentences = [['Hello', 'World', '!'], ['I', 'am', 'huay', '.']]
min_ngrams, max_ngrams = 2, 4  # ngrams 范围
model = FastText(sentences, size=5, min_count=1, min_n=min_ngrams, max_n=max_ngrams)