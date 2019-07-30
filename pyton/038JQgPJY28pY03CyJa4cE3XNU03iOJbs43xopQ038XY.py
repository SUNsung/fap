
        
        
def findProject(gitlab_instance, identifier):
    try:
        project = gitlab_instance.projects.get(identifier)
    except Exception as e:
        current_user = gitlab_instance.user
        try:
            project = gitlab_instance.projects.get(current_user.username + '/' + identifier)
        except Exception as e:
            return None
    
            if api_url:
            self.clc.defaults.ENDPOINT_URL_V2 = api_url
    
            self._set_clc_credentials_from_env()
        self.policy_dict = self._get_alert_policies(p['alias'])
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    argument_spec = infinibox_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True),
            state=dict(default='present', choices=['present', 'absent']),
            size=dict(),
            vsize=dict(),
            ssd_cache=dict(type='bool', default=True)
        )
    )
    
        file_args = module.load_file_common_arguments(module.params)
    if module.set_fs_attributes_if_different(file_args, False):
    
            # reload config
        layman = init_layman()
    
    import traceback
    
    DOCUMENTATION = r'''
---
module: ucs_managed_objects
short_description: Configures Managed Objects on Cisco UCS Manager
description:
- Configures Managed Objects on Cisco UCS Manager.
- The Python SDK module, Python class within the module (UCSM Class), and all properties must be directly specified.
- More information on the UCSM Python SDK and how to directly configure Managed Objects is available at L(UCSM Python SDK,http://ucsmsdk.readthedocs.io/).
- Examples can be used with the UCS Platform Emulator U(https://communities.cisco.com/ucspe).
extends_documentation_fragment: ucs
options:
  state:
    description:
    - If C(present), will verify that the Managed Objects are present and will create if needed.
    - If C(absent), will verify that the Managed Objects are absent and will delete if needed.
    choices: [ absent, present ]
    default: present
  objects:
    description:
    - List of managed objects to configure.  Each managed object has suboptions the specify the Python SDK module, class, and properties to configure.
    suboptions:
      module:
        description:
        - Name of the Python SDK module implementing the required class.
        required: yes
      class_name:
        description:
        - Name of the Python class that will be used to configure the Managed Object.
        required: yes
      properties:
        description:
        - List of properties to configure on the Managed Object.  See the UCSM Python SDK for information on properties for each class.
        required: yes
      children:
        description:
        - Optional list of child objects.  Each child has its own module, class, and properties suboptions.
        - The parent_mo_or_dn property for child objects is automatically set as the list of children is configured.
    required: yes
requirements:
- ucsmsdk
author:
- David Soper (@dsoper2)
- CiscoUcs (@CiscoUcs)
version_added: '2.8'
'''
    
            assert len(identity) == 1
        assert identity[0].idp == self.idp
        assert identity[0].status == IdentityStatus.VALID
        assert len(responses.calls) == 1
    
        def __init__(self, message, severity=SEVERITY_CRITICAL, url=None):
        assert severity in self.SEVERITY_LEVELS
        self.message = six.text_type(message)
        self.severity = severity
        self.url = url
    
            backlogged, size = None, 0
        from sentry.monitoring.queues import backend
        if backend is not None:
            size = backend.get_size('default')
            backlogged = size > 0
    
            # Adding index on 'GroupTagValue', fields ['project_id', '_key', '_value', 'last_seen']
        db.create_index(
            u'tagstore_grouptagvalue', [
                'project_id', 'key_id', 'value_id', 'last_seen'])
    
            for job in job_list:
            logger.debug('Sending scheduled job %s with payload %r', job.name, job.payload)
            app.send_task(job.name, kwargs=job.payload)
            job.delete()

    
    
@register.tag
def feature(parser, token):
    bits = token.split_contents()
    if len(bits) < 2:
        raise template.TemplateSyntaxError(
            '%r tag requires an argument' % token.contents.split()[0]
        )