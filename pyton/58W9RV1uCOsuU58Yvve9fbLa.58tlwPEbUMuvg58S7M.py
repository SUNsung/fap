
        
            proc.sendline(u'ehco test')
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
@pytest.mark.parametrize('command', [
    Command('cargo buid', no_such_subcommand_old),
    Command('cargo buils', no_such_subcommand)])
def test_match(command):
    assert match(command)
    
    
def is_code(line, indent_depth = 4):
    '''returns the indent depth, 0 means not code in markup'''
    if line.startswith(' ' * indent_depth):
        return len(line) - len(line.lstrip(' '))
    return 0
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    
class LinksysSmartWifiDeviceScanner(DeviceScanner):
    '''This class queries a Linksys Access Point.'''
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import CONF_USERNAME, CONF_PASSWORD
from homeassistant.util import Throttle
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.helpers.aiohttp_client import async_create_clientsession
    
        def _retrieve_list_with_retry(self):
        '''Retrieve the device list with a retry if token is invalid.
    
            json_body[state.attributes.get('friendly_name')] = _state
    
                if 'M-SEARCH' in data.decode('utf-8', errors='ignore'):
                # SSDP M-SEARCH method received, respond to it with our info
                resp_socket = socket.socket(
                    socket.AF_INET, socket.SOCK_DGRAM)
    
            def on_moved(self, event):
            '''File moved.'''
            self.process(event)
    
    
async def async_setup(hass, config):
    '''Load graph configurations.'''
    component = EntityComponent(
        _LOGGER, DOMAIN, hass)
    graphs = []
    
                if len(version) >= 20 or is_travis_build(version) or \
                    is_jenkins_build(version) or \
                    is_word_and_date(version):
                # if projects are across multiple environments, allow 1 week difference
                if projects_split_by_env and date_diff and date_diff < 604800:
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                    continue
                # +/- 4 hours
                if date_diff and date_diff > 14400:
                    for release in releases:
                        update_version(release, orm)
                else:
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                continue
    
        def backwards(self, orm):
        # Removing unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.delete_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            db.start_transaction()
    
        def backwards(self, orm):
        pass
    
    
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
    
        def is_satisfied_by(self, candidate):
        return bool(not self._wrapped.is_satisfied_by(candidate))
    
    import random
    
        d = prototype.clone()
    a = prototype.clone(value='a-value', category='a')
    b = prototype.clone(value='b-value', is_checked=True)
    dispatcher.register_object('objecta', a)
    dispatcher.register_object('objectb', b)
    dispatcher.register_object('default', d)
    print([{n: p.value} for n, p in dispatcher.get_objects().items()])
    
        def on_switchover(self):
        raise UnsupportedTransition