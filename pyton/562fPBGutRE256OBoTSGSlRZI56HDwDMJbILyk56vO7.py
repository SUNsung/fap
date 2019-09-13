
        
            pass
    
        mybalancer = Balancer(module.params['balancer_vhost'],
                          module.params['balancer_url_suffix'],
                          module=module,
                          tls=module.params['tls'])
    
        def update_job(self):
        try:
            status = self.get_job_status()
    
    ANSIBLE_METADATA = {
    'metadata_version': '1.1',
    'status': ['preview'],
    'supported_by': 'community'
}
    
    
DOCUMENTATION = '''
---
author: 'Willy Barro (@willybarro)'
requirements: [ pushbullet.py ]
module: pushbullet
short_description: Sends notifications to Pushbullet
description:
   - This module sends push notifications via Pushbullet to channels or devices.
version_added: '2.0'
options:
    api_key:
        description:
            - Push bullet API token
        required: true
    channel:
        description:
            - The channel TAG you wish to broadcast a push notification,
              as seen on the 'My Channels' > 'Edit your channel' at
              Pushbullet page.
    device:
        description:
            - The device NAME you wish to send a push notification,
              as seen on the Pushbullet main page.
    push_type:
        description:
          - Thing you wish to push.
        default: note
        choices: [ 'note', 'link' ]
    title:
        description:
          - Title of the notification.
        required: true
    body:
        description:
          - Body of the notification, e.g. Details of the fault you're alerting.
    
    - name: Remove Network Control Policy
  ucs_managed_objects:
    hostname: 172.16.143.150
    username: admin
    password: password
    objects:
    - module: ucsmsdk.mometa.nwctrl.NwctrlDefinition
      class: NwctrlDefinition
      properties:
        parent_mo_or_dn: org-root
        name: Enable-CDP-LLDP
    state: absent
    
    
# The following method implements what setsebool.c does to change
# a boolean and make it persist after reboot..
def semanage_boolean_value(module, name, state):
    value = 0
    changed = False
    if state:
        value = 1
    try:
        handle = semanage_get_handle(module)
        semanage_begin_transaction(module, handle)
        cur_value = semanage_get_boolean_value(module, handle, name)
        if cur_value != value:
            changed = True
            if not module.check_mode:
                semanage_set_boolean_value(module, handle, name, value)
                semanage_commit(module, handle)
        semanage_destroy_handle(module, handle)
    except Exception as e:
        module.fail_json(msg=u'Failed to manage policy for boolean %s: %s' % (name, to_text(e)))
    return changed
    
        def test_create_sns_message_body_json_structure(self):
        action = {
            'Message': ['{'default': {'message': 'abc'}}'],
            'MessageStructure': ['json']
        }
        result_str = sns_listener.create_sns_message_body(self.subscriber, action)
        result = json.loads(result_str)
    
            expanded3 = multipart_content.expand_multipart_filename(data3, headers)
        self.assertIsNot(expanded3, data3, 'Should have changed content of string data with filename to interpolate')
        self.assertIn(b'uploads/20170826T181315.679087009Z/upload/pixel.txt', expanded3,
            'Should see the interpolated filename')
    
        def forward_request(self, method, path, data, headers):
        if method == 'POST' and path == '/':
            data = self._reset_account_id(data)
            return Request(data=data, headers=headers, method=method)
    
        def test_publish_sms(self):
        response = self.sns_client.publish(PhoneNumber='+33000000000', Message='This is a SMS')
        self.assertTrue('MessageId' in response)
        self.assertEqual(response['ResponseMetadata']['HTTPStatusCode'], 200)
    
    import json
import unittest
from datetime import datetime
    
        version=itchat.__version__,
    
    import requests