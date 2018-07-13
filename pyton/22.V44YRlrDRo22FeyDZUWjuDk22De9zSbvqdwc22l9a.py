
        
        
import errno
import io
import json
import re
import subprocess
    
    
if __name__ == '__main__':
    unittest.main()

    
        _ALL_CLASSES = [
        klass
        for name, klass in globals().items()
        if name.endswith('IE') and name != 'GenericIE'
    ]
    _ALL_CLASSES.append(GenericIE)
    
    from sklearn.cluster import AgglomerativeClustering
    
        ###########################################################################
    # Numpy permutation based
    sampling_algorithm['numpy-permutation'] = \
        lambda n_population, n_sample: \
            np.random.permutation(n_population)[:n_sample]
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
    for lang, page in pages.items():
    
    
# TASK: Build a vectorizer that splits strings into sequence of 1 to 3
# characters instead of word tokens
    
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
    
    print('consensus score: {:.3f}'.format(score))
    
    plt.title('Clustering measures for 2 random uniform labelings\n'
          'with equal number of clusters')
plt.xlabel('Number of clusters (Number of samples is fixed to %d)' % n_samples)
plt.ylabel('Score value')
plt.legend(plots, names)
plt.ylim(ymin=-0.05, ymax=1.05)
    
        def score(self):
        min_over = sys.MAXSIZE
        max_under = -sys.MAXSIZE
        for score in self.possible_scores():
            if self.BLACKJACK < score < min_over:
                min_over = score
            elif max_under < score <= self.BLACKJACK:
                max_under = score
        return max_under if max_under != -sys.MAXSIZE else min_over
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
    from mrjob.job import MRJob
    
        def __init__(self):
        self.head = None
        self.tail = None
    
    
class Transaction(object):
    
    
# -- Options for HTML output ----------------------------------------------
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
            :param list domains: list of ssl_vhosts (as strings)
        :param str enhancement: name of enhancement, e.g. ensure-http-header
        :param str options: options to enhancement, e.g. Strict-Transport-Security
    
    
class MissingNonceTest(unittest.TestCase):
    '''Tests for acme.errors.MissingNonce.'''
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
}

    
    # The master toctree document.
master_doc = 'index'
    
        packages = find_packages('src'),
    package_dir = {'' : 'src'},
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
        >>> mode(['red', 'blue', 'blue', 'red', 'green', 'red', 'red'])
    'red'
    
    C = import_fresh_module('decimal', fresh=['_decimal'])
P = import_fresh_module('decimal', blocked=['_decimal'])
    
    The ID is a 4-byte string which identifies the type of chunk.
    
                lines = []
            if file is not None:
                # XXX lines = None instead?
                terminators = (b'.' + _CRLF, b'.\n')
                while 1:
                    line = self._getline(False)
                    if line in terminators:
                        break
                    if line.startswith(b'..'):
                        line = line[1:]
                    file.write(line)
            else:
                terminator = b'.'
                while 1:
                    line = self._getline()
                    if line == terminator:
                        break
                    if line.startswith(b'..'):
                        line = line[1:]
                    lines.append(line)
        finally:
            # If this method created the file, then it must close it
            if openedFile:
                openedFile.close()
    
        def test_varargs17_kw(self):
        msg = r'^print\(\) takes at most 4 keyword arguments \(5 given\)$'
        self.assertRaisesRegex(TypeError, msg,
                               print, 0, sep=1, end=2, file=3, flush=4, foo=5)
    
        def cancel(self):
        '''Stop the timer if it hasn't finished yet.'''
        self.finished.set()
    
        def test_badfuture10(self):
        with self.assertRaises(SyntaxError) as cm:
            from test import badsyntax_future10
        self.check_syntax_error(cm.exception, 'badsyntax_future10', 3, 0)
    
            class_cell = namespace_snapshot['__classcell__']
        method_closure = WithClassRef.f.__closure__
        self.assertEqual(len(method_closure), 1)
        self.assertIs(class_cell, method_closure[0])
        # Ensure the cell reference *doesn't* get turned into an attribute
        with self.assertRaises(AttributeError):
            WithClassRef.__classcell__
    
        def test_infile_outfile(self):
        infile = self._create_infile()
        outfile = support.TESTFN + '.out'
        rc, out, err = assert_python_ok('-m', 'json.tool', infile, outfile)
        self.addCleanup(os.remove, outfile)
        with open(outfile, 'r') as fp:
            self.assertEqual(fp.read(), self.expect)
        self.assertEqual(rc, 0)
        self.assertEqual(out, b'')
        self.assertEqual(err, b'')
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 
    
    
def run(args):
    '''Handle ensure config commandline script.'''
    parser = argparse.ArgumentParser(
        description=('Ensure a Home Assistant config exists, '
                     'creates one if necessary.'))
    parser.add_argument(
        '-c', '--config',
        metavar='path_to_config_dir',
        default=config_util.get_default_config_dir(),
        help='Directory that contains the Home Assistant configuration')
    parser.add_argument(
        '--script',
        choices=['ensure_config'])