
        
        import requests
from requests import __version__ as requests_version
from pygments import __version__ as pygments_version
    
            self.output.write(
            CLEAR_LINE +
            ' ' +
            SPINNER[self._spinner_pos] +
            ' ' +
            self._status_line
        )
        self.output.flush()
    
        See also `test_auth_plugins.py`
    
            if self.args.auth is not None or auth_type_set:
            if not self.args.auth_type:
                self.args.auth_type = default_auth_plugin.auth_type
            plugin = plugin_manager.get_auth_plugin(self.args.auth_type)()
    
    intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'werkzeug': ('http://werkzeug.pocoo.org/docs/', None),
    'click': ('http://click.pocoo.org/', None),
    'jinja': ('http://jinja.pocoo.org/docs/', None),
    'itsdangerous': ('https://pythonhosted.org/itsdangerous', None),
    'sqlalchemy': ('https://docs.sqlalchemy.org/en/latest/', None),
    'wtforms': ('https://wtforms.readthedocs.io/en/latest/', None),
    'blinker': ('https://pythonhosted.org/blinker/', None),
}
    
        register_blueprints(app)
    register_cli(app)
    register_teardowns(app)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
@app.route('/<username>')
def user_timeline(username):
    '''Display's a users tweets.'''
    profile_user = query_db('select * from user where username = ?',
                            [username], one=True)
    if profile_user is None:
        abort(404)
    followed = False
    if g.user:
        followed = query_db('''select 1 from follower where
            follower.who_id = ? and follower.whom_id = ?''',
            [session['user_id'], profile_user['user_id']],
            one=True) is not None
    return render_template('timeline.html', messages=query_db('''
            select message.*, user.* from message, user where
            user.user_id = message.author_id and user.user_id = ?
            order by message.pub_date desc limit ?''',
            [profile_user['user_id'], PER_PAGE]), followed=followed,
            profile_user=profile_user)
    
        Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
                if lines and lines[-1] and chunk and lines[-1][-1] == chunk[-1]:
                pending = lines.pop()
            else:
                pending = None
    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
    #: Python 2.x?
is_py2 = (_ver[0] == 2)
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('http://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
    >>> requests.codes['temporary_redirect']
307
>>> requests.codes.teapot
418
>>> requests.codes['\o/']
200
    
    from keras.utils.test_utils import get_test_data
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    from keras import initializers
from keras import backend as K
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    
@keras_test
def test_vector_classification():
    '''
    Classify random float vectors into 2 classes with logistic regression
    using 2 layer neural network with ReLU hidden units.
    '''
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
            # teach the RNN translational invariance by
        # fitting text box randomly on canvas, with some room to rotate
        max_shift_x = w - box[2] - border_w_h[0]
        max_shift_y = h - box[3] - border_w_h[1]
        top_left_x = np.random.randint(0, int(max_shift_x))
        if ud:
            top_left_y = np.random.randint(0, int(max_shift_y))
        else:
            top_left_y = h // 2
        context.move_to(top_left_x - int(box[0]), top_left_y - int(box[1]))
        context.set_source_rgb(0, 0, 0)
        context.show_text(text)
    
    This network is used to predict the next frame of an artificially
generated movie which contains moving squares.
'''
from keras.models import Sequential
from keras.layers.convolutional import Conv3D
from keras.layers.convolutional_recurrent import ConvLSTM2D
from keras.layers.normalization import BatchNormalization
import numpy as np
import pylab as plt
    
    
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
    results_backend = app.config.get('RESULTS_BACKEND')
    
        def multistatement(self):
        query = 'SELECT * FROM t1; SELECT * FROM t2'
        self.assertEquals({'t1', 't2'}, self.extract_tables(query))
    
        @property
    def is_num(self):
        return (
            self.type and
            any([t in self.type.upper() for t in self.num_types])
        )
    
    # revision identifiers, used by Alembic.
revision = '1226819ee0e3'
down_revision = '956a063c52b3'
    
    from alembic import op
import sqlalchemy as sa
    
    
def upgrade():
    try:
        op.alter_column(
            'clusters', 'changed_on',
            existing_type=sa.DATETIME(),
            nullable=True)
        op.alter_column(
            'clusters', 'created_on',
            existing_type=sa.DATETIME(), nullable=True)
        op.drop_constraint(None, 'columns', type_='foreignkey')
        op.drop_constraint(None, 'columns', type_='foreignkey')
        op.drop_column('columns', 'created_on')
        op.drop_column('columns', 'created_by_fk')
        op.drop_column('columns', 'changed_on')
        op.drop_column('columns', 'changed_by_fk')
        op.alter_column('css_templates', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('css_templates', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dashboards', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dashboards', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.create_unique_constraint(None, 'dashboards', ['slug'])
        op.alter_column('datasources', 'changed_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=True)
        op.alter_column('datasources', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('datasources', 'created_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=True)
        op.alter_column('datasources', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dbs', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dbs', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('slices', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('slices', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('sql_metrics', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('sql_metrics', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('table_columns', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('table_columns', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('tables', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('tables', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('url', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('url', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        ### end Alembic commands ###
    except:
        pass
    
            if (not has_actual_code
            and not line.strip().startswith('//')
            and not line.strip().startswith('???')
            and not line.strip() == ''):
            has_actual_code = True
    
        def test_cat_shall_meow(self):
        noise = self.cat.meow()
        expected_noise = 'meow!'
        self.assertEqual(noise, expected_noise)
    
        def __init__(self, name, action):
        self.name = name
        self.action = action
    
        def test_dog_eng_localization(self):
        self.assertEqual(self.e.get('dog'), 'dog')
    
    
    
        def setDB(self, db):
        self._db = db