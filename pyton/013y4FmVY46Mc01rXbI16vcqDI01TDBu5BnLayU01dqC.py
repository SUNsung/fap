
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def process_response(self, request, response):
        # No need to check for a redirect for non-404 responses.
        if response.status_code != 404:
            return response
    
        def delete(self, session_key=None):
        super().delete(session_key)
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
    
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='regularizer')
    
    
def test_boston_housing():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = boston_housing.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
    
                    # Shift the ground truth by 1
                x_shift = xstart + directionx * (t + 1)
                y_shift = ystart + directiony * (t + 1)
                shifted_movies[i, t, x_shift - w: x_shift + w,
                               y_shift - w: y_shift + w, 0] += 1
    
    Output after 4 epochs on CPU: ~0.8146
Time per epoch on CPU (Core i7): ~150s.
'''
    
    # set parameters:
max_features = 5000
maxlen = 400
batch_size = 32
embedding_dims = 50
filters = 250
kernel_size = 3
hidden_dims = 250
epochs = 2
    
    # Convolution
kernel_size = 5
filters = 64
pool_size = 4
    
    np.random.seed(1337)
    
    
if __name__ == '__main__':
    main()

    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    DOCUMENTATION = '''
---
module: gcspanner
version_added: '2.3'
short_description: Create and Delete Instances/Databases on Spanner
description:
    - Create and Delete Instances/Databases on Spanner.
      See U(https://cloud.google.com/spanner/docs) for an overview.
requirements:
  - python >= 2.6
  - google-auth >= 0.5.0
  - google-cloud-spanner >= 0.23.0
notes:
  - Changing the configuration on an existing instance is not supported.
author:
  - Tom Melendez (@supertom) <tom@supertom.com>
options:
  configuration:
    description:
       - Configuration the instance should use.
       - Examples are us-central1, asia-east1 and europe-west1.
    required: yes
  instance_id:
    description:
       - GCP spanner instance name.
    required: yes
  database_name:
    description:
       - Name of database contained on the instance.
  force_instance_delete:
    description:
       - To delete an instance, this argument must exist and be true (along with state being equal to absent).
    type: bool
    default: 'no'
  instance_display_name:
    description:
       - Name of Instance to display.
       - If not specified, instance_id will be used instead.
  node_count:
    description:
       - Number of nodes in the instance.
    default: 1
  state:
    description:
    - State of the instance or database. Applies to the most granular resource.
    - If a C(database_name) is specified we remove it.
    - If only C(instance_id) is specified, that is what is removed.
    choices: [ absent, present ]
    default: present
'''
    
            if state == 'absent' and user in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.remove_collaborator(user)
            affected_apps += [app]
            result_state = True
        elif state == 'present' and user not in heroku_collaborator_list:
            if not module.check_mode:
                heroku_app.add_collaborator(user_id_or_email=user, silent=module.params['suppress_invitation'])
            affected_apps += [app]
            result_state = True
    
    # Ensure rule with certain limitations
- ipa_hbacrule:
    name: allow_all_developers_access_to_db
    description: Allow all developers to access any database from any host
    hostgroup:
    - db-server
    usergroup:
    - developers
    state: present
    ipa_host: ipa.example.com
    ipa_user: admin
    ipa_pass: topsecret
    
        present = get_status() != ''
    
        # Deploy params
    revision_id = module.params['revision_id']
    deployed_by = module.params['deployed_by']
    deployed_to = module.params['deployed_to']
    repository = module.params['repository']
    
        def short_desc(self):
        return 'Check spider contracts'
    
        def short_desc(self):
        return 'Run a spider'
    
            # Request requires callback argument as callable or None, not string
        request = Request(url, None)
        _start_requests = lambda s: [self.prepare_request(s, request, opts)]
        self.spidercls.start_requests = _start_requests
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
        def post_process(self, output):
        for x in output:
            if isinstance(x, (BaseItem, dict)):
                for arg in self.args:
                    if not arg in x:
                        raise ContractFail(''%s' field is missing' % arg)

    
            def __init__(self, method=SSL.SSLv23_METHOD, *args, **kwargs):
            super(ScrapyClientContextFactory, self).__init__(*args, **kwargs)
            self._ssl_method = method
    
    from twisted.web.client import HTTPClientFactory
from twisted.web.http import HTTPClient
from twisted.internet import defer
    
        def __init__(self, crawler, spider_closed_callback):
        self.crawler = crawler
        self.settings = crawler.settings
        self.signals = crawler.signals
        self.logformatter = crawler.logformatter
        self.slot = None
        self.spider = None
        self.running = False
        self.paused = False
        self.scheduler_cls = load_object(self.settings['SCHEDULER'])
        downloader_cls = load_object(self.settings['DOWNLOADER'])
        self.downloader = downloader_cls(crawler)
        self.scraper = Scraper(crawler)
        self._spider_closed_callback = spider_closed_callback
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            self.lock = threading.Lock()
    
    IPv6 = CheckNetwork('IPv6')
IPv6.urls = ['http://[2001:41d0:8:e8ad::1]',
             'http://[2001:260:401:372::5f]',
             'http://[2a02:188:3e00::32]',
             'http://[2804:10:4068::202:82]'
             ]
IPv6.triger_check_network()
    
            if start > stop:
            return None
    
    
class JWS(jose.JWS):
    '''ACME-specific JWS. Includes none, url, and kid in protected header.'''
    signature_cls = Signature
    __slots__ = jose.JWS._orig_slots  # pylint: disable=no-member
    
    
__licence__ = 'BSD (3 clause)'
    
    _LOGGER = logging.getLogger(__name__)
    
    _LOGGER = logging.getLogger(__name__)
    
            # non-broadcast message
        else:
            for target in targets:
                # If the target starts with a '+', it's a phone number,
                # otherwise it's a user id.
                if target.startswith('+'):
                    recipient = {'phone_number': target}
                else:
                    recipient = {'id': target}
    
        client = messagebird.Client(config[CONF_API_KEY])
    try:
        # validates the api key
        client.balance()
    except messagebird.client.ErrorException:
        _LOGGER.error('The specified MessageBird API key is invalid')
        return None
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
    *TL;DR80
Decouples the creation of a complex object and its representation.
'''
    
    ### OUTPUT ###
# Name: Jhon    Occupation: Coder
# Before we access `relatives`:
# {'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Jhon's relatives: Many relatives.
# After we've accessed `relatives`:
# {'relatives': 'Many relatives.', 'call_count2': 0, 'name': 'Jhon', 'occupation': 'Coder'}
# Father and mother
# {'_lazy__parents': 'Father and mother', 'relatives': 'Many relatives.', 'call_count2': 1, 'name': 'Jhon', 'occupation': 'Coder'}  # noqa flake8
# Father and mother
# 1

    
        def __init__(self):
        self.time_provider = datetime.datetime
    
        def get_product_information(self, product):
        product_info = self.business_logic.product_information(product)
        if product_info:
            print('PRODUCT INFORMATION:')
            print(
                'Name: {0}, Price: {1:.2f}, Quantity: {2:}'.format(
                    product.title(), product_info.get('price', 0), product_info.get('quantity', 0)
                )
            )
        else:
            print('That product '{0}' does not exist in the records'.format(product))
    
        # low-level i.e. Implementation specific
    def draw(self):
        self._drawing_api.draw_circle(self._x, self._y, self._radius)