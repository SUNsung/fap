
        
        from os import makedirs
from os.path import exists, join
    
        # Test that writing over the input data works predictably
    for mode in ['torch', 'tf']:
        x = np.random.uniform(0, 255, (2, 10, 10, 3))
        xint = x.astype('int')
        x2 = utils.preprocess_input(x, mode=mode)
        xint2 = utils.preprocess_input(xint)
        assert_allclose(x, x2)
        assert xint.astype('float').max() != xint2.max()
    # Caffe mode works differently from the others
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int')
    x2 = utils.preprocess_input(x, data_format='channels_last', mode='caffe')
    xint2 = utils.preprocess_input(xint)
    assert_allclose(x, x2[..., ::-1])
    assert xint.astype('float').max() != xint2.max()
    
    
def test_regularization_shared_layer_in_different_models():
    shared_dense = Dense(num_classes,
                         kernel_regularizer=regularizers.l1(),
                         activity_regularizer=regularizers.l1())
    models = []
    for _ in range(2):
        input_tensor = Input(shape=(data_dim,))
        unshared_dense = Dense(num_classes, kernel_regularizer=regularizers.l1())
        out = unshared_dense(shared_dense(input_tensor))
        models.append(Model(input_tensor, out))
    
    from ..layers.merge import concatenate
from .. import backend as K
from ..layers.core import Lambda
from ..engine.training import Model
from ..models import clone_model
from ..utils.generic_utils import to_list
    
    outputs = Activation('sigmoid', name='decoder_output')(x)
    
    scores = model.evaluate(x_test, y_test, verbose=0)
print('IRNN test score:', scores[0])
print('IRNN test accuracy:', scores[1])

    
    # the data, split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
    
        t = now()
    model.fit(x_train, y_train,
              batch_size=batch_size,
              epochs=epochs,
              verbose=1,
              validation_data=(x_test, y_test))
    print('Training time: %s' % (now() - t))
    score = model.evaluate(x_test, y_test, verbose=0)
    print('Test score:', score[0])
    print('Test accuracy:', score[1])
    
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
    
            # Adding unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.create_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        'Write your forwards methods here.'
        db.commit_transaction()
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ProcessingIssue'
        db.create_table(
            'sentry_processingissue', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'checksum',
                    self.gf('django.db.models.fields.CharField')(max_length=40, db_index=True)
                ), ('type', self.gf('django.db.models.fields.CharField')(max_length=30)),
                ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')()), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ProcessingIssue'])
    
            # Adding model 'ApiAuthorization'
        db.create_table(
            'sentry_apiauthorization', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'application', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ApiApplication'], null=True
                    )
                ), (
                    'user', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ), ('scopes', self.gf('django.db.models.fields.BigIntegerField')(default=None)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiAuthorization'])