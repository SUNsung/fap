
        
        data_train_truth = nparray_and_transpose(data_train_truth)
data_valid_truth = nparray_and_transpose(data_valid_truth)
data_train_spiking = nparray_and_transpose(data_train_spiking)
data_valid_spiking = nparray_and_transpose(data_valid_spiking)
    
    # write out the dataset
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)
print ('Saved to ', os.path.join(FLAGS.save_dir,
                                 FLAGS.datafile_name + '_' + dataset_name))

    
        chars_set |= {self.bos_char, self.eos_char, self.bow_char, self.eow_char,
                  self.pad_char}
    
        # Split special chars at the start of word
    will_split = True
    while will_split:
      will_split = False
      for char in _START_SPECIAL_CHARS:
        if word.startswith(char):
          tokenized.append(char)
          word = word[len(char):]
          will_split = True
    
              # Randomly mask out tokens.
          p = model_utils.generate_mask()
    
      ## Load weights from language model checkpoint.
  if FLAGS.language_model_ckpt_dir:
    if FLAGS.maskgan_ckpt is None:
      ## Generator Variables/Savers.
      if FLAGS.generator_model == 'rnn_nas':
        gen_variable_maps = variable_mapping.rnn_nas(hparams, model='gen')
        gen_init_saver = tf.train.Saver(var_list=gen_variable_maps)
        init_savers['gen_init_saver'] = gen_init_saver
    
      # The unique ngrams in the training set.
  unique_ngrams_in_train = 0.
    
    
@pytest.fixture(autouse=True)
def usage_tracker_io(usage_tracker):
    io = StringIO()
    usage_tracker.return_value \
                 .open.return_value \
                 .__enter__.return_value = io
    return io
    
        proc.sendline(u'ehco test')
    
    
init_bashrc = u'''echo '
export SHELL=/bin/bash
export PS1='$ '
echo > $HISTFILE
eval $(thefuck --alias {})
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.bashrc'''
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
            Did you mean `build`?
'''
    
            cid = CaseInsensitiveDict()
        cid['Accept'] = 'application/json'
        cid['aCCEPT'] == 'application/json'  # True
        list(cid) == ['Accept']  # True
    
    import pytest
from requests.compat import urljoin
    
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
    
        if isinstance(cookies, dict):
        cookiejar = cookiejar_from_dict(
            cookies, cookiejar=cookiejar, overwrite=False)
    elif isinstance(cookies, cookielib.CookieJar):
        try:
            cookiejar.update(cookies)
        except AttributeError:
            for cookie_in_jar in cookies:
                cookiejar.set_cookie(cookie_in_jar)
    
    
def default_hooks():
    return {event: [] for event in HOOKS}
    
            server = Server.basic_response_server(requests_to_handle=requests_to_handle)
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError
    
    accepted_chars = re.compile(r'[\u4E00-\u9FD5]+')
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    if opt.topK==None:
    topK=10
else:
    topK = int(opt.topK)