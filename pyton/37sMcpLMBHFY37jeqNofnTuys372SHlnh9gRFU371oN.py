
        
            def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
            '''
        error_files = self.aug.match('/augeas//error')
    
        @mock.patch('certbot_apache.display_ops.display_util')
    @certbot_util.patch_get_utility()
    @mock.patch('certbot_apache.display_ops.logger')
    def test_small_display(self, mock_logger, mock_util, mock_display_util):
        mock_display_util.WIDTH = 20
        mock_util().menu.return_value = (display_util.OK, 0)
        self._call(self.vhosts)
    
            self.assertTrue(self.vhost1.conflicts([self.addr2]))
        self.assertFalse(self.vhost1.conflicts([self.addr_default]))
    
    
Examples
--------
    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
            # Deleting model 'GroupTagKey'
        db.delete_table(u'tagstore_grouptagkey')
    
    
@instrumented_task(
    name='sentry.tagstore.tasks.delete_tag_key',
    queue='cleanup',
    default_retry_delay=60 * 5,
    max_retries=MAX_RETRIES
)
@retry(exclude=(DeleteAborted, ))
def delete_tag_key(object_id, model, transaction_id=None, **kwargs):
    from sentry import deletions
    
        resolution_list = list(
        GroupResolution.objects.filter(
            Q(type=GroupResolution.Type.in_next_release) | Q(type__isnull=True),
            release__projects=release.projects.all(),
            release__date_added__lt=release.date_added,
            status=GroupResolution.Status.pending,
        ).exclude(
            release=release,
        )
    )
    
    from sentry import options
from sentry.tasks.base import instrumented_task