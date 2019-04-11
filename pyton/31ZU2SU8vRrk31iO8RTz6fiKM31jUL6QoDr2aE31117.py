
        
            Returns:
      the word pairs of these instances.
    '''
    word_pairs = session.run(self.pairs_to_load,
                             feed_dict={self.instances_to_load: instances})
    return [pair[0].split('::') for pair in word_pairs]
    
      # Split the data, inputs, labels and times into train vs. validation.
  rates_train, rates_valid = \
      split_list_by_inds(rates, train_inds, valid_inds)
  noisy_data_train, noisy_data_valid = \
      split_list_by_inds(noisy_data, train_inds, valid_inds)
  input_train, inputs_valid = \
      split_list_by_inds(inputs, train_inds, valid_inds)
  condition_labels_train, condition_labels_valid = \
      split_list_by_inds(condition_labels, train_inds, valid_inds)
  input_times_train, input_times_valid = \
      split_list_by_inds(input_times, train_inds, valid_inds)
    
        for i, word in enumerate(self._id_to_word):
      self._word_char_ids[i] = self._convert_word_to_char_ids(word)
    
          scorings.append(dict(
          correctness=correctness,
          sentence=sentence,
          joint_prob=joint_prob,
          word_probs=word_probs))
    scoring_mode = 'full' if self.test_data_name == 'pdp60' else 'partial'
    return utils.compare_substitutions(
        self.question_ids, scorings, scoring_mode)
    
    FLAGS = tf.app.flags.FLAGS
tf.app.flags.DEFINE_boolean('prefix_label', True, 'Vocabulary file.')
    
          elif FLAGS.generator_model.startswith('seq2seq'):
        load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
        print('Restoring Generator from %s.' % load_ckpt)
        tf.logging.info('Restoring Generator from %s.' % load_ckpt)
        gen_encoder_init_saver = init_savers['gen_encoder_init_saver']
        gen_decoder_init_saver = init_savers['gen_decoder_init_saver']
        gen_encoder_init_saver.restore(sess, load_ckpt)
        gen_decoder_init_saver.restore(sess, load_ckpt)
    
          Returns:
        context_vector: A Tensor of shape [batch_size, num_units].
    
    X -= X.mean(axis=0)
X /= X.std(axis=0)
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    
    We selected two sets of two variables from the Boston housing data set
as an illustration of what kind of analysis can be done with several
outlier detection tools. For the purpose of visualization, we are working
with two-dimensional examples, but one should be aware that things are
not so trivial in high-dimension, as it will be pointed out.
    
    # The data that we are interested in is made of 8x8 images of digits, let's
# have a look at the first 4 images, stored in the `images` attribute of the
# dataset.  If we were working from image files, we could load them using
# matplotlib.pyplot.imread.  Note that each image must have the same size. For these
# images, we know which digit they represent: it is given in the 'target' of
# the dataset.
images_and_labels = list(zip(digits.images, digits.target))
for index, (image, label) in enumerate(images_and_labels[:4]):
    plt.subplot(2, 4, index + 1)
    plt.axis('off')
    plt.imshow(image, cmap=plt.cm.gray_r, interpolation='nearest')
    plt.title('Training: %i' % label)
    
    When we apply clustering to the data, we find that the clustering
reflects what was in the distance matrices. Indeed, for the Euclidean
distance, the classes are ill-separated because of the noise, and thus
the clustering does not separate the waveforms. For the cityblock
distance, the separation is good and the waveform classes are recovered.
Finally, the cosine distance does not separate at all waveform 1 and 2,
thus the clustering puts them in the same cluster.
'''
# Author: Gael Varoquaux
# License: BSD 3-Clause or CC-0
    
        plt.xticks([])
    plt.yticks([])
    if title is not None:
        plt.title(title, size=17)
    plt.axis('off')
    plt.tight_layout(rect=[0, 0.03, 1, 0.95])
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        def _print_headers(self, headers, prefix):
        for key, values in headers.items():
            for value in values:
                self._print_bytes(prefix + b' ' + key + b': ' + value)
    
                items, requests = self.run_callback(response, cb)
            if opts.pipelines:
                itemproc = self.pcrawler.engine.scraper.itemproc
                for item in items:
                    itemproc.process_item(item, spider)
            self.add_items(depth, items)
            self.add_requests(depth, requests)
    
            self.crawler_process.crawl(spidercls, **opts.spargs)
        self.crawler_process.start()
    
    from scrapy.commands import ScrapyCommand
from scrapy.settings import BaseSettings
    
            cookiejarkey = request.meta.get('cookiejar')
        jar = self.jars[cookiejarkey]
        cookies = self._get_request_cookies(jar, request)
        for cookie in cookies:
            jar.set_cookie_if_ok(cookie, request)
    
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
    
                if not res or not res.ok:
                xlog.debug('ip:%s fail', ip)
                continue
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    try:
    from io import BytesIO
except ImportError:
    from cStringIO import StringIO as BytesIO
try:
    from google.appengine.api import urlfetch
    from google.appengine.runtime import apiproxy_errors
except ImportError:
    urlfetch = None
try:
    import sae
except ImportError:
    sae = None
try:
    import bae.core.wsgi
except ImportError:
    bae = None
try:
    import socket
    import select
except ImportError:
    socket = None
try:
    import OpenSSL
except ImportError:
    OpenSSL = None
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
    from acme import test_util
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        def test_recovery_routine(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
    # If true, show URL addresses after external links.
#latex_show_urls = False
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
    'certbot-apache': (
        'https://letsencrypt-apache.readthedocs.org/en/latest/', None),
    'certbot-nginx': (
        'https://letsencrypt-nginx.readthedocs.org/en/latest/', None),
}
