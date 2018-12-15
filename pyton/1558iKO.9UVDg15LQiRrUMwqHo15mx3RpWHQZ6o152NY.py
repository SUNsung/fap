
        
        
class Conversion(object):
    
    
def generate_pathological_dataset(size):
    # Triggers O(n^2) complexity on the original implementation.
    return np.r_[np.arange(size),
                 np.arange(-(size - 1), size),
                 np.arange(-(size - 1), 1)]
    
        #------------------------------------------------------------
    # varying k
    k_results_build = dict([(alg, np.zeros(len(krange)))
                            for alg in algorithms])
    k_results_query = dict([(alg, np.zeros(len(krange)))
                            for alg in algorithms])
    
    Compares SGD regression against coordinate descent and Ridge
on synthetic data.
'''
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
    import os
import tarfile
from contextlib import closing
    
            idx = 0
        while True:
            url = urls[idx % len(urls)]
            yield Request(url, dont_filter=True)
            idx += 1
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-c', dest='code',
            help='evaluate the code in the shell, print the result and exit')
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
      def Extension(self):
    '''File extension - text following the final period, includes that period.'''
    return self.Split()[2]
    
        lowPrimes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
                 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127,
                 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191,
                 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
                 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331,
                 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401,
                 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467,
                 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563,
                 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631,
                 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709,
                 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797,
                 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877,
                 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967,
                 971, 977, 983, 991, 997]
    
    Usage:
  1. define 'k' value, 'X' features array and 'hetrogeneity' empty list
  
  2. create initial_centroids,
        initial_centroids = get_initial_centroids(
            X, 
            k, 
            seed=0 # seed value for initial centroid generation, None for randomness(default=None)
            )
    
    
import doctest
doctest.testmod()

    
    *Where can the pattern be used practically?
The Factory Method can be seen in the popular web framework Django:
http://django.wikispaces.asu.edu/*NEW*+Django+Design+Patterns For
example, in a contact form of a web page, the subject and the message
fields are created using the same form factory (CharField()), even
though they have different implementations according to their
purposes.
    
    
if __name__ == '__main__':
    import doctest
    
        def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    from __future__ import print_function
    
    
def reverse_item(item):
    print(item[::-1])
    
        def visit_B(self, node, *args, **kwargs):
        print('visit_B ' + node.__class__.__name__)
    
    *What does this example do?
When the number of prototypes in an application can vary, it can be
useful to keep a Dispatcher (aka, Registry or Manager). This allows
clients to query the Dispatcher for a prototype before cloning a new
instance.