
        
            Beyond permissions, groups are a convenient way to categorize users to
    apply some label, or extended functionality, to them. For example, you
    could create a group 'Special users', and you could write code that would
    do special things to those users -- such as giving them access to a
    members-only portion of your site, or sending them members-only email
    messages.
    '''
    name = models.CharField(_('name'), max_length=150, unique=True)
    permissions = models.ManyToManyField(
        Permission,
        verbose_name=_('permissions'),
        blank=True,
    )
    
    
class IntConverter:
    regex = '[0-9]+'
    
             cache_page = decorator_from_middleware_with_args(CacheMiddleware)
         # ...
    
            # Explicit dependencies
        self.assertLess(ordered_sigs.index('s2'), ordered_sigs.index('s1'))
        self.assertLess(ordered_sigs.index('s3'), ordered_sigs.index('s2'))
    
        def __iter__(self):
        'Iterate over each Feature in the Layer.'
        # ResetReading() must be called before iteration is to begin.
        capi.reset_reading(self._ptr)
        for i in range(self.num_feat):
            yield Feature(capi.get_next_feature(self._ptr), self)
    
    from sentry.models import Identity, IdentityProvider, IdentityStatus, Integration, OrganizationIntegration
from sentry.testutils import TestCase
from sentry.integrations.slack.link_identity import build_linking_url
    
        def backwards(self, orm):
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(null=True))