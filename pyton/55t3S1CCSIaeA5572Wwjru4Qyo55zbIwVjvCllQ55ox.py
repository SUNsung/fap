
        
            # Then we call the sorting method
    sort_blocks()
    
      Args:
    data_dir: The directory from which to load the datasets.
    data_filename_stem: The stem of the filename for the datasets.
    
      Args:
    x: input The tensor to tranformation.
    out_size: The integer size of non-batch output dimension.
    do_bias (optional): Add a learnable bias vector to the operation.
    alpha (optional): A multiplicative scaling for the weight initialization
      of the matrix, in the form \alpha * 1/\sqrt{x.shape[1]}.
    identity_if_possible (optional): just return identity,
      if x.shape[1] == out_size.
    normalized (optional): Option to divide out by the norms of the rows of W.
    name (optional): The name prefix to add to variables.
    collections (optional): List of additional collections. (Placed in
      tf.GraphKeys.GLOBAL_VARIABLES already, so no need for that.)
    
        self.bos_char = free_ids[0]  # <begin sentence>
    self.eos_char = free_ids[1]  # <end sentence>
    self.bow_char = free_ids[2]  # <begin word>
    self.eow_char = free_ids[3]  # <end word>
    self.pad_char = free_ids[4]  # <padding>
    
      # Averages for real and fake token values.
  real = tf.mul(values, present)
  fake = tf.mul(values, missing)
  real_avg = tf.reduce_sum(real) / real_count
  fake_avg = tf.reduce_sum(fake) / fake_count
    
    
def create_critic(hparams, sequence, is_training, reuse=None):
  '''Create the Critic model specified by the FLAGS and hparams.
    
      Returns:
    final_gen_objective:  Final REINFORCE objective for the sequence.
    rewards:  tf.float32 Tensor of rewards for sequence of shape [batch_size,
      sequence_length]
    advantages: tf.float32 Tensor of advantages for sequence of shape
      [batch_size, sequence_length]
    baselines:  tf.float32 Tensor of baselines for sequence of shape
      [batch_size, sequence_length]
    maintain_averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
  '''
  # Final Generator objective.
  final_gen_objective = 0.
  gamma = hparams.rl_discount_rate
  eps = 1e-7
    
    FLAGS = tf.app.flags.FLAGS
    
        elif (FLAGS.discriminator_model == 'bidirectional_zaremba' or
          FLAGS.discriminator_model == 'bidirectional_vd'):
      dis_fwd_variable_maps = variable_mapping.dis_fwd_bidirectional(hparams)
      dis_bwd_variable_maps = variable_mapping.dis_bwd_bidirectional(hparams)
      # Savers for the forward/backward Discriminator components.
      dis_fwd_init_saver = tf.train.Saver(var_list=dis_fwd_variable_maps)
      dis_bwd_init_saver = tf.train.Saver(var_list=dis_bwd_variable_maps)
      init_savers['dis_fwd_init_saver'] = dis_fwd_init_saver
      init_savers['dis_bwd_init_saver'] = dis_bwd_init_saver
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
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
    
    from __future__ import unicode_literals
    
            jsi = JSInterpreter('function f () { x =  2  ; return x; }')
        self.assertEqual(jsi.call_function('f'), 2)
    
        def test_youtube_nosubtitles(self):
        self.DL.expect_warning('video doesn\'t have subtitles')
        self.url = 'n5BB19UTcdA'
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertFalse(subtitles)
    
    
    
    from front_base.openssl_wrap import SSLContext
from front_base.connect_creator import ConnectCreator
from front_base.host_manager import HostManagerBase
import front_base.check_ip
from config import config
    
    
def is_ok(ip=None):
    if not ip:
        return IPv4.is_ok() or IPv6.is_ok()
    elif '.' in ip:
        return IPv4.is_ok()
    else:
        return IPv6.is_ok()
    
        if prober.nat_type in ('cone', 'restricted'):
        usable = 'usable'
    elif prober.nat_type == 'offline':
        usable = 'unusable'
    else:
        usable = 'unknown'
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
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
    
            where x in T* and alpha, beta in V*; T is set of terminals and
        V is the set of terminals and nonterminals.  In other words,
        FOLLOW(r) is the set of all tokens that can possibly follow
        references to r in *any* sentential form (context).  At
        runtime, however, we know precisely which context applies as
        we have the call chain.  We may compute the exact (rather
        than covering superset) set of following tokens.