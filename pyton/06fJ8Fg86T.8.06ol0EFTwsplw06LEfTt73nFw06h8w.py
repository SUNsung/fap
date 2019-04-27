
        
        
class TooManyRedirects(RequestException):
    '''Too many redirects.'''
    
    
class CaseInsensitiveDict(MutableMapping):
    '''A case-insensitive ``dict``-like object.
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
            if 'digest' in s_auth.lower() and self._thread_local.num_401_calls < 2:
    
    
    builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
            # Nothing matches :-/
        raise InvalidSchema('No connection adapters were found for '%s'' % url)
    
            >>> from_key_val_list([('key', 'val')])
        OrderedDict([('key', 'val')])
        >>> from_key_val_list('string')
        ValueError: cannot encode objects that are not 2-tuples
        >>> from_key_val_list({'key': 'val'})
        OrderedDict([('key', 'val')])
    
        rule_data = dict(
        [(rf, module.params.get(rf)) for rf in CloudWatchEventRuleManager.RULE_FIELDS]
    )
    targets = module.params.get('targets')
    state = module.params.get('state')
    
    
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
    
            feature_enable_str = 'enable' if self.state == 'present' else 'disable'
    
    notes:
    - Requires the LogEntries agent which can be installed following the instructions at logentries.com
'''
EXAMPLES = '''
# Track nginx logs
- logentries:
    path: /var/log/nginx/access.log
    state: present
    name: nginx-access-log
    
        elif not running and state == 'started':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('start')
        if status in ['initializing', 'running'] or 'start pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not started' % name, status=status)
    
        # get the attributes
    model_handle = model.get('mh')
    
        n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)
    
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
    
    X_restored = agglo.inverse_transform(X_reduced)
images_restored = np.reshape(X_restored, images.shape)
plt.figure(1, figsize=(4, 3.5))
plt.clf()
plt.subplots_adjust(left=.01, right=.99, bottom=.01, top=.91)
for i in range(4):
    plt.subplot(3, 4, i + 1)
    plt.imshow(images[i], cmap=plt.cm.gray, vmax=16, interpolation='nearest')
    plt.xticks(())
    plt.yticks(())
    if i == 1:
        plt.title('Original data')
    plt.subplot(3, 4, 4 + i + 1)
    plt.imshow(images_restored[i], cmap=plt.cm.gray, vmax=16,
               interpolation='nearest')
    if i == 1:
        plt.title('Agglomerated data')
    plt.xticks(())
    plt.yticks(())
    
    n_clusters = 5
np.random.seed(0)
    
    labels_unique = np.unique(labels)
n_clusters_ = len(labels_unique)
    
    
def __feet_to_meters(feet: float) -> float:
    '''Convert feet to meters.'''
    return feet * 0.3048
    
            # The following code is provided here to aid in writing a correct migration
        # Changing field 'Environment.project_id'
        db.alter_column(
            'sentry_environment', 'project_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
            # Adding field 'ApiToken.refresh_token'
        db.add_column(
            'sentry_apitoken',
            'refresh_token',
            self.gf('django.db.models.fields.CharField')(max_length=64, unique=True, null=True),
            keep_default=False
        )
    
        def backwards(self, orm):
        # Removing unique constraint on 'ReleaseHeadCommit', fields ['repository_id', 'release']
        db.delete_unique('sentry_releaseheadcommit', ['repository_id', 'release_id'])
    
        complete_apps = ['sentry']

    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'UserOption.organization'
        db.add_column(
            'sentry_useroption',
            'organization',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Organization'], null=True
            ),
            keep_default=False
        )