
        
        
class GroupChat(Chat):
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
class SalesRanker(MRJob):
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
        # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
                app.config['IMAGE_STORE_TYPE'] = 'fs'
            app.config['IMAGE_STORE_PATH'] = '/var/app/images'
            app.config['IMAGE_STORE_BASE_URL'] = 'http://img.website.com'
            image_store_config = app.config.get_namespace('IMAGE_STORE_')
    
    
_request_ctx_err_msg = '''\
Working outside of request context.
    
            return value
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
        def __exit__(self, exc_type, exc_value, tb):
        self.preserve_context = False
    
            if (not has_actual_code
            and not line.strip().startswith('//')
            and not line.strip().startswith('???')
            and not line.strip() == ''):
            has_actual_code = True
    
        def backwards(self, orm):
        # Removing unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.delete_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
        complete_apps = ['sentry']

    
            # Adding model 'EventProcessingIssue'
        db.create_table(
            'sentry_eventprocessingissue', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'raw_event', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.RawEvent']
                    )
                ), (
                    'processing_issue',
                    self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProcessingIssue']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['EventProcessingIssue'])
    
            for release_project in RangeQuerySetWrapperWithProgressBar(
            orm.ReleaseProject.objects.all()
        ):
            orm.ReleaseProject.objects.filter(id=release_project.id).update(
                new_groups=orm.Group.objects.filter(
                    project_id=release_project.project_id,
                    first_release_id=release_project.release_id,
                ).count()
            )
    
            # Adding unique constraint on 'DSymApp', fields ['project', 'platform', 'app_id']
        db.create_unique('sentry_dsymapp', ['project_id', 'platform', 'app_id'])
    
            # Deleting field 'CommitAuthor.external_id'
        db.delete_column('sentry_commitauthor', 'external_id')
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    
@asyncio.coroutine
def async_trigger(hass, config, action):
    '''Listen for events based on configuration.'''
    number = config.get(CONF_NUMBER)
    held_more_than = config.get(CONF_HELD_MORE_THAN)
    held_less_than = config.get(CONF_HELD_LESS_THAN)
    pressed_time = None
    cancel_pressed_more_than = None
    
    SERVICE_VAPIX_CALL = 'vapix_call'
SERVICE_VAPIX_CALL_RESPONSE = 'vapix_call_response'
SERVICE_CGI = 'cgi'
SERVICE_ACTION = 'action'
SERVICE_PARAM = 'param'
SERVICE_DEFAULT_CGI = 'param.cgi'
SERVICE_DEFAULT_ACTION = 'update'
    
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP,
                         lambda event: client.close())
    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]