
        
          def __init__(self, hparams, lemma_embeddings, instance):
    '''Initialize the LexNET classifier.
    
    
def variable_summaries(var, name):
  '''Attach a lot of summaries to a Tensor.'''
  mean = tf.reduce_mean(var)
  tf.summary.scalar('mean/' + name, mean)
  with tf.name_scope('stddev'):
    stddev = tf.sqrt(tf.reduce_sum(tf.square(var - mean)))
  tf.summary.scalar('sttdev/' + name, stddev)
  tf.summary.scalar('max/' + name, tf.reduce_max(var))
  tf.summary.scalar('min/' + name, tf.reduce_min(var))
  tf.summary.histogram(name, var)
    
      # Exponential Moving Average baseline.
  elif FLAGS.baseline_method == 'ema':
    # TODO(liamfedus): Recheck.
    # Lists of rewards and Log probabilities of the actions taken only for
    # missing tokens.
    ema = tf.train.ExponentialMovingAverage(decay=hparams.baseline_decay)
    maintain_averages_op = ema.apply(rewards_list)
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'GroupCommitResolution'
        db.create_table(
            'sentry_groupcommitresolution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'group_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'commit_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'datetime', self.gf('django.db.models.fields.DateTimeField')(
                        db_index=True
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['GroupCommitResolution'])
    
            for name, organization_id in dupe_envs:
            envs = list(
                orm.Environment.objects.filter(
                    name=name,
                    organization_id=organization_id,
                ).order_by('date_added')
            )
            to_env = envs[0]
            from_envs = envs[1:]
    
            # Adding unique constraint on 'ReleaseHeadCommit', fields ['repository_id', 'release']
        db.create_unique('sentry_releaseheadcommit', ['repository_id', 'release_id'])