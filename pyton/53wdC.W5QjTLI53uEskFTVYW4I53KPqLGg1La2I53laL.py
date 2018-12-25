
        
        
def main():
    parser = optparse.OptionParser(usage='%prog CHANGELOG VERSION BUILDPATH')
    options, args = parser.parse_args()
    if len(args) != 3:
        parser.error('Expected a version and a build directory')
    
        if user_id is None:
        g.user = None
    else:
        g.user = get_db().execute(
            'SELECT * FROM user WHERE id = ?', (user_id,)
        ).fetchone()
    
            :param filename: the filename of the JSON file.  This can either be an
                         absolute filename or a filename relative to the
                         root path.
        :param silent: set to ``True`` if you want silent failure for missing
                       files.
    
    
@LocalProxy
def wsgi_errors_stream():
    '''Find the most appropriate error stream for the application. If a request
    is active, log to ``wsgi.errors``, otherwise use ``sys.stderr``.
    
    # Ignore noisy twisted deprecation warnings
import warnings
warnings.filterwarnings('ignore', category=DeprecationWarning, module='twisted')
del warnings
    
    def _print_header(settings, inproject):
    if inproject:
        print('Scrapy %s - project: %s\n' % (scrapy.__version__, \
            settings['BOT_NAME']))
    else:
        print('Scrapy %s - no active project\n' % scrapy.__version__)
    
    from six.moves.urllib.parse import urlencode
    
        def syntax(self):
        return '<spider>'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
    from scrapy.commands import ScrapyCommand
from scrapy.shell import Shell
from scrapy.http import Request
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
from scrapy.utils.url import guess_scheme
    
        if num in lowPrimes:
        return True
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
    try:
	raw_input		#Python 2
except NameError:
	raw_input = input	#Python 3
    
    
if __name__ == '__main__':
    whole_array = input('please input some numbers:')
    array = SubArray(whole_array)
    re = array.solve_sub_array()
    print(('the results is:', re))
    
    # Mock test below
if False: # change to true to run this test case.
    import sklearn.datasets as ds
    dataset = ds.load_iris()
    k = 3
    heterogeneity = []
    initial_centroids = get_initial_centroids(dataset['data'], k, seed=0)
    centroids, cluster_assignment = kmeans(dataset['data'], k, initial_centroids, maxiter=400,
                                        record_heterogeneity=heterogeneity, verbose=True)
    plot_heterogeneity(heterogeneity, k)

    
        Those are used for calculating differences between
    predicted values and actual values.
    
    print('writing anagrams to file...')
with open('anagrams.txt', 'w') as file:
    file.write('all_anagrams = ')
    file.write(pprint.pformat(all_anagrams))
    
    * @author chinmoy159
* @version 1.0 dated 10/08/2017
'''
    
        return float(matches) / len(possibleWords)