
        
        py_library(
    name = 'trainer_lib',
    srcs = ['trainer_lib.py'],
    deps = [
        '//dragnn/protos:spec_pb2_py',
        '//syntaxnet:parser_ops',
        '//syntaxnet:sentence_pb2_py',
        '//syntaxnet:task_spec_pb2_py',
        '//syntaxnet/util:check',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
        # Incorporate the source activations.  In this case, we perform a batched
    # matmul() between the trailing [L,S] matrices of the current result and the
    # trailing [S] vectors of the tokens.
    sources_bxnx1xs = tf.expand_dims(sources, 2)
    labels_bxnxlx1 = tf.matmul(weights_targets_bxnxlxs, sources_bxnx1xs,
                               transpose_b=True)
    labels_bxnxl = tf.squeeze(labels_bxnxlx1, [3])
    return labels_bxnxl
    
      Args:
    master_spec_path: Path to a proto-text master spec.
    params_path: Path to the parameters file to export.
    export_path: Path to export the SavedModel to.
    export_moving_averages: Whether to export the moving average parameters.
    build_runtime_graph: Whether to build a graph for use by the runtime.
  '''
    
    from google.protobuf import text_format
from dragnn.protos import spec_pb2
from dragnn.python import graph_builder
    
    from google.protobuf import text_format
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
            for k in sorted(results_dict.keys()):
            all_times[k].append(results_dict[k]['time'])
            all_errors[k].append(results_dict[k]['error'])
    
            plt.gcf().suptitle('%s data set' % dataset.capitalize(), fontsize=16)
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
    import numpy as np
    
    np.random.seed(0)
###############################################################################
n_features = 100
# simulation covariance matrix (AR(1) process)
r = 0.1
real_cov = toeplitz(r ** np.arange(n_features))
coloring_matrix = cholesky(real_cov)
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
        def __init__(self, args):
        '''Initializes the plugin with the given command line args'''
        self._temp_dir = tempfile.mkdtemp()
        self.le_config = util.create_le_config(self._temp_dir)
        config_dir = util.extract_configs(args.configs, self._temp_dir)
        self._configs = [
            os.path.join(config_dir, config)
            for config in os.listdir(config_dir)]
    
    # Documents to append as an appendix to all manuals.
#latex_appendices = []
    
            # Schedule several callbacks and wait for them all to come due at once.
        # t2 should be cancelled by t1, even though it is already scheduled to
        # be run before the ioloop even looks at it.
        now = self.io_loop.time()
    
                response = self.fetch('/default?status=435')
            self.assertEqual(response.code, 435)
            self.assertTrue(b'435: Unknown' in response.body)
    
        def run(self):
        try:
            build_ext.run(self)
        except Exception:
            e = sys.exc_info()[1]
            sys.stdout.write('%s\n' % str(e))
            warnings.warn(self.warning_message % ('Extension modules',
                                                  'There was an issue with '
                                                  'your platform configuration'
                                                  ' - see above.'))