
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
    from .nuevo import NuevoBaseIE
    
    
    {        webpage = self._download_webpage(url, text_id)
        sohu_video_info_str = self._search_regex(
            r'var\s+sohuVideoInfo\s*=\s*({[^}]+});', webpage, 'Sohu video info', default=None)
        if sohu_video_info_str:
            sohu_video_info = self._parse_json(
                sohu_video_info_str, text_id, transform_source=js_to_json)
            return self.url_result(sohu_video_info['url'], 'Sohu')
    
        Reference: Armin Ronacher, 'Flask for Fun and for Profit' PyBay 2016.
    '''
    for name in find_modules('flaskr.blueprints'):
        mod = import_string(name)
        if hasattr(mod, 'bp'):
            app.register_blueprint(mod.bp)
    return None
    
        result[app_name] = {}
    result[app_name]['hosts'] = []
    result[app_name]['hosts'].append(host)
    result[app_name]['vars'] = {}
    result[app_name]['vars']['ansible_ssh_user'] = user
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
        data = dict(
        globalEnv=['%s=%s' % (kp[0], kp[1]) for kp in args.env or []]
    )
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
            data = self.__call_galaxy(search_url)
        return data
    
            # no location in URL
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies/mytargetproxy/setUrlMap'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
        self.assertEquals('mytargetproxy', actual['entity_name'])
        self.assertEquals('setUrlMap', actual['method_name'])
    
        plt.figure('scikit-learn GLM benchmark results')
    plt.xlabel('Dimensions')
    plt.ylabel('Time (s)')
    plt.plot(dimensions, time_ridge, color='r')
    plt.plot(dimensions, time_ols, color='g')
    plt.plot(dimensions, time_lasso, color='b')
    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        rpca = RandomizedPCA(n_components=n_components, random_state=1999)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca),
                                                               ('rpca', rpca)]}
    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
    
if not os.path.exists(DATA_FOLDER):
    
        input_file = open(os.path.join(exercise_dir, f))
    output_file = open(os.path.join(skeleton_dir, f), 'w')
    
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
    
    
PENDING_FUTURE = create_future(state=PENDING)
RUNNING_FUTURE = create_future(state=RUNNING)
CANCELLED_FUTURE = create_future(state=CANCELLED)
CANCELLED_AND_NOTIFIED_FUTURE = create_future(state=CANCELLED_AND_NOTIFIED)
EXCEPTION_FUTURE = create_future(state=FINISHED, exception=IOError())
SUCCESSFUL_FUTURE = create_future(state=FINISHED, result=42)
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: in this class's implementation, we ask vimsupport for
    #  the current filetypes and delegate automatically; it is probably,
    #  more efficient, however, to call SubsetForTypes() and reuse
    #  the returned DiagnosticFilter if it will be checked repeatedly.
    filetypes = vimsupport.CurrentFiletypes()
    return self.SubsetForTypes( filetypes ).IsAllowed( diagnostic )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()