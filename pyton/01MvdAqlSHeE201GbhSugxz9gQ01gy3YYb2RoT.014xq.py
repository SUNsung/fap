
        
            @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    # generate_private_key requires cryptography>=0.5
key = jose.JWKRSA(key=rsa.generate_private_key(
    public_exponent=65537,
    key_size=BITS,
    backend=default_backend()))
acme = client.Client(DIRECTORY_URL, key)
    
    
MOD_SSL_CONF_DEST = 'options-ssl-apache.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
            try:
            vhost = self.configurator.choose_vhost(achall.domain,
                                                   create_if_no_ssl=False)
        except (PluginError, MissingCommandlineFlag):
            # We couldn't find the virtualhost for this domain, possibly
            # because it's a new vhost that's not configured yet
            # (GH #677). See also GH #2600.
            logger.warning('Falling back to default vhost %s...', default_addr)
            addrs.add(default_addr)
            return addrs
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
        Note that not all entries are resources.  Specifically, directories are
    not considered resources.  Use `is_resource()` on each entry returned here
    to check if it is a resource or not.
    '''
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.contents()
    # Is the package a namespace package?  By definition, namespace packages
    # cannot have resources.  We could use _check_location() and catch the
    # exception, but that's extra work, so just inline the check.
    elif package.__spec__.origin is None or not package.__spec__.has_location:
        return ()
    else:
        package_directory = Path(package.__spec__.origin).parent
        return os.listdir(package_directory)

    
    ans = input('View full message?')
if ans.lower()[0] == 'n':
    sys.exit()
    
    def handleToc(slides):
    for slide in slides:
        title = slide.getElementsByTagName('title')[0]
        print('<p>%s</p>' % getText(title.childNodes))
    
    class MyManager(BaseManager):
    pass
    
        complete_apps = ['sentry']
    symmetrical = True

    
            # The following code is provided here to aid in writing a correct migration
        # Changing field 'ReleaseEnvironment.project_id'
        db.alter_column(
            'sentry_environmentrelease', 'project_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ReleaseHeadCommit'
        db.create_table(
            'sentry_releaseheadcommit', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'organization_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(
                        db_index=True
                    )
                ), (
                    'repository_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'release', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Release']
                    )
                ), (
                    'commit', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Commit']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['ReleaseHeadCommit'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])