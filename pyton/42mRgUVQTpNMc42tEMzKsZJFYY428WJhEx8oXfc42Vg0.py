
        
            :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
            KD = lambda s, d: hash_utf8('%s:%s' % (s, d))
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
        def _accept_connection(self):
        try:
            ready, _, _ = select.select([self.server_sock], [], [], self.WAIT_EVENT_TIMEOUT)
            if not ready:
                return None
    
            Comment:                   'italic #8f5902', # class: 'c'
        Comment.Preproc:           'noitalic',       # class: 'cp'
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
    # General information about the project.
project = u'Requests'
copyright = u'MMXVIII. A <a href='http://kennethreitz.com/pages/open-projects.html'>Kenneth Reitz</a> Project'
author = u'Kenneth Reitz'
    
        class RegHandle:
        def Close(self):
            pass
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        def prepare_headers(self, headers):
        '''Prepares the given HTTP headers.'''
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
    import numpy as np
import gc
from datetime import datetime
from sklearn.isotonic import isotonic_regression
from sklearn.utils.bench import total_seconds
import matplotlib.pyplot as plt
import argparse
    
        return lasso_results, lars_lasso_results
    
                delta = time() - tstart
            print('Speed: %0.3fs' % delta)
            print('Inertia: %0.5f' % kmeans.inertia_)
            print()
    
        results = dict()
    lars = np.empty((len(features_range), len(samples_range)))
    lars_gram = lars.copy()
    omp = lars.copy()
    omp_gram = lars.copy()
    
    Compares SGD regression against coordinate descent and Ridge
