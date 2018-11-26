    def __init__(self, license_plate):
        super(Bus, self).__init__(VehicleSize.LARGE, license_plate, spot_size=5)
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
        def append_to_front(self, node):
        ...
    
        # login request set the user_id in the session
    # check that the user is loaded from the session
    with client:
        client.get('/')
        assert session['user_id'] == 1
        assert g.user['username'] == 'test'
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        assert 'closed' in str(e)
    
        exec('def reraise(tp, value, tb=None):\n raise tp, value, tb')
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = ['You tried to access the file '%s' in the request.files '
               'dictionary but it does not exist.  The mimetype for the request '
               'is '%s' instead of 'multipart/form-data' which means that no '
               'file contents were transmitted.  To fix this error you should '
               'provide enctype='multipart/form-data' in your form.' %
               (key, request.mimetype)]
        if form_matches:
            buf.append('\n\nThe browser instead transmitted some file names. '
                       'This was submitted: %s' % ', '.join(''%s'' % x
                            for x in form_matches))
        self.msg = ''.join(buf)
    
        # If request specific information is available we have some extra
    # features that support 'relative' URLs.
    if reqctx is not None:
        url_adapter = reqctx.url_adapter
        blueprint_name = request.blueprint
    
        def setdefault(self, key, default=None):
        self.accessed = True
        return super(SecureCookieSession, self).setdefault(key, default)
    
            class SecretView(View):
            methods = ['GET']
            decorators = [superuser_required]
    
    model = Sequential()
model.add(Lambda(augment_2d,
                 input_shape=x_train.shape[1:],
                 arguments={'rotation': 8.0, 'horizontal_flip': True}))
model.add(Conv2D(32, (3, 3), padding='same'))
model.add(Activation('relu'))
model.add(Conv2D(32, (3, 3)))
model.add(Activation('relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
        # Initialize flic client responsible for
    # connecting to buttons and retrieving events
    host = config.get(CONF_HOST)
    port = config.get(CONF_PORT)
    discovery = config.get(CONF_DISCOVERY)
    
            if self.accountname in _CONFIGURING:
            request_id = _CONFIGURING.pop(self.accountname)
            configurator = self.hass.components.configurator
            configurator.request_done(request_id)
    
            return self.last_results.keys()
    
    
def get_scanner(hass, config):
    '''Return a Tado scanner.'''
    scanner = TadoDeviceScanner(hass, config[DOMAIN])
    return scanner if scanner.success_init else None
    
        return scanner if scanner.success_init else None
    
        def _store_result(self, result):
        '''Extract and store the device list in self.last_results.'''
        self.last_results = []
        for device_entry in result:
            # Check if the device is marked as connected
            if int(device_entry['online']) == 1:
                self.last_results.append(device_entry['mac'])
    
        hass.bus.listen(EVENT_STATE_CHANGED, dweet_event_listener)
    
        for object_id, cfg in config[DOMAIN].items():
        name = cfg.get(CONF_NAME, object_id)
        graph = HistoryGraphEntity(name, cfg)
        graphs.append(graph)