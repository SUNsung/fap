
        
        
def check_entry(line_num, segments):
    # START Title
    raw_title = segments[index_title]
    title_re_match = link_re.match(raw_title)
    # url should be wrapped in '[TITLE](LINK)' Markdown syntax
    if not title_re_match:
        add_error(line_num, 'Title syntax should be '[TITLE](LINK)'')
    else:
        # do not allow '... API' in the entry title
        title = title_re_match.group(1)
        if title.upper().endswith(' API'):
            add_error(line_num, 'Title should not end with '... API'. Every entry is an API here!')
        # do not allow duplicate links
        link = title_re_match.group(2)
        if link in previous_links:
            add_error(line_num, 'Duplicate link - entries should only be included in one section')
        else:
            previous_links.append(link)
    # END Title
    # START Description
    # first character should be capitalized
    char = segments[index_desc][0]
    if char.upper() != char:
        add_error(line_num, 'first character of description is not capitalized')
    # last character should not punctuation
    char = segments[index_desc][-1]
    if char in punctuation:
        add_error(line_num, 'description should not end with {}'.format(char))
    desc_length = len(segments[index_desc])
    if desc_length > 100:
        add_error(line_num, 'description should not exceed 100 characters (currently {})'.format(desc_length))
    # END Description
    # START Auth
    # values should conform to valid options only
    auth = segments[index_auth]
    if auth != 'No' and (not auth.startswith('`') or not auth.endswith('`')):
        add_error(line_num, 'auth value is not enclosed with `backticks`')
    if auth.replace('`', '') not in auth_keys:
        add_error(line_num, '{} is not a valid Auth option'.format(auth))
    # END Auth
    # START HTTPS
    # values should conform to valid options only
    https = segments[index_https]
    if https not in https_keys:
        add_error(line_num, '{} is not a valid HTTPS option'.format(https))
    # END HTTPS
    # START CORS
    # values should conform to valid options only
    cors = segments[index_cors]
    if cors not in cors_keys:
        add_error(line_num, '{} is not a valid CORS option'.format(cors))
    # END CORS
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({}) or chardet ({}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
    from urllib3.poolmanager import PoolManager, proxy_from_url
from urllib3.response import HTTPResponse
from urllib3.util import parse_url
from urllib3.util import Timeout as TimeoutSauce
from urllib3.util.retry import Retry
from urllib3.exceptions import ClosedPoolError
from urllib3.exceptions import ConnectTimeoutError
from urllib3.exceptions import HTTPError as _HTTPError
from urllib3.exceptions import MaxRetryError
from urllib3.exceptions import NewConnectionError
from urllib3.exceptions import ProxyError as _ProxyError
from urllib3.exceptions import ProtocolError
from urllib3.exceptions import ReadTimeoutError
from urllib3.exceptions import SSLError as _SSLError
from urllib3.exceptions import ResponseError
from urllib3.exceptions import LocationValueError
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
        def update(self, other):
        '''Updates this jar with cookies from another CookieJar or dict-like'''
        if isinstance(other, cookielib.CookieJar):
            for cookie in other:
                self.set_cookie(copy.copy(cookie))
        else:
            super(RequestsCookieJar, self).update(other)
    
        def doc(code):
        names = ', '.join('``%s``' % n for n in _codes[code])
        return '* %d: %s' % (code, names)
    
    
def get_eips_details(module):
    connection = module.client('ec2')
    filters = module.params.get('filters')
    try:
        response = connection.describe_addresses(
            Filters=ansible_dict_to_boto3_filter_list(filters)
        )
    except (BotoCoreError, ClientError) as e:
        module.fail_json_aws(
            e,
            msg='Error retrieving EIPs')
    
        invocations = dict(
        aliases='alias_details',
        all='all_details',
        config='config_details',
        mappings='mapping_details',
        policy='policy_details',
        versions='version_details',
    )
    
            if add_server_ips:
            if module.check_mode:
                _check_mode(module, _add_server_ips(module,
                                                    oneandone_conn,
                                                    firewall_policy['id'],
                                                    add_server_ips))
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        # build list of params
    params = {}
    
        module = AnsibleModule(
        argument_spec=dict(
            component=dict(required=True, aliases=['name']),
            version=dict(required=True),
            token=dict(required=True, no_log=True),
            state=dict(required=True, choices=['started', 'finished', 'failed']),
            hosts=dict(required=False, default=[socket.gethostname()], aliases=['host']),
            env=dict(required=False),
            owner=dict(required=False),
            description=dict(required=False),
            message=dict(required=False),
            source_system=dict(required=False, default='ansible'),
            validate_certs=dict(default='yes', type='bool'),
            url=dict(required=False, default='https://api.bigpanda.io'),
        ),
        supports_check_mode=True,
    )
    
        name = module.params['name']
    state = module.params['state']
    timeout = module.params['timeout']
    
        if root.get('error') != 'Success':
        module.fail_json(msg=root.get('error-message'))
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    plt.show()

    
    # Standard scientific Python imports
import matplotlib.pyplot as plt
    
    import numpy as np
import matplotlib.pyplot as plt
# Though the following import is not directly being used, it is required
# for 3D projection to work
from mpl_toolkits.mplot3d import Axes3D
    
    '''
=========================================================
Vector Quantization Example
=========================================================
    
    for factory, init, params in cases:
    print('Evaluation of %s with %s init' % (factory.__name__, init))
    inertia = np.empty((len(n_init_range), n_runs))
    
            t1 = time.time()
        if hasattr(algorithm, 'labels_'):
            y_pred = algorithm.labels_.astype(np.int)
        else:
            y_pred = algorithm.predict(X)
    
    # #############################################################################
# Compute clustering with MeanShift
    
        def _DictComp(self, t):
        self.write('{')
        self.dispatch(t.key)
        self.write(': ')
        self.dispatch(t.value)
        for gen in t.generators:
            self.dispatch(gen)
        self.write('}')
    
    
# This follows symbolic links, so both islink() and isdir() can be true
# for the same path on systems that support symlinks
def isfile(path):
    '''Test whether a path is a regular file'''
    try:
        st = os.stat(path)
    except (OSError, ValueError):
        return False
    return stat.S_ISREG(st.st_mode)
    
        def run_xdev(self, *args, check_exitcode=True, xdev=True):
        env = dict(os.environ)
        env.pop('PYTHONWARNINGS', None)
        env.pop('PYTHONDEVMODE', None)
        env.pop('PYTHONMALLOC', None)
    
    [1] http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718
    
    # register the generator function baz; use `GeneratorProxy` to make proxies
MyManager.register('baz', baz, proxytype=GeneratorProxy)
    
    def calculate(func, args):
    result = func(*args)
    return '%s says that %s%s = %s' % \
        (current_process().name, func.__name__, args, result)
    
    import sqlite3
    
        if cfg.KRCNN.USE_DECONV:
        # Apply ConvTranspose to the feature representation; results in 2x
        # upsampling
        blob_in = model.ConvTranspose(
            blob_in,
            'kps_deconv',
            dim,
            cfg.KRCNN.DECONV_DIM,
            kernel=cfg.KRCNN.DECONV_KERNEL,
            pad=int(cfg.KRCNN.DECONV_KERNEL / 2 - 1),
            stride=2,
            weight_init=gauss_fill(0.01),
            bias_init=const_fill(0.0)
        )
        model.Relu('kps_deconv', 'kps_deconv')
        dim = cfg.KRCNN.DECONV_DIM
    
    
def _narrow_to_fpn_roi_levels(blobs, spatial_scales):
    '''Return only the blobs and spatial scales that will be used for RoI heads.
    Inputs `blobs` and `spatial_scales` may include extra blobs and scales that
    are used for RPN proposals, but not for RoI heads.
    '''
    # Code only supports case when RPN and ROI min levels are the same
    assert cfg.FPN.RPN_MIN_LEVEL == cfg.FPN.ROI_MIN_LEVEL
    # RPN max level can be >= to ROI max level
    assert cfg.FPN.RPN_MAX_LEVEL >= cfg.FPN.ROI_MAX_LEVEL
    # FPN RPN max level might be > FPN ROI max level in which case we
    # need to discard some leading conv blobs (blobs are ordered from
    # max/coarsest level to min/finest level)
    num_roi_levels = cfg.FPN.ROI_MAX_LEVEL - cfg.FPN.ROI_MIN_LEVEL + 1
    return blobs[-num_roi_levels:], spatial_scales[-num_roi_levels:]
    
    
def add_fpn_retinanet_losses(model):
    loss_gradients = {}
    gradients, losses = [], []
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    '''Compute minibatch blobs for training a RetinaNet network.'''