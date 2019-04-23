
        
            def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
        def test_request_body_from_file_by_path_no_data_items_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=False)
        r = http('POST', httpbin.url + '/post', '@' + FILE_PATH_ARG, 'foo=bar',
                 env=env, error_exit_ok=True)
        assert 'cannot be mixed' in r.stderr

    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
    Copyright 2014 Steven Loria
    
    print('Classification report for classifier %s:\n%s\n'
      % (classifier, metrics.classification_report(expected, predicted)))
print('Confusion matrix:\n%s' % metrics.confusion_matrix(expected, predicted))
    
    # histogram
plt.figure(4, figsize=(3, 2.2))
plt.clf()
plt.axes([.01, .01, .98, .98])
plt.hist(X, bins=256, color='.5', edgecolor='.5')
plt.yticks(())
plt.xticks(regular_values)
values = np.sort(values)
for center_1, center_2 in zip(values[:-1], values[1:]):
    plt.axvline(.5 * (center_1 + center_2), color='b')
    
    This example is meant to illustrate situations where k-means will produce
unintuitive and possibly unexpected clusters. In the first three plots, the
input data does not conform to some implicit assumption that k-means makes and
undesirable clusters are produced as a result. In the last plot, k-means
returns intuitive clusters despite unevenly sized blobs.
'''
print(__doc__)
    
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
    
            # The following code is provided here to aid in writing a correct migration
        # Changing field 'ReleaseEnvironment.project_id'
        db.alter_column(
            'sentry_environmentrelease', 'project_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
            db.start_transaction()
    
        def backwards(self, orm):
        # Deleting field 'ApiGrant.scope_list'
        db.delete_column('sentry_apigrant', 'scope_list')
    
        def backwards(self, orm):
        pass
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])