
        
        
def auto_parallel(metagraph, model):
  from tensorflow.python.grappler import tf_optimizer
  rewriter_config = rewriter_config_pb2.RewriterConfig()
  rewriter_config.optimizers.append('autoparallel')
  rewriter_config.auto_parallel.enable = True
  rewriter_config.auto_parallel.num_replicas = FLAGS.num_gpus
  optimized_graph = tf_optimizer.OptimizeGraph(rewriter_config, metagraph)
  metagraph.graph_def.CopyFrom(optimized_graph)
  UpdateCollection(metagraph, model)

    
      The PTB dataset comes from Tomas Mikolov's webpage:
    
    
if __name__ == '__main__':
  tf.test.main()

    
      @tf.test.mock.patch.dict(premade_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_premade_estimator(self):
    premade_estimator.main([None, '--train_steps=1'])
    
        final_timestep = label_seq[-1]
    eos_id = len(seq) - 1
    self.assertAllEqual(final_timestep.tokens, [eos_id, eos_id])
    self.assertEqual(final_timestep.label, 1)
    self.assertEqual(final_timestep.weight, 1.0)
    
      ds = FLAGS.dataset
  if ds == 'imdb':
    docs_gen = imdb_documents
  elif ds == 'dbpedia':
    docs_gen = dbpedia_documents
  elif ds == 'rcv1':
    docs_gen = rcv1_documents
  elif ds == 'rt':
    docs_gen = rt_documents
  else:
    raise ValueError('Unrecognized dataset %s' % FLAGS.dataset)
    
    
def generate_test_data(vocab_ids, writer_lm_all, writer_seq_ae_all):
  '''Generates test data.'''
  # Construct test data writers
  writer_lm = build_shuffling_tf_record_writer(data.TEST_LM)
  writer_rev_lm = build_shuffling_tf_record_writer(data.TEST_REV_LM)
  writer_seq_ae = build_shuffling_tf_record_writer(data.TEST_SA)
  writer_class = build_tf_record_writer(data.TEST_CLASS)
  writer_bd_class = build_shuffling_tf_record_writer(data.TEST_BD_CLASS)
    
    
def check_labels_file_header(filename):
  '''Validate that filename corresponds to labels for the MNIST dataset.'''
  with tf.gfile.Open(filename, 'rb') as f:
    magic = read32(f)
    num_items = read32(f)
    if magic != 2049:
      raise ValueError('Invalid magic number %d in MNIST file %s' % (magic,
                                                                     f.name))
    
        plt.legend(['Ridge', 'OLS', 'LassoLars'], loc='upper left')
    plt.axis('tight')
    plt.show()

    
        it = 0
    
    
@ignore_warnings
def benchmark(metrics=tuple(v for k, v in sorted(METRICS.items())),
              formats=tuple(v for k, v in sorted(FORMATS.items())),
              samples=1000, classes=4, density=.2,
              n_times=5):
    '''Times metric calculations for a number of inputs
    
    if __name__ == '__main__':
    barplot_neighbors(dataset='digits')
    barplot_neighbors(dataset='dense')
    plt.show()

    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
        revision is a git commit reference (hash or name)
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    import os
import tarfile
from contextlib import closing
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
        t0 = time()
    scores = uniform_labelings_scores(score_func, n_samples, n_clusters_range)
    print('done in %0.3fs' % (time() - t0))
    plots.append(plt.errorbar(
        n_clusters_range, np.median(scores, axis=1), scores.std(axis=1))[0])
    names.append(score_func.__name__)
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
class SalesRanker(MRJob):
    
        blackboard.add_expert(Student(blackboard))
    blackboard.add_expert(Scientist(blackboard))
    blackboard.add_expert(Professor(blackboard))
    
        def run(self, msg):
        print('{} got {}'.format(self.name, msg))
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(time_provider_stub), expected_time)
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    
### OUTPUT ###
# <NumObj: -1>
# <NumObj: 0>
# <NumObj: 1>
# <NumObj: 2>
# -- committed
# <NumObj: 3>
# <NumObj: 4>
# <NumObj: 5>
# -- rolled back
# <NumObj: 2>
# -- now doing stuff ...
# -> doing stuff failed!
# Traceback (most recent call last):
# File 'memento.py', line 97, in <module>
#     num_obj.do_stuff()
#   File 'memento.py', line 52, in transaction
#     raise e
#   File 'memento.py', line 49, in transaction
#     return self.method(obj, *args, **kwargs)
#   File 'memento.py', line 70, in do_stuff
#     self.increment()     # <- will fail and rollback
#   File 'memento.py', line 65, in increment
#     self.value += 1
# TypeError: Can't convert 'int' object to str implicitly
# <NumObj: 2>
