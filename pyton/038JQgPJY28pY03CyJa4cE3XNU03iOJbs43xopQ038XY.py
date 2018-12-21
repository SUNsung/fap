
        
        from youtube_dl.utils import intlist_to_bytes
from youtube_dl.aes import aes_encrypt, key_expansion
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    print('WARNING: Lazy loading extractors is an experimental feature that may not always work', file=sys.stderr)
    
    import io
import sys
import re
    
        with open(ZSH_COMPLETION_FILE, 'w') as f:
        f.write(template)
    
        def test_tumblr(self):
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430/orphan-black-dvd-extra-behind-the-scenes', ['Tumblr'])
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430', ['Tumblr'])
    
    
@functools.lru_cache()
def get_citext_oids(connection_alias):
    '''Return citext array OIDs.'''
    with connections[connection_alias].cursor() as cursor:
        cursor.execute('SELECT typarray FROM pg_type WHERE typname = 'citext'')
        return tuple(row[0] for row in cursor)
    
        def __init__(self, keys, strict=False, messages=None):
        self.keys = set(keys)
        self.strict = strict
        if messages is not None:
            self.messages = {**self.messages, **messages}
    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
        def save(self, must_create=False):
        '''
        To save, get the session key as a securely signed string and then set
        the modified flag so that the cookie is set on the client for the
        current request.
        '''
        self._session_key = self._get_session_key()
        self.modified = True
    
    
def copy(module, connection, name, target, bucket):
    ''' Copy an Elasticache backup. '''
    try:
        response = connection.copy_snapshot(SourceSnapshotName=name,
                                            TargetSnapshotName=target,
                                            TargetBucket=bucket)
        changed = True
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to copy the snapshot.', exception=traceback.format_exc())
    return response, changed
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        state=dict(required=True, choices=['present', 'absent']),
        name=dict(required=True),
        description=dict(required=False),
        subnets=dict(required=False, type='list'),
    )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
            if module.params.get('next_marker'):
            params['Marker'] = module.params.get('next_marker')
        try:
            lambda_facts.update(aliases=client.list_aliases(FunctionName=function_name, **params)['Aliases'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(aliases=[])
            else:
                module.fail_json_aws(e, msg='Trying to get aliases')
    else:
        module.fail_json(msg='Parameter function_name required for query=aliases.')
    
        module : AnsibleModule object
    oneandone_conn: authenticated oneandone object
    '''
    try:
        name = module.params.get('name')
        description = module.params.get('description')
        email = module.params.get('email')
        agent = module.params.get('agent')
        thresholds = module.params.get('thresholds')
        ports = module.params.get('ports')
        processes = module.params.get('processes')
        wait = module.params.get('wait')
        wait_timeout = module.params.get('wait_timeout')
        wait_interval = module.params.get('wait_interval')
    
    
def main():
    argument_spec = vca_argument_spec()
    argument_spec.update(
        dict(
            fw_rules=dict(required=True, type='list'),
            gateway_name=dict(default='gateway'),
            state=dict(default='present', choices=['present', 'absent'])
        )
    )
    
        return nat_rules
    
                update_roles(schema_facts, cursor, schema,
                         schema_facts[schema_key]['usage_roles'], usage_roles,
                         schema_facts[schema_key]['create_roles'], create_roles)
            changed = True
        if changed:
            schema_facts.update(get_schema_facts(cursor, schema))
        return changed
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ipa import IPAClient, ipa_argument_spec
from ansible.module_utils._text import to_native
    
    
if __name__ == '__main__':
    main()

    
        if module.params['environment']:
        params['deploy[environment]'] = module.params['environment']
    
        app.add_node(settingslist_node)
    app.add_directive('settingslist', SettingsListDirective)
    
        def syntax(self):
        return '[options] <name> <domain>'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
    
    
        from zope.interface.declarations import implementer
    
    def main():
    print('Making key files...')
    makeKeyFiles('rsa', 1024)
    print('Key files generation successful.')
    
    
class DoubleHash(HashTable):
    '''
        Hash Table example with open addressing and Double Hash
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
            if self.depth == 1:
            self.prediction = np.mean(y)
            return
    
    from matplotlib import pyplot as plt
def plot_heterogeneity(heterogeneity, k):
    plt.figure(figsize=(7,4))
    plt.plot(heterogeneity, linewidth=4)
    plt.xlabel('# Iterations')
    plt.ylabel('Heterogeneity')
    plt.title('Heterogeneity of clustering over time, K={0:d}'.format(k))
    plt.rcParams.update({'font.size': 16})
    plt.show()
    
    word_bysig = collections.defaultdict(list)
for word in word_list:
    word_bysig[signature(word)].append(word)
    
            a += a
        b >>= 1
    
        complete_apps = ['sentry']

    
            # Deleting model 'EnvironmentProject'
        db.delete_table('sentry_environmentproject')
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
        )
    
            # Adding model 'ApiApplication'
        db.create_table(
            'sentry_apiapplication', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'client_id',
                    self.gf('django.db.models.fields.CharField')(unique=True, max_length=64)
                ), (
                    'client_secret',
                    self.gf('sentry.db.models.fields.encrypted.EncryptedTextField')()
                ), (
                    'owner', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ),
                ('name', self.gf('django.db.models.fields.CharField')(max_length=64, blank=True)), (
                    'status',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        default=0, db_index=True
                    )
                ), (
                    'allowed_origins',
                    self.gf('django.db.models.fields.TextField')(null=True, blank=True)
                ), ('redirect_uris', self.gf('django.db.models.fields.TextField')()), (
                    'homepage_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'privacy_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'terms_url',
                    self.gf('django.db.models.fields.URLField')(max_length=200, null=True)
                ), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiApplication'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])