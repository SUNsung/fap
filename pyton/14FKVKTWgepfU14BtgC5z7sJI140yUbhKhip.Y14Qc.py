
        
        
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
filenames = list(rst_filenames())
assert filenames
    
        Pre-process args, handle some special types of invocations,
    and run the main program with error handling.
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        requests_session.cookies = session.cookies
    
        for node in data:
        for value in node['tags']:
            groups[value].append(node['hostname'])
    
        result[app_name] = {}
    result[app_name]['hosts'] = []
    result[app_name]['hosts'].append(host)
    result[app_name]['vars'] = {}
    result[app_name]['vars']['ansible_ssh_user'] = user
    
    # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
    ipv4_component = r'''
    (?:
        [01]?[0-9]{{1,2}}|              # 0..199
        2[0-4][0-9]|                    # 200..249
        25[0-5]|                        # 250..255
        {range}                         # or a numeric range
    )
'''.format(range=numeric_range)
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    
def get_group_vars(groups):
    
        terminal_stderr_re = [
        re.compile(br'Error:'),
    ]
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = RandomizedPCA(n_components=n_components, random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
        op.add_option('--eps',
                  dest='eps', default=0.5, type=float,
                  help='See the documentation of the underlying transformers.')
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    
if not os.path.exists(html_folder):
    os.makedirs(html_folder)
    
    # Print the classification report
print(metrics.classification_report(y_test, y_predicted,
                                    target_names=dataset.target_names))
    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
    fit_data = data[np.argsort(model.row_labels_)]
fit_data = fit_data[:, np.argsort(model.column_labels_)]
    
            ax1.plot(mean_predicted_value, fraction_of_positives, 's-',
                 label='%s (%1.3f)' % (name, clf_score))
    
    # Plot boundaries of unit simplex
plt.plot([0.0, 1.0, 0.0, 0.0], [0.0, 0.0, 1.0, 0.0], 'k', label='Simplex')
    
    for index, (name, classifier) in enumerate(classifiers.items()):
    classifier.fit(X, y)
    
        This returns an array of input data with shape `(n_samples, n_features)`
    and an array of `n_samples` target labels.
    
    from ..common import *
    
    
download = huaban_download
download_playlist = playlist_not_supported('huaban')

    
    #----------------------------------------------------------------------
def sina_xml_to_url_list(xml_data):
    '''str->list
    Convert XML to URL List.
    From Biligrab.
    '''
    rawurl = []
    dom = parseString(xml_data)
    for node in dom.getElementsByTagName('durl'):
        url = node.getElementsByTagName('url')[0]
        rawurl.append(url.childNodes[0].data)
    return rawurl
    
        def extract(self, **kwargs):
        for i in self.streams:
            # for each available stream
            s = self.streams[i]
            # fill in 'container' field and 'size' field (optional)
            _, s['container'], s['size'] = url_info(s['url'])
            # 'src' field is a list of processed urls for direct downloading
            # usually derived from 'url'
            s['src'] = [s['url']]
    
        #title
    title = ''
    profile_api = 'https://www.showroom-live.com/api/room/profile?room_id={room_id}'.format(room_id = room_id)
    html = loads(get_content(profile_api))
    try:
        title = html['main_name']
    except KeyError:
        title = 'Showroom_{room_id}'.format(room_id = room_id)
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
            AJAX login handler, used by both login and register to set the
        user cookie and send back a redirect.
        '''
        c.user = user
        c.user_is_loggedin = True
        self.login(user, rem=rem)
    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
    from pylons import request
from pylons import app_globals as g
from reddit_base import RedditController
from r2.lib.pages import AdminPage, AdminAwards
from r2.lib.pages import AdminAwardGive, AdminAwardWinners
from r2.lib.validator import *
    
    from reddit_base import RedditController, UnloggedUser
from r2.lib.pages import (ButtonLite, ButtonDemoPanel, WidgetDemoPanel,
                          BoringPage)
from r2.lib.pages.things import wrap_links
from r2.models import *
from r2.lib.validator import *
from pylons import request, response
from pylons import tmpl_context as c
from pylons.i18n import _
    
            c.allow_framing = True