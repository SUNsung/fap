
        
            objects = BaseSessionManager()
    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
        # Retrieve any AWS settings from the environment.
    region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module)
    
        json_output = {}
    if mod_params['view'] == 'topics':
        json_output['topics'] = list_func(pubsub_client.list_topics())
    elif mod_params['view'] == 'subscriptions':
        if mod_params['topic']:
            t = pubsub_client.topic(mod_params['topic'])
            json_output['subscriptions'] = list_func(t.list_subscriptions())
        else:
            json_output['subscriptions'] = list_func(pubsub_client.list_subscriptions())
    
        def __init__(self):
    
    
DOCUMENTATION = '''
---
module: airbrake_deployment
version_added: '1.2'
author: 'Bruce Pennypacker (@bpennypacker)'
short_description: Notify airbrake about app deployments
description:
   - Notify airbrake about app deployments (see http://help.airbrake.io/kb/api-2/deploy-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The airbrake environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
    required: false
  repo:
    description:
      - URL of the project repository
    required: false
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
    required: false
  url:
    description:
      - Optional URL to submit the notification to. Use to send notifications to Airbrake-compliant tools like Errbit.
    required: false
    default: 'https://airbrake.io/deploys.txt'
    version_added: '1.5'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.six.moves.urllib.parse import urlencode
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
    import re
from ansible.module_utils.basic import AnsibleModule
    
    from ..common import *
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
    
site_info = 'huomao.com'
download = huomaotv_download
download_playlist = playlist_not_supported('huomao')

    
        print_info(site_info, title, ext, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        stream_types = [
        {'id': 'video'},
        {'id': 'audio'},
        {'id': 'slides'}
    ]
    
    
class ArbitraryFunctionAttrTest(FuncAttrsTest):
    def test_set_attr(self):
        self.b.known_attr = 7
        self.assertEqual(self.b.known_attr, 7)
        try:
            self.fi.a.known_attr = 7
        except AttributeError:
            pass
        else:
            self.fail('setting attributes on methods should raise error')
    
        def log_date_time_string(self):
        '''Return the current time formatted for logging.'''
        now = time.time()
        year, month, day, hh, mm, ss, x, y, z = time.localtime(now)
        s = '%02d/%3s/%04d %02d:%02d:%02d' % (
                day, self.monthname[month], year, hh, mm, ss)
        return s
    
    
def open_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> TextIO:
    '''Return a file-like object opened for text reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return TextIOWrapper(reader.open_resource(resource), encoding, errors)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='r', encoding=encoding, errors=errors)
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return TextIOWrapper(BytesIO(data), encoding, errors)
    
        print('Pickled records:')
    pprint.pprint(memos)
    
    [1] http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718
    
        current = roi_feat
    for i in range(cfg.FAST_RCNN.NUM_STACKED_CONVS):
        current = model.ConvGN(
            current, 'head_conv' + str(i + 1), dim_in, hidden_dim, 3,
            group_gn=get_group_gn(hidden_dim),
            stride=1, pad=1,
            weight_init=('MSRAFill', {}),
            bias_init=('ConstantFill', {'value': 0.}))
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
            if cfg.FPN.FPN_ON:
            # After adding the RPN head, restrict FPN blobs and scales to
            # those used in the RoI heads
            blob_conv, spatial_scale_conv = _narrow_to_fpn_roi_levels(
                blob_conv, spatial_scale_conv
            )
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        # Select background RoIs as those within [BG_THRESH_LO, BG_THRESH_HI)
    bg_inds = np.where(
        (max_overlaps < cfg.TRAIN.BG_THRESH_HI) &
        (max_overlaps >= cfg.TRAIN.BG_THRESH_LO)
    )[0]
    # Compute number of background RoIs to take from this image (guarding
    # against there being fewer than desired)
    bg_rois_per_this_image = rois_per_image - fg_rois_per_this_image
    bg_rois_per_this_image = np.minimum(bg_rois_per_this_image, bg_inds.size)
    # Sample foreground regions without replacement
    if bg_inds.size > 0:
        bg_inds = npr.choice(
            bg_inds, size=bg_rois_per_this_image, replace=False
        )
    
        fg_inds = np.where(labels >= 1)[0]
    bg_inds = np.where(anchor_to_gt_max < cfg.RETINANET.NEGATIVE_OVERLAP)[0]
    labels[bg_inds] = 0
    num_fg, num_bg = len(fg_inds), len(bg_inds)