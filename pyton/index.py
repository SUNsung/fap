
        
            def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        def exists(self, session_key=None):
        '''
        This method makes sense when you're talking to a shared resource, but
        it doesn't matter when you're storing the information in the client's
        cookie.
        '''
        return False
    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
            try:
            # If the CallerReference is a value already sent in a previous identity request
            # the returned value is that of the original request
            result = self.client.update_cloud_front_origin_access_identity(
                CloudFrontOriginAccessIdentityConfig=new_config,
                Id=origin_access_identity_id,
                IfMatch=e_tag,
            )
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error updating Origin Access Identity.')
    
        try:
        asgs_paginator = conn.get_paginator('describe_auto_scaling_groups')
        asgs = asgs_paginator.paginate().build_full_result()
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    
DOCUMENTATION = '''
---
module: ec2_eip_facts
short_description: List EC2 EIP details
description:
    - List details of EC2 Elastic IP addresses.
version_added: '2.6'
author: 'Brad Macpherson (@iiibrad)'
options:
  filters:
    description:
      - A set of filters to use. Each filter is a name:value pair. The value
        may be a list or a single element.
    required: false
    default: {}
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        if not HAS_BOTO3:
        module.fail_json(msg='boto3 required for this module')
    
        volume_id = module.params.get('volume_id')
    snapshot_id = module.params.get('snapshot_id')
    description = module.params.get('description')
    instance_id = module.params.get('instance_id')
    device_name = module.params.get('device_name')
    wait = module.params.get('wait')
    wait_timeout = module.params.get('wait_timeout')
    last_snapshot_min_age = module.params.get('last_snapshot_min_age')
    snapshot_tags = module.params.get('snapshot_tags')
    state = module.params.get('state')
    
    from homeassistant.components import http
from homeassistant.core import callback
from homeassistant.helpers import template
    
        try:
        cognito.client.resend_confirmation_code(
            Username=email,
            ClientId=cognito.client_id
        )
    except ClientError as err:
        raise _map_aws_exception(err)
    
        @_handle_cloud_errors
    @RequestDataValidator(vol.Schema({
        vol.Required('email'): str,
    }))
    async def post(self, request, data):
        '''Handle resending confirm email code request.'''
        hass = request.app['hass']
        cloud = hass.data[DOMAIN]
    
    from homeassistant.const import CONF_ID
from homeassistant.components.config import EditIdBasedConfigView
from homeassistant.components.automation import (
    PLATFORM_SCHEMA, DOMAIN, async_reload)
import homeassistant.helpers.config_validation as cv
    
        @asyncio.coroutine
    def post(self, request, suite):
        '''Request suite status.'''
        # do real install if not in test mode
        return self.json({'status': 'ok'})

    
            statsd.event(
            title='Home Assistant',
            text='%%% \n **{}** {} \n %%%'.format(name, message),
            tags=[
                'entity:{}'.format(event.data.get('entity_id')),
                'domain:{}'.format(event.data.get('domain'))
            ]
        )
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.last_results = []
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.success_init = True
    
    DEPENDENCIES = ['http']