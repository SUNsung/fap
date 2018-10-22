
        
            def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
    import matplotlib
matplotlib.use('Agg')
from matplotlib import pyplot as plt
import numpy as np
import tensorflow as tf
    
    def get_train_n_valid_inds(num_trials, train_fraction, nreplications):
  '''Split the numbers between 0 and num_trials-1 into two portions for
  training and validation, based on the train fraction.
  Args:
    num_trials: the number of trials
    train_fraction: (e.g. .80)
    nreplications: the number of spiking trials per initial condition
  Returns:
    a 2-tuple of two lists: the training indices and validation indices
    '''
  train_inds = []
  valid_inds = []
  for i in range(num_trials):
    # This line divides up the trials so that within one initial condition,
    # the randomness of spikifying the condition is shared among both
    # training and validation data splits.
    if (i % nreplications)+1 > train_fraction * nreplications:
      valid_inds.append(i)
    else:
      train_inds.append(i)
    
        Args:
      shard_name: file path.
    
      all_embs = np.zeros([vocab.size, 1024])
  for i in xrange(vocab.size):
    input_dict = {t['inputs_in']: inputs,
                  t['targets_in']: targets,
                  t['target_weights_in']: weights}
    if 'char_inputs_in' in t:
      input_dict[t['char_inputs_in']] = (
          vocab.word_char_ids[i].reshape([-1, 1, MAX_WORD_LEN]))
    embs = sess.run(t['all_embs'], input_dict)
    all_embs[i, :] = embs
    sys.stderr.write('Finished word embedding %d/%d\n' % (i, vocab.size))
    
      def _score_patches(self, word_patches):
    '''Score a 2D matrix of word_patches and stitch results together.'''
    batch_size, num_timesteps = self.shape
    nrow, ncol = len(word_patches), len(word_patches[0])
    max_len = num_timesteps * ncol
    probs = np.zeros([0, max_len])  # accumulate results into this.
    
        for i in range(batch_size):
      data_index = batch * batch_size + i
      example = raw_data[data_index]
    
      word_to_id = build_vocab(train_path)
  train_data = _file_to_word_ids(train_path, word_to_id)
  valid_data = _file_to_word_ids(valid_path, word_to_id)
  test_data = _file_to_word_ids(test_path, word_to_id)
  vocabulary = len(word_to_id)
  return train_data, valid_data, test_data, vocabulary
    
      ## Load weights from language model checkpoint.
  if FLAGS.language_model_ckpt_dir:
    if FLAGS.maskgan_ckpt is None:
      ## Generator Models.
      if FLAGS.generator_model == 'rnn_nas':
        load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
        print('Restoring Generator from %s.' % load_ckpt)
        tf.logging.info('Restoring Generator from %s.' % load_ckpt)
        gen_init_saver = init_savers['gen_init_saver']
        gen_init_saver.restore(sess, load_ckpt)
    
      # The unique ngrams in the training set.
  unique_ngrams_in_train = 0.
    
          return context_vector
    
            name=HTTPie  language=Python  description='CLI HTTP client'
    
        if not args.session and not args.session_read_only:
        kwargs = get_requests_kwargs(args)
        if args.debug:
            dump_request(kwargs)
        response = requests_session.request(**kwargs)
    else:
        response = sessions.get_response(
            requests_session=requests_session,
            args=args,
            config_dir=config_dir,
            session_name=args.session or args.session_read_only,
            read_only=bool(args.session_read_only),
        )
    
    
class ConverterPlugin(object):
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
    from httpie.compat import urlopen
