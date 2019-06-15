
        
        apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    
Invalid choice: 'scn', maybe you meant:
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
    
class DjangoTemplates(EngineMixin, BaseRenderer):
    '''
    Load Django templates from the built-in widget templates in
    django/forms/templates and from apps' 'templates' directory.
    '''
    backend = DjangoTemplates
    
        '''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * 2
    if isinstance(strides, int):
        strides = [strides] * 4
    
    
# # Test
# def attention_flow_2(h, u, T=None, J=None, d=None, name=None, reuse=None):
#     '''Attention Flow Match Layer
#     Input shape:
#         h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
#         u: [N, J, d]
#     Output shape:
#         [N, T, 4d]
# 
#     Args:
#         h: context encoding     shape: [N, T, d]
#         u: question encoding    shape: [N, J, d]
#         T(int): context length
#         J(int): question length
#         d(int): features size
#         name(str):
#         reuse(bool):
# 
#     Returns:
# 
#     '''
#     print('Test')
#     d = d or int(h.get_shape()[-1])
#     T = T or int(h.get_shape()[-2])
#     J = J or int(u.get_shape()[-2])
# 
#     with tf.variable_scope(name or 'attention_flow', reuse=reuse):
#         h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])
#         u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])
#         hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
#         h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
#         W_s = get_w([3 * d, 1])  # [3d, 1]
# 
#         # similarity matrix
#         # S = tf.reshape(tf.einsum('ntjd,do->ntjo', h_u_hu, W_s), [-1, T, J])
#         # 以上操作等价于
#         S = tf.reshape(tf.matmul(tf.reshape(h_u_hu, [-1, 3 * d]), W_s), [-1, T, J])
# 
#         # 得到 S 后，下面的操作就与 `attention_flow_self` 一样了
# 
#         # u_tilde(u~): context to question attended query vectors
#         u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
# 
#         # h_tilde(h~): question to context attended query vectors
#         b = tf.reduce_max(S, axis=2)  # [N, T]
#         b = softmax(b, axis=-1)  # [N, T]
#         b = tf.expand_dims(b, axis=1)  # [N, 1, T]
#         h_tilde = tf.matmul(b, h)  # [N, 1, d]
#         h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]
# 
#         g = tf.concat([h, u_tilde, h * u_tilde, h * h_tilde], axis=-1)  # [N, T, 4d]
# 
#     return g

    
    import six
    
            backlogged, size = None, 0
        from sentry.monitoring.queues import backend
        if backend is not None:
            size = backend.get_size('default')
            backlogged = size > 0
    
        def forwards(self, orm):
        # Adding model 'TagValue'
        db.create_table(u'tagstore_tagvalue', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('value', self.gf('django.db.models.fields.CharField')(max_length=200)),
            ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')(null=True, blank=True)),
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['TagValue'])
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(null=True))
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
        min_project_id = 0
    max_project_id = Project.objects.aggregate(x=Max('id'))['x'] or 0
    step = 1000
    while min_project_id < max_project_id:
        queryset = Group.objects.filter(
            last_seen__gte=now - timedelta(days=1),
            project__gte=min_project_id,
            project__lt=min_project_id + step,
            platform__isnull=False,
        ).values_list('platform', 'project_id').distinct()
    
    import sentry
    
    
@instrumented_task(
    name='sentry.tasks.process_buffer.process_pending',
    queue='buffers.process_pending',
)
def process_pending(partition=None):
    '''
    Process pending buffers.
    '''
    from sentry import buffer
    from sentry.app import locks