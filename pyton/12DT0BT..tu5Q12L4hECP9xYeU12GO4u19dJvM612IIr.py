
        
            def test_proxy_http(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
    
class CamWithHerIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?camwithher\.tv/view_video\.php\?.*\bviewkey=(?P<id>\w+)'
    
    else:
    text_type = unicode
    string_types = (str, unicode)
    integer_types = (int, long)
    
            .. versionadded:: 0.7
           `silent` parameter.
        '''
        filename = os.path.join(self.root_path, filename)
        d = types.ModuleType('config')
        d.__file__ = filename
        try:
            with open(filename, mode='rb') as config_file:
                exec(compile(config_file.read(), filename, 'exec'), d.__dict__)
        except IOError as e:
            if silent and e.errno in (
                errno.ENOENT, errno.EISDIR, errno.ENOTDIR
            ):
                return False
            e.strerror = 'Unable to load configuration file (%s)' % e.strerror
            raise
        self.from_object(d)
        return True
    
    
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
    # The namespace for code signals.  If you are not Flask code, do
# not put signals in here.  Create your own namespace instead.
_signals = Namespace()
    
            class MyView(View):
            methods = ['GET']
    
        @click.group(cls=AppGroup)
    def cli():
        pass
    
    
def test_uninstalled_package_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.mkdir('config_package_app')
    init = app.join('__init__.py')
    init.write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_package_app')
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
    plt.grid('off')
for x in [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]:
    plt.plot([0, x], [x, 0], 'k', alpha=0.2)
    plt.plot([0, 0 + (1-x)/2], [x, x + (1-x)/2], 'k', alpha=0.2)
    plt.plot([x, x + (1-x)/2], [0, 0 + (1-x)/2], 'k', alpha=0.2)
    
    plt.title('Clustering measures for 2 random uniform labelings\n'
          'with equal number of clusters')
plt.xlabel('Number of clusters (Number of samples is fixed to %d)' % n_samples)
plt.ylabel('Score value')
plt.legend(plots, names)
plt.ylim(ymin=-0.05, ymax=1.05)
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
        def __init__(self):
        self.settings = None  # set in scrapy.cmdline
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    from ..common import *
    
    site_info = 'kuwo.cn'
download = kuwo_download
# download_playlist = playlist_not_supported('kugou')
# download_playlist=playlist_not_supported('kuwo')
download_playlist=kuwo_playlist_download

    
    from ..common import *
    
    from tornado import autoreload
    
    try:
    xrange
except NameError:
    xrange = range
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
    
def main():
    base_cmd = [
        sys.executable, '-m', 'timeit', '-s',
        'from stack_context_benchmark import StackBenchmark, ExceptionBenchmark']
    cmds = [
        'StackBenchmark().enter_exit(50)',
        'StackBenchmark().call_wrapped(50)',
        'StackBenchmark().enter_exit(500)',
        'StackBenchmark().call_wrapped(500)',
    
    
# A thread pool to be used for password hashing with bcrypt.
executor = concurrent.futures.ThreadPoolExecutor(2)
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
    class TimeDisplay(object):
    
    
def coroutine(func):
    def start(*args, **kwargs):
        cr = func(*args, **kwargs)
        next(cr)
        return cr
    return start