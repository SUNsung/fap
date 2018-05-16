
        
            'bracketed_hostport': re.compile(
        r'''^
            \[(.+)\]                    # [host identifier]
            :([0-9]+)                   # :port number
            $
        ''', re.X
    ),
    
    
def build_distribution(version):
    obj = mock.MagicMock()
    obj.version = '0.5.0'
    return obj
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
        def construct_mapping(self, node, deep=False):
        # Most of this is from yaml.constructor.SafeConstructor.  We replicate
        # it here so that we can warn users when they have duplicate dict keys
        # (pyyaml silently allows overwriting keys)
        if not isinstance(node, MappingNode):
            raise ConstructorError(None, None,
                                   'expected a mapping node, but found %s' % node.id,
                                   node.start_mark)
        self.flatten_mapping(node)
        mapping = AnsibleMapping()
    
        print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
    
if __name__ == '__main__':
    from glmnet.elastic_net import Lasso as GlmnetLasso
    from sklearn.linear_model import Lasso as ScikitLasso
    # Delayed import of matplotlib.pyplot
    import matplotlib.pyplot as plt
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_times['rpca'], label='RandomizedPCA')
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
        ###########################################################################
    # Numpy permutation based
    sampling_algorithm['numpy-permutation'] = \
        lambda n_population, n_sample: \
            np.random.permutation(n_population)[:n_sample]
    
    import lxml.html
from lxml.etree import ElementTree
import numpy as np
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
        input_file = open(os.path.join(exercise_dir, f))
    output_file = open(os.path.join(skeleton_dir, f), 'w')
    
    First example
-------------
The first example illustrates how robust covariance estimation can help
concentrating on a relevant cluster when another one exists. Here, many
observations are confounded into one and break down the empirical covariance
estimation.
Of course, some screening tools would have pointed out the presence of two
clusters (Support Vector Machines, Gaussian Mixture Models, univariate
outlier detection, ...). But had it been a high-dimensional example, none
of these could be applied that easily.
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
        def test_types(self):
        headers = {'Cookie': 'foo=bar'}
        response = self.fetch('/typecheck?foo=bar', headers=headers)
        data = json_decode(response.body)
        self.assertEqual(data, {})
    
    ``Futures`` are a pattern for concurrent programming introduced in
Python 3.2 in the `concurrent.futures` package, and also adopted (in a
slightly different form) in Python 3.4's `asyncio` package. This
package defines a ``Future`` class that is an alias for `asyncio.Future`
when available, and a compatible implementation for older versions of
Python. It also includes some utility functions for interacting with
``Future`` objects.
    
        def start(self, runner):
        self.runner = runner
    
        def _handle_read(self):
        try:
            pos = self._read_to_buffer_loop()
        except UnsatisfiableReadError:
            raise
        except Exception as e:
            gen_log.warning('error on read: %s' % e)
            self.close(exc_info=e)
            return
        if pos is not None:
            self._read_from_buffer(pos)
            return
        else:
            self._maybe_run_close_callback()
    
        .. testoutput:: semaphore