
        
        
def _mkdir(d):
    if not os.path.exists(d):
        os.mkdir(d)
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
    
class AudiomackIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?audiomack\.com/song/(?P<id>[\w/-]+)'
    IE_NAME = 'audiomack'
    _TESTS = [
        # hosted on audiomack
        {
            'url': 'http://www.audiomack.com/song/roosh-williams/extraordinary',
            'info_dict':
            {
                'id': '310086',
                'ext': 'mp3',
                'uploader': 'Roosh Williams',
                'title': 'Extraordinary'
            }
        },
        # audiomack wrapper around soundcloud song
        {
            'add_ie': ['Soundcloud'],
            'url': 'http://www.audiomack.com/song/hip-hop-daily/black-mamba-freestyle',
            'info_dict': {
                'id': '258901379',
                'ext': 'mp3',
                'description': 'mamba day freestyle for the legend Kobe Bryant ',
                'title': 'Black Mamba Freestyle [Prod. By Danny Wolf]',
                'uploader': 'ILOVEMAKONNEN',
                'upload_date': '20160414',
            }
        },
    ]
    
        def __init__(self, orig):
        self._orig = orig
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        def test_verify_no_OK(self, httpbin_secure):
        r = http(httpbin_secure.url + '/get', '--verify=no')
        assert HTTP_OK in r
    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
            else:
            raise ArgumentTypeError(
                u''%s' is not a valid value' % string)
    
        :param url: URL for the new :class:`Request` object.
    :param params: (optional) Dictionary or bytes to be sent in the query string for the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
                if length:
                self.headers['Content-Length'] = builtin_str(length)
            else:
                self.headers['Transfer-Encoding'] = 'chunked'
        else:
            # Multi-part file uploads.
            if files:
                (body, content_type) = self._encode_files(files, data)
            else:
                if data:
                    body = self._encode_params(data)
                    if isinstance(data, basestring) or hasattr(data, 'read'):
                        content_type = None
                    else:
                        content_type = 'application/x-www-form-urlencoded'
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    
    from requests.help import info
    
            # It's possible that users might accidentally send a Request object.
        # Guard against that specific failure case.
        if isinstance(request, Request):
            raise ValueError('You can only send PreparedRequests.')
    
    
def maybe_restore_pretrained_model(sess, saver_for_restore, model_dir):
  '''Restores pretrained model if there is no ckpt model.'''
  ckpt = tf.train.get_checkpoint_state(FLAGS.train_dir)
  checkpoint_exists = ckpt and ckpt.model_checkpoint_path
  if checkpoint_exists:
    tf.logging.info('Checkpoint exists in FLAGS.train_dir; skipping '
                    'pretraining restore')
    return
    
    
def model_fn(features, labels, mode, params):
  '''The model_fn argument for creating an Estimator.'''
  model = Model(params['data_format'])
  image = features
  if isinstance(image, dict):
    image = features['image']
    
          for i in range(3):
        key, label, uint8image = sess.run([
            result.key, result.label, result.uint8image])
        self.assertEqual('%s:%d' % (filename, i), tf.compat.as_text(key))
        self.assertEqual(labels[i], label)
        self.assertAllEqual(expected[i], uint8image)
    
        # Build 2 hidden layer DNN with 10, 10 units respectively.
    classifier = tf.estimator.DNNClassifier(
        feature_columns=my_feature_columns,
        # Two hidden layers of 10 nodes each.
        hidden_units=[10, 10],
        # The model must choose between 3 classes.
        n_classes=3)
    
          content = row[1] + ' ' + row[2]
      yield Document(
          content=content,
          is_validation=is_validation,
          is_test=False,
          label=int(row[0]) - 1,  # Labels should start from 0
          add_tokens=True)
    
    
def build_input_sequence(doc, vocab_ids):
  '''Builds input sequence from file.
    
      # Filter out low-occurring terms
  vocab_freqs = dict((term, freq) for term, freq in vocab_freqs.iteritems()
                     if doc_counts[term] > FLAGS.doc_count_threshold)
    
    DOCUMENTATION = '''
---
inventory: openshift
short_description: Openshift gears external inventory script
description:
  - Generates inventory of Openshift gears using the REST interface
  - this permit to reuse playbook to setup an Openshift gear
version_added: None
author: Michael Scherer
'''
    
    
def secure_hash(filename, hash_func=sha1):
    ''' Return a secure hash hex digest of local file, None if file is not present or a directory. '''
    
            input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies/mytargetproxy'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
        self.assertEquals('mytargetproxy', actual['entity_name'])
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    
def get_group_vars(groups):
    
    
def walk_workspace():
    root = get_root()
    files = subprocess.check_output(['git', 'ls-files', '--full-name',
                                     '--', root])
    for filename in files.splitlines():
        yield os.path.join(root, filename)
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.