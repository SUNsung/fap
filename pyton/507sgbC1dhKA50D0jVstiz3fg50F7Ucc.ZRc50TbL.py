
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
        def __init__(self, name, import_name, static_folder=None,
                 static_url_path=None, template_folder=None,
                 url_prefix=None, subdomain=None, url_defaults=None,
                 root_path=None):
        _PackageBoundObject.__init__(self, import_name, template_folder,
                                     root_path=root_path)
        self.name = name
        self.url_prefix = url_prefix
        self.subdomain = subdomain
        self.static_folder = static_folder
        self.static_url_path = static_url_path
        self.deferred_functions = []
        if url_defaults is None:
            url_defaults = {}
        self.url_values_defaults = url_defaults
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
            import subprocess
        subprocess.check_call(
            [sys.executable, 'setup.py', 'bdist_egg'],
            cwd=str(modules_tmpdir)
        )
        egg_path, = modules_tmpdir.join('dist/').listdir()
        monkeypatch.syspath_prepend(str(egg_path))
        return egg_path
    
    def _get_commands_from_entry_points(inproject, group='scrapy.commands'):
    cmds = {}
    for entry_point in pkg_resources.iter_entry_points(group):
        obj = entry_point.load()
        if inspect.isclass(obj):
            cmds[entry_point.name] = obj()
        else:
            raise Exception('Invalid entry point %s' % entry_point.name)
    return cmds
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
    from scrapy import twisted_version
    
        def _handle_downloader_output(self, response, request, spider):
        assert isinstance(response, (Request, Response, Failure)), response
        # downloader middleware can return requests (for example, redirects)
        if isinstance(response, Request):
            self.crawl(response, spider)
            return
        # response is a Response or Failure
        d = self.scraper.enqueue_scrape(response, request, spider)
        d.addErrback(lambda f: logger.error('Error while enqueuing downloader output',
                                            exc_info=failure_to_exc_info(f),
                                            extra={'spider': spider}))
        return d
    
        def _copy_file_without_generated_symbols(self, source_file, dest_file):
        with open(source_file) as fp:
            lines = fp.readlines()
        with open(dest_file, 'w') as fp:
            fp.writelines(lines[:lines.index('#--start constants--\n') + 1])
            fp.writelines(lines[lines.index('#--end constants--\n'):])
    
                env = os.environ.copy()
            # C locale gives ASCII locale encoding, but Python uses UTF-8
            # to parse the command line arguments on Mac OS X and Android.
            env['LC_ALL'] = 'C'
    
        def testSeekBackwardsFromEnd(self):
        self.createTempFile()
        with BZ2File(self.filename) as bz2f:
            bz2f.seek(-150, 2)
            self.assertEqual(bz2f.read(), self.TEXT[len(self.TEXT)-150:])
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
        if num in lowPrimes:
        return True
    
        print('Generating e that is relatively prime to (p - 1) * (q - 1)...')
    while True:
        e = random.randrange(2 ** (keySize - 1), 2 ** (keySize))
        if cryptoMath.gcd(e, (p - 1) * (q - 1)) == 1:
            break
    
        def insert_data(self, data):
        key = self.hash_function(data)
    
    	return memo[m][m-1]
    
        def solve_sub_array(self):
        rear = [int(self.array[0])]*len(self.array)
        sum_value = [int(self.array[0])]*len(self.array)
        for i in range(1, len(self.array)):
            sum_value[i] = max(int(self.array[i]) + sum_value[i-1], int(self.array[i]))
            rear[i] = max(sum_value[i], rear[i-1])
        return rear[len(self.array)-1]
    
    def kmeans(data, k, initial_centroids, maxiter=500, record_heterogeneity=None, verbose=False):
    '''This function runs k-means on given data and initial set of centroids.
       maxiter: maximum number of iterations to run.(default=500)
       record_heterogeneity: (optional) a list, to store the history of heterogeneity as function of iterations
                             if None, do not store the history.
       verbose: if True, print how many data points changed their cluster labels in each iteration'''
    centroids = initial_centroids[:]
    prev_cluster_assignment = None
    
    for itr in range(maxiter):        
        if verbose:
            print(itr, end='')
        
        # 1. Make cluster assignments using nearest centroids
        cluster_assignment = assign_clusters(data,centroids)
            
        # 2. Compute a new centroid for each of the k clusters, averaging all data points assigned to that cluster.
        centroids = revise_centroids(data,k, cluster_assignment)
            
        # Check for convergence: if none of the assignments changed, stop
        if prev_cluster_assignment is not None and \
          (prev_cluster_assignment==cluster_assignment).all():
            break
        
        # Print number of new assignments 
        if prev_cluster_assignment is not None:
            num_changed = np.sum(prev_cluster_assignment!=cluster_assignment)
            if verbose:
                print('    {0:5d} elements changed their cluster assignment.'.format(num_changed))   
        
        # Record heterogeneity convergence metric
        if record_heterogeneity is not None:
            # YOUR CODE HERE
            score = compute_heterogeneity(data,k,centroids,cluster_assignment)
            record_heterogeneity.append(score)
        
        prev_cluster_assignment = cluster_assignment[:]
        
    return centroids, cluster_assignment
    
        return res
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
            return [device.mac for device in self.last_results]
    
    import requests
import voluptuous as vol
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_TOKEN): cv.string,
    vol.Required(CONF_ROOMID): cv.string,
})
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import (CONF_API_KEY, CONF_RECIPIENT)
from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
    
        return AutomateNotificationService(secret, recipient, device)
    
    REQUIREMENTS = ['messagebird==1.2.0']
    
        def _forwards(self, orm):
        'Write your forwards methods here.'
        for release in RangeQuerySetWrapperWithProgressBar(
            orm.Release.objects.exclude(new_groups=0)
        ):
            projects = list(release.projects.values_list('id', flat=True))
            if len(projects) > 1:
                # do something fancy where we look at Group.first_release
                # to calculate ReleaseProject.new_group
                for p_id in projects:
                    new_groups = orm.Group.objects.filter(
                        first_release=release, project_id=p_id
                    ).count()
                    if not new_groups:
                        continue
                    orm.ReleaseProject.objects.filter(
                        release_id=release.id, project_id=p_id
                    ).update(new_groups=new_groups)
            elif len(projects) == 1:
                # copy Release.new_groups to ReleaseProject.new_group
                orm.ReleaseProject.objects.filter(
                    release_id=release.id, project_id=projects[0]
                ).update(new_groups=release.new_groups)
    
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
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
    
        def backwards(self, orm):
        pass
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
            # Adding field 'ReleaseFile.dist'
        db.add_column(
            'sentry_releasefile',
            'dist',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Distribution'], null=True
            ),
            keep_default=False
        )