
        
        ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
    print('consensus score: {:.1f}'.format(score))
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    Plot the classification probability for different classifiers. We use a 3
class dataset, and we classify it with a Support Vector classifier, L1
and L2 penalized logistic regression with either a One-Vs-Rest or multinomial
setting, and Gaussian process classification.
    
            resp = self.get_resp('/superset/explore/druid/{}/'.format(
            datasource_id))
        self.assertIn('test_datasource', resp)
        form_data = {
            'viz_type': 'table',
            'granularity': 'one+day',
            'druid_time_origin': '',
            'since': '7+days+ago',
            'until': 'now',
            'row_limit': 5000,
            'include_search': 'false',
            'metrics': ['count'],
            'groupby': ['dim1'],
            'force': 'true',
        }
        # One groupby
        url = ('/superset/explore_json/druid/{}/'.format(datasource_id))
        resp = self.get_json_resp(url, {'form_data': json.dumps(form_data)})
        self.assertEqual('Canada', resp['data']['records'][0]['dim1'])
    
    
def get_slice_json(defaults, **kwargs):
    d = defaults.copy()
    d.update(kwargs)
    return json.dumps(d, indent=4, sort_keys=True)
    
    
def cleanup_permissions():
    # 1. Clean up duplicates.
    pvms = sm.get_session.query(sm.permissionview_model).all()
    print('# of permission view menues is: {}'.format(len(pvms)))
    pvms_dict = defaultdict(list)
    for pvm in pvms:
        pvms_dict[(pvm.permission, pvm.view_menu)].append(pvm)
    duplicates = [v for v in pvms_dict.values() if len(v) > 1]
    len(duplicates)
    
        print('Loading [World Bank's Health Nutrition and Population Stats]')
    data.load_world_bank_health_n_pop()
    
    
appbuilder.add_view(
    TableModelView,
    'Tables',
    label=__('Tables'),
    category='Sources',
    category_label=__('Sources'),
    icon='fa-table',
)
    
        @classmethod
    def agg_func(cls, dtype, column_name):
        # consider checking for key substring too.
        if cls.is_id(column_name):
            return 'count_distinct'
        if (issubclass(dtype.type, np.generic) and
                np.issubdtype(dtype, np.number)):
            return 'sum'
        return None
    
        for c in i_datasource.columns:
        new_c = c.copy()
        new_c.table_id = datasource.id
        logging.info('Importing column {} from the datasource: {}'.format(
            new_c.to_json(), i_datasource.full_name))
        imported_c = i_datasource.column_class.import_obj(new_c)
        if (imported_c.column_name not in
                [c.column_name for c in datasource.columns]):
            datasource.columns.append(imported_c)
    session.flush()
    return datasource.id
    
    from alembic import op
import sqlalchemy as sa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# No imports from `future` because when this is loaded, sys.path hasn't been set
# up yet!
    
    
  def Response( self ):
    return self._response
    
      # Remove old YCM libs if present so that YCM can start.
  old_libs = (
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_core.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_client_support.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*clang*.*') ) )
  for lib in old_libs:
    os.remove( lib )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa