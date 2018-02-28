
        
        
def random_perturbation_loss(embedded, length, loss_fn):
  '''Adds noise to embeddings and recomputes classification loss.'''
  noise = tf.random_normal(shape=tf.shape(embedded))
  perturb = _scale_l2(_mask_by_length(noise, length), FLAGS.perturb_norm_length)
  return loss_fn(embedded + perturb)
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir(), 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir(), 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
        # 2. Evaluation mode
    # Return our loss (which is used to evaluate our model)
    # Set the TensorBoard scalar my_accurace to the accuracy
    # Obs: This function only sets value during mode == ModeKeys.EVAL
    # To set values during training, see tf.summary.scalar
    if mode == tf.estimator.ModeKeys.EVAL:
        return tf.estimator.EstimatorSpec(
            mode,
            loss=loss,
            eval_metric_ops={'my_accuracy': accuracy})
    
      if summary_writer is not None:
    global_step_val = sess.run(tf.train.get_global_step())
    tf.logging.info('Finished eval for step ' + str(global_step_val))
    summary_writer.add_summary(summary, global_step_val)
    
    import numpy as np
from six.moves import urllib
import tensorflow as tf
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
        
        When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node
    
        def __init__(self, query, results):
        self.query = query
        self.results = results
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def test_where_subquery(self):
        query = '''
          SELECT name
            FROM t1
            WHERE regionkey = (SELECT max(regionkey) FROM t2)
        '''
        self.assertEquals({'t1', 't2'}, self.extract_tables(query))
    
        id = Column(Integer, primary_key=True)
    column_name = Column(String(255))
    verbose_name = Column(String(1024))
    is_active = Column(Boolean, default=True)
    type = Column(String(32))
    groupby = Column(Boolean, default=False)
    count_distinct = Column(Boolean, default=False)
    sum = Column(Boolean, default=False)
    avg = Column(Boolean, default=False)
    max = Column(Boolean, default=False)
    min = Column(Boolean, default=False)
    filterable = Column(Boolean, default=False)
    description = Column(Text)
    is_dttm = None
    
        @classmethod
    def register_sources(cls, datasource_config):
        for module_name, class_names in datasource_config.items():
            class_names = [str(s) for s in class_names]
            module_obj = __import__(module_name, fromlist=class_names)
            for class_name in class_names:
                source_class = getattr(module_obj, class_name)
                cls.sources[source_class.type] = source_class
    
        @staticmethod
    def _dimensions_to_values(dimensions):
        '''
        Replace dimensions specs with their `dimension`
        values, and ignore those without
        '''
        values = []
        for dimension in dimensions:
            if isinstance(dimension, dict):
                if 'dimension' in dimension:
                    values.append(dimension['dimension'])
            else:
                values.append(dimension)
    
    from superset import appbuilder, db, security, sm, utils
from superset.connectors.base.views import DatasourceModelView
from superset.connectors.connector_registry import ConnectorRegistry
from superset.utils import has_access
from superset.views.base import (
    BaseSupersetView, DatasourceFilter, DeleteMixin,
    get_datasource_exist_error_mgs, ListWidgetWithCheckboxes, SupersetModelView,
    validate_json, YamlExportMixin,
)
from . import models
    
        '''ORM object for table columns, each table can have multiple columns'''