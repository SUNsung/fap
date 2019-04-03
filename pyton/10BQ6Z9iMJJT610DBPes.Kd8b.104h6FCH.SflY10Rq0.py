
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.DIRECTOR)
    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        def __init__(self, query, results):
        self.query = query
        self.results = results
    
    
# Initial condition generation, and condition label generation.  This
# happens outside of the dataset loop, so that all datasets have the
# same conditions, which is similar to a neurophys setup.
condition_number = 0
x0s = []
condition_labels = []
for c in range(C):
  x0 = FLAGS.x0_std * rng.randn(N, 1)
  x0s.append(np.tile(x0, nreplications)) # replicate x0 nreplications times
  # replicate the condition label nreplications times
  for ns in range(nreplications):
    condition_labels.append(condition_number)
  condition_number += 1
x0s = np.concatenate(x0s, axis=1)
    
    
class IntegrationToBoundModel:
  def __init__(self, N):
    scale = 0.8 / float(N**0.5)
    self.N = N
    self.Wh_nxn = tf.Variable(tf.random_normal([N, N], stddev=scale))
    self.b_1xn = tf.Variable(tf.zeros([1, N]))
    self.Bu_1xn = tf.Variable(tf.zeros([1, N]))
    self.Wro_nxo = tf.Variable(tf.random_normal([N, 1], stddev=scale))
    self.bro_o = tf.Variable(tf.zeros([1]))
    
              eval_feed = {model.inputs: x, model.targets: y, model.present: p}
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    
class SSLError(ConnectionError):
    '''An SSL error occurred.'''
    
    from .compat import OrderedDict, Mapping, MutableMapping
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            CaseInsensitiveDict(),
            None
        ),
        (
            CaseInsensitiveDict({'content-type': 'application/json; charset=utf-8'}),
            'utf-8'
        ),
        (
            CaseInsensitiveDict({'content-type': 'text/plain'}),
            'ISO-8859-1'
        ),
    ))
def test_get_encoding_from_headers(value, expected):
    assert get_encoding_from_headers(value) == expected
    
            url.append(path)
    
    
# Find the most recent snapshot
def _get_snapshot_starttime(snap):
    return datetime.datetime.strptime(snap.start_time, '%Y-%m-%dT%H:%M:%S.000Z')
    
            try:
            lambda_facts.update(versions=client.list_versions_by_function(FunctionName=function_name, **params)['Versions'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(versions=[])
            else:
                module.fail_json_aws(e, msg='Trying to get {0} versions'.format(function_name))
    else:
        module.fail_json(msg='Parameter function_name required for query=versions.')
    
    
def _modify_port(module, oneandone_conn, monitoring_policy_id, port_id, port):
    '''
    Modifies a monitoring policy port.
    '''
    try:
        if module.check_mode:
            cm_port = oneandone_conn.get_monitoring_policy_port(
                monitoring_policy_id=monitoring_policy_id,
                port_id=port_id)
            if cm_port:
                return True
            return False
    
    - hosts: localhost
  connection: local
  tasks:
   - vca_fw:
       instance_id: 'b15ff1e5-1024-4f55-889f-ea0209726282'
       vdc_name: 'benz_ansible'
       state: 'absent'
       fw_rules:
         - description: 'ben testing'
           source_ip: 'Any'
           dest_ip: 192.0.2.23
         - description: 'ben testing 2'
           source_ip: 192.0.2.50
           source_port: 'Any'
           dest_port: '22'
           dest_ip: 192.0.2.101
           is_enable: 'true'
           enable_logging: 'false'
           protocol: 'Tcp'
           policy: 'allow'
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        client = RoleIPAClient(module=module,
                           host=module.params['ipa_host'],
                           port=module.params['ipa_port'],
                           protocol=module.params['ipa_prot'])
    
    - bigpanda:
    component: myapp
    version: '1.3'
    token: '{{ bigpanda_token }}'
    state: finished
    
        print('LocalOutlierFactor processing...')
    model = LocalOutlierFactor(n_neighbors=20)
    tstart = time()
    model.fit(X)
    fit_time = time() - tstart
    scoring = -model.negative_outlier_factor_  # the lower, the more normal
    fpr, tpr, thresholds = roc_curve(y, scoring)
    AUC = auc(fpr, tpr)
    plt.plot(fpr, tpr, lw=1,
             label=('ROC for %s (area = %0.3f, train-time: %0.2fs)'
                    % (dataset_name, AUC, fit_time)))
    
    
def plot_results(X, y, label):
    plt.plot(X, y, label=label, marker='o')
    
    
if __name__ == '__main__':
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
    plt.show()

    
    Two consequences of imposing a connectivity can be seen. First clustering
with a connectivity matrix is much faster.
    
    The example is engineered to show the effect of the choice of different
metrics. It is applied to waveforms, which can be seen as
high-dimensional vector. Indeed, the difference between metrics is
usually more pronounced in high dimension (in particular for euclidean
and cityblock).
    
    # Anisotropicly distributed data
transformation = [[0.60834549, -0.63667341], [-0.40887718, 0.85253229]]
X_aniso = np.dot(X, transformation)
y_pred = KMeans(n_clusters=3, random_state=random_state).fit_predict(X_aniso)
    
    - single linkage is fast, and can perform well on
  non-globular data, but it performs poorly in the
  presence of noise.
- average and complete linkage perform well on
  cleanly separated globular clusters, but have mixed
  results otherwise.
- Ward is the most effective method for noisy data.
    
    # #############################################################################
# Compute clustering with MeanShift
    
    __all__ = ['__version__', 'version_info', 'twisted_version',
           'Spider', 'Request', 'FormRequest', 'Selector', 'Item', 'Field']
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
        if twisted_version < (17, 0, 0):
        from twisted.internet._sslverify import _maybeSetHostNameIndication
        set_tlsext_host_name = _maybeSetHostNameIndication
    else:
        def set_tlsext_host_name(connection, hostNameBytes):
            connection.set_tlsext_host_name(hostNameBytes)
    
        def _needs_backout(self, spider):
        slot = self.slot
        return not self.running \
            or slot.closing \
            or self.downloader.needs_backout() \
            or self.scraper.slot.needs_backout()
    
    
def report_fail(ip):
    if '.' in ip:
        IPv4.report_fail()
    else:
        IPv6.report_fail()
    
    
def best_server(probe_nat=False):
    best_server = None
    prober = new_pteredor(probe_nat=probe_nat)
    prober.qualified = True
    if not probe_nat:
        prober.nat_type = 'unknown'
        prober.rs_cone_flag = 0
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue