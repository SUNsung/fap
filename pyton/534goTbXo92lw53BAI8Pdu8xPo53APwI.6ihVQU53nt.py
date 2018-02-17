
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    from youtube_dl.extractor import (
    FacebookIE,
    gen_extractors,
    YoutubeIE,
)
    
    
class TestSocks(unittest.TestCase):
    _SKIP_SOCKS_TEST = True
    
            video_url = self._html_search_regex(r'video_url\s*:\s*'([^']+)'', webpage, 'video URL')
    
    from .onet import OnetBaseIE
    
    
def test_messages(client, app):
    '''Test that messages work'''
    login(client, app.config['USERNAME'],
          app.config['PASSWORD'])
    rv = client.post('/add', data=dict(
        title='<Hello>',
        text='<strong>HTML</strong> allowed here'
    ), follow_redirects=True)
    assert b'No entries here so far' not in rv.data
    assert b'&lt;Hello&gt;' in rv.data
    assert b'<strong>HTML</strong> allowed here' in rv.data

    
    
def gravatar_url(email, size=80):
    '''Return the gravatar image for the given email address.'''
    return 'https://www.gravatar.com/avatar/%s?d=identicon&s=%d' % \
        (md5(email.strip().lower().encode('utf-8')).hexdigest(), size)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            def validate(sig):
            return (b'value' ==
                    decode_signed_value(SignedValueTest.SECRET, 'key',
                                        prefix + sig, clock=self.present))
        self.assertTrue(validate(
            '3d4e60b996ff9c5d5788e333a0cba6f238a22c6c0f94788870e1a9ecd482e152'))
        # All zeros
        self.assertFalse(validate('0' * 32))
        # Change one character
        self.assertFalse(validate(
            '4d4e60b996ff9c5d5788e333a0cba6f238a22c6c0f94788870e1a9ecd482e152'))
        # Change another character
        self.assertFalse(validate(
            '3d4e60b996ff9c5d5788e333a0cba6f238a22c6c0f94788870e1a9ecd482e153'))
        # Truncate
        self.assertFalse(validate(
            '3d4e60b996ff9c5d5788e333a0cba6f238a22c6c0f94788870e1a9ecd482e15'))
        # Lengthen
        self.assertFalse(validate(
            '3d4e60b996ff9c5d5788e333a0cba6f238a22c6c0f94788870e1a9ecd482e1538'))
    
    from tornado import autoreload
    
    from tornado.escape import utf8
from tornado.httpclient import HTTPRequest
from tornado.locks import Event
from tornado.stack_context import ExceptionStackContext
from tornado.testing import AsyncHTTPTestCase, gen_test
from tornado.test import httpclient_test
from tornado.test.util import unittest
from tornado.web import Application, RequestHandler
    
        @gen_test
    def test_acquire_timeout(self):
        lock = locks.Lock()
        lock.acquire()
        with self.assertRaises(gen.TimeoutError):
            yield lock.acquire(timeout=timedelta(seconds=0.01))