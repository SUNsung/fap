
        
          Performance (recall, precision and F1), classification report (per
  class performance), and confusion matrix).
    
        Args:
      datasets, the dictionary of datasets used in the study.
      summary_values:  These summary values are created from the training loop,
      and so summarize the entire set of datasets.
    '''
    hps = self.hps
    tr_kl_cost = summary_values['tr_kl_cost']
    tr_recon_cost = summary_values['tr_recon_cost']
    tr_total_cost = summary_values['tr_total_cost']
    kl_weight = summary_values['kl_weight']
    l2_weight = summary_values['l2_weight']
    l2_cost = summary_values['l2_cost']
    has_any_valid_set = summary_values['has_any_valid_set']
    i = summary_values['nepochs']
    
    
# If there are observed inputs, there are two ways to add that observed
# input to the model.  The first is by treating as something to be
# inferred, and thus encoding the observed input via the encoders, and then
# input to the generator via the 'inferred inputs' channel.  Second, one
# can input the input directly into the generator.  This has the downside
# of making the generation process strictly dependent on knowing the
# observed input for any generated trial.
flags.DEFINE_boolean('inject_ext_input_to_gen',
                     INJECT_EXT_INPUT_TO_GEN,
                     'Should observed inputs be input to model via encoders, \
                     or injected directly into generator?')
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
      Args:
    data_path: The path to the save directory.
    data_fname_stem: The filename stem of the file in which to write the data.
    dataset_dict:  The dictionary of datasets. The keys are strings
      and the values data dictionaries (str -> numpy arrays) associations.
    compression (optional): The compression to use for h5py (disabled by
      default because the library borks on scalars, otherwise try 'gzip').
  '''
    
      # print('Number of batches per epoch: %d' % epoch_size)
  for i in range(epoch_size):
    x = data[:, i * num_steps:(i + 1) * num_steps]
    y = data[:, i * num_steps + 1:(i + 1) * num_steps + 1]
    w = np.ones_like(x)
    yield (x, y, w)

    
        Args:
      hparams:  Hyperparameters for the MaskGAN.
      data: Data to evaluate.
      id_to_word: Dictionary of indices to words.
      log_dir: Log directory.
      output_file:  Output file for the samples.
  '''
  # Boolean indicating operational mode.
  is_training = False
    
      # If there are no real or fake entries in the batch, we assign an average
  # value of zero.
  real_avg = tf.where(tf.equal(real_count, 0), zero_tensor, real_avg)
  fake_avg = tf.where(tf.equal(fake_count, 0), zero_tensor, fake_avg)
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
        ## Discriminator Variables/Savers.
    if FLAGS.discriminator_model == 'rnn_nas':
      dis_variable_maps = variable_mapping.rnn_nas(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
          # Prediction is linear output for Discriminator.
      predictions = tf.contrib.layers.linear(outputs, 1, scope=vs)
    
    from .hash_table import HashTable
    
    class Decision_Tree:
    def __init__(self, depth = 5, min_leaf_size = 5):
        self.depth = depth
        self.decision_boundary = 0
        self.left = None
        self.right = None
        self.min_leaf_size = min_leaf_size
        self.prediction = None
    
        for freq in freqToLetter:
        freqToLetter[freq].sort(key = ETAOIN.find, reverse = True)
        freqToLetter[freq] = ''.join(freqToLetter[freq])
    
        @staticmethod
    def _get_old_cert(commonname):
        certfile = os.path.join(CertUtil.ca_certdir, commonname + '.crt')
        if os.path.exists(certfile):
            with open(certfile, 'rb') as fp:
                cert = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, fp.read())
            if datetime.datetime.strptime(cert.get_notAfter(), '%Y%m%d%H%M%SZ') < datetime.datetime.utcnow() + datetime.timedelta(days=30):
                try:
                    os.remove(certfile)
                except OSError as e:
                    xlog.warning('CertUtil._get_old_cert failed: unable to remove outdated cert, %r', e)
                else:
                    return
                # well, have to use the old one
            return certfile
    
            self.in_fd = open('ipv6_list.txt', 'r')
        self.out_fd = open(
            os.path.join(module_data_path, 'ipv6_list.txt'),
            'w'
        )
    
    # begin[licence]
#
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
#
# end[licence]
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    
def huomaotv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    room_id_pattern = r'huomao.com/(\d+)'
    room_id = match1(url, room_id_pattern)
    html = get_content(get_mobile_room_url(room_id))
    
        def get_title(self):
        if 'viewVCourse' in self.url:
            self.title = public_course_get_title(self.url, self.page)
            return
        title_a_patt = r'<div class='con'> <a.*?>(.*?)</a>'
        title_b_patt = r'<div class='con'> <a.*?/a>((.|\n)*?)</div>'
        title_a = match1(self.page, title_a_patt).strip()
        title_b = match1(self.page, title_b_patt).strip()
        title = title_a + title_b
        title = re.sub('( +|\n|\t|\r|&nbsp;)', '', unescape_html(title).replace(' ', ''))
        self.title = title
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']