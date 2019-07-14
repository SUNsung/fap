
        
        
class HTTPBasicAuth(requests.auth.HTTPBasicAuth):
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    from httpie import ExitStatus
from httpie.core import main
    
        def test_non_existent_file_raises_parse_error(self, httpbin):
        with pytest.raises(ParseError):
            http('--form',
                 'POST', httpbin.url + '/post', 'foo@/__does_not_exist__')
    
        def delete(self):
        try:
            os.unlink(self.path)
        except OSError as e:
            if e.errno != errno.ENOENT:
                raise
    
            :type request_headers: dict
    
    
def main():
    module = AnsibleModule(argument_spec=dict(
        view=dict(choices=['topics', 'subscriptions'], default='topics'),
        topic=dict(required=False),
        state=dict(choices=['list'], default='list'),
        service_account_email=dict(),
        credentials_file=dict(),
        project_id=dict(), ),)
    
        def role_remove_host(self, name, item):
        return self.role_remove_member(name=name, item={'host': item})
    
        module = AnsibleModule(
        argument_spec=dict(
            component=dict(required=True, aliases=['name']),
            version=dict(required=True),
            token=dict(required=True, no_log=True),
            state=dict(required=True, choices=['started', 'finished', 'failed']),
            hosts=dict(required=False, default=[socket.gethostname()], aliases=['host']),
            env=dict(required=False),
            owner=dict(required=False),
            description=dict(required=False),
            message=dict(required=False),
            source_system=dict(required=False, default='ansible'),
            validate_certs=dict(default='yes', type='bool'),
            url=dict(required=False, default='https://api.bigpanda.io'),
        ),
        supports_check_mode=True,
    )
    
        elif not running and state == 'monitored':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('monitor')
        if status not in ['not monitored']:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not monitored' % name, status=status)
    
        result = post(resource)
    root = ET.fromstring(result)
    
        if event == 'annotation':
        if not msg:
            module.fail_json(msg='msg required for annotation events')
        try:
            send_annotation_event(module, key, msg, annotated_by, level, instance_id, event_epoch)
        except Exception as e:
            module.fail_json(msg='unable to sent annotation event: %s' % to_native(e),
                             exception=traceback.format_exc())
    
        @classmethod
    def threshold(cls, severity):
        threshold = cls.SEVERITY_LEVELS[severity]
    
    
class TagKeyNotFound(Exception):
    pass
    
            # Removing index on 'EventTag', fields ['project_id', 'key', 'value']
        db.delete_index(u'tagstore_eventtag', ['project_id', 'key_id', 'value_id'])
    
        def backwards(self, orm):
        # Removing index on 'GroupTagValue', fields ['project_id', '_key', '_value', 'last_seen']
        db.delete_index(
            u'tagstore_grouptagvalue', [
                'project_id', 'key_id', 'value_id', 'last_seen'])
    
        complete_apps = ['tagstore']

    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
    from time import time