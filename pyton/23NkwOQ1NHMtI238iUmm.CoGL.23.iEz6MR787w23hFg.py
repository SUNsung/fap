
        
            def can_fit_in_spot(self, spot):
        return spot.size in (VehicleSize.LARGE, VehicleSize.COMPACT)
    
    
class RemoveDuplicateUrls(MRJob):
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def get_cookie_path(self, app):
        '''Returns the path for which the cookie should be valid.  The
        default implementation uses the value from the ``SESSION_COOKIE_PATH``
        config var if it's set, and falls back to ``APPLICATION_ROOT`` or
        uses ``/`` if it's ``None``.
        '''
        return app.config['SESSION_COOKIE_PATH'] or app.config['APPLICATION_ROOT']
    
        Implements signals based on blinker if available, otherwise
    falls silently back to a noop.
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
    
@pytest.fixture
def purge_module(request):
    def inner(name):
        request.addfinalizer(lambda: sys.modules.pop(name, None))
    
    
def get_package_meta(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
    
install_requires = [
    'requests>=2.21.0',
    'Pygments>=2.3.1'
]
    
                # >leading or trailing LWS MAY be removed without
            # >changing the semantics of the field value'
            # -https://www.w3.org/Protocols/rfc2616/rfc2616-sec4.html
            # Also, requests raises `InvalidHeader` for leading spaces.
            value = value.strip()
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        Assumes `from __future__ import division`.
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
                netmask_length = int(cidr_mask)
            netmask_bin = (1 << 32) - (1 << 32 >> int(netmask_length))
            address['netmask'] = socket.inet_ntoa(struct.pack('!L', netmask_bin))
    
    # Copyright (c) 2015 Hewlett-Packard Development Company, L.P.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        module = AnsibleModule(argument_spec=argument_spec,
                           mutually_exclusive=mutually_exclusive,
                           required_if=required_if,
                           supports_check_mode=True)
    
            before=dict(type='list'),
        after=dict(type='list'),
    
            self._obj = obj
        self._show_content = show_content
        if obj and isinstance(obj, AnsibleBaseYAMLObject):
            extended_error = self._get_extended_error()
            if extended_error and not suppress_extended_error:
                self.message = '%s\n\n%s' % (to_native(message), to_native(extended_error))
            else:
                self.message = '%s' % to_native(message)
        else:
            self.message = '%s' % to_native(message)
        if orig_exc:
            self.orig_exc = orig_exc
    
            testrole/tasks/include1.yml:
        - include: include2.yml
          static: no
    
        if (auth_port or acct_port) and server_type != 'radius':
        module.fail_json(msg='auth_port and acct_port can only be used'
                             'when server_type=radius')
    
        def test_nxos_config_defaults_true_backup_true(self):
        set_module_args(dict(lines=['hostname localhost'], defaults=True, backup=True))
        result = self.execute_module(changed=True)
        self.assertEqual(self.get_config.call_count, 1)
        self.assertEqual(self.get_config.call_args[1], dict(flags=['all']))

    
    Random partitioning produces noticeable shorter paths for anomalies.
Hence, when a forest of random trees collectively produce shorter path lengths
for particular samples, they are highly likely to be anomalies.
    
    # Plot the decision boundary. For that, we will assign a color to each
