
        
            def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}  # key: query, value: node
        self.linked_list = LinkedList()
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
    
class HitCounts(MRJob):
    
        def mapper_sort(self, key, value):
        '''Construct key to ensure proper sorting.
    
        def __init__(self, key, value):
        self.key = key
        self.value = value
    
    
class Page(object):
    
    import json
import sys
import hashlib
import os.path
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    with open('devscripts/lazy_load_template.py', 'rt') as f:
    module_template = f.read()
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
        fileopts = []
    for opt in opts_file:
        if opt._short_opts:
            fileopts.extend(opt._short_opts)
        if opt._long_opts:
            fileopts.extend(opt._long_opts)
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
        def test_secondary_proxy_http(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('http://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
    
class TestRtveSubtitles(BaseTestSubtitles):
    url = 'http://www.rtve.es/alacarta/videos/los-misterios-de-laura/misterios-laura-capitulo-32-misterio-del-numero-17-2-parte/2428621/'
    IE = RTVEALaCartaIE
    
            '''
        self.enabled = True
        self.kwargs = kwargs
    
    
class DigestAuthPlugin(BuiltinAuthPlugin):
    
    
def test_auth_plugin_parse_auth_false(httpbin):
    
    
class TestRequestBodyFromFilePath:
    '''
    `http URL @file'
    
        if args.auth_plugin:
        session.auth = {
            'type': args.auth_plugin.auth_type,
            'raw_auth': args.auth_plugin.raw_auth,
        }
    elif session.auth:
        kwargs['auth'] = session.auth
    
                # x = FlattenLayer(x)
            x = DenseLayer(x, n_units=1, act=tf.nn.sigmoid)
            o = x.outputs
    
        with tf.variable_scope(name or 'conv2d', reuse=reuse):
        W, b = get_wb(kernel_shape)
    
      filename_h = filename_h[:-(len(fileinfo_h.Extension()))]
  if filename_h.endswith('-inl'):
    filename_h = filename_h[:-len('-inl')]
  filename_h = filename_h.replace('/public/', '/')
  filename_h = filename_h.replace('/internal/', '/')
    
        failures = []
    while point is not None:
        if point.name:
            if re.search('h[1-2]', point.name):
                if point.name == 'h1':
                    h1_directory = os.path.join(output_directory, clean_text(point.text))
                    current_directory = h1_directory
                elif point.name == 'h2':
                    current_directory = os.path.join(h1_directory, clean_text(point.text))  
                if not os.path.exists(current_directory):
                    os.makedirs(current_directory)
                print_title(point.text)