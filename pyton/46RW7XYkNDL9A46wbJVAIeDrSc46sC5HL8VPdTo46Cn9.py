
        
        
init_bashrc = u'''echo '
export SHELL=/bin/bash
export PS1='$ '
echo > $HISTFILE
eval $(thefuck --alias {})
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.bashrc'''
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
    from django.conf import settings
from django.template.backends.django import DjangoTemplates
from django.template.loader import get_template
from django.utils.functional import cached_property
from django.utils.module_loading import import_string
    
        @property
    def headers(self):
        '''Return a `str` with the message's headers.'''
        raise NotImplementedError()
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
        if n == 1:
        return '1 B'
    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
    
class CeleryAliveCheck(StatusCheck):
    def check(self):
        # There is no queue, and celery is not running, so never show error
        if settings.CELERY_ALWAYS_EAGER:
            return []
        last_ping = options.get('sentry:last_worker_ping') or 0
        if last_ping >= time() - 300:
            return []
    
        project_id = BoundedBigIntegerField()
    group_id = BoundedBigIntegerField(null=True)
    event_id = BoundedBigIntegerField()
    # We want to keep this model lightweight, so lets use a pointer to
    # TagKey/TagValue
    key_id = BoundedBigIntegerField()
    value_id = BoundedBigIntegerField()
    # maintain a date column for easy removal
    date_added = models.DateTimeField(default=timezone.now, db_index=True)
    
            # Removing unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
        return results