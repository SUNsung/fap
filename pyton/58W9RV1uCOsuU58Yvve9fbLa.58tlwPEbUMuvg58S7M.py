
        
            # L = -KL + log p(x|z), to maximize bound on likelihood
    # -L = KL - log p(x|z), to minimize bound on NLL
    # so 'KL cost' is postive KL divergence
    z0_bxu = post_zs[0].sample
    logq_bxu = post_zs[0].logp(z0_bxu)
    logp_bxu = prior_z_process.logp_t(z0_bxu)
    z_tm1_bxu = z0_bxu
    for z_t in post_zs[1:]:
      # posterior is independent in time, prior is not
      z_t_bxu = z_t.sample
      logq_bxu += z_t.logp(z_t_bxu)
      logp_bxu += prior_z_process.logp_t(z_t_bxu, z_tm1_bxu)
      z_tm1 = z_t_bxu
    
      # Convert from figure to an numpy array width x height x 3 (last for RGB)
  f.canvas.draw()
  data = np.fromstring(f.canvas.tostring_rgb(), dtype=np.uint8, sep='')
  data_wxhx3 = data.reshape(f.canvas.get_width_height()[::-1] + (3,))
  plt.close()
    
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
    
        self.bos_chars = self._convert_word_to_char_ids(self.bos_char)
    self.eos_chars = self._convert_word_to_char_ids(self.eos_char)
    
              [gen_initial_state_eval, fake_gen_initial_state_eval, _] = sess.run(
              [
                  model.eval_final_state, model.fake_gen_final_state,
                  model.global_step
              ],
              feed_dict=eval_feed)
    
    
def print_and_log(log, id_to_word, sequence_eval, max_num_to_print=5):
  '''Helper function for printing and logging evaluated sequences.'''
  indices_eval = convert_to_indices(sequence_eval)
  indices_arr = np.asarray(indices_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, max_num_to_print)
    
        return [gen_train_op, gen_grads, gen_vars]
    
      def construct_fn(attention_query, attention_keys, attention_values):
    with tf.variable_scope(name, reuse=reuse) as scope:
      context = attention_score_fn(attention_query, attention_keys,
                                   attention_values)
      concat_input = tf.concat([attention_query, context], 1)
      attention = tf.contrib.layers.linear(
          concat_input, num_units, biases_initializer=None, scope=scope)
      return attention
    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
            :param connections: The number of urllib3 connection pools to cache.
        :param maxsize: The maximum number of connections to save in the pool.
        :param block: Block when no free connections are available.
        :param pool_kwargs: Extra keyword arguments used to initialize the Pool Manager.
        '''
        # save these values for pickling
        self._pool_connections = connections
        self._pool_maxsize = maxsize
        self._pool_block = block
    
            if not qop:
            respdig = KD(HA1, '%s:%s' % (nonce, HA2))
        elif qop == 'auth' or 'auth' in qop.split(','):
            noncebit = '%s:%s:%s:%s:%s' % (
                nonce, ncvalue, cnonce, 'auth', HA2
            )
            respdig = KD(HA1, noncebit)
        else:
            # XXX handle auth-int.
            return None
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
        def __getstate__(self):
        '''Unlike a normal CookieJar, this class is pickleable.'''
        state = self.__dict__.copy()
        # remove the unpickleable RLock object
        state.pop('_cookies_lock')
        return state
    
    
def _implementation():
    '''Return a dict with the Python implementation and version.
    
        def test_super_len_correctly_calculates_len_of_partially_read_file(self):
        '''Ensure that we handle partially consumed file like objects.'''
        s = StringIO.StringIO()
        s.write('foobarbogus')
        assert super_len(s) == 0
    
        def test_certificate_failure(self, httpbin_secure):
        '''
        When underlying SSL problems occur, an SSLError is raised.
        '''
        with pytest.raises(SSLError):
            # Our local httpbin does not have a trusted CA, so this call will
            # fail if we use our default trust bundle.
            requests.get(httpbin_secure('status', '200'))
    
    
