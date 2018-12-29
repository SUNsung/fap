
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
      # Print rows
  for i, label1 in enumerate(short_labels):
    row = '%{0}s '.format(columnwidth) % label1[:10]
    for j in range(len(short_labels)):
      value = int(cm[i, j]) if not np.isnan(cm[i, j]) else 0
      cell = ' %{0}d '.format(10) % value
      row += cell + ' '
    print(row)
    
      if output_dist == 'poisson':
    rates = means = conversion_factor * model_vals['output_dist_params']
    plot_time_series(rates, bidx, n_to_plot=n_to_plot, scale=scale,
                     title=col_title + ' rates (LFADS - red, Truth - black)')
  elif output_dist == 'gaussian':
    means_vars = model_vals['output_dist_params']
    means, vars = np.split(means_vars,2, axis=2) # bxtxn
    stds = np.sqrt(vars)
    plot_time_series(means, bidx, n_to_plot=n_to_plot, scale=scale,
                     title=col_title + ' means (LFADS - red, Truth - black)')
    plot_time_series(means+stds, bidx, n_to_plot=n_to_plot, scale=scale,
                     color='c')
    plot_time_series(means-stds, bidx, n_to_plot=n_to_plot, scale=scale,
                     color='c')
  else:
    assert 'NIY'
    
    # DATA
flags.DEFINE_string('data_dir', DATA_DIR, 'Data for training')
flags.DEFINE_string('data_filename_stem', DATA_FILENAME_STEM,
                    'Filename stem for data dictionaries.')
flags.DEFINE_string('lfads_save_dir', LFADS_SAVE_DIR, 'model save dir')
flags.DEFINE_string('checkpoint_pb_load_name', CHECKPOINT_PB_LOAD_NAME,
                    'Name of checkpoint files, use 'checkpoint_lve' for best \
                    error')
flags.DEFINE_string('checkpoint_name', CHECKPOINT_NAME,
                    'Name of checkpoint files (.ckpt appended)')
flags.DEFINE_string('output_filename_stem', OUTPUT_FILENAME_STEM,
                    'Name of output file (postfix will be added)')
flags.DEFINE_string('device', DEVICE,
                    'Which device to use (default: \'gpu:0\', can also be \
                    \'cpu:0\', \'gpu:1\', etc)')
flags.DEFINE_string('csv_log', CSV_LOG,
                    'Name of file to keep running log of fit likelihoods, \
                    etc (.csv appended)')
flags.DEFINE_integer('max_ckpt_to_keep', MAX_CKPT_TO_KEEP,
                 'Max # of checkpoints to keep (rolling)')
flags.DEFINE_integer('ps_nexamples_to_process', PS_NEXAMPLES_TO_PROCESS,
                 'Number of examples to process for posterior sample and \
                 average (not number of samples to average over).')
flags.DEFINE_integer('max_ckpt_to_keep_lve', MAX_CKPT_TO_KEEP_LVE,
                 'Max # of checkpoints to keep for lowest validation error \
                 models (rolling)')
flags.DEFINE_integer('ext_input_dim', EXT_INPUT_DIM, 'Dimension of external \
inputs')
flags.DEFINE_integer('num_steps_for_gen_ic', NUM_STEPS_FOR_GEN_IC,
                     'Number of steps to train the generator initial conditon.')
    
      Args:
    sentence: Sentence words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
    
def index_to_vocab_array(indices, vocab_size, sequence_length):
  '''Convert the indices into an array with vocab_size one-hot encoding.'''
    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
    
