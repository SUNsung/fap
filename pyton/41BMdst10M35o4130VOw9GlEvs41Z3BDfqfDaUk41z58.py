
        
          # Note the use of get_variable vs. tf.Variable.  this is because get_variable
  # does not allow the initialization of the variable with a value.
  if normalized:
    w_collections = [tf.GraphKeys.GLOBAL_VARIABLES, 'norm-variables']
    if collections:
      w_collections += collections
    if mat_init_value is not None:
      w = tf.Variable(mat_init_value, name=wname, collections=w_collections,
                      trainable=trainable)
    else:
      w = tf.get_variable(wname, [in_size, out_size], initializer=mat_init,
                          collections=w_collections, trainable=trainable)
    w = tf.nn.l2_normalize(w, dim=0) # x W, so xW_j = \sum_i x_bi W_ij
  else:
    w_collections = [tf.GraphKeys.GLOBAL_VARIABLES]
    if collections:
      w_collections += collections
    if mat_init_value is not None:
      w = tf.Variable(mat_init_value, name=wname, collections=w_collections,
                      trainable=trainable)
    else:
      w = tf.get_variable(wname, [in_size, out_size], initializer=mat_init,
                          collections=w_collections, trainable=trainable)
  b = None
  if do_bias:
    b_collections = [tf.GraphKeys.GLOBAL_VARIABLES]
    if collections:
      b_collections += collections
    bname = (name + '/b') if name else '/b'
    if bias_init_value is None:
      b = tf.get_variable(bname, [1, out_size],
                          initializer=tf.zeros_initializer(),
                          collections=b_collections,
                          trainable=trainable)
    else:
      b = tf.Variable(bias_init_value, name=bname,
                      collections=b_collections,
                      trainable=trainable)
    
        return out
    
                self._thread_local.num_401_calls += 1
            pat = re.compile(r'digest ', flags=re.IGNORECASE)
            self._thread_local.chal = parse_dict_header(pat.sub('', s_auth, count=1))
    
        def __getitem__(self, name):
        '''Dict-like __getitem__() for compatibility with client code. Throws
        exception if there are more than one cookie with name. In that case,
        use the more explicit get() method instead.
    
        return {'name': implementation, 'version': implementation_version}
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
    
def merge(to_release, from_releases, sentry_models):
    # The following models reference release:
    # ReleaseCommit.release
    # ReleaseEnvironment.release_id
    # ReleaseProject.release
    # GroupRelease.release_id
    # GroupResolution.release
    # Group.first_release
    # ReleaseFile.release
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        'Write your forwards methods here.'
        db.commit_transaction()
    
            # Adding model 'RawEvent'
        db.create_table(
            'sentry_rawevent', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'event_id',
                    self.gf('django.db.models.fields.CharField')(max_length=32, null=True)
                ), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
                ('data', self.gf('sentry.db.models.fields.node.NodeField')(null=True, blank=True)),
            )
        )
        db.send_create_signal('sentry', ['RawEvent'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'VersionDSymFile'
        db.create_table(
            'sentry_versiondsymfile', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'dsym_file', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProjectDSymFile'], null=True
                    )
                ), (
                    'dsym_app', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.DSymApp']
                    )
                ), ('version', self.gf('django.db.models.fields.CharField')(max_length=32)),
                ('build', self.gf('django.db.models.fields.CharField')(max_length=32, null=True)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['VersionDSymFile'])