
        
          Returns:
    The model's prediction for the given instances.
  '''
    
        Args:
      zs: posterior z ~ q(z|x)
      prior_zs: prior zs
    '''
    # L = -KL + log p(x|z), to maximize bound on likelihood
    # -L = KL - log p(x|z), to minimize bound on NLL
    # so 'KL cost' is postive KL divergence
    kl_b = 0.0
    for z, prior_z in zip(zs, prior_zs):
      assert isinstance(z, Gaussian)
      assert isinstance(prior_z, Gaussian)
      # ln(2pi) terms cancel
      kl_b += 0.5 * tf.reduce_sum(
          prior_z.logvar - z.logvar
          + tf.exp(z.logvar - prior_z.logvar)
          + tf.square((z.mean - prior_z.mean) / tf.exp(0.5 * prior_z.logvar))
          - 1.0, [1])
    
    
def all_plot(d, full_name='', exclude='', nspaces=0):
  '''Recursively plot all the LFADS model parameters in the nested
  dictionary.'''
  for k, v in d.iteritems():
    this_name = full_name+'/'+k
    if isinstance(v, dict):
      all_plot(v, full_name=this_name, exclude=exclude, nspaces=nspaces+4)
    else:
      if exclude == '' or exclude not in this_name:
        _plot_item(v, name=k, full_name=full_name+'/'+k, nspaces=nspaces+4)
    
    
# OPTIMIZATION
flags.DEFINE_integer('batch_size', BATCH_SIZE,
                     'Batch size to use during training.')
flags.DEFINE_float('learning_rate_init', LEARNING_RATE_INIT,
                   'Learning rate initial value')
flags.DEFINE_float('learning_rate_decay_factor', LEARNING_RATE_DECAY_FACTOR,
                   'Learning rate decay, decay by this fraction every so \
                   often.')
flags.DEFINE_float('learning_rate_stop', LEARNING_RATE_STOP,
                   'The lr is adaptively reduced, stop training at this value.')
# Rather put the learning rate on an exponentially decreasiong schedule,
# the current algorithm pays attention to the learning rate, and if it
# isn't regularly decreasing, it will decrease the learning rate.  So far,
# it works fine, though it is not perfect.
flags.DEFINE_integer('learning_rate_n_to_compare', LEARNING_RATE_N_TO_COMPARE,
                     'Number of previous costs current cost has to be worse \
                     than, to lower learning rate.')
    
      print ('loading data from ' + data_path + ' with stem ' + data_fname_stem)
  for fname in fnames:
    if fname.startswith(data_fname_stem):
      data_dict = read_data(os.path.join(data_path,fname))
      idx = len(data_fname_stem) + 1
      key = fname[idx:]
      data_dict['data_dim'] = data_dict['train_data'].shape[2]
      data_dict['num_steps'] = data_dict['train_data'].shape[1]
      dataset_dict[key] = data_dict
    
        if i > FLAGS.max_eval_steps:
      break
    
    import tensorflow as tf
    
      # Unstack Tensors into lists.
  rewards_list = tf.unstack(rewards, axis=1)
  log_probs_list = tf.unstack(log_probs, axis=1)
  missing = 1. - tf.cast(present, tf.float32)
  missing_list = tf.unstack(missing, axis=1)
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        @property
    def encoding(self):
        '''Return a `str` with the message's encoding, if known.'''
        raise NotImplementedError()
    
    
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
        '''
    CHUNK_SIZE = 1
    
        # The URL prefix the adapter should be mount to.
    prefix = None
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    from setuptools import setup, find_packages
from setuptools.command.test import test as TestCommand
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
        return inner
    
        def test_implicit_POST_stdin(self, httpbin):
        with open(FILE_PATH) as f:
            env = MockEnvironment(stdin_isatty=False, stdin=f)
            r = http('--form', httpbin.url + '/post', env=env)
        assert HTTP_OK in r
    
    current_path = os.path.dirname(os.path.abspath(__file__))
python_path = os.path.abspath( os.path.join(current_path, os.pardir, os.pardir, 'python27', '1.0'))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
        def handle_ra_packet(self, ipv6_pkt):
        server_ip = socket.inet_ntoa(ipv6_pkt[76:80])
        cone_flag = bytearray(ipv6_pkt)[32] >> 7 & 1
        logger.debug('ipv6_pkt ; RA_cone = %s\nsrc:%s\ndst:%s' % (
                cone_flag,
                str2hex(ipv6_pkt[8:24]),
                str2hex(ipv6_pkt[24:40])))
        return server_ip, cone_flag
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
    # [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
    
    def getCharIndex(self):
        '''What is the index of the current character of lookahead?'''
        
        return self.input.index()
    
            raise NotImplementedError
    
    def setCharPositionInLine(self, pos):
        '''@brief Set the column of the tokens first character,
    
                elif opt in ('-l', '--playlist', '--playlists'):
                # Download playlist whenever possible.
                conf['playlist'] = True
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
    def get_api_key(page):
    match = match1(page, pattern_inline_api_key)
    # this happens only when the url points to a gallery page
    # that contains no inline api_key(and never makes xhr api calls)
    # in fact this might be a better approch for getting a temporary api key
    # since there's no place for a user to add custom infomation that may
    # misguide the regex in the homepage
    if not match:
        return match1(get_html('https://flickr.com'), pattern_inline_api_key)
    return match