def test_kernel_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(),
                regularizers.l2(),
                regularizers.l1_l2()]:
        model = create_model(kernel_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
        # Returns
        A normalized copy of the array.
    '''
    l2 = np.atleast_1d(np.linalg.norm(x, order, axis))
    l2[l2 == 0] = 1
    return x / np.expand_dims(l2, axis)

    
    # Score trained model.
scores = model.evaluate(x_test, y_test, verbose=1)
print('Test loss:', scores[0])
print('Test accuracy:', scores[1])

    
                for t in range(n_frames):
                x_shift = xstart + directionx * t
                y_shift = ystart + directiony * t
                noisy_movies[i, t, x_shift - w: x_shift + w,
                             y_shift - w: y_shift + w, 0] += 1
    
    Gets to 0.89 test accuracy after 2 epochs.
90s/epoch on Intel i5 2.4Ghz CPU.
10s/epoch on Tesla K40 GPU.
'''
from __future__ import print_function
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
    import mock
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    regr = acme.register()
logging.info('Auto-accepting TOS: %s', regr.terms_of_service)
acme.agree_to_tos(regr)
logging.debug(regr)
    
            '''
        save_files = self.unsaved_files()
        if save_files:
            self.add_to_checkpoint(save_files,
                                   self.save_notes, temporary=temporary)
    
            self.assertEqual(mock_logger.debug.call_count, 1)
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
        VHOST_TEMPLATE = '''\
<VirtualHost {vhost}>
    ServerName {server_name}
    UseCanonicalName on
    SSLStrictSNIVHostCheck on
    
    from ..common import *
from ..extractor import VideoExtractor
    
        return video_dict
    
    
def cntv_download(url, **kwargs):
    if re.match(r'http://tv\.cntv\.cn/video/(\w+)/(\w+)', url):
        rid = match1(url, r'http://tv\.cntv\.cn/video/\w+/(\w+)')
    elif re.match(r'http://tv\.cctv\.com/\d+/\d+/\d+/\w+.shtml', url):
        rid = r1(r'var guid = '(\w+)'', get_content(url))
    elif re.match(r'http://\w+\.cntv\.cn/(\w+/\w+/(classpage/video/)?)?\d+/\d+\.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/(\w+/)*VIDE\d+.shtml', url) or \
         re.match(r'http://(\w+).cntv.cn/(\w+)/classpage/video/(\d+)/(\d+).shtml', url) or \
         re.match(r'http://\w+.cctv.com/\d+/\d+/\d+/\w+.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/\d+/\d+/\d+/\w+.shtml', url): 
        page = get_content(url)
        rid = r1(r'videoCenterId','(\w+)'', page)
        if rid is None:
            guid = re.search(r'guid\s*=\s*'([0-9a-z]+)'', page).group(1)
            rid = guid
    elif re.match(r'http://xiyou.cntv.cn/v-[\w-]+\.html', url):
        rid = r1(r'http://xiyou.cntv.cn/v-([\w-]+)\.html', url)
    else:
        raise NotImplementedError(url)
    
    
def get_coub_data(html):
    coub_data = r1(r'<script id=\'coubPageCoubJson\' type=\'text/json\'>([^<]+)</script>', html)
    json_data = json.loads(coub_data)
    return json_data
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    def douban_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html = get_html(url)
    
            # Adding unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.create_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            for environment in RangeQuerySetWrapperWithProgressBar(orm.Environment.objects.all()):
            try:
                with transaction.atomic():
                    orm.EnvironmentProject.objects.create(
                        environment=environment, project_id=environment.project_id
                    )
            except IntegrityError:
                pass
    
                from_env_ids = [e.id for e in from_envs]
            try:
                with transaction.atomic():
                    orm.ReleaseEnvironment.objects.filter(
                        environment_id__in=from_env_ids,
                    ).update(environment_id=to_env.id)
            except IntegrityError:
                for re in orm.ReleaseEnvironment.objects.filter(environment_id__in=from_env_ids):
                    try:
                        with transaction.atomic():
                            orm.ReleaseEnvironment.objects.filter(
                                id=re.id,
                            ).update(environment_id=to_env.id)
                    except IntegrityError:
                        re.delete()
    
            # Adding field 'ApiKey.scope_list'
        db.add_column(
            'sentry_apikey',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
        def backwards(self, orm):
        # Removing unique constraint on 'DSymApp', fields ['project', 'platform', 'app_id']
        db.delete_unique('sentry_dsymapp', ['project_id', 'platform', 'app_id'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'CommitAuthor.external_id'
        db.add_column(
            'sentry_commitauthor',
            'external_id',
            self.gf('django.db.models.fields.CharField')(max_length=164, null=True),
            keep_default=False
        )