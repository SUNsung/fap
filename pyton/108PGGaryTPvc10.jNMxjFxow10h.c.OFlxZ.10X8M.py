
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
            def predicate(problem):
            return cls.SEVERITY_LEVELS[problem.severity] >= threshold
    
        project_id = BoundedBigIntegerField()
    group_id = BoundedBigIntegerField(null=True)
    event_id = BoundedBigIntegerField()
    # We want to keep this model lightweight, so lets use a pointer to
    # TagKey/TagValue
    key_id = BoundedBigIntegerField()
    value_id = BoundedBigIntegerField()
    # maintain a date column for easy removal
    date_added = models.DateTimeField(default=timezone.now, db_index=True)
    
            # Adding model 'GroupTagValue'
        db.create_table(u'tagstore_grouptagvalue', (
            ('_value', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagValue'], db_column='value')),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key')),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['GroupTagValue'])
    
        def forwards(self, orm):
        # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
        for notifier in get_activity_notifiers(activity.project):
        notifier.notify_about_activity(activity)

    
    flags.DEFINE_integer(
    'n_best_size', 20,
    'The total number of n-best predictions to generate in the '
    'nbest_predictions.json output file.')
    
      def test_config_to_json_string(self):
    config = modeling.BertConfig(vocab_size=99, hidden_size=37)
    obj = json.loads(config.to_json_string())
    self.assertEqual(obj['vocab_size'], 99)
    self.assertEqual(obj['hidden_size'], 37)
    
    flags.DEFINE_string(
    'bert_hub_module_handle', None,
    'Handle for the BERT TF-Hub module.')
    
      output = input_tensor