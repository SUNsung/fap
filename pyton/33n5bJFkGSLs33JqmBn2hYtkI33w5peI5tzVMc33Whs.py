
        
            context['show_on_github_url'] = show_url
    context['edit_on_github_url'] = edit_url
    
    
def setup_button(hass, config, add_entities, client, address):
    '''Set up a single button device.'''
    timeout = config.get(CONF_TIMEOUT)
    ignored_click_types = config.get(CONF_IGNORED_CLICK_TYPES)
    button = FlicButton(hass, client, address, timeout, ignored_click_types)
    _LOGGER.info('Connected to button %s', address)
    
            # Check if the access point is accessible
        response = self._make_request()
        if not response.status_code == 200:
            raise ConnectionError('Cannot connect to Linksys Access Point')
    
    import voluptuous as vol
    
        def __init__(self, app_name, app_icon, hostname, password, port):
        '''Initialize the service.'''
        import gntp.notifier
        import gntp.errors
        self.gntp = gntp.notifier.GrowlNotifier(
            applicationName=app_name,
            notifications=['Notification'],
            applicationIcon=app_icon,
            hostname=hostname,
            password=password,
            port=port
        )
        try:
            self.gntp.register()
        except gntp.errors.NetworkError:
            _LOGGER.error('Unable to register with the GNTP host')
            return
    
            if send_test_msg:
            self.send_message('Home Assistant started')
    
            # Adding unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.create_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
            # Adding model 'RawEvent'
        db.create_table(
            'sentry_rawevent', (
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
                ('data', self.gf('sentry.db.models.fields.node.NodeField')(null=True, blank=True)),
            )
        )
        db.send_create_signal('sentry', ['RawEvent'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'Distribution', fields ['release', 'name']
        db.delete_unique('sentry_distribution', ['release_id', 'name'])
    
        '''
    for k, v in ret.items():
        tokens = list(k)
        print(tokens)
        if v:
            for t in v:
                print('\t', t)
        else:
            print('\t', '---')
    
        Returns:
    
    import tensorflow as tf
import keras.backend as K