
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
        @staticmethod
    def format_speed(speed):
        if speed is None:
            return '%10s' % '---b/s'
        return '%10s' % ('%s/s' % format_bytes(speed))
    
        _TESTS = [{
        'url': 'http://www.southpark.nl/full-episodes/s18e06-freemium-isnt-free',
        'info_dict': {
            'title': 'Freemium Isn\'t Free',
            'description': 'Stan is addicted to the new Terrance and Phillip mobile game.',
        },
        'playlist_mincount': 3,
    }]
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    
# find the correct sorting and add the required base classes so that sublcasses
# can be correctly created
classes = _ALL_CLASSES[:-1]
ordered_cls = []
while classes:
    for c in classes[:]:
        bases = set(c.__bases__) - set((object, InfoExtractor, SearchInfoExtractor))
        stop = False
        for b in bases:
            if b not in classes and b not in ordered_cls:
                if b.__name__ == 'GenericIE':
                    exit()
                classes.insert(0, b)
                stop = True
        if stop:
            break
        if all(b in ordered_cls for b in bases):
            ordered_cls.append(c)
            classes.remove(c)
            break
ordered_cls.append(_ALL_CLASSES[-1])
    
    # -- General configuration ------------------------------------------------
    
        @classmethod
    def change_cdn(cls, url):
        # if the cnd_url starts with an ip addr, it should be youku's old CDN
        # which rejects http requests randomly with status code > 400
        # change it to the dispatcher of aliCDN can do better
        # at least a little more recoverable from HTTP 403
        if cls.dispatcher_url in url:
            return url
        elif 'k.youku.com' in url:
            return url
        else:
            url_seg_list = list(urllib.parse.urlsplit(url))
            url_seg_list[1] = cls.dispatcher_url
            return urllib.parse.urlunsplit(url_seg_list)
    
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
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
            The original container is renamed to a temporary name so that data
        volumes can be copied to the new container, before the original
        container is removed.
        '''
    
    
class MissingDigests(Exception):
    def __init__(self, needs_push, needs_pull):
        self.needs_push = needs_push
        self.needs_pull = needs_pull
    
        @mock.patch('compose.network.Network.true_name', lambda n: n.full_name)
    def test_check_remote_network_config_options_mismatch(self):
        net = Network(None, 'compose_test', 'net1', 'overlay')
        with pytest.raises(NetworkConfigChangedError) as e:
            check_remote_network_config({'Driver': 'overlay', 'Options': {
                'com.docker.network.driver.foo': 'baz'
            }}, net)
    
            events = list(progress_stream.stream_output(events, output))
        assert len(output.getvalue()) > 0
    
    
class TestSudokuValidator(unittest.TestCase):
    '''[summary]
    Test for the file sudoku_validator.py
    
        def _rotate_right(self, parent_node: Node, child_index: int):
        '''
        Take key from left brother of the child and transfer to the child
        '''
        parent_key = parent_node.keys[child_index - 1]
        new_parent_key = parent_node.children[child_index - 1].keys.pop()
        parent_node.children[child_index].keys.insert(0, parent_key)
        parent_node.keys[child_index - 1] = new_parent_key
    
    
import random