# point in the mesh [x_min, x_max]x[y_min, y_max].
x_min, x_max = X[:, 0].min() - .5, X[:, 0].max() + .5
y_min, y_max = X[:, 1].min() - .5, X[:, 1].max() + .5
h = .02  # step size in the mesh
xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))
Z = logreg.predict(np.c_[xx.ravel(), yy.ravel()])
    
        sample_weight : array, shape = (n_samples,), optional
        Weight for each row of X.
    '''
    if axis == -1:
        axis = 1
    elif axis == -2:
        axis = 0
    elif X.format != 'csr':
        raise TypeError('Expected CSR sparse format, got {0}'.format(X.format))
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
    import time
    
    # Author: Eustache Diemert <eustache@diemert.fr>
# License: BSD 3 clause
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    
    @staticmethod
    def init_ca():
        #xlog.debug('Initializing CA')
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
        extra_lib = '/System/Library/Frameworks/Python.framework/Versions/2.7/Extras/lib/python'
        sys.path.append(extra_lib)
    
        if __hostsdeny__ and netloc.endswith(__hostsdeny__):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Hosts Deny', 'Hosts Deny(%r)' % netloc, detail='共用appid因为资源有限，限制观看视频和文件下载等消耗资源过多的访问，请使用自己的appid <a href=' https://github.com/XX-net/XX-Net/wiki/Register-Google-appid' target='_blank'>帮助</a> ')
        raise StopIteration
    
        def test_str(self):
        self.assertTrue('FOO' in str(self.error))
        self.assertTrue('{}' in str(self.error))
    
        @certbot_util.patch_get_utility()
    def test_select_correct(self, mock_util):
        mock_util().checklist.return_value = (
            display_util.OK, [self.vhosts[3].display_repr(),
                              self.vhosts[2].display_repr()])
        vhs = select_vhost_multiple([self.vhosts[3],
                                     self.vhosts[2],
                                     self.vhosts[1]])
        self.assertTrue(self.vhosts[2] in vhs)
        self.assertTrue(self.vhosts[3] in vhs)
        self.assertFalse(self.vhosts[1] in vhs)
    
            doc_value_check('certbot(-auto)', ua)
        doc_value_check('OS_NAME OS_VERSION', ua)
        doc_value_check('major.minor.patchlevel', ua)
        real_value_check(util.get_os_info_ua(), ua)
        real_value_check(platform.python_version(), ua)
    
            # Remove the record being deleted from the list
        readd_contents = [r for r in record_contents if r != '\'' + record_content + '\'']
        if readd_contents:
            # We need to remove old records in the same request
            data['additions'] = [
                {
                    'kind': 'dns#resourceRecordSet',
                    'type': 'TXT',
                    'name': record_name + '.',
                    'rrdatas': readd_contents,
                    'ttl': record_ttl,
                },
            ]
    
    
@pytest.fixture()
def context(request):
    # Fixture request is a built-in pytest fixture describing current test request.
    integration_test_context = nginx_context.IntegrationTestsContext(request)
    try:
        yield integration_test_context
    finally:
        integration_test_context.cleanup()
    
        additional_args = []
    if misc.get_certbot_version() >= LooseVersion('0.30.0'):
        additional_args.append('--no-random-sleep-on-renew')
    
    #A Python script to generate a single PDF document with all the tldr pages. It works by generating 
#intermediate HTML files from existing md files using Python-markdown, applying desired formatting 
#through CSS, and finally rendering them as PDF. There is no LaTeX dependency for generating the PDF.
    
    '''
@author: Eugene Duboviy <eugene.dubovoy@gmail.com> | github.com/duboviy
    
    *TL;DR
Allow a request to pass down a chain of receivers until it is handled.
'''
    
        def display_message(self, user, message):
        print('[{} says]: {}'.format(user, message))
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod(optionflags=doctest.ELLIPSIS)

    
    '''
http://code.activestate.com/recipes/131499-observer-pattern/
    
    from __future__ import print_function
    
    *TL;DR
Provides a way to encapsulate a group of individual factories.
'''
    
        def build_size(self):
        self.size = 'Small'
    
        def __del__(self):
        if self.item is not None:
            self._queue.put(self.item)
            self.item = None
    
    
class PrototypeDispatcher(object):
    def __init__(self):
        self._objects = {}
    
    ### OUTPUT ###
# API1.circle at 1:2 radius 7.5
# API2.circle at 5:7 radius 27.5

    
        graphic.render()
    
    
class ItalicWrapper(TextTag):
    '''Wraps a tag in <i>'''
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod(optionflags=doctest.ELLIPSIS)
