
        
        - debug: msg='{{ my_vm_eips.addresses | json_query(\'[?private_ip_address=='10.0.0.5']\') }}'
    
    
def main():
    module = AnsibleModule(argument_spec=dict(
        view=dict(choices=['topics', 'subscriptions'], default='topics'),
        topic=dict(required=False),
        state=dict(choices=['list'], default='list'),
        service_account_email=dict(),
        credentials_file=dict(),
        project_id=dict(), ),)
    
            monitoring_policy_port = oneandone.client.Port(
            protocol=port['protocol'],
            port=port['port'],
            alert_if=port['alert_if'],
            email_notification=port['email_notification']
        )
    
    
VALID_RULE_KEYS = ['rule_type', 'original_ip', 'original_port',
                   'translated_ip', 'translated_port', 'protocol']
    
        def dnszone_del(self, zone_name=None, record_name=None, details=None):
        return self._post_json(
            method='dnszone_del', name=zone_name, item={})
    
        host = module.params['host']
    hostcategory = module.params['hostcategory']
    hostgroup = module.params['hostgroup']
    service = module.params['service']
    servicecategory = module.params['servicecategory']
    servicegroup = module.params['servicegroup']
    sourcehost = module.params['sourcehost']
    sourcehostcategory = module.params['sourcehostcategory']
    sourcehostgroup = module.params['sourcehostgroup']
    user = module.params['user']
    usercategory = module.params['usercategory']
    usergroup = module.params['usergroup']
    
        if model.get('error'):
        module.fail_json(msg='error checking device: %s' % model.get('error'))
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    
def generate_data(case, sparse=False):
    '''Generate regression/classification data.'''
    bunch = None
    if case == 'regression':
        bunch = datasets.load_boston()
    elif case == 'classification':
        bunch = datasets.fetch_20newsgroups_vectorized(subset='all')
    X, y = shuffle(bunch.data, bunch.target)
    offset = int(X.shape[0] * 0.8)
    X_train, y_train = X[:offset], y[:offset]
    X_test, y_test = X[offset:], y[offset:]
    if sparse:
        X_train = csr_matrix(X_train)
        X_test = csr_matrix(X_test)
    else:
        X_train = np.array(X_train)
        X_test = np.array(X_test)
    y_test = np.array(y_test)
    y_train = np.array(y_train)
    data = {'X_train': X_train, 'X_test': X_test, 'y_train': y_train,
            'y_test': y_test}
    return data
    
    Two consequences of imposing a connectivity can be seen. First clustering
with a connectivity matrix is much faster.
    
    from sklearn import datasets, cluster
from sklearn.feature_extraction.image import grid_to_graph
    
    plt.xlabel('n_init')
plt.ylabel('inertia')
plt.legend(plots, legends)
plt.title('Mean inertia for various k-means init across %d runs' % n_runs)
    
    
def main():
    ui = Ui()
    ui.get_product_list()
    ui.get_product_information('cheese')
    ui.get_product_information('eggs')
    ui.get_product_information('milk')
    ui.get_product_information('arepas')
    
        for shape in shapes:
        shape.scale(2.5)
        shape.draw()
    
    
class TextTag(object):
    '''Represents a base text tag'''
    
        mobile_type = 'mobile'
    tablet_type = 'tablet'
    
        def item_not_found(self, item_type, item_name):
        raise NotImplementedError
    
        def test_subscriber_shall_be_detachable_from_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
        sub.unsubscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 0)
    
        def test_innate_properties(self):
        self.assertDictEqual({'name': 'John', 'occupation': 'Coder', 'call_count2': 0}, self.John.__dict__)
    
        def test_particular_properties_retrieving(self):
        self.assertEqual(self.dispatcher.get_objects()['A'].value, 'a-value')
        self.assertEqual(self.dispatcher.get_objects()['B'].value, 'b-value')
        self.assertEqual(self.dispatcher.get_objects()['C'].value, 'default')