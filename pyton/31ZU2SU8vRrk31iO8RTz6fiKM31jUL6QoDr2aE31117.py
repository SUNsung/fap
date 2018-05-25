
        
        First, we fix a training set, increase the number of
samples to classify and plot number of classified samples as a
function of time.
    
        package is the name of the root module of the package
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
        input_file = open(os.path.join(exercise_dir, f))
    output_file = open(os.path.join(skeleton_dir, f), 'w')
    
        def plot_decision_surface(self, surface, type):
        X1, X2, Z = surface
        if type == 0:
            levels = [-1.0, 0.0, 1.0]
            linestyles = ['dashed', 'solid', 'dashed']
            colors = 'k'
            self.contours.append(self.ax.contour(X1, X2, Z, levels,
                                                 colors=colors,
                                                 linestyles=linestyles))
        elif type == 1:
            self.contours.append(self.ax.contourf(X1, X2, Z, 10,
                                                  cmap=matplotlib.cm.bone,
                                                  origin='lower', alpha=0.85))
            self.contours.append(self.ax.contour(X1, X2, Z, [0.0], colors='k',
                                                 linestyles=['solid']))
        else:
            raise ValueError('surface type unknown')
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    
def uniform_labelings_scores(score_func, n_samples, n_clusters_range,
                             fixed_n_classes=None, n_runs=5, seed=42):
    '''Compute score for 2 random uniform cluster labelings.
    
    
# Plot the distances
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    avg_dist = np.zeros((n_clusters, n_clusters))
    plt.figure(figsize=(5, 4.5))
    for i in range(n_clusters):
        for j in range(n_clusters):
            avg_dist[i, j] = pairwise_distances(X[y == i], X[y == j],
                                                metric=metric).mean()
    avg_dist /= avg_dist.max()
    for i in range(n_clusters):
        for j in range(n_clusters):
            plt.text(i, j, '%5.3f' % avg_dist[i, j],
                     verticalalignment='center',
                     horizontalalignment='center')
    
        return (major, minor, patch, beta)
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    
    def error(self, nvae):
        '''A hook for debugging interface'''
        pass
    
    In Blackboard pattern several specialised sub-systems (knowledge sources)
assemble their knowledge to build a possibly partial or approximate solution.
In this way, the sub-systems work together to solve the problem,
where the solution is the sum of its parts.
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def test_cat_eng_localization(self):
        self.assertEqual(self.e.get('cat'), 'cat')
    
    class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class Transactional(object):
    '''Adds transactional semantics to methods. Methods decorated  with