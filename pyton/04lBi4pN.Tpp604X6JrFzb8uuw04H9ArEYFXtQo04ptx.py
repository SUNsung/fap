
        
          # We need to keep zeros (<PAD>), and change other numbers to 1 (<UNK>)
  # if their mask is -1. First, we multiply the mask and the words.
  # Zeros will stay zeros, and words to drop will become negative.
  # Then, we change negative values to 1.
  masked_words = tf.multiply(mask, words)
  condition = tf.less(masked_words, 0)
  dropped_words = tf.where(condition, tf.ones_like(words), words)
  return dropped_words
    
    
# Initial condition generation, and condition label generation.  This
# happens outside of the dataset loop, so that all datasets have the
# same conditions, which is similar to a neurophys setup.
condition_number = 0
x0s = []
condition_labels = []
for c in range(C):
  x0 = FLAGS.x0_std * rng.randn(N, 1)
  x0s.append(np.tile(x0, nreplications)) # replicate x0 nreplications times
  # replicate the condition label nreplications times
  for ns in range(nreplications):
    condition_labels.append(condition_number)
  condition_number += 1
x0s = np.concatenate(x0s, axis=1)
    
    from synthetic_data_utils import generate_data, generate_rnn
from synthetic_data_utils import get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
import tensorflow as tf
from utils import write_datasets
    
      wname = (name + '/W') if name else '/W'
    
        # We map all indices greater than the vocabulary size to an unknown
    # character.
    indices_batch = np.where(indices_batch < vocab_size, indices_batch,
                             vocab_size - 1)
    
      Args:
    session:  Current tf.Session.
    lr_update: tf.assign operation.
    lr_placeholder: tf.placeholder for the new learning rate.
    new_lr: New learning rate to use.
  '''
  session.run(lr_update, feed_dict={lr_placeholder: new_lr})
    
      for t in ngrams_list:
    key = hash_function(t)
    if key in counts:
      counts[key] += 1
    else:
      counts[key] = 1
  return counts
    
    # Allow direct execution
import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    from youtube_dl.utils import intlist_to_bytes
from youtube_dl.aes import aes_encrypt, key_expansion
    
    import datetime
import io
import json
import textwrap
    
    
def build_lazy_ie(ie, name):
    valid_url = getattr(ie, '_VALID_URL', None)
    s = ie_template.format(
        name=name,
        bases=', '.join(map(get_base_name, ie.__bases__)),
        valid_url=valid_url,
        module=ie.__module__)
    if ie.suitable.__func__ is not InfoExtractor.suitable.__func__:
        s += '\n' + getsource(ie.suitable)
    if hasattr(ie, '_make_valid_url'):
        # search extractors
        s += make_valid_template.format(valid_url=ie._make_valid_url())
    return s
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
        def test_format_selection_video(self):
        formats = [
            {'format_id': 'dash-video-low', 'ext': 'mp4', 'preference': 1, 'acodec': 'none', 'url': TEST_URL},
            {'format_id': 'dash-video-high', 'ext': 'mp4', 'preference': 2, 'acodec': 'none', 'url': TEST_URL},
            {'format_id': 'vid', 'ext': 'mp4', 'preference': 3, 'url': TEST_URL},
        ]
        info_dict = _make_result(formats)
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
    
if __name__ == '__main__':
    unittest.main()

    
    
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
        def record_once(self, func):
        '''Works like :meth:`record` but wraps the function in another
        function that will ensure the function is only called once.  If the
        blueprint is registered a second time on the application, the
        function passed is not called.
        '''
        def wrapper(state):
            if state.first_registration:
                func(state)
        return self.record(update_wrapper(wrapper, func))
    
        def open(self, *args, **kwargs):
        as_tuple = kwargs.pop('as_tuple', False)
        buffered = kwargs.pop('buffered', False)
        follow_redirects = kwargs.pop('follow_redirects', False)
    
                def post(self):
                session['counter'] = session.get('counter', 0) + 1
                return 'OK'
    
    
@deconstructible
class KeysValidator:
    '''A validator designed for HStore to require/restrict keys.'''
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
    
@x_robots_tag
def sitemap(request, sitemaps, section=None,
            template_name='sitemap.xml', content_type='application/xml'):
    
        @cached_property
    def databases(self):
        if self._databases is None:
            self._databases = settings.DATABASES
        if self._databases == {}:
            self._databases = {
                DEFAULT_DB_ALIAS: {
                    'ENGINE': 'django.db.backends.dummy',
                },
            }
        if self._databases[DEFAULT_DB_ALIAS] == {}:
            self._databases[DEFAULT_DB_ALIAS]['ENGINE'] = 'django.db.backends.dummy'
    
            Literal:                   '#000000',        # class: 'l'
        Literal.Date:              '#000000',        # class: 'ld'
    
    '''
Requests HTTP Library
~~~~~~~~~~~~~~~~~~~~~
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    # The name of a javascript file (relative to the configuration directory) that
# implements a search results scorer. If empty, the default will be used.
#html_search_scorer = 'scorer.js'
    
            jar = requests.cookies.RequestsCookieJar()
        jar.set(key, value, secure=secure, domain=domain, rest=rest)
    
            elif isinstance(self.input, TreeNodeStream):
            adaptor = self.input.treeAdaptor
            return adaptor.getType(self.node)
    
    authzr, authzr_response = acme.poll(authzr)
    
            if self.unsaved_files():
            self.save_notes += '(autosave)'
            self.save()
    
    ALL_SSL_OPTIONS_HASHES = [
    '2086bca02db48daf93468332543c60ac6acdb6f0b58c7bfdf578a5d47092f82a',
    '4844d36c9a0f587172d9fa10f4f1c9518e3bcfa1947379f155e16a70a728c21a',
    '5a922826719981c0a234b1fbcd495f3213e49d2519e845ea0748ba513044b65b',
    '4066b90268c03c9ba0201068eaa39abbc02acf9558bb45a788b630eb85dadf27',
    'f175e2e7c673bd88d0aff8220735f385f916142c44aa83b09f1df88dd4767a88',
    'cfdd7c18d2025836ea3307399f509cfb1ebf2612c87dd600a65da2a8e2f2797b',
    '80720bd171ccdc2e6b917ded340defae66919e4624962396b992b7218a561791',
    'c0c022ea6b8a51ecc8f1003d0a04af6c3f2bc1c3ce506b3c2dfc1f11ef931082',
]
'''SHA256 hashes of the contents of previous versions of all versions of MOD_SSL_CONF_SRC'''
    
            '''
        if self._addr_less_specific(addr):
            return True
        elif self.get_addr() == addr.get_addr():
            if self.is_wildcard() or self.get_port() == addr.get_port():
                return True
        return False
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
        def test_perform2(self):
        # Avoid load module
        self.sni.configurator.parser.modules.add('ssl_module')
        self.sni.configurator.parser.modules.add('socache_shmcb_module')
        acme_responses = []
        for achall in self.achalls:
            self.sni.add_chall(achall)
            acme_responses.append(achall.response(self.auth_key))
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def do_something(self, something):
        return 'Doing %s' % something
    
        def setReporter(self, reporter):
        self._reporter = reporter
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    
    
if __name__ == '__main__':
    print('Before subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
        root_specification = UserSpecification().and_specification(SuperUserSpecification())
    
    ### OUTPUT ###
# generic_visit A
# visit_B B
# visit_B C