on synthetic data.
'''
    
        package is the name of the root module of the package
    
            for group in groups:
            small_content = u' '.join(group)
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
TRAIN_FOLDER = '20news-bydate-train'
TEST_FOLDER = '20news-bydate-test'
    
    '''
    
    def _run_command_profiled(cmd, args, opts):
    if opts.profile:
        sys.stderr.write('scrapy: writing cProfile stats to %r\n' % opts.profile)
    loc = locals()
    p = cProfile.Profile()
    p.runctx('cmd.run(args, opts)', globals(), loc)
    if opts.profile:
        p.dump_stats(opts.profile)
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
        def writestr(self, zinfo_or_arcname, data,
                 compress_type=None, compresslevel=None):
        '''Write a file into the archive.  The contents is 'data', which
        may be either a 'str' or a 'bytes' instance; if it is a 'str',
        it is encoded as UTF-8 first.
        'zinfo_or_arcname' is either a ZipInfo instance or
        the name of the file in the archive.'''
        if isinstance(data, str):
            data = data.encode('utf-8')
        if not isinstance(zinfo_or_arcname, ZipInfo):
            zinfo = ZipInfo(filename=zinfo_or_arcname,
                            date_time=time.localtime(time.time())[:6])
            zinfo.compress_type = self.compression
            zinfo._compresslevel = self.compresslevel
            if zinfo.filename[-1] == '/':
                zinfo.external_attr = 0o40775 << 16   # drwxrwxr-x
                zinfo.external_attr |= 0x10           # MS-DOS directory flag
            else:
                zinfo.external_attr = 0o600 << 16     # ?rw-------
        else:
            zinfo = zinfo_or_arcname
    
            # undocumented but accepted syntax: -X utf8=1
        out = self.get_output('-X', 'utf8=1', '-c', code)
        self.assertEqual(out, '1')
    
    def normcase(path):
    if not isinstance(path, (bytes, str)):
        raise TypeError('normcase() argument must be str or bytes, '
                        'not '{}''.format(path.__class__.__name__))
    return path.lower()
    
        @property
    def suffix(self):
        '''The final component's last suffix, if any.'''
        name = self.name
        i = name.rfind('.')
        if 0 < i < len(name) - 1:
            return name[i:]
        else:
            return ''
    
                self.assertEqual(p1.expanduser(), P(userhome) / 'Documents')
            self.assertEqual(p2.expanduser(), P(userhome) / 'Documents')
            self.assertEqual(p3.expanduser(), P(otherhome) / 'Documents')
            self.assertEqual(p4.expanduser(), p4)
            self.assertEqual(p5.expanduser(), p5)
            self.assertEqual(p6.expanduser(), p6)
            self.assertRaises(RuntimeError, p7.expanduser)
    
    class ValuesTestCase(unittest.TestCase):
    
        print(' - Face locations: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_locate_faces.format(image), test_locate_faces)))
    print(' - Face landmarks: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_face_landmarks.format(image), test_face_landmarks)))
    print(' - Encode face (inc. landmarks): {:.4f}s ({:.2f} fps)'.format(*run_test(setup_encode_face.format(image), test_encode_face)))
    print(' - End-to-end: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_end_to_end.format(image), test_end_to_end)))
    print()

    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    # Often instead of just checking if two faces match or not (True or False), it's helpful to see how similar they are.
# You can do that by using the face_distance function.
    
            print('Looking for faces in {}'.format(image_file))
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
    
def linkcode_resolve(domain, info):
    '''Determine the URL corresponding to Python object.'''
    if domain != 'py':
        return None
    modname = info['module']
    fullname = info['fullname']
    submod = sys.modules.get(modname)
    if submod is None:
        return None
    obj = submod
    for part in fullname.split('.'):
        try:
            obj = getattr(obj, part)
        except:
            return None
    try:
        fn = inspect.getsourcefile(obj)
    except:
        fn = None
    if not fn:
        return None
    try:
        source, lineno = inspect.findsource(obj)
    except:
        lineno = None
    if lineno:
        linespec = '#L%d' % (lineno + 1)
    else:
        linespec = ''
    index = fn.find('/homeassistant/')
    if index == -1:
        index = 0
    
        def vapix_service(call):
        '''Service to send a message.'''
        for _, device in AXIS_DEVICES.items():
            if device.name == call.data[CONF_NAME]:
                response = device.vapix.do_request(
                    call.data[SERVICE_CGI],
                    call.data[SERVICE_ACTION],
                    call.data[SERVICE_PARAM])
                hass.bus.fire(SERVICE_VAPIX_CALL_RESPONSE, response)
                return True
        _LOGGER.info('Couldn't find device %s', call.data[CONF_NAME])
        return False
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.actiontec/
'''
import logging
import re
import telnetlib
from collections import namedtuple
import voluptuous as vol
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.luci/
'''
import json
import logging
import re
    
    _LOGGER = logging.getLogger(__name__)
    
        _LOGGER.info('Connected to Dyson account')
    dyson_devices = dyson_account.devices()
    if CONF_DEVICES in config[DOMAIN] and config[DOMAIN].get(CONF_DEVICES):
        configured_devices = config[DOMAIN].get(CONF_DEVICES)
        for device in configured_devices:
            dyson_device = next((d for d in dyson_devices if
                                 d.serial == device['device_id']), None)
            if dyson_device:
                try:
                    connected = dyson_device.connect(device['device_ip'])
                    if connected:
                        _LOGGER.info('Connected to device %s', dyson_device)
                        hass.data[DYSON_DEVICES].append(dyson_device)
                    else:
                        _LOGGER.warning('Unable to connect to device %s',
                                        dyson_device)
                except OSError as ose:
                    _LOGGER.error('Unable to connect to device %s: %s',
                                  str(dyson_device.network_device), str(ose))
            else:
                _LOGGER.warning(
                    'Unable to find device %s in Dyson account',
                    device['device_id'])
    else:
        # Not yet reliable
        for device in dyson_devices:
            _LOGGER.info('Trying to connect to device %s with timeout=%i '
                         'and retry=%i', device, timeout, retry)
            connected = device.auto_connect(timeout, retry)
            if connected:
                _LOGGER.info('Connected to device %s', device)
                hass.data[DYSON_DEVICES].append(device)
            else:
                _LOGGER.warning('Unable to connect to device %s', device)
    
        def __init__(self, config):
        '''Initialize the instance of the view.'''
        self.config = config