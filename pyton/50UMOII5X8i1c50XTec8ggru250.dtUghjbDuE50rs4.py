
        
            size_1xn = [1, z_size]
    size__xn = [None, z_size]
    size_bx1 = tf.stack([batch_size, 1])
    assert var_init > 0.0, 'Problems'
    assert var_max >= var_min, 'Problems'
    assert var_init >= var_min, 'Problems'
    assert var_max >= var_init, 'Problems'
    
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
    
      LFADS generates a number of outputs for each examples, and these are all
  saved.  They are:
    The mean and variance of the prior of g0.
    The mean and variance of approximate posterior of g0.
    The control inputs (if enabled)
    The initial conditions, g0, for all examples.
    The generator states for all time.
    The factors for all time.
    The rates for all time.
    
    rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
rnn_rngs = [np.random.RandomState(seed=FLAGS.synth_data_seed+1),
            np.random.RandomState(seed=FLAGS.synth_data_seed+2)]
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
nreplications = FLAGS.nreplications
E = nreplications * C
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
    
    '''Losses for Generator and Discriminator.'''
    
    
def percent_unique_ngrams_in_train(train_ngrams_dict, gen_ngrams_dict):
  '''Compute the percent of ngrams generated by the model that are
  present in the training text and are unique.'''
    
    
def dis_fwd_bidirectional(hparams):
  '''Returns the *forward* PTB Variable name to MaskGAN Variable dictionary
  mapping.  This is a highly restrictive function just for testing. This is for
  the bidirectional_zaremba discriminator.
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'GroupCommitResolution'
        db.create_table(
            'sentry_groupcommitresolution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'group_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'commit_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'datetime', self.gf('django.db.models.fields.DateTimeField')(
                        db_index=True
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['GroupCommitResolution'])
    
            for environment in RangeQuerySetWrapperWithProgressBar(orm.Environment.objects.all()):
            try:
                with transaction.atomic():
                    orm.EnvironmentProject.objects.create(
                        environment=environment, project_id=environment.project_id
                    )
            except IntegrityError:
                pass
    
    from sentry.utils.db import is_postgres
    
        def backwards(self, orm):
        # Removing unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.delete_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])