
        
            Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
    
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
            # indicator if the context was preserved.  Next time another context
        # is pushed the preserved context is popped.
        self.preserved = False
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
                try:
                environ = builder.get_environ()
            finally:
                builder.close()
    
    
class BtreeGinExtension(CreateExtension):
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
        print()

    
        tstart = datetime.now()
    isotonic_regression(Y)
    delta = datetime.now() - tstart
    return total_seconds(delta)
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    
if __name__ == '__main__':
    ###########################################################################
    # Option parser
    ###########################################################################
    op = optparse.OptionParser()
    op.add_option('--n-times',
                  dest='n_times', default=5, type=int,
                  help='Benchmark results are average over n_times experiments')
    
        ###########################################################################
    # Numpy permutation based
    sampling_algorithm['numpy-permutation'] = \
        lambda n_population, n_sample: \
            np.random.permutation(n_population)[:n_sample]
    
    
if not os.path.exists(html_folder):
    os.makedirs(html_folder)
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')