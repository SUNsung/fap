
        
        
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
      Returns:
    The last relevant LSTM output cell for each batch instance.
  '''
  max_length = int(output.get_shape()[1])
  path_lengths = tf.clip_by_value(seq_lengths - 1, 0, max_length)
  relevant = tf.reduce_sum(tf.multiply(output, tf.expand_dims(
      tf.one_hot(path_lengths, max_length), -1)), 1)
  return relevant
    
    if S < N:
  # Note that this isn't necessary for this synthetic example, but
  # it's useful to see how the input factor matrices were initialized
  # for actual neurophysiology data.
  datasets = add_alignment_projections(datasets, npcs=FLAGS.npcs)
    
    
def nparray_and_transpose(data_a_b_c):
  '''Convert the list of items in data to a numpy array, and transpose it
  Args:
    data: data_asbsc: a nested, nested list of length a, with sublist length
      b, with sublist length c.
  Returns:
    a numpy 3-tensor with dimensions a x c x b
'''
  data_axbxc = np.array([datum_b_c for datum_b_c in data_a_b_c])
  data_axcxb = np.transpose(data_axbxc, axes=[0,2,1])
  return data_axcxb
    
      def add_single_model(self, model_name='lm1'):
    '''Add a single model into the current ensemble.'''
    # Create single LM
    single_lm = SingleRecurrentLanguageModel(self.vocab, model_name)
    
      Raises:
    ValueError: if batch_size or num_steps are too high.
  '''
  del epoch_size_override
  data_len = len(raw_data)
  num_batches = data_len // batch_size - 1
    
    
def _file_to_word_ids(filename, word_to_id):
  data = _read_words(filename)
  return [word_to_id[word] for word in data if word in word_to_id]
    
      ## REINFORCE with different baselines.
  # We create a separate critic functionality for the Discriminator.  This
  # will need to operate unidirectionally and it may take in the past context.
  if FLAGS.baseline_method == 'critic':
    
    
def create_dis_pretrain_op(hparams, dis_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.dis_pretrain_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_pretrain_op = optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_pretrain_op
    
      if not FLAGS.seq2seq_share_embedding:
    encoder_embedding = [
        v for v in tf.trainable_variables()
        if v.op.name == 'gen/encoder/rnn/embedding'
    ][0]
  encoder_lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      'gen/encoder/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat'
  ][0]
  encoder_lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      'gen/encoder/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat'
  ][0]
  encoder_lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      'gen/encoder/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat'
  ][0]
  encoder_lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      'gen/encoder/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat'
  ][0]
    
    FISH_COMPLETION_FILE = 'youtube-dl.fish'
FISH_COMPLETION_TEMPLATE = 'devscripts/fish-completion.in'
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    
from youtube_dl import YoutubeDL
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['en']))
        self.assertEqual(md5(subtitles['en']), '53cb083a5914b2d84ef1ab67b880d18a')
    
    
@bp.before_app_request
def load_logged_in_user():
    '''If a user id is stored in the session, load the user object from
    the database into ``g.user``.'''
    user_id = session.get('user_id')
    
        def context_processor(self, f):
        '''Like :meth:`Flask.context_processor` but for a blueprint.  This
        function is only executed for requests handled by a blueprint.
        '''
        self.record_once(lambda s: s.app.template_context_processors
            .setdefault(self.name, []).append(f))
        return f
    
    
def explain_template_loading_attempts(app, template, attempts):
    '''This should help developers understand what failed'''
    info = ['Locating template '%s':' % template]
    total_found = 0
    blueprint = None
    reqctx = _request_ctx_stack.top
    if reqctx is not None and reqctx.request.blueprint is not None:
        blueprint = reqctx.request.blueprint
    
        Defines all the global objects that are proxies to the current
    active context.
    
    from .globals import request
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
        def get_json(self, force=False, silent=False, cache=True):
        '''Parse and return the data as JSON. If the mimetype does not
        indicate JSON (:mimetype:`application/json`, see
        :meth:`is_json`), this returns ``None`` unless ``force`` is
        true. If parsing fails, :meth:`on_json_loading_failed` is called
        and its return value is used as the return value.
    
        @app.route('/')
    def index():
        raise Exception('dummy')
    
        def save(self, must_create=False):
        super().save(must_create)
        self._cache.set(self.cache_key, self._session, self.get_expiry_age())
    
        def create(self):
        while True:
            self._session_key = self._get_new_session_key()
            try:
                # Save immediately to ensure we have a unique entry in the
                # database.
                self.save(must_create=True)
            except CreateError:
                # Key wasn't unique. Try again.
                continue
            self.modified = True
            return
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
        lastmod = None
    all_sites_lastmod = True
    urls = []
    for site in maps:
        try:
            if callable(site):
                site = site()
            urls.extend(site.get_urls(page=page, site=req_site,
                                      protocol=req_protocol))
            if all_sites_lastmod:
                site_lastmod = getattr(site, 'latest_lastmod', None)
                if site_lastmod is not None:
                    site_lastmod = (
                        site_lastmod.utctimetuple() if isinstance(site_lastmod, datetime.datetime)
                        else site_lastmod.timetuple()
                    )
                    lastmod = site_lastmod if lastmod is None else max(lastmod, site_lastmod)
                else:
                    all_sites_lastmod = False
        except EmptyPage:
            raise Http404('Page %s empty' % page)
        except PageNotAnInteger:
            raise Http404('No page '%s'' % page)
    response = TemplateResponse(request, template_name, {'urlset': urls},
                                content_type=content_type)
    if all_sites_lastmod and lastmod is not None:
        # if lastmod is defined for all sites, set header so as
        # ConditionalGetMiddleware is able to send 304 NOT MODIFIED
        response['Last-Modified'] = http_date(timegm(lastmod))
    return response

    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    class Command(ScrapyCommand):
    
    from twisted.web.client import HTTPClientFactory
from twisted.web.http import HTTPClient
from twisted.internet import defer
    
        def test_method(self):
        # Methods
        self.check_tokenize('@staticmethod\ndef foo(x,y): pass', '''\
    OP         '@'           (1, 0) (1, 1)
    NAME       'staticmethod' (1, 1) (1, 13)
    NEWLINE    '\\n'          (1, 13) (1, 14)
    NAME       'def'         (2, 0) (2, 3)
    NAME       'foo'         (2, 4) (2, 7)
    OP         '('           (2, 7) (2, 8)
    NAME       'x'           (2, 8) (2, 9)
    OP         ','           (2, 9) (2, 10)
    NAME       'y'           (2, 10) (2, 11)
    OP         ')'           (2, 11) (2, 12)
    OP         ':'           (2, 12) (2, 13)
    NAME       'pass'        (2, 14) (2, 18)
    ''')
    
    
__all__ = [
    'Package',
    'Resource',
    'contents',
    'is_resource',
    'open_binary',
    'open_text',
    'path',
    'read_binary',
    'read_text',
    ]
    
        def testSeekPostEndTwice(self):
        self.createTempFile()
        with BZ2File(self.filename) as bz2f:
            bz2f.seek(150000)
            bz2f.seek(150000)
            self.assertEqual(bz2f.tell(), len(self.TEXT))
            self.assertEqual(bz2f.read(), b'')
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
    # Of course, there are lots of email messages that could break this simple
# minded program, but it will handle the most common ones.

    
    ##
    
    def plus(a, b):
    time.sleep(0.5*random.random())
    return a + b
    
      2. NUL bytes.  These are problematic for some tools.