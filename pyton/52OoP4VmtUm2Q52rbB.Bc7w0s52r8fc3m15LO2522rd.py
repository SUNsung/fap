
        
        '''
requests.exceptions
~~~~~~~~~~~~~~~~~~~
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    
class FlaskyStyle(Style):
    background_color = '#f8f8f8'
    default_style = ''
    
        def add_headers(self, request, **kwargs):
        '''Add any headers needed by the connection. As of v2.0 this does
        nothing by default, but is left for overriding by users that subclass
        the :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    This module provides the capabilities for the Requests hooks system.
    
            # Verify the client didn't respond with auth.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content == b''
    
            with server as (host, port):
            server_url = 'http://{}:{}'.format(host, port)
            for _ in range(requests_to_handle):
                r = requests.get(server_url)
                assert r.status_code == 200
    
            :param \*\*kwargs: Optional arguments that ``json.loads`` takes.
        :raises ValueError: If the response body does not contain valid json.
        '''
    
    from homeassistant.core import HomeAssistant, Context, callback
from homeassistant.const import CONF_CONDITION, CONF_TIMEOUT
from homeassistant import exceptions
from homeassistant.helpers import (
    service, condition, template as template,
    config_validation as cv)
from homeassistant.helpers.event import (
    async_track_point_in_utc_time, async_track_template)
from homeassistant.helpers.typing import ConfigType
import homeassistant.util.dt as date_util
from homeassistant.util.async_ import (
    run_coroutine_threadsafe, run_callback_threadsafe)
    
        __tablename__ = 'states'
    state_id = Column(Integer, primary_key=True)
    domain = Column(String(64))
    entity_id = Column(String(255), index=True)
    state = Column(String(255))
    attributes = Column(Text)
    event_id = Column(Integer, ForeignKey('events.event_id'), index=True)
    last_changed = Column(DateTime(timezone=True), default=datetime.utcnow)
    last_updated = Column(DateTime(timezone=True), default=datetime.utcnow,
                          index=True)
    created = Column(DateTime(timezone=True), default=datetime.utcnow)
    context_id = Column(String(36), index=True)
    context_user_id = Column(String(36), index=True)
    # context_parent_id = Column(String(36), index=True)
    
    
async def test_if_fires_on_zone_disappear(hass, calls):
    '''Test for firing if entity disappears from zone.'''
    hass.states.async_set('geo_location.entity', 'hello', {
        'latitude': 32.880586,
        'longitude': -117.237564,
        'source': 'test_source'
    })
    await hass.async_block_till_done()
    
        assert await async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'trigger': {
                'platform': 'zone',
                'entity_id': 'test.entity',
                'zone': 'zone.test',
                'event': 'enter',
            },
            'action': {
                'service': 'test.automation',
                'data_template': {
                    'some': '{{ trigger.%s }}' % '}} - {{ trigger.'.join((
                        'platform', 'entity_id',
                        'from_state.state', 'to_state.state',
                        'zone.name'))
                },
    }
    }
    }
    
        assert mock_discover.called
    assert mock_discover.call_count == 1
    assert not mock_platform.called
    mock_discover.assert_called_with(
        hass, SERVICE_NO_PLATFORM, SERVICE_INFO,
        SERVICE_NO_PLATFORM_COMPONENT, BASE_CONFIG)
    
    from time import time
    
            for platform, project_id in queryset:
            platform = platform.lower()
            if platform not in VALID_PLATFORMS:
                continue
            ProjectPlatform.objects.create_or_update(
                project_id=project_id,
                platform=platform,
                values={
                    'last_seen': now,
                },
            )
        min_project_id += step
    
    
def parse_link_header(instr):
    '''
    Given a link-value (i.e., after separating the header-value on commas),
    return a dictionary whose keys are link URLs and values are dictionaries
    of the parameters for their associated links.