def setup(app):
    app.add_crossref_type(
        directivename = 'setting',
        rolename      = 'setting',
        indextemplate = 'pair: %s; setting',
    )
    app.add_crossref_type(
        directivename = 'signal',
        rolename      = 'signal',
        indextemplate = 'pair: %s; signal',
    )
    app.add_crossref_type(
        directivename = 'command',
        rolename      = 'command',
        indextemplate = 'pair: %s; command',
    )
    app.add_crossref_type(
        directivename = 'reqmeta',
        rolename      = 'reqmeta',
        indextemplate = 'pair: %s; reqmeta',
    )
    app.add_role('source', source_role)
    app.add_role('commit', commit_role)
    app.add_role('issue', issue_role)
    app.add_role('rev', rev_role)
    
        name = 'qps'
    benchurl = 'http://localhost:8880/'
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
                    # Only add to current user
                if store == CERT_SYSTEM_STORE_CURRENT_USER and not ca_exists:
                    ret = crypt32.CertAddEncodedCertificateToStore(store_handle, X509_ASN_ENCODING, certdata, len(certdata), CERT_STORE_ADD_ALWAYS, None)
            except Exception as e:
                xlog.warning('CertUtil.import_windows_ca failed: %r', e)
                if isinstance(e, OSError):
                    store_handle = None
                    continue
                return False
            finally:
                if pCertCtx:
                    crypt32.CertFreeCertificateContext(pCertCtx)
                    pCertCtx = None
                if store_handle:
                    crypt32.CertCloseStore(store_handle, 0)
                    store_handle = None
    
    
    def getSourceName(self):
        return self.input.getSourceName()
    
    
def setup_button(hass, config, add_entities, client, address):
    '''Set up a single button device.'''
    timeout = config.get(CONF_TIMEOUT)
    ignored_click_types = config.get(CONF_IGNORED_CLICK_TYPES)
    button = FlicButton(hass, client, address, timeout, ignored_click_types)
    _LOGGER.info('Connected to button %s', address)
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        see(
        dev_id='demo_home_boy',
        host_name='Home Boy',
        gps=[hass.config.latitude - 0.00002, hass.config.longitude + 0.00002],
        gps_accuracy=20,
        battery=53
    )
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
                    else:
                    if filename is None and \
                       'content-disposition' in req.headers:
                        match = re.findall(r'filename=(\S+)',
                                           req.headers['content-disposition'])
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import (
    CONF_API_KEY, CONF_WHITELIST, CONF_URL, STATE_UNKNOWN, STATE_UNAVAILABLE,
    CONF_SCAN_INTERVAL)
from homeassistant.helpers import state as state_helper
from homeassistant.helpers.event import track_point_in_time
from homeassistant.util import dt as dt_util
    
        def stop(self):
        '''Stop the server.'''
        # Request for server
        self._interrupted = True
        self.join()
    
            # Adding model 'ReprocessingReport'
        db.create_table(
            'sentry_reprocessingreport', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'event_id',
                    self.gf('django.db.models.fields.CharField')(max_length=32, null=True)
                ), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ReprocessingReport'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'VersionDSymFile'
        db.create_table(
            'sentry_versiondsymfile', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'dsym_file', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProjectDSymFile'], null=True
                    )
                ), (
                    'dsym_app', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.DSymApp']
                    )
                ), ('version', self.gf('django.db.models.fields.CharField')(max_length=32)),
                ('build', self.gf('django.db.models.fields.CharField')(max_length=32, null=True)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['VersionDSymFile'])
    
            for model in (
            orm['sentry.ApiAuthorization'], orm['sentry.ApiGrant'], orm['sentry.ApiKey'],
            orm['sentry.ApiToken'],
        ):
            queryset = model.objects.all()
            for obj in RangeQuerySetWrapperWithProgressBar(queryset):
                if not obj.scope_list:
                    handler = make_handler(obj.scopes)
                    model.objects.filter(
                        id=obj.id,
                    ).update(
                        scope_list=[k for k, v in six.iteritems(handler) if v],
                    )
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.p1
    123
    >>> delegator.p2
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'p2'
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'do_anything'
    '''
    
        # verify that none of the target files exist
    assert not lexists('foo.txt')
    assert not lexists('bar.txt')
    assert not lexists('baz.txt')
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
    
if __name__ == '__main__':
    strat0 = StrategyExample()
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    
if __name__ == '__main__':
    blackboard = Blackboard()