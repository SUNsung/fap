
        
            READY = 0
    IN_PROGRESS = 1
    COMPLETE = 2
    
    
class DefaultCategories(Enum):
    
    
class RemoveDuplicateUrls(MRJob):
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    from httpie import ExitStatus
from utils import http, HTTP_OK
    
    
class AjaxCrawlMiddleware(object):
    '''
    Handle 'AJAX crawlable' pages marked as crawlable via meta tag.
    For more info see https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
    '''
    
        def backwards(self, orm):
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ProcessingIssue'
        db.create_table(
            'sentry_processingissue', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'checksum',
                    self.gf('django.db.models.fields.CharField')(max_length=40, db_index=True)
                ), ('type', self.gf('django.db.models.fields.CharField')(max_length=30)),
                ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')()), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ProcessingIssue'])
    
            db.start_transaction()
    
        complete_apps = ['sentry']

    
            # Adding unique constraint on 'Distribution', fields ['release', 'name']
        db.create_unique('sentry_distribution', ['release_id', 'name'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.delete_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])