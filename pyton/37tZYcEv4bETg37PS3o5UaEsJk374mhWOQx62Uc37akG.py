
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.SUPERVISOR)
    
        HEART = 0
    DIAMOND = 1
    CLUBS = 2
    SPADE = 3
    
        def can_fit_in_spot(self, spot):
        return spot.size in (VehicleSize.LARGE, VehicleSize.COMPACT)
    
            xlog.info('Add new cert to Firefox in %s', firefox_config_path)
        cmd_line = 'certutil -d %s -A -t 'C,,' -n '%s' -i '%s'' % (firefox_config_path, common_name, ca_file)
        os.system(cmd_line) # install new cert
        return True
    
        if len(sys.argv) > 2:
        top_domain = sys.argv[2]
    else:
        top_domain = None
    
    import sys
import os
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
    
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
        def decode(self, value):
        if value != self.value:
            raise jose.DeserializationError('Expected {0!r}'.format(self.value))
        return self.value
    
        :ivar str save_notes: Human-readable configuration change notes
    :ivar reverter: saves and reverts checkpoints
    :type reverter: :class:`certbot.reverter.Reverter`
    
        @classmethod
    def _call(cls, vhosts):
        from certbot_apache.display_ops import select_vhost
        return select_vhost('example.com', vhosts)
    
        if not info_only and not dry_run:
        if not kwargs['caption']:
            print('Skipping danmaku.')
            return
        try:
            title = get_filename(title)
            print('Downloading %s ...\n' % (title + '.cmt.json'))
            cmt = get_srt_json(vid)
            with open(os.path.join(output_dir, title + '.cmt.json'), 'w', encoding='utf-8') as x:
                x.write(cmt)
        except:
            pass
    
        API_ENDPOINT = 'http://p.bokecc.com/'
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
    
def download_url(url, merge, output_dir, title, info_only):
    mime, ext, size = url_info(url)
    print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
        if title is None:
      title = url
    
    def get_api_key(page):
    match = match1(page, pattern_inline_api_key)
    # this happens only when the url points to a gallery page
    # that contains no inline api_key(and never makes xhr api calls)
    # in fact this might be a better approch for getting a temporary api key
    # since there's no place for a user to add custom infomation that may
    # misguide the regex in the homepage
    if not match:
        return match1(get_html('https://flickr.com'), pattern_inline_api_key)
    return match