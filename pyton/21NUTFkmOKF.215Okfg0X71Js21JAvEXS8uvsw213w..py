
        
        
def head(url, **kwargs):
    r'''Sends a HEAD request.
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.
    
        # 'I want us to put a big-ol' comment on top of it that
    # says that this behaviour is dumb but we need to preserve
    # it because people are relying on it.'
    #    - Lukasa
    #
    # These are here solely to maintain backwards compatibility
    # for things like ints. This will be removed in 3.0.0.
    if not isinstance(username, basestring):
        warnings.warn(
            'Non-string usernames will no longer be supported in Requests '
            '3.0.0. Please convert the object you've passed in ({0!r}) to '
            'a string or bytes object in the near future to avoid '
            'problems.'.format(username),
            category=DeprecationWarning,
        )
        username = str(username)
    
        def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = []
        self.test_suite = True
    
    
class TestIsValidCIDR:
    
    _key = 'landscape'
    
        parser = argparse.ArgumentParser(description='Download results from a Shippable run.')
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
        @g_connect
    def create_import_task(self, github_user, github_repo, reference=None, role_name=None):
        '''
        Post an import request
        '''
        url = '%s/imports/' % self.baseurl
        args = {
            'github_user': github_user,
            'github_repo': github_repo,
            'github_reference': reference if reference else ''
        }
        if role_name:
            args['alternate_role_name'] = role_name
        elif github_repo.startswith('ansible-role'):
            args['alternate_role_name'] = github_repo[len('ansible-role') + 1:]
        data = self.__call_galaxy(url, args=urlencode(args))
        if data.get('results', None):
            return data['results']
        return data
    
    import os
import re
    
        alpha = 0.01  # regularization parameter
    
                plt.text((i + 0.02) / len(algorithms), 0.98, alg,
                     transform=ax.transAxes,
                     ha='left',
                     va='top',
                     bbox=dict(facecolor='w', edgecolor='w', alpha=0.5))
    
        scikit_regressor_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
    # Define 'classifiers' to be used
classifiers = {
    'Empirical Covariance': EllipticEnvelope(support_fraction=1.,
                                             contamination=0.261),
    'Robust Covariance (Minimum Covariance Determinant)':
    EllipticEnvelope(contamination=0.261),
    'OCSVM': OneClassSVM(nu=0.261, gamma=0.05)}
colors = ['m', 'g', 'b']
legend1 = {}
legend2 = {}
    
    model = SpectralCoclustering(n_clusters=5, random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))