from httpie.downloads import (
    parse_content_range, filename_from_content_disposition, filename_from_url,
    get_unique_filename, ContentRangeError, Downloader,
)
from utils import http, MockEnvironment
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
        entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
            link_list = []
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
    def get_url_of_largest(info, api_key, size):
    if info['media'] == 'photo':
        sizes = size_suffixes
        if size in sizes:
            sizes = sizes[sizes.index(size):]
        for suffix in sizes:
            if 'url_' + suffix in info:
                return info['url_' + suffix].replace('\\', '')
        return None
    else:
        return get_orig_video_source(api_key, info['id'], info['secret'])
    
        def test_filetime(self):
        filename = support.TESTFN
        self.addCleanup(support.unlink, filename)
    
    # Note that the above expectations are still wrong in some cases, such as:
# * Windows when PYTHONLEGACYWINDOWSFSENCODING is set
# * Any platform other than AIX that uses latin-1 in the C locale
# * Any Linux distro where POSIX isn't a simple alias for the C locale
# * Any Linux distro where the default locale is something other than 'C'
#
# Options for dealing with this:
# * Don't set the PY_COERCE_C_LOCALE preprocessor definition on
#   such platforms (e.g. it isn't set on Windows)
# * Fix the test expectations to match the actual platform behaviour
    
        def check_fsencoding(self, fs_encoding, expected=None):
        self.assertIsNotNone(fs_encoding)
        codecs.lookup(fs_encoding)
        if expected:
            self.assertEqual(fs_encoding, expected)
    
    
if __name__ == '__main__':
    main()

    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
    <slide><title>Another demo slide</title>
<point>It is important</point>
<point>To have more than</point>
<point>one slide</point>
</slide>
</slideshow>
'''
    
    def test():
    NUMBER_OF_PROCESSES = 4
    TASKS1 = [(mul, (i, 7)) for i in range(20)]
    TASKS2 = [(plus, (i, 8)) for i in range(10)]
    
    
class AlexaFlashBriefingView(http.HomeAssistantView):
    '''Handle Alexa Flash Briefing skill requests.'''
    
    from homeassistant.const import CONF_USERNAME, CONF_PASSWORD
from homeassistant.components.device_tracker import (
    PLATFORM_SCHEMA, DOMAIN, ATTR_ATTRIBUTES, ENTITY_ID_FORMAT, DeviceScanner)
from homeassistant.components.zone.zone import active_zone
from homeassistant.helpers.event import track_utc_time_change
import homeassistant.helpers.config_validation as cv
from homeassistant.util import slugify
import homeassistant.util.dt as dt_util
from homeassistant.util.location import distance
    
            self.last_results = last_results
    
    _LOGGER = logging.getLogger(__name__)
    
        dispatcher_connect(hass, SIGNAL_VEHICLE_SEEN, see_vehicle)
    dispatcher_send(hass, SIGNAL_VEHICLE_SEEN, vehicle)
    
        @property
    def device_state_attributes(self):
        '''Return the state attributes.'''
        state_attr = {}
        if self.vendor_id is not None:
            state_attr[ATTR_VENDOR_ID] = self.vendor_id
            state_attr[ATTR_VENDOR_NAME] = self.vendor_name
        if self.type_id is not None:
            state_attr[ATTR_TYPE_ID] = self.type_id
            state_attr[ATTR_TYPE] = self.type
        if self.physical_address is not None:
            state_attr[ATTR_PHYSICAL_ADDRESS] = self.physical_address
        return state_attr

    
    _logger = logging.getLogger( __name__ )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      def __init__( self, all_filters ):
    self._all_filters = all_filters
    self._cache = {}
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      eq_( request.Done(), True )
    
    from ycm import vimsupport
from ycmd.utils import ToBytes
from ycm.client.completion_request import ( CompletionRequest,
                                            _FilterToMatchingCompletions,
                                            _GetRequiredNamespaceImport )
    
          assert_that( ycm.IsServerAlive(), equal_to( True ) )
      post_vim_message.assert_called_once_with( 'Restarting ycmd server...' )
    finally:
      WaitUntilReady()
      StopServer( ycm )
    
      subprocess.check_call( [ sys.executable, '-m', 'nose' ] + nosetests_args )