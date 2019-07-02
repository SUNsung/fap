
        
        
def load_data(label_mode='fine'):
    '''Loads CIFAR100 dataset.
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []
    
    
UPDATED_MOD_SSL_CONF_DIGEST = '.updated-options-ssl-apache-conf-digest.txt'
'''Name of the hash of the updated or informed mod_ssl_conf as saved in `IConfig.config_dir`.'''
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
        # Display the results
    for top, right, bottom, left in face_locations:
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        # Bail out when the video file ends
    if not ret:
        break
    
            self.assertEqual(result.exit_code, 0)
        self.assertTrue(target_string in result.output)
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    
def __meters_to_kilometers(meters: float) -> float:
    '''Convert meters to kilometers.'''
    return meters * 0.001

    
        return set_ip_to_mock

    
    
def linear_dense(x, n_unit, name=None, reuse=None):
    '''线性全连接层
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit]
    
    
def multi_highway_dense(x, n_layer, act_fn=relu, carry_bias=-1.0, name=None):
    '''多层 highway_dense
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_input]
    '''
    name = name or 'highway_dense'
    for i in range(n_layer):
        x = highway_dense(x, act_fn=act_fn, carry_bias=carry_bias, name='{}-{}'.format(name, i))
    
            # 得到 S 后，下面的操作就与 `attention_flow_self` 一样了
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
                with open('htmlout.html', 'w') as out:
                out.write(header)
    
    
class TagKeyNotFound(Exception):
    pass
    
    from django.db import models
from django.utils import timezone
    
            # Adding model 'GroupTagKey'
        db.create_table(u'tagstore_grouptagkey', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
        ))
        db.send_create_signal('tagstore', ['GroupTagKey'])
    
        This is currenlty only used for ``in_next_release`` resolutions.
    '''
    try:
        release = Release.objects.get_from_cache(
            id=release_id,
        )
    except Release.DoesNotExist:
        return