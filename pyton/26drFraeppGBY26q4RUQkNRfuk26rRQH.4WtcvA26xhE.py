
        
        
def plot_lfads_timeseries(data_bxtxn, model_vals, ext_input_bxtxi=None,
                          truth_bxtxn=None, bidx=None, output_dist='poisson',
                          conversion_factor=1.0, subplot_cidx=0,
                          col_title=None):
    
      Args:
    values_t_bxn: The length T list of BxN numpy tensors.
    
        # Add 'lstm/lstm_0/control_dependency' if you want to dump previous layer
    # LSTM.
    lstm_emb = sess.run(t['lstm/lstm_1/control_dependency'],
                        feed_dict={t['char_inputs_in']: char_ids_inputs,
                                   t['inputs_in']: inputs,
                                   t['targets_in']: targets,
                                   t['target_weights_in']: weights})
    
        for i in range(batch_size):
      data_index = batch * batch_size + i
      example = raw_data[data_index]
    
      Args;
    hparams:  Hyperparameters for the MaskGAN.
    inputs:  tf.int32 Tensor of the sequence input of shape [batch_size,
      sequence_length].
    present:  tf.bool Tensor indicating the presence or absence of the token
      of shape [batch_size, sequence_length].
    is_training:  Whether the model is training.
    is_validating:  Whether the model is being run in validation mode for
      calculating the perplexity.
    reuse (Optional):  Whether to reuse the model.
    
          for s in xrange(t, FLAGS.sequence_length):
        cum_advantage += reward_missing_list[s] * np.power(gamma, (s - t)) * (
            rewards_list[s] - baselines[s])
      # Clip advantages.
      cum_advantage = tf.clip_by_value(cum_advantage, -FLAGS.advantage_clipping,
                                       FLAGS.advantage_clipping)
      advantages.append(reward_missing_list[t] * cum_advantage)
      final_gen_objective += tf.multiply(
          log_probability,
          reward_missing_list[t] * tf.stop_gradient(cum_advantage))
    
      # LSTM vs GRU
  if isinstance(top_state, tf.contrib.rnn.LSTMStateTuple):
    attn = tf.zeros_like(top_state.h)
  else:
    attn = tf.zeros_like(top_state)
    
            sans = set(sans) if sans else set()
        sans.add(commonname)
        if isip:
            sans = 'IP: ' + commonname
        else:
            sans = 'DNS: %s, DNS: *.%s' % (commonname,  commonname)
        cert.add_extensions([OpenSSL.crypto.X509Extension(b'subjectAltName', True, sans)])
    
    import simple_http_client
from xlog import getLogger
xlog = getLogger('gae_proxy')
    
        if __hostsdeny__ and netloc.endswith(__hostsdeny__):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Hosts Deny', 'Hosts Deny(%r)' % netloc, detail='共用appid因为资源有限，限制观看视频和文件下载等消耗资源过多的访问，请使用自己的appid <a href=' https://github.com/XX-net/XX-Net/wiki/Register-Google-appid' target='_blank'>帮助</a> ')
        raise StopIteration
    
                    if self.accept[s] >= 1:
                    #print 'accept state for alt %d' % self.accept[s]
                    return self.accept[s]
    
        def __init__(self, tokenSource=None, channel=DEFAULT_CHANNEL):
        CommonTokenStream.__init__(self, tokenSource, channel)
    
        Each code snipped should get additional C++ code around it to help compile the line in context, with
    some heuristic guessing of what is needed around. The wrapping code should have a token in each line allowing
    other tools to filter out these lines
    
        def _forwards(self, orm):
        'Write your forwards methods here.'
        for release in RangeQuerySetWrapperWithProgressBar(
            orm.Release.objects.exclude(new_groups=0)
        ):
            projects = list(release.projects.values_list('id', flat=True))
            if len(projects) > 1:
                # do something fancy where we look at Group.first_release
                # to calculate ReleaseProject.new_group
                for p_id in projects:
                    new_groups = orm.Group.objects.filter(
                        first_release=release, project_id=p_id
                    ).count()
                    if not new_groups:
                        continue
                    orm.ReleaseProject.objects.filter(
                        release_id=release.id, project_id=p_id
                    ).update(new_groups=new_groups)
            elif len(projects) == 1:
                # copy Release.new_groups to ReleaseProject.new_group
                orm.ReleaseProject.objects.filter(
                    release_id=release.id, project_id=projects[0]
                ).update(new_groups=release.new_groups)
    
            sentry_models.Group.objects.filter(first_release=release).update(first_release=to_release)
    
        def backwards(self, orm):
        # Removing unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.delete_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
        )
    
            # Deleting model 'ProcessingIssue'
        db.delete_table('sentry_processingissue')
    
            for release_project in RangeQuerySetWrapperWithProgressBar(
            orm.ReleaseProject.objects.all()
        ):
            orm.ReleaseProject.objects.filter(id=release_project.id).update(
                new_groups=orm.Group.objects.filter(
                    project_id=release_project.project_id,
                    first_release_id=release_project.release_id,
                ).count()
            )
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'Distribution'
        db.create_table(
            'sentry_distribution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'organization_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        db_index=True
                    )
                ), (
                    'release', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Release']
                    )
                ), ('name', self.gf('django.db.models.fields.CharField')(max_length=64)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['Distribution'])