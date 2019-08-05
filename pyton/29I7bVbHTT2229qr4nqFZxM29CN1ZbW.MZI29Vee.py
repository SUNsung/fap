
        
            def reject_friend_request(self, from_user_id, to_user_id):
        pass
    
    
class SpendingByCategory(MRJob):
    
    
class PersonServer(object):
    
    
def json_view(request):
    '''
    A view that expects a request with the header 'application/json' and JSON
    data, which is deserialized and included in the context.
    '''
    if request.META.get('CONTENT_TYPE') != 'application/json':
        return HttpResponse()
    
        class Media:
        js = ('my_awesome_admin_scripts.js',)
    
    
class RunInTmpDirMixin:
    '''
    Allow i18n tests that need to generate .po/.mo files to run in an isolated
    temporary filesystem tree created by tempfile.mkdtemp() that contains a
    clean copy of the relevant test code.
    
        def test_serialized_off(self):
        tested_connections = db.ConnectionHandler({
            'default': {
                'ENGINE': 'django.db.backends.dummy',
                'TEST': {'SERIALIZE': False},
            },
        })
        with mock.patch('django.db.backends.dummy.base.DatabaseWrapper.creation_class') as mocked_db_creation:
            with mock.patch('django.test.utils.connections', new=tested_connections):
                self.runner_instance.setup_databases()
        mocked_db_creation.return_value.create_test_db.assert_called_once_with(
            verbosity=0, autoclobber=False, serialize=False, keepdb=False
        )
    
        @property
    def layer_name(self):
        'Return the name of the layer for the feature.'
        name = capi.get_feat_name(self._layer._ldefn)
        return force_str(name, self.encoding, strings_only=True)
    
        def as_int(self, is_64=False):
        'Retrieve the Field's value as an integer.'
        if is_64:
            return capi.get_field_as_integer64(self._feat.ptr, self._index) if self.is_set else None
        else:
            return capi.get_field_as_integer(self._feat.ptr, self._index) if self.is_set else None
    
        def test_str(self):
        self.assertEqual('Invalid nonce ('xxx'): error', str(self.error))
    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
        achall = achallenges.KeyAuthorizationAnnotatedChallenge(
        challb=acme_util.DNS01, domain=DOMAIN, account_key=KEY)
    
    # Workaround for http://bugs.python.org/issue8876, see
# http://bugs.python.org/issue8876#msg208792
# This can be removed when using Python 2.7.9 or later:
# https://hg.python.org/cpython/raw-file/v2.7.9/Misc/NEWS
if os.path.abspath(__file__).split(os.path.sep)[1] == 'vagrant':
    del os.link
    
    Use of this plugin requires a configuration file containing the target DNS
server and optional port that supports RFC 2136 Dynamic Updates, the name
of the TSIG key, the TSIG key secret itself and the algorithm used if it's
different to HMAC-MD5.
    
            self.integration = Integration.objects.create(
            provider='slack',
            external_id='TXXXXXXX1',
            metadata={
                'access_token': 'xoxa-xxxxxxxxx-xxxxxxxxxx-xxxxxxxxxxxx',
            }
        )
        OrganizationIntegration.objects.create(
            organization=self.org,
            integration=self.integration,
        )
    
    from sentry.models import ProjectKey
from sentry.web.helpers import render_to_response
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True))
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
                # New terminal setting unbuffered
            self.new_term[3] = (self.new_term[3] & ~termios.ICANON & ~termios.ECHO)
            termios.tcsetattr(self.file_desc, termios.TCSAFLUSH, self.new_term)
    
        def get_queue(self, name, maxsize=0):
        ''' Return a queue from the manager
            If it doesn't exist, create it '''
        logger.debug('QueueManager getting: '%s'', name)
        queue = self.queues.get(name, None)
        if not queue:
            self.add_queue(name, maxsize)
            queue = self.queues[name]
        logger.debug('QueueManager got: '%s'', name)
        return queue
    
    
def get_default_mask():
    ''' Set the default mask for cli '''
    masks = get_available_masks()
    default = 'dfl_full'
    default = default if default in masks else masks[0]
    logger.debug(default)
    return default
    
    from .display_analysis import Analysis
from .display_command import GraphDisplay, PreviewExtract, PreviewTrain
from .utils import get_config
    
        def load_module(self, filename, module_path, plugin_type):
        ''' Load the defaults module and add defaults '''
        logger.debug('Adding defaults: (filename: %s, module_path: %s, plugin_type: %s',
                     filename, module_path, plugin_type)
        module = os.path.splitext(filename)[0]
        section = '.'.join((plugin_type, module.replace('_defaults', '')))
        logger.debug('Importing defaults module: %s.%s', module_path, module)
        mod = import_module('{}.{}'.format(module_path, module))
        self.add_section(title=section, info=mod._HELPTEXT)  # pylint:disable=protected-access
        for key, val in mod._DEFAULTS.items():  # pylint:disable=protected-access
            self.add_item(section=section, title=key, **val)
        logger.debug('Added defaults: %s', section)

    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face
