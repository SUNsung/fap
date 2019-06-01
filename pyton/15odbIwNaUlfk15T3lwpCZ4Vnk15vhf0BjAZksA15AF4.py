
        
            long_description = README,
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
    
    def download_by_id(self, vid = '', title = None, output_dir='.', merge=True, info_only=False,**kwargs):
        '''self, str->None
        
        Keyword arguments:
        self: self
        vid: The video ID for BokeCC cloud, something like
        FE3BB999594978049C33DC5901307461
        
        Calls the prepare() to download the video.
        
        If no title is provided, this method shall try to find a proper title
        with the information providin within the
        returned content of the API.'''
    
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
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
        Each code snipped should get additional C++ code around it to help compile the line in context, with
    some heuristic guessing of what is needed around. The wrapping code should have a token in each line allowing
    other tools to filter out these lines
    
        def test_subscriber_shall_be_attachable_to_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        cls.assertEqual(len(pro.subscribers), 0)
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
    
        def test_parents(self):
        for _ in range(2):
            self.assertEqual(self.John.parents, 'Father and mother')
        self.assertEqual(self.John.call_count2, 1)

    
        def test_particular_properties_retrieving(self):
        self.assertEqual(self.dispatcher.get_objects()['A'].value, 'a-value')
        self.assertEqual(self.dispatcher.get_objects()['B'].value, 'b-value')
        self.assertEqual(self.dispatcher.get_objects()['C'].value, 'default')
    
        def test_dog_shall_bark(self):
        noise = self.dog.bark()
        expected_noise = 'woof!'
        self.assertEqual(noise, expected_noise)
    
    
def main():
    '''
    Before subclassing
    >>> sorted(RegistryHolder.REGISTRY)
    ['BaseRegisteredClass']
    
    EUCKR_CLS  = (
    1,1,1,1,1,1,1,1,  # 00 - 07
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    1,1,1,1,1,1,1,1,  # 40 - 47
    1,1,1,1,1,1,1,1,  # 48 - 4f
    1,1,1,1,1,1,1,1,  # 50 - 57
    1,1,1,1,1,1,1,1,  # 58 - 5f
    1,1,1,1,1,1,1,1,  # 60 - 67
    1,1,1,1,1,1,1,1,  # 68 - 6f
    1,1,1,1,1,1,1,1,  # 70 - 77
    1,1,1,1,1,1,1,1,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,3,3,3,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,3,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    2,2,2,2,2,2,2,2,  # e0 - e7
    2,2,2,2,2,2,2,2,  # e8 - ef
    2,2,2,2,2,2,2,2,  # f0 - f7
    2,2,2,2,2,2,2,0   # f8 - ff
)
    
    EUCJP_CLS = (
    4,4,4,4,4,4,4,4,  # 00 - 07
    4,4,4,4,4,4,5,5,  # 08 - 0f
    4,4,4,4,4,4,4,4,  # 10 - 17
    4,4,4,5,4,4,4,4,  # 18 - 1f
    4,4,4,4,4,4,4,4,  # 20 - 27
    4,4,4,4,4,4,4,4,  # 28 - 2f
    4,4,4,4,4,4,4,4,  # 30 - 37
    4,4,4,4,4,4,4,4,  # 38 - 3f
    4,4,4,4,4,4,4,4,  # 40 - 47
    4,4,4,4,4,4,4,4,  # 48 - 4f
    4,4,4,4,4,4,4,4,  # 50 - 57
    4,4,4,4,4,4,4,4,  # 58 - 5f
    4,4,4,4,4,4,4,4,  # 60 - 67
    4,4,4,4,4,4,4,4,  # 68 - 6f
    4,4,4,4,4,4,4,4,  # 70 - 77
    4,4,4,4,4,4,4,4,  # 78 - 7f
    5,5,5,5,5,5,5,5,  # 80 - 87
    5,5,5,5,5,5,1,3,  # 88 - 8f
    5,5,5,5,5,5,5,5,  # 90 - 97
    5,5,5,5,5,5,5,5,  # 98 - 9f
    5,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,2,2,2,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,2,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    0,0,0,0,0,0,0,0,  # e0 - e7
    0,0,0,0,0,0,0,0,  # e8 - ef
    0,0,0,0,0,0,0,0,  # f0 - f7
    0,0,0,0,0,0,0,5  # f8 - ff
)
    
        @property
    def language(self):
        return 'Japanese'
    
        @property
    def charset_name(self):
        return 'utf-8'
    
    
def get_handler(command_class, command):
    command = command.replace('-', '_')
    # we certainly want to have 'exec' command, since that's what docker client has
    # but in python exec is a keyword
    if command == 'exec':
        command = 'exec_command'
    
    
def get_tty_width():
    tty_size = os.popen('stty size 2> /dev/null', 'r').read().split()
    if len(tty_size) != 2:
        return 0
    _, width = tty_size
    return int(width)
    
    
def get_service_dependents(service_dict, services):
    name = service_dict['name']
    return [
        service for service in services
        if (name in get_service_names(service.get('links', [])) or
            name in get_service_names_from_volumes_from(service.get('volumes_from', [])) or
            name == get_service_name_from_network_mode(service.get('network_mode')) or
            name == get_service_name_from_network_mode(service.get('pid')) or
            name in service.get('depends_on', []))
    ]
    
    It has been modified to mimic the behaviour of
https://golang.org/pkg/time/#ParseDuration
'''
# MIT LICENSE
#
# Permission is hereby granted, free of charge, to any person
# obtaining a copy of this software and associated documentation files
# (the 'Software'), to deal in the Software without restriction,
# including without limitation the rights to use, copy, modify, merge,
# publish, distribute, sublicense, and/or sell copies of the Software,
# and to permit persons to whom the Software is furnished to do so,
# subject to the following conditions:
#
# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
# BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
# ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
from __future__ import absolute_import
from __future__ import unicode_literals
    
        def download_from_bintray(self, repo_name, filename):
        print('Downloading {} from bintray'.format(filename))
        url = '{base}/{repo_name}/{filename}'.format(
            base=self.base_bintray_url, repo_name=repo_name, filename=filename
        )
        full_dest = os.path.join(REPO_ROOT, self.destination, filename)
        return self._download(url, full_dest)
    
        def test_format_call(self):
        prefix = '' if six.PY3 else 'u'
        expected = '(%(p)s'arg1', True, key=%(p)s'value')' % dict(p=prefix)
        actual = verbose_proxy.format_call(
            ('arg1', True),
            {'key': 'value'})
    
            with pytest.raises(DependencyError) as exc:
            sort_service_dicts(services)
        assert 'web' in exc.exconly()
    
    from compose.config.errors import ConfigurationError
from compose.config.types import parse_extra_hosts
from compose.config.types import ServicePort
from compose.config.types import VolumeFromSpec
from compose.config.types import VolumeSpec
from compose.const import COMPOSEFILE_V1 as V1
from compose.const import COMPOSEFILE_V2_0 as V2_0
    
            results, errors = parallel_execute(
            objects=list(range(tasks)),
            func=f,
            get_name=six.text_type,
            msg='Testing',
            limit=limit,
        )