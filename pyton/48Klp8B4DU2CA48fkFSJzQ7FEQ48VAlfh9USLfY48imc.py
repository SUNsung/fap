
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def send_friend_request(self, friend_id):
        pass
    
    
@csrf_protect
def render_flatpage(request, f):
    '''
    Internal interface to the flat page view.
    '''
    # If registration is required for accessing this page, and the user isn't
    # logged in, redirect to the login page.
    if f.registration_required and not request.user.is_authenticated:
        from django.contrib.auth.views import redirect_to_login
        return redirect_to_login(request.path)
    if f.template_name:
        template = loader.select_template((f.template_name, DEFAULT_TEMPLATE))
    else:
        template = loader.get_template(DEFAULT_TEMPLATE)
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
    pages = {
    u'ar': u'http://ar.wikipedia.org/wiki/%D9%88%D9%8A%D9%83%D9%8A%D8%A8%D9%8A%D8%AF%D9%8A%D8%A7',
    u'de': u'http://de.wikipedia.org/wiki/Wikipedia',
    u'en': u'https://en.wikipedia.org/wiki/Wikipedia',
    u'es': u'http://es.wikipedia.org/wiki/Wikipedia',
    u'fr': u'http://fr.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'it': u'http://it.wikipedia.org/wiki/Wikipedia',
    u'ja': u'http://ja.wikipedia.org/wiki/Wikipedia',
    u'nl': u'http://nl.wikipedia.org/wiki/Wikipedia',
    u'pl': u'http://pl.wikipedia.org/wiki/Wikipedia',
    u'pt': u'http://pt.wikipedia.org/wiki/Wikip%C3%A9dia',
    u'ru': u'http://ru.wikipedia.org/wiki/%D0%92%D0%B8%D0%BA%D0%B8%D0%BF%D0%B5%D0%B4%D0%B8%D1%8F',
#    u'zh': u'http://zh.wikipedia.org/wiki/Wikipedia',
}
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
        def plot_kernels(self):
        self.ax.text(-50, -60, 'Linear: $u^T v$')
        self.ax.text(-20, -60, 'RBF: $\exp (-\gamma \| u-v \|^2)$')
        self.ax.text(10, -60, 'Poly: $(\gamma \, u^T v + r)^d$')
    
    plt.grid('off')
for x in [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]:
    plt.plot([0, x], [x, 0], 'k', alpha=0.2)
    plt.plot([0, 0 + (1-x)/2], [x, x + (1-x)/2], 'k', alpha=0.2)
    plt.plot([x, x + (1-x)/2], [0, 0 + (1-x)/2], 'k', alpha=0.2)
    
    Chen et al. proposed an improvement of the Ledoit-Wolf shrinkage
parameter, the OAS coefficient, whose convergence is significantly
better under the assumption that the data are Gaussian.
    
            try:
            result = self.fn(*self.args, **self.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            self.future.set_exception(e)
        else:
            self.future.set_result(result)
    
    def is_prime(n):
    if n % 2 == 0:
        return False
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def BuildServerConf():
  '''Builds a dictionary mapping YCM Vim user options to values. Option names
  don't have the 'ycm_' prefix.'''
  # We only evaluate the keys of the vim globals and not the whole dictionary
  # to avoid unicode issues.
  # See https://github.com/Valloric/YouCompleteMe/pull/2151 for details.
  keys = vimsupport.GetVimGlobalsKeys()
  server_conf = {}
  for key in keys:
    if not key.startswith( YCM_VAR_PREFIX ):
      continue
    new_key = key[ len( YCM_VAR_PREFIX ): ]
    new_value = vimsupport.VimExpressionToPythonType( 'g:' + key )
    server_conf[ new_key ] = new_value
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
        fftv.publish('cartoon')
    fftv.publish('music')
    fftv.publish('ads')
    fftv.publish('movie')
    fftv.publish('cartoon')
    fftv.publish('cartoon')
    fftv.publish('movie')
    fftv.publish('blank')
    
        def setUp(self):
        self.e, self.g = get_localizer(language='English'), \
                         get_localizer(language='Greek')
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' %
              (self.stations[self.pos], self.name))