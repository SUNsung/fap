
        
            def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
        def __init__(self, data=None, **kwargs):
        self._store = OrderedDict()
        if data is None:
            data = {}
        self.update(data, **kwargs)
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
    :copyright: (c) 2017 by Kenneth Reitz.
:license: Apache 2.0, see LICENSE for more details.
'''
    
            chunked = not (request.body is None or 'Content-Length' in request.headers)
    
        @property
    def unverifiable(self):
        return self.is_unverifiable()
    
    import json
import platform
import sys
import ssl
    
    
class TestIsIPv4Address:
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
    # The font size ('10pt', '11pt' or '12pt').
#'pointsize': '10pt',
    
        Example: if mask is 24 function returns 255.255.255.0
    
            # This MUST go after prepare_auth. Authenticators could add a hook
        self.prepare_hooks(hooks)
    
        keys = ['protocol', 'dest_port', 'dest_ip', 'source_port', 'source_ip']
    for rule in deletions:
        if not module.check_mode:
            kwargs = dict([(k, v) for k, v in rule.items() if k in keys])
            kwargs['protocol'] = protocol_to_string(kwargs['protocol'])
            gateway.delete_fw_rule(**kwargs)
        result['changed'] = True
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True)
    
    EXAMPLES = '''
- airbrake_deployment:
    token: AAAAAA
    environment: staging
    user: ansible
    revision: '4.2'
'''
    
    # Copyright 2014 Benjamin Curtis <benjamin.curtis@gmail.com>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    def _iter_command_classes(module_name):
    # TODO: add `name` attribute to commands and and merge this function with
    # scrapy.utils.spider.iter_spider_classes
    for module in walk_modules(module_name):
        for obj in vars(module).values():
            if inspect.isclass(obj) and \
                    issubclass(obj, ScrapyCommand) and \
                    obj.__module__ == module.__name__ and \
                    not obj == ScrapyCommand:
                yield obj
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
                        if not cb:
                        logger.error('Cannot find a rule that matches %(url)r in spider: %(spider)s',
                                 {'url': response.url, 'spider': spider.name})
                        return
                else:
                    cb = 'parse'
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
        def _set_connection_attributes(self, request):
        parsed = urlparse_cached(request)
        self.scheme, self.netloc, self.host, self.port, self.path = _parsed_url_args(parsed)
        proxy = request.meta.get('proxy')
        if proxy:
            self.scheme, _, self.host, self.port, _ = _parse(proxy)
            self.path = self.url
    
    
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
            self.assertEqual(len(self.parser.filter_args_num(matches, 1)), 3)
        self.assertEqual(len(self.parser.filter_args_num(matches, 2)), 2)
        self.assertEqual(len(self.parser.filter_args_num(matches, 3)), 1)
    
    # This is a very simple benchmark to give you an idea of how fast each step of face recognition will run on your system.
# Notice that face detection gets very slow at large image sizes. So you might consider running face detection on a
# scaled down version of your image and then running face encodings on the the full size image.
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    
def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]
    
    # Load some sample pictures and learn how to recognize them.
lmm_image = face_recognition.load_image_file('lin-manuel-miranda.png')
lmm_face_encoding = face_recognition.face_encodings(lmm_image)[0]
    
    while video_capture.isOpened():
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def add_residual_block(
    model,
    prefix,
    blob_in,
    dim_in,
    dim_out,
    dim_inner,
    dilation,
    stride_init=2,
    inplace_sum=False
):
    '''Add a residual block to the model.'''
    # prefix = res<stage>_<sub_stage>, e.g., res2_3
    
            Adapted from the CVPR'15 FCN code.
        See: https://github.com/shelhamer/fcn.berkeleyvision.org/blob/master/surgery.py
        '''
        assert dim_in == dim_out
        assert up_scale % 2 == 0, 'Scale should be even'
    
    from detectron.core.config import cfg
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
    
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
    
        # Create a blob to hold the input images
    blob = blob_utils.im_list_to_blob(processed_ims)
    
    from detectron.core.config import assert_and_infer_cfg
from detectron.core.config import cfg
from detectron.core.config import merge_cfg_from_file
from detectron.core.config import merge_cfg_from_list
from detectron.datasets.roidb import combined_roidb_for_training
from detectron.roi_data.loader import RoIDataLoader
from detectron.utils.logging import setup_logging
from detectron.utils.timer import Timer