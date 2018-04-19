
        
                def get_auth(self, username=None, password=None):
            assert username is None
            assert password is None
            assert self.raw_auth == BASIC_AUTH_HEADER_VALUE
            return basic_auth(self.raw_auth)
    
        def iter_body(self):
        first_chunk = True
        iter_lines = self.msg.iter_lines(self.CHUNK_SIZE)
        for line, lf in iter_lines:
            if b'\0' in line:
                if first_chunk:
                    converter = self.conversion.get_converter(self.mime)
                    if converter:
                        body = bytearray()
                        # noinspection PyAssignmentToLoopOrWithParameter
                        for line, lf in chain([(line, lf)], iter_lines):
                            body.extend(line)
                            body.extend(lf)
                        self.mime, body = converter.convert(body)
                        assert isinstance(body, str)
                        yield self.process_body(body)
                        return
                raise BinarySuppressedError()
            yield self.process_body(line) + lf
            first_chunk = False
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    '''
from utils import http, HTTP_OK
from fixtures import UNICODE
    
            Referer:http://httpie.org  Cookie:foo=bar  User-Agent:bacon/1.0
    
        def _get_path(self):
        '''Return the config file path without side-effects.'''
        raise NotImplementedError()
    
    
class PluginManager(object):
    
        @property
    def cookies(self):
        jar = RequestsCookieJar()
        for name, cookie_dict in self['cookies'].items():
            jar.set_cookie(create_cookie(
                name, cookie_dict.pop('value'), **cookie_dict))
        jar.clear_expired_cookies()
        return jar
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
      def testSimple(self):
    labels = [9, 3, 0]
    records = [self._record(labels[0], 0, 128, 255),
               self._record(labels[1], 255, 0, 1),
               self._record(labels[2], 254, 255, 0)]
    contents = b''.join([record for record, _ in records])
    expected = [expected for _, expected in records]
    filename = os.path.join(self.get_temp_dir(), 'cifar')
    open(filename, 'wb').write(contents)
    
    import argparse
import tensorflow as tf
    
    
def main(_):
  tf.logging.set_verbosity(tf.logging.INFO)
  tf.logging.info('Assigning vocabulary ids...')
  vocab_ids = make_vocab_ids(
      FLAGS.vocab_file or os.path.join(FLAGS.output_dir, 'vocab.txt'))
    
    # Flags controlling input are in document_generators.py
    
      def testBidirLM(self):
    graphs.VatxtBidirModel().language_model_graph()
    
    Computational time:
  2 days to train 100000 steps on 1 layer 1024 hidden units LSTM,
  256 embeddings, 400 truncated BP, 256 minibatch and on single GPU (Pascal
  Titan X, cuDNNv5).
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
def _landscape_client():
    env = EnvironmentConfig()
    return API(
        uri=env.uri,
        access_key=env.access_key,
        secret_key=env.secret_key,
        ssl_ca_file=env.ssl_ca_file)
    
            # global, resource
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('urlMaps', actual['resource_name'])
    
    class StatisticsError(ValueError):
    pass
    
        def test_keys_reuse(self):
        s = '[{'a_key': 1, 'b_\xe9': 2}, {'a_key': 3, 'b_\xe9': 4}]'
        self.check_keys_reuse(s, self.loads)
        self.check_keys_reuse(s, self.json.decoder.JSONDecoder().decode)
    
    import re
    
        def assertAlmostEqual(self, a, b):
        if isinstance(a, complex):
            if isinstance(b, complex):
                unittest.TestCase.assertAlmostEqual(self, a.real, b.real)
                unittest.TestCase.assertAlmostEqual(self, a.imag, b.imag)
            else:
                unittest.TestCase.assertAlmostEqual(self, a.real, b)
                unittest.TestCase.assertAlmostEqual(self, a.imag, 0.)
        else:
            if isinstance(b, complex):
                unittest.TestCase.assertAlmostEqual(self, a, b.real)
                unittest.TestCase.assertAlmostEqual(self, 0., b.imag)
            else:
                unittest.TestCase.assertAlmostEqual(self, a, b)
    
        def _create_infile(self):
        infile = support.TESTFN
        with open(infile, 'w') as fp:
            self.addCleanup(os.remove, infile)
            fp.write(self.data)
        return infile
    
            a.append(100)
        self.assertEqual(x[:], list(range(16)))
    
        @require_oauth2_scope('subscribe')
    @validate(
        VUser(),
        friend_rel=VFriendOfMine('username'),
    )
    @api_doc(api_section.users, uri='/api/v1/me/friends/{username}')
    def DELETE_friends(self, friend_rel):
        '''Stop being friends with a user.'''
        c.user.remove_friend(friend_rel._thing2)
        if c.user.gold:
            c.user.friend_rels_cache(_update=True)
        response.status = 204

    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass