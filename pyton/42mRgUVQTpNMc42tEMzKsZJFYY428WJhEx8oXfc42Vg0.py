
        
        
if __name__ == '__main__':
    SalesRanker.run()

    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'UNEXPECTED_PROMPT_RESPONSE')
def test_auth_plugin_prompt_password_false(httpbin):
    
        def test_POST_no_data_no_auto_headers(self, httpbin):
        # JSON headers shouldn't be automatically set for POST with no data.
        r = http('POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Accept': '*/*'' in r
        assert ''Content-Type': 'application/json' not in r
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    import pytest
from requests.compat import urljoin
    
                self.handler_results.append(handler_result)
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    def test_fragment_update_on_redirect():
    '''Verify we only append previous fragment if one doesn't exist on new
    location. If a new fragment is encountered in a Location header, it should
    be added to all subsequent requests.
    '''
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            CaseInsensitiveDict(),
            None
        ),
        (
            CaseInsensitiveDict({'content-type': 'application/json; charset=utf-8'}),
            'utf-8'
        ),
        (
            CaseInsensitiveDict({'content-type': 'text/plain'}),
            'ISO-8859-1'
        ),
    ))
def test_get_encoding_from_headers(value, expected):
    assert get_encoding_from_headers(value) == expected
    
            :rtype: requests.Response
        '''
        # Set defaults that the hooks can utilize to ensure they always have
        # the correct parameters to reproduce the previous request.
        kwargs.setdefault('stream', self.stream)
        kwargs.setdefault('verify', self.verify)
        kwargs.setdefault('cert', self.cert)
        kwargs.setdefault('proxies', self.proxies)
    
            self.concurrent -= 1
        return ''
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
            Quoting https://twistedmatrix.com/documents/current/api/twisted.web.client.Agent.html:
        'The default is to use a BrowserLikePolicyForHTTPS,
        so unless you have special requirements you can leave this as-is.'
    
    import bz2
import gzip
import zipfile
import tarfile
import logging
from tempfile import mktemp
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
            LA(1) is not what we are looking for.  If LA(2) has the right token,
        however, then assume LA(1) is some extra spurious token.  Delete it
        and LA(2) as if we were doing a normal match(), which advances the
        input.
    
        return blob_out
    
    
def get_field_of_anchors(
    stride, anchor_sizes, anchor_aspect_ratios, octave=None, aspect=None
):
    global _threadlocal_foa
    if not hasattr(_threadlocal_foa, 'cache'):
        _threadlocal_foa.cache = {}
    
    
def _get_retinanet_blobs(
        foas, all_anchors, gt_boxes, gt_classes, im_width, im_height):
    total_anchors = all_anchors.shape[0]
    logger.debug('Getting mad blobs: im_height {} im_width: {}'.format(
        im_height, im_width))
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def main(path):
    
            errors = []
        warnings = []
        for msg in red.response.notes:
            if msg.level == 'bad':
                logger = logging.error
                if not isinstance(msg, tuple(allowed_errors)):
                    errors.append(msg)
            elif msg.level == 'warning':
                logger = logging.warning
                if not isinstance(msg, tuple(allowed_warnings)):
                    warnings.append(msg)
            elif msg.level in ('good', 'info', 'uri'):
                logger = logging.info
            else:
                raise Exception('unknown level' + msg.level)
            logger('%s: %s (%s)', msg.category, msg.show_summary('en'),
                   msg.__class__.__name__)
            logger(msg.show_text('en'))
    
    
@gen.coroutine
def c1():
    for i in range(10):
        yield c2()
    
    # os.execv is broken on Windows and can't properly parse command line
# arguments and executable name if they contain whitespaces. subprocess
# fixes that behavior.
_has_execv = sys.platform != 'win32'
    
                Returns the (closed) event loop. This is a silly thing
            to do and leaves the thread in a broken state, but it's
            enough for this test. Closing the loop avoids resource
            leak warnings.
            '''
            loop = asyncio.get_event_loop()
            loop.close()
            return loop