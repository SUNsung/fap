
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    # -- General configuration ------------------------------------------------
    
        def test_youtube(self):
        self._assert_restricted('07FYdnEawAQ', '07FYdnEawAQ.mp4', 10)
    
    
if __name__ == '__main__':
    unittest.main()

    
    
try:
    _DEV_NULL = subprocess.DEVNULL
except AttributeError:
    _DEV_NULL = open(os.devnull, 'wb')
    
            jsi = JSInterpreter('function f(){return 11 >> 2;}')
        self.assertEqual(jsi.call_function('f'), 2)
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
        if not module.check_mode and (additions > 0 or deletions > 0):
        task = gateway.save_services_configuration()
        vca.block_until_completed(task)
    
        def role_remove_service(self, name, item):
        return self.role_remove_member(name=name, item={'service': item})
    
        # Build the common request body
    body = dict()
    for k in ('component', 'version', 'hosts'):
        v = module.params[k]
        if v is not None:
            body[k] = v
    
    short_description: Manage Icinga2 feature
description:
    - This module can be used to enable or disable an Icinga2 feature.
version_added: '2.3'
author: 'Loic Blot (@nerzhul)'
options:
    name:
      description:
      - This is the feature name to enable or disable.
      required: True
    state:
      description:
      - If set to C(present) and feature is disabled, then feature is enabled.
      - If set to C(present) and feature is already enabled, then nothing is changed.
      - If set to C(absent) and feature is enabled, then feature is disabled.
      - If set to C(absent) and feature is already disabled, then nothing is changed.
      choices: [ 'present', 'absent' ]
      default: present
'''
    
    module: stackdriver
short_description: Send code deploy and annotation events to stackdriver
description:
  - Send code deploy and annotation events to Stackdriver
version_added: '1.6'
author: 'Ben Whaley (@bwhaley)'
options:
  key:
    description:
      - API key.
    required: true
  event:
    description:
      - The type of event to send, either annotation or deploy
    choices: ['annotation', 'deploy']
  revision_id:
    description:
      - The revision of the code that was deployed. Required for deploy events
  deployed_by:
    description:
      - The person or robot responsible for deploying the code
    default: 'Ansible'
  deployed_to:
    description:
      - 'The environment code was deployed to. (ie: development, staging, production)'
  repository:
    description:
      - The repository (or project) deployed
  msg:
    description:
      - The contents of the annotation message, in plain text.  Limited to 256 characters. Required for annotation.
  annotated_by:
    description:
      - The person or robot who the annotation should be attributed to.
    default: 'Ansible'
  level:
    description:
      - one of INFO/WARN/ERROR, defaults to INFO if not supplied.  May affect display.
    choices: ['INFO', 'WARN', 'ERROR']
    default: 'INFO'
  instance_id:
    description:
      - id of an EC2 instance that this event should be attached to, which will limit the contexts where this event is shown
  event_epoch:
    description:
      - 'Unix timestamp of where the event should appear in the timeline, defaults to now. Be careful with this.'
'''