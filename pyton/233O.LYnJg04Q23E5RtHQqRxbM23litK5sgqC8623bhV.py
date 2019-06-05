
        
            def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
        def reducer(self, key, values):
        '''Sum values for each key.
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
                std = y_train.std(axis=0)
            mean = y_train.mean(axis=0)
            y_train = (y_train - mean) / std
            y_test = (y_test - mean) / std
    
    $ kernprof.py -l sparsity_benchmark.py
$ python -m line_profiler sparsity_benchmark.py.lprof
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    pipeline = Pipeline([
        ('vect', TfidfVectorizer(min_df=3, max_df=0.95)),
        ('clf', LinearSVC(C=1000)),
    ])
    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    for connectivity in (None, knn_graph):
    for n_clusters in (30, 3):
        plt.figure(figsize=(10, 4))
        for index, linkage in enumerate(('average',
                                         'complete',
                                         'ward',
                                         'single')):
            plt.subplot(1, 4, index + 1)
            model = AgglomerativeClustering(linkage=linkage,
                                            connectivity=connectivity,
                                            n_clusters=n_clusters)
            t0 = time.time()
            model.fit(X)
            elapsed_time = time.time() - t0
            plt.scatter(X[:, 0], X[:, 1], c=model.labels_,
                        cmap=plt.cm.nipy_spectral)
            plt.title('linkage=%s\n(time %.2fs)' % (linkage, elapsed_time),
                      fontdict=dict(verticalalignment='top'))
            plt.axis('equal')
            plt.axis('off')
    
    The plots display firstly what a K-means algorithm would yield
using three clusters. It is then shown what the effect of a bad
initialization is on the classification process:
By setting n_init to only 1 (default is 10), the amount of
times that the algorithm will be run with different centroid
seeds is reduced.
The next plot displays what using eight clusters would deliver
and finally the ground truth.
    
    
X, y = nudge_images(X, y)
    
    import josepy as jose
import pyrfc3339
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
            :param str lens: lens to check for errors
    
        @certbot_util.patch_get_utility()
    def test_multiple_names(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 5)
    
            self.assertTrue(self.vhost1.same_server(self.vhost2))
        self.assertTrue(no_name1.same_server(no_name2))
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``, waiting 60 seconds
             for DNS propagation
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    SYNTAX_REGION_ARGUMENT_REGEX = re.compile(
  r'^(?:matchgroup|start)=.*$' )
    
    
from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      _assert_rejects( f, { 'text' : 'This is an unimportant taco',
                        'kind' : 'WARNING' } )
  _assert_accepts( f, { 'text' : 'This taco will be shown',
                        'kind' : 'ERROR' } )
    
        Args:
        executor_reference: A weakref.ref to the ProcessPoolExecutor that owns
            this thread. Used to determine if the ProcessPoolExecutor has been
            garbage collected and that this function can exit.
        process: A list of the multiprocessing.Process instances used as
            workers.
        pending_work_items: A dict mapping work ids to _WorkItems e.g.
            {5: <_WorkItem...>, 6: <_WorkItem...>, ...}
        work_ids_queue: A queue.Queue of work ids e.g. Queue([5, 6, ...]).
        call_queue: A multiprocessing.Queue that will be filled with _CallItems
            derived from _WorkItems for processing by the process workers.
        result_queue: A multiprocessing.Queue of _ResultItems generated by the
            process workers.
    '''
    nb_shutdown_processes = [0]
    def shutdown_one_process():
        '''Tell a worker to terminate, which will in turn wake us again'''
        call_queue.put(None)
        nb_shutdown_processes[0] += 1
    while True:
        _add_call_item_to_queue(pending_work_items,
                                work_ids_queue,
                                call_queue)
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
    
            self.assertEqual(set([CANCELLED_AND_NOTIFIED_FUTURE,
                              EXCEPTION_FUTURE,
                              SUCCESSFUL_FUTURE]),
                         completed_futures)
    
        THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE. '''
    
        def process(self, new_face):
        ''' Sharpen using the requested technique '''
        amount = self.config['amount'] / 100.0
        kernel_center = self.get_kernel_size(new_face, self.config['radius'])
        new_face = getattr(self, self.config['method'])(new_face, kernel_center, amount)
        return new_face
    
    import logging
import os
import re
    
    from ._base import Output, logger
    
        def set_type_ext(self, path=None):
        ''' Set the extension '''
        if path is not None:
            self.path = path
        if self.path is not None:
            item_ext = os.path.splitext(self.path)[1].lower()
            if item_ext in DataItem.vid_ext:
                item_type = 'vid'
            elif item_ext in DataItem.audio_ext:
                item_type = 'audio'
            else:
                item_type = 'dir'
            self.type = item_type
            self.ext = item_ext
            logger.debug('path: '%s', type: '%s', ext: '%s'', self.path, self.type, self.ext)
        else:
            return
    
        @property
    def frames_count(self):
        ''' Return current frames count '''
        retval = len(self.data)
        logger.trace(retval)
        return retval
    
                    var_x = K.reshape(inputs, (batch_size,
                                           self.group,
                                           channels // self.group,
                                           height,
                                           width))
                mean = K.mean(var_x, axis=[2, 3, 4], keepdims=True)
                std = K.sqrt(K.var(var_x, axis=[2, 3, 4], keepdims=True) + self.epsilon)
                var_x = (var_x - mean) / std
    
    ln = fp.readline()
while ln:
    l = ln.rstrip('\r\n')
    result = delim.join(cutfunc(ln.rstrip('\r\n'), cutall, hmm))
    if PY2:
        result = result.encode(default_encoding)
    print(result)
    ln = fp.readline()
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
parser.add_option('-w', dest='withWeight')
opt, args = parser.parse_args()