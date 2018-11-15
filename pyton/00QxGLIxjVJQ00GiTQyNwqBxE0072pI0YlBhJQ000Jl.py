
        
                if not username:
            error = 'Username is required.'
        elif not password:
            error = 'Password is required.'
        elif db.execute(
            'SELECT id FROM user WHERE username = ?', (username,)
        ).fetchone() is not None:
            error = 'User {0} is already registered.'.format(username)
    
    
@pytest.fixture
def auth(client):
    return AuthActions(client)

    
            .. versionadded:: 0.11
        '''
        mappings = []
        if len(mapping) == 1:
            if hasattr(mapping[0], 'items'):
                mappings.append(mapping[0].items())
            else:
                mappings.append(mapping[0])
        elif len(mapping) > 1:
            raise TypeError(
                'expected at most 1 positional argument, got %d' % len(mapping)
            )
        mappings.append(kwargs.items())
        for mapping in mappings:
            for (key, value) in mapping:
                if key.isupper():
                    self[key] = value
        return True
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
                self.tags[key] = tag
    
    
def rev_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'http://hg.scrapy.org/scrapy/changeset/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'r' + text, refuri=ref, **options)
    return [node], []

    
    from scrapy.commands import ScrapyCommand
from scrapy.contracts import ContractsManager
from scrapy.utils.misc import load_object
from scrapy.utils.conf import build_component_list
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def _err(self, msg):
        sys.stderr.write(msg + os.linesep)
        self.exitcode = 1
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def _build_response(self, result, request, protocol):
        self.result = result
        respcls = responsetypes.from_args(url=request.url)
        protocol.close()
        body = protocol.filename or protocol.body.read()
        headers = {'local filename': protocol.filename or '', 'size': protocol.size}
        return respcls(url=request.url, status=200, body=to_bytes(body), headers=headers)
    
        # Test an invalid call (bpo-34126)
    def test_unbound_method_invalid_args(self):
        def f(p):
            dict.get(print, 42)
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident)])
    
    
def isabs(s):
    '''Return true if a path is absolute.
    On the Mac, relative paths begin with a colon,
    but as a special case, paths with no colons at all are also relative.
    Anything else is absolute (the string up to the first colon is the
    volume name).'''
    
    
# Split a path in root and extension.
# The extension is everything starting at the last dot in the last
# pathname component; the root is everything before that.
# It is always true that root + ext == p.
    
        @unittest.skipIf(interpreter_requires_environment(),
                     'Cannot run -I tests when PYTHON env vars are required.')
    def test_isolatedmode(self):
        self.verify_valid_flag('-I')
        self.verify_valid_flag('-IEs')
        rc, out, err = assert_python_ok('-I', '-c',
            'from sys import flags as f; '
            'print(f.no_user_site, f.ignore_environment, f.isolated)',
            # dummyvar to prevent extraneous -E
            dummyvar='')
        self.assertEqual(out.strip(), b'1 1 1')
        with support.temp_cwd() as tmpdir:
            fake = os.path.join(tmpdir, 'uuid.py')
            main = os.path.join(tmpdir, 'main.py')
            with open(fake, 'w') as f:
                f.write('raise RuntimeError('isolated mode test')\n')
            with open(main, 'w') as f:
                f.write('import uuid\n')
                f.write('print('ok')\n')
            self.assertRaises(subprocess.CalledProcessError,
                              subprocess.check_output,
                              [sys.executable, main], cwd=tmpdir,
                              stderr=subprocess.DEVNULL)
            out = subprocess.check_output([sys.executable, '-I', main],
                                          cwd=tmpdir)
            self.assertEqual(out.strip(), b'ok')
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        'Write your forwards methods here.'
        db.commit_transaction()
    
        complete_apps = ['sentry']

    
            # Deleting model 'ReleaseHeadCommit'
        db.delete_table('sentry_releaseheadcommit')
    
            # Adding field 'ReleaseFile.dist'
        db.add_column(
            'sentry_releasefile',
            'dist',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Distribution'], null=True
            ),
            keep_default=False
        )
    
    DEFAULT_TIMEOUT = 3
    
    The problem is  :
Given an ARRAY, to find the longest and increasing sub ARRAY in that given ARRAY and return it.
Example: [10, 22, 9, 33, 21, 50, 41, 60, 80] as input will return [10, 22, 33, 41, 60, 80] as output
'''
from __future__ import print_function
    
    
class SubArray:
    
    def compute_heterogeneity(data, k, centroids, cluster_assignment):
    
    heterogeneity = 0.0
    for i in range(k):
        
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i, :]
        
        if member_data_points.shape[0] > 0: # check if i-th cluster is non-empty
            # Compute distances from centroid to data points (RHS only)
            distances = pairwise_distances(member_data_points, [centroids[i]], metric='euclidean')
            squared_distances = distances**2
            heterogeneity += np.sum(squared_distances)
        
    return heterogeneity