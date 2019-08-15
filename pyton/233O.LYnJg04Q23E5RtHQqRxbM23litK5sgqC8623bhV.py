
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def __init__(self):
        self.people = {}  # key: person_id, value: person
    
        def _hash_function(self, key):
        return key % self.size
    
    from codecs import open
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
    
def _copy_cookie_jar(jar):
    if jar is None:
        return None
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
        @pytest.mark.parametrize(
        'encoding', (
            'utf-32', 'utf-8-sig', 'utf-16', 'utf-8', 'utf-16-be', 'utf-16-le',
            'utf-32-be', 'utf-32-le'
        ))
    def test_encoded(self, encoding):
        data = '{}'.encode(encoding)
        assert guess_json_utf(data) == encoding
    
    def message_html(title, banner, detail=''):
    MESSAGE_TEMPLATE = '''
    <html><head>
    <meta http-equiv='content-type' content='text/html;charset=utf-8'>
    <title>$title</title>
    <style><!--
    body {font-family: arial,sans-serif}
    div.nav {margin-top: 1ex}
    div.nav A {font-size: 10pt; font-family: arial,sans-serif}
    span.nav {font-size: 10pt; font-family: arial,sans-serif; font-weight: bold}
    div.nav A,span.big {font-size: 12pt; color: #0000cc}
    div.nav A {font-size: 10pt; color: black}
    A.l:link {color: #6f6f6f}
    A.u:link {color: green}
    //--></style>
    </head>
    <body text=#000000 bgcolor=#ffffff>
    <table border=0 cellpadding=2 cellspacing=0 width=100%>
    <tr><td bgcolor=#3366cc><font face=arial,sans-serif color=#ffffff><b>Message</b></td></tr>
    <tr><td> </td></tr></table>
    <blockquote>
    <H1>$banner</H1>
    $detail
    <p>
    </blockquote>
    <table width=100% cellpadding=0 cellspacing=0><tr><td bgcolor=#3366cc><img alt='' width=1 height=4></td></tr></table>
    </body></html>
    '''
    return string.Template(MESSAGE_TEMPLATE).substitute(title=title, banner=banner, detail=detail)
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
        packages = find_packages('src'),
    package_dir = {'' : 'src'},
    
    __all__ = ['baomihua_download', 'baomihua_download_by_id']
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        if not info_only:
        download_url_ffmpeg(m3u8_url, title, 'm3u8', None, output_dir=output_dir, merge=merge)
    
            self.check_roundtrip('if x == 1 : \n'
                             '  print(x)\n')
        fn = support.findfile('tokenize_tests.txt')
        with open(fn, 'rb') as f:
            self.check_roundtrip(f)
        self.check_roundtrip('if x == 1:\n'
                             '    # A comment by itself.\n'
                             '    print(x) # Comment here, too.\n'
                             '    # Another comment.\n'
                             'after_if = True\n')
        self.check_roundtrip('if (x # The comments need to go in the right place\n'
                             '    == 1):\n'
                             '    print('x==1')\n')
        self.check_roundtrip('class Test: # A comment here\n'
                             '  # A comment with weird indent\n'
                             '  after_com = 5\n'
                             '  def x(m): return m*5 # a one liner\n'
                             '  def y(m): # A whitespace after the colon\n'
                             '     return y*4 # 3-space indent\n')
    
        def test_universal_newlines(self):
        # PEP 302 says universal newlines should be used.
        name = 'mod'
        mock = self.SourceOnlyLoaderMock('mod.file')
        source = 'x = 42\r\ny = -13\r\n'
        mock.source = source.encode('utf-8')
        expect = io.IncrementalNewlineDecoder(None, True).decode(source)
        self.assertEqual(mock.get_source(name), expect)
    
        #If any unknowns still exist, replace them with ''s, which are more portable
    if system == 'unknown':
        system = ''
    if node == 'unknown':
        node = ''
    if release == 'unknown':
        release = ''
    if version == 'unknown':
        version = ''
    if machine == 'unknown':
        machine = ''
    if processor == 'unknown':
        processor = ''
    
        # Get an item from the queue
    def _get(self):
        return self.queue.popleft()
    
        def get_params(self, failobj=None, header='content-type', unquote=True):
        '''Return the message's Content-Type parameters, as a list.
    
        def test_join(self):
        self.assertEqual(self.type2test(b'').join([]), b'')
        self.assertEqual(self.type2test(b'').join([b'']), b'')
        for lst in [[b'abc'], [b'a', b'bc'], [b'ab', b'c'], [b'a', b'b', b'c']]:
            lst = list(map(self.type2test, lst))
            self.assertEqual(self.type2test(b'').join(lst), b'abc')
            self.assertEqual(self.type2test(b'').join(tuple(lst)), b'abc')
            self.assertEqual(self.type2test(b'').join(iter(lst)), b'abc')
        dot_join = self.type2test(b'.:').join
        self.assertEqual(dot_join([b'ab', b'cd']), b'ab.:cd')
        self.assertEqual(dot_join([memoryview(b'ab'), b'cd']), b'ab.:cd')
        self.assertEqual(dot_join([b'ab', memoryview(b'cd')]), b'ab.:cd')
        self.assertEqual(dot_join([bytearray(b'ab'), b'cd']), b'ab.:cd')
        self.assertEqual(dot_join([b'ab', bytearray(b'cd')]), b'ab.:cd')
        # Stress it with many items
        seq = [b'abc'] * 1000
        expected = b'abc' + b'.:abc' * 999
        self.assertEqual(dot_join(seq), expected)
        self.assertRaises(TypeError, self.type2test(b' ').join, None)
        # Error handling and cleanup when some item in the middle of the
        # sequence has the wrong type.
        with self.assertRaises(TypeError):
            dot_join([bytearray(b'ab'), 'cd', b'ef'])
        with self.assertRaises(TypeError):
            dot_join([memoryview(b'ab'), 'cd', b'ef'])
    
    class CursorTests(unittest.TestCase):
    def setUp(self):
        self.cx = sqlite.connect(':memory:')
        self.cu = self.cx.cursor()
        self.cu.execute(
            'create table test(id integer primary key, name text, '
            'income number, unique_test text unique)'
        )
        self.cu.execute('insert into test(name) values (?)', ('foo',))
    
    import atexit
from concurrent.futures import _base
import itertools
import queue
import threading
import weakref
import os
    
        if 'input' in kwargs and kwargs['input'] is None:
        # Explicitly passing input=None was previously equivalent to passing an
        # empty string. That is maintained here for backwards compatibility.
        kwargs['input'] = '' if kwargs.get('universal_newlines', False) else b''
    
            stream.feed_data(b'lineAAA')
        data = self.loop.run_until_complete(stream.readuntil(separator=b'AAA'))
        self.assertEqual(b'lineAAA', data)
        self.assertEqual(b'', stream._buffer)
    
    It is common to find many false positives. To avoid reporting them
again and again, they may be added to the ``ignored.csv`` file
(located in the configuration directory). The file has the same
format as ``suspicious.csv`` with a few differences:
    
        def test_default_encoder(self):
        from acme.fields import RFC3339Field
        self.assertEqual(
            self.encoded, RFC3339Field.default_encoder(self.decoded))
    
    .. note::
   There are a few tools shipped with BIND that can all generate TSIG keys;
   ``dnssec-keygen``, ``rndc-confgen``, and ``ddns-confgen``. Try and use the
   most secure algorithm supported by your DNS server.
    
        lineage = domains.split(',')[0]
    server_cert = ssl.get_server_certificate(('localhost', context.tls_alpn_01_port))
    with open(os.path.join(context.workspace, 'conf/live/{0}/cert.pem'.format(lineage)), 'r') as file:
        certbot_cert = file.read()
    
        def get_provider(self):
        from sentry.identity import get
        return get(self.idp.type)
    
            linking_url = build_linking_url(
            self.integration,
            self.org,
            'slack-id2',
            'my-channel',
            'http://example.slack.com/response_url'
        )
        responses.add(
            method=responses.POST,
            url='http://example.slack.com/response_url',
            body='{'ok': true}',
            status=200,
            content_type='application/json',
        )
    
    
class DebugErrorPageEmbedView(View):
    def _get_project_key(self):
        return ProjectKey.objects.filter(
            project=settings.SENTRY_PROJECT,
        )[0]
    
            return predicate
    
            message = 'Background workers haven't checked in recently. '
        if backlogged:
            message += 'It seems that you have a backlog of %d tasks. Either your workers aren't running or you need more capacity.' % size
        else:
            message += 'This is likely an issue with your configuration or the workers aren't running.'
    
            # Deleting model 'EventTag'
        db.delete_table(u'tagstore_eventtag')
    
            # Changing field 'EventTag.event_id'
        db.alter_column(u'tagstore_eventtag', 'event_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
    from django.utils import timezone
    
        def render(self, context):
        params = [i.resolve(context) for i in self.params]
        if 'request' in context:
            user = context['request'].user
        else:
            user = None
    
        for link in [h.strip() for h in link_splitter.findall(instr)]:
        url, params = link.split('>', 1)
        url = url[1:]
        param_dict = {}
        for param in _splitstring(params, PARAMETER, '\s*;\s*'):
            try:
                a, v = param.split('=', 1)
                param_dict[a.lower()] = _unquotestring(v)
            except ValueError:
                param_dict[param.lower()] = None
        out[url] = param_dict
    return out

    
    
class User(object):
    '''A class whose instances want to interact with each other'''
    
        def is_satisfied_by(self, candidate):
        return bool(self._one.is_satisfied_by(candidate) or self._other.is_satisfied_by(candidate))
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
    
class Dog(object):
    def speak(self):
        return 'woof'
    
    
if __name__ == '__main__':
    rm1 = Borg()
    rm2 = Borg()
    
    
def cityscapes_to_coco_all_random(cityscapes_id):
    lookup = {
        0: -1,  # ... background
        1: -1,  # bicycle
        2: -1,  # car
        3: -1,  # person (ignore)
        4: -1,  # train
        5: -1,  # truck
        6: -1,  # motorcycle
        7: -1,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]

    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
    
def get_field_of_anchors(
    stride, anchor_sizes, anchor_aspect_ratios, octave=None, aspect=None
):
    global _threadlocal_foa
    if not hasattr(_threadlocal_foa, 'cache'):
        _threadlocal_foa.cache = {}