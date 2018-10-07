
        
            if args.show_plot:
        plt.plot(*zip(*timings))
        plt.title('Average time taken running isotonic regression')
        plt.xlabel('Number of observations')
        plt.ylabel('Time (s)')
        plt.axis('tight')
        plt.loglog()
        plt.show()

    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
    '''
Benchmark for SGD regression
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []
    
    for lang, page in pages.items():
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
            if args:
            self.url = args[0]
    
    class BokeCC(VideoExtractor):
    name = 'BokeCC'
    
    __all__ = ['dilidili_download']
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
            #Required string to create directory title pages
        dir_title = '<h2 class=titledir>' + operating_sys.capitalize() + '</h2></body></html>'
    
    from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
                affected_projects = set()
            for release in releases:
                affected_projects.update(
                    [p for p in release.projects.values_list('slug', flat=True)]
                )
            has_prod = False
            has_staging = False
            has_dev = False
            for p in affected_projects:
                if 'prod' in p:
                    has_prod = True
                elif 'stag' in p or 'stg' in p:
                    has_staging = True
                elif 'dev' in p:
                    has_dev = True
            # assume projects are split by environment if there
            # are at least prod/staging or prod/dev, etc
            projects_split_by_env = len([x for x in [has_prod, has_dev, has_staging] if x]) >= 2
    
            dupe_release_envs = orm.ReleaseEnvironment.objects.values(
            'release_id', 'organization_id', 'environment_id'
        ).annotate(recount=models.Count('id')).filter(recount__gt=1)
    
            # Adding field 'ApiKey.scope_list'
        db.add_column(
            'sentry_apikey',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
        def _forwards(self, orm):
        'Write your forwards methods here.'
    
            # Deleting model 'Distribution'
        db.delete_table('sentry_distribution')
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'UserOption.organization'
        db.add_column(
            'sentry_useroption',
            'organization',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Organization'], null=True
            ),
            keep_default=False
        )