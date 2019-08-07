
        
                self.firewall_dict = {
            'location': location,
            'source_account_alias': source_account_alias,
            'destination_account_alias': destination_account_alias,
            'firewall_policy_id': firewall_policy_id,
            'ports': ports,
            'source': source,
            'destination': destination,
            'wait': wait,
            'state': state,
            'enabled': enabled}
    
            :return: The resource found or None.
        '''
        result = self.resource_client.get_by('name', name)
        return result[0] if result else None
    
    from ansible.module_utils.basic import AnsibleModule, missing_required_lib
from ansible.module_utils.urls import fetch_url
    
          <!-- Power cycle server -->
      <configConfMo><inConfig>
        <computeRackUnit dn='sys/rack-unit-1' adminPower='cycle-immediate'/>
      </inConfig></configConfMo>
  delegate_to: localhost
    
    # Ensure bootdevice is not Network
- ipmi_boot:
    name: test.testdomain.com
    user: admin
    password: password
    bootdev: network
    state: absent
'''
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            repo=dict(required=True),
            user=dict(required=True),
            password=dict(no_log=True),
            token=dict(no_log=True),
            action=dict(
                required=True, choices=['latest_release', 'create_release']),
            tag=dict(type='str'),
            target=dict(type='str'),
            name=dict(type='str'),
            body=dict(type='str'),
            draft=dict(type='bool', default=False),
            prerelease=dict(type='bool', default=False),
        ),
        supports_check_mode=True,
        mutually_exclusive=(('password', 'token'),),
        required_if=[('action', 'create_release', ['tag']),
                     ('action', 'create_release', ['password', 'token'], True)],
    )
    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
    site = BokeCC()
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
        title = match1(html, r'&title=([^&]+)')
    
    
class Funshion(VideoExtractor):
    name = 'funshion'
    stream_types = [
        {'id': 'sdvd'},
        {'id': 'sdvd_h265'},
        {'id': 'hd'},
        {'id': 'hd_h265'},
        {'id': 'dvd'},
        {'id': 'dvd_h265'},
        {'id': 'tv'},
        {'id': 'tv_h265'}
    ]
    a_mobile_url = 'http://m.fun.tv/implay/?mid=302555'
    video_ep = 'http://pv.funshion.com/v7/video/play/?id={}&cl=mweb&uc=111'
    media_ep = 'http://pm.funshion.com/v7/media/play/?id={}&cl=mweb&uc=111'
    coeff = None
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
        def say(self, message):
        self.chat_room.display_message(self, message)
    
        print('rm1: {0}'.format(rm1))
    print('rm2: {0}'.format(rm2))
    print('rm3: {0}'.format(rm3))
    
    
# In some very complex cases, it might be desirable to pull out the building
# logic into another function (or a method on another class), rather than being
# in the base class '__init__'. (This leaves you in the strange situation where
# a concrete class does not have a useful constructor)
    
    *What does this example do?
When the number of prototypes in an application can vary, it can be
useful to keep a Dispatcher (aka, Registry or Manager). This allows
clients to query the Dispatcher for a prototype before cloning a new
instance.