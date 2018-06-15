with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    
def _mkdir(d):
    if not os.path.exists(d):
        os.mkdir(d)
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
        _ALL_CLASSES = [
        klass
        for name, klass in globals().items()
        if name.endswith('IE') and name != 'GenericIE'
    ]
    _ALL_CLASSES.append(GenericIE)
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
        _CONFIG = {
        # http://edition.cnn.com/.element/apps/cvp/3.0/cfg/spider/cnn/expansion/config.xml
        'edition': {
            'data_src': 'http://edition.cnn.com/video/data/3.0/video/%s/index.xml',
            'media_src': 'http://pmd.cdn.turner.com/cnn/big',
        },
        # http://money.cnn.com/.element/apps/cvp2/cfg/config.xml
        'money': {
            'data_src': 'http://money.cnn.com/video/data/4.0/video/%s.xml',
            'media_src': 'http://ht3.cdn.turner.com/money/big',
        },
    }
    
                # empty iterator
            for i in range(1, len(data)):
                next(itorg)
            dump = pickle.dumps((itorg, orig), proto)
            it, d = pickle.loads(dump)
            for i, x in enumerate(data):
                d[i] = x
            self.assertEqual(type(it), type(itorg))
            self.assertEqual(list(it), [])
    
    
class Maildir(Mailbox):
    '''A qmail-style Maildir mailbox.'''
    
        def test_oldargs1_1(self):
        [].count(1)
    
        def report_404 (self):
            # Report a 404 error
        self.send_response(404)
        response = b'No such page'
        self.send_header('Content-type', 'text/plain')
        self.send_header('Content-length', str(len(response)))
        self.end_headers()
        self.wfile.write(response)
    
    class AnnotationsFutureTestCase(unittest.TestCase):
    template = dedent(
        '''
        from __future__ import annotations
        def f() -> {ann}:
            ...
        def g(arg: {ann}) -> None:
            ...
        var: {ann}
        var2: {ann} = None
        '''
    )
    
        def test_is_socket_false(self):
        P = self.cls(BASE)
        self.assertFalse((P / 'fileA').is_socket())
        self.assertFalse((P / 'dirA').is_socket())
        self.assertFalse((P / 'non-existing').is_socket())
        self.assertFalse((P / 'fileA' / 'bah').is_socket())
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
        @classmethod
    def setUpClass(cls):
        cls.s = Subject()
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
    
    
class RegistryHolder(type):
    
        def test_parrot_eng_localization(self):
        self.assertEqual(self.e.get('parrot'), 'parrot')
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
    ### OUTPUT ###
# Counting to two...
# one two
# Counting to five...
# one two three four five

    
        @Transactional
    def do_stuff(self):
        self.value = '1111'  # <- invalid value
        self.increment()  # <- will fail and rollback
    
    
### OUTPUT ###
# Specification
# False
# True
# False
