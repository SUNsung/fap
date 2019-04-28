
        
        
class CreateExtension(Operation):
    reversible = True
    
        def save(self, must_create=False):
        if self.session_key is None:
            return self.create()
        if must_create:
            func = self._cache.add
        elif self._cache.get(self.cache_key) is not None:
            func = self._cache.set
        else:
            raise UpdateError
        result = func(self.cache_key,
                      self._get_session(no_load=must_create),
                      self.get_expiry_age())
        if must_create and not result:
            raise CreateError
    
    # input image dimensions
img_rows, img_cols = 28, 28
    
    
def test_regularization_shared_layer():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
    batch_size = 128
num_classes = 10
epochs = 20
    
    
def test_conv_input_length():
    assert conv_utils.conv_input_length(None, 7, 'same', 1) is None
    assert conv_utils.conv_input_length(112, 7, 'same', 1) == 112
    assert conv_utils.conv_input_length(112, 7, 'same', 2) == 223
    assert conv_utils.conv_input_length(28, 5, 'valid', 1) == 32
    assert conv_utils.conv_input_length(14, 5, 'valid', 2) == 31
    assert conv_utils.conv_input_length(36, 5, 'full', 1) == 32
    assert conv_utils.conv_input_length(18, 5, 'full', 2) == 31
    
    try:
    import boto3
    import botocore
    HAS_BOTO3 = True
except ImportError:
    HAS_BOTO3 = False
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    monitoring_policy: ansible monitoring policy updated
    remove_servers:
     - server01
    wait: true
    state: update
'''
    
    
# Pseudo definitions...
    
        module.exit_json(**result)
    
    
class HBACRuleIPAClient(IPAClient):
    def __init__(self, module, host, port, protocol):
        super(HBACRuleIPAClient, self).__init__(module, host, port, protocol)
    
    
DOCUMENTATION = '''
---
module: airbrake_deployment
version_added: '1.2'
author: 'Bruce Pennypacker (@bpennypacker)'
short_description: Notify airbrake about app deployments
description:
   - Notify airbrake about app deployments (see http://help.airbrake.io/kb/api-2/deploy-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The airbrake environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
    required: false
  repo:
    description:
      - URL of the project repository
    required: false
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
    required: false
  url:
    description:
      - Optional URL to submit the notification to. Use to send notifications to Airbrake-compliant tools like Errbit.
    required: false
    default: 'https://airbrake.io/deploys.txt'
    version_added: '1.5'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
            # If feature is already in good state, just exit
        if (re.search('Disabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'absent') or \
                (re.search('Enabled features:.* %s[ \n]' % self.feature_name, out) and self.state == 'present'):
            self.module.exit_json(changed=False)
    
    from south.utils import datetime_utils as datetime
from south.db import db
from south.v2 import DataMigration
from django.db import IntegrityError, models, transaction
    
        def backwards(self, orm):
        # Removing unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.delete_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'EnvironmentProject', fields ['project', 'environment']
        db.delete_unique('sentry_environmentproject', ['project_id', 'environment_id'])
    
            # User chose to not deal with backwards NULL issues for 'ReleaseEnvironment.project_id'
        raise RuntimeError(
            'Cannot reverse this migration. 'ReleaseEnvironment.project_id' and its values cannot be restored.'
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
    
            # Removing unique constraint on 'VersionDSymFile', fields ['dsym_file', 'version', 'build']
        db.delete_unique('sentry_versiondsymfile', ['dsym_file_id', 'version', 'build'])
    
        models = {
        'sentry.activity': {
            'Meta': {
                'object_name': 'Activity'
            },
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {
                'null': 'True'
            }),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'type': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True'
                }
            )
        },
        'sentry.apiapplication': {
            'Meta': {
                'object_name': 'ApiApplication'
            },
            'allowed_origins':
            ('django.db.models.fields.TextField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'client_id': (
                'django.db.models.fields.CharField', [], {
                    'default': ''be3c80543b75439f9d38717a58ad152a0b669a4f96cb48aab570d42c1596d152'',
                    'unique': 'True',
                    'max_length': '64'
                }
            ),
            'client_secret': (
                'sentry.db.models.fields.encrypted.EncryptedTextField', [], {
                    'default': ''80fdd1b811b545a58c1da035233e95c6d6b134dd8c5240ff8a548e95f49ea989''
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'homepage_url':
            ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': (
                'django.db.models.fields.CharField', [], {
                    'default': ''Wary Neriah'',
                    'max_length': '64',
                    'blank': 'True'
                }
            ),
            'owner': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            ),
            'privacy_url':
            ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            }),
            'redirect_uris': ('django.db.models.fields.TextField', [], {}),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'terms_url':
            ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            })
        },
        'sentry.apiauthorization': {
            'Meta': {
                'unique_together': '(('user', 'application'),)',
                'object_name': 'ApiAuthorization'
            },
            'application': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiApplication']',
                    'null': 'True'
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.apigrant': {
            'Meta': {
                'object_name': 'ApiGrant'
            },
            'application': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiApplication']'
                }
            ),
            'code': (
                'django.db.models.fields.CharField', [], {
                    'default': ''1f4ac562f829436a8c9625606311016f'',
                    'max_length': '64',
                    'db_index': 'True'
                }
            ),
            'expires_at': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 3, 29, 0, 0)',
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'redirect_uri': ('django.db.models.fields.CharField', [], {
                'max_length': '255'
            }),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.apikey': {
            'Meta': {
                'object_name': 'ApiKey'
            },
            'allowed_origins':
            ('django.db.models.fields.TextField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '32'
            }),
            'label': (
                'django.db.models.fields.CharField', [], {
                    'default': ''Default'',
                    'max_length': '64',
                    'blank': 'True'
                }
            ),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''key_set'',
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            )
        },
        'sentry.apitoken': {
            'Meta': {
                'object_name': 'ApiToken'
            },
            'application': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiApplication']',
                    'null': 'True'
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'expires_at': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 4, 28, 0, 0)',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'refresh_token': (
                'django.db.models.fields.CharField', [], {
                    'default': ''6e920784d44f4a2990fd9a6c0586169b9510218fd4b44230baf004d371c1bea5'',
                    'max_length': '64',
                    'unique': 'True',
                    'null': 'True'
                }
            ),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'token': (
                'django.db.models.fields.CharField', [], {
                    'default': ''a99dd3845cf644d6a9f76bc2b06ad49ea0a08a037b764e91b845a9bca45b1712'',
                    'unique': 'True',
                    'max_length': '64'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.auditlogentry': {
            'Meta': {
                'object_name': 'AuditLogEntry'
            },
            'actor': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'blank': 'True',
                    'related_name': ''audit_actors'',
                    'null': 'True',
                    'to': 'orm['sentry.User']'
                }
            ),
            'actor_key': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiKey']',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'actor_label': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {}),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ip_address': (
                'django.db.models.fields.GenericIPAddressField', [], {
                    'max_length': '39',
                    'null': 'True'
                }
            ),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'target_object':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'target_user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'blank': 'True',
                    'related_name': ''audit_targets'',
                    'null': 'True',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.authenticator': {
            'Meta': {
                'unique_together': '(('user', 'type'),)',
                'object_name': 'Authenticator',
                'db_table': ''auth_authenticator''
            },
            'config': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {}),
            'created_at':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {
                'primary_key': 'True'
            }),
            'last_used_at': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'type': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.authidentity': {
            'Meta': {
                'unique_together': '(('auth_provider', 'ident'), ('auth_provider', 'user'))',
                'object_name': 'AuthIdentity'
            },
            'auth_provider': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.AuthProvider']'
                }
            ),
            'data': ('sentry.db.models.fields.encrypted.EncryptedJsonField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'last_synced':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'last_verified':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.authprovider': {
            'Meta': {
                'object_name': 'AuthProvider'
            },
            'config':
            ('sentry.db.models.fields.encrypted.EncryptedJsonField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'default_global_access':
            ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'default_role':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '50'
            }),
            'default_teams': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.Team']',
                    'symmetrical': 'False',
                    'blank': 'True'
                }
            ),
            'flags': ('django.db.models.fields.BigIntegerField', [], {
                'default': '0'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_sync': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']',
                    'unique': 'True'
                }
            ),
            'provider': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'sync_time':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            })
        },
        'sentry.broadcast': {
            'Meta': {
                'object_name': 'Broadcast'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'date_expires': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 4, 5, 0, 0)',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active':
            ('django.db.models.fields.BooleanField', [], {
                'default': 'True',
                'db_index': 'True'
            }),
            'link': (
                'django.db.models.fields.URLField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'message': ('django.db.models.fields.CharField', [], {
                'max_length': '256'
            }),
            'title': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'upstream_id': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'null': 'True',
                    'blank': 'True'
                }
            )
        },
        'sentry.broadcastseen': {
            'Meta': {
                'unique_together': '(('broadcast', 'user'),)',
                'object_name': 'BroadcastSeen'
            },
            'broadcast': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Broadcast']'
                }
            ),
            'date_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.commit': {
            'Meta': {
                'unique_together': '(('repository_id', 'key'),)',
                'object_name': 'Commit',
                'index_together': '(('repository_id', 'date_added'),)'
            },
            'author': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.CommitAuthor']',
                    'null': 'True'
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'message': ('django.db.models.fields.TextField', [], {
                'null': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'repository_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
        },
        'sentry.commitauthor': {
            'Meta': {
                'unique_together': '(('organization_id', 'email'),)',
                'object_name': 'CommitAuthor'
            },
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name':
            ('django.db.models.fields.CharField', [], {
                'max_length': '128',
                'null': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            )
        },
        'sentry.commitfilechange': {
            'Meta': {
                'unique_together': '(('commit', 'filename'),)',
                'object_name': 'CommitFileChange'
            },
            'commit': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Commit']'
                }
            ),
            'filename': ('django.db.models.fields.CharField', [], {
                'max_length': '255'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'type': ('django.db.models.fields.CharField', [], {
                'max_length': '1'
            })
        },
        'sentry.counter': {
            'Meta': {
                'object_name': 'Counter',
                'db_table': ''sentry_projectcounter''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'unique': 'True'
                }
            ),
            'value': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.deploy': {
            'Meta': {
                'object_name': 'Deploy'
            },
            'date_finished':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'date_started':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'environment_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            ),
            'url': (
                'django.db.models.fields.URLField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'blank': 'True'
                }
            )
        },
        'sentry.dsymapp': {
            'Meta': {
                'unique_together': '(('project', 'platform', 'app_id'),)',
                'object_name': 'DSymApp'
            },
            'app_id': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'data': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_synced':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'platform':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'sync_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            })
        },
        'sentry.dsymbundle': {
            'Meta': {
                'object_name': 'DSymBundle'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymObject']'
                }
            ),
            'sdk': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymSDK']'
                }
            )
        },
        'sentry.dsymobject': {
            'Meta': {
                'object_name': 'DSymObject'
            },
            'cpu_name': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object_path': ('django.db.models.fields.TextField', [], {
                'db_index': 'True'
            }),
            'uuid':
            ('django.db.models.fields.CharField', [], {
                'max_length': '36',
                'db_index': 'True'
            }),
            'vmaddr':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            }),
            'vmsize':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            })
        },
        'sentry.dsymsdk': {
            'Meta': {
                'object_name':
                'DSymSDK',
                'index_together':
                '[('version_major', 'version_minor', 'version_patchlevel', 'version_build')]'
            },
            'dsym_type':
            ('django.db.models.fields.CharField', [], {
                'max_length': '20',
                'db_index': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'sdk_name': ('django.db.models.fields.CharField', [], {
                'max_length': '20'
            }),
            'version_build': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'version_major': ('django.db.models.fields.IntegerField', [], {}),
            'version_minor': ('django.db.models.fields.IntegerField', [], {}),
            'version_patchlevel': ('django.db.models.fields.IntegerField', [], {})
        },
        'sentry.dsymsymbol': {
            'Meta': {
                'unique_together': '[('object', 'address')]',
                'object_name': 'DSymSymbol'
            },
            'address':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'db_index': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymObject']'
                }
            ),
            'symbol': ('django.db.models.fields.TextField', [], {})
        },
        'sentry.environment': {
            'Meta': {
                'unique_together': '(('project_id', 'name'),)',
                'object_name': 'Environment'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'project_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'projects': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.Project']',
                    'through': 'orm['sentry.EnvironmentProject']',
                    'symmetrical': 'False'
                }
            )
        },
        'sentry.environmentproject': {
            'Meta': {
                'unique_together': '(('project', 'environment'),)',
                'object_name': 'EnvironmentProject'
            },
            'environment': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Environment']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.event': {
            'Meta': {
                'unique_together': '(('project_id', 'event_id'),)',
                'object_name': 'Event',
                'db_table': ''sentry_message'',
                'index_together': '(('group_id', 'datetime'),)'
            },
            'data':
            ('sentry.db.models.fields.node.NodeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'datetime': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'event_id': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'null': 'True',
                    'db_column': ''message_id''
                }
            ),
            'group_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'message': ('django.db.models.fields.TextField', [], {}),
            'platform':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'time_spent':
            ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'null': 'True'
            })
        },
        'sentry.eventmapping': {
            'Meta': {
                'unique_together': '(('project_id', 'event_id'),)',
                'object_name': 'EventMapping'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.eventprocessingissue': {
            'Meta': {
                'unique_together': '(('raw_event', 'processing_issue'),)',
                'object_name': 'EventProcessingIssue'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'processing_issue': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ProcessingIssue']'
                }
            ),
            'raw_event': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.RawEvent']'
                }
            )
        },
        'sentry.eventtag': {
            'Meta': {
                'unique_together':
                '(('event_id', 'key_id', 'value_id'),)',
                'object_name':
                'EventTag',
                'index_together':
                '(('project_id', 'key_id', 'value_id'), ('group_id', 'key_id', 'value_id'))'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.eventuser': {
            'Meta': {
                'unique_together':
                '(('project', 'ident'), ('project', 'hash'))',
                'object_name':
                'EventUser',
                'index_together':
                '(('project', 'email'), ('project', 'username'), ('project', 'ip_address'))'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'email':
            ('django.db.models.fields.EmailField', [], {
                'max_length': '75',
                'null': 'True'
            }),
            'hash': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident':
            ('django.db.models.fields.CharField', [], {
                'max_length': '128',
                'null': 'True'
            }),
            'ip_address': (
                'django.db.models.fields.GenericIPAddressField', [], {
                    'max_length': '39',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'username':
            ('django.db.models.fields.CharField', [], {
                'max_length': '128',
                'null': 'True'
            })
        },
        'sentry.file': {
            'Meta': {
                'object_name': 'File'
            },
            'blob': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''legacy_blob'',
                    'null': 'True',
                    'to': 'orm['sentry.FileBlob']'
                }
            ),
            'blobs': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.FileBlob']',
                    'through': 'orm['sentry.FileBlobIndex']',
                    'symmetrical': 'False'
                }
            ),
            'checksum':
            ('django.db.models.fields.CharField', [], {
                'max_length': '40',
                'null': 'True'
            }),
            'headers': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'path': ('django.db.models.fields.TextField', [], {
                'null': 'True'
            }),
            'size':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'timestamp': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'type': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            })
        },
        'sentry.fileblob': {
            'Meta': {
                'object_name': 'FileBlob'
            },
            'checksum':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '40'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'path': ('django.db.models.fields.TextField', [], {
                'null': 'True'
            }),
            'size':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'timestamp': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            )
        },
        'sentry.fileblobindex': {
            'Meta': {
                'unique_together': '(('file', 'blob', 'offset'),)',
                'object_name': 'FileBlobIndex'
            },
            'blob': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.FileBlob']'
                }
            ),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'offset': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
        },
        'sentry.globaldsymfile': {
            'Meta': {
                'object_name': 'GlobalDSymFile'
            },
            'cpu_name': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object_name': ('django.db.models.fields.TextField', [], {}),
            'uuid':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '36'
            })
        },
        'sentry.group': {
            'Meta': {
                'unique_together': '(('project', 'short_id'),)',
                'object_name': 'Group',
                'db_table': ''sentry_groupedmessage'',
                'index_together': '(('project', 'first_release'),)'
            },
            'active_at':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'db_index': 'True'
            }),
            'culprit': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'db_column': ''view'',
                    'blank': 'True'
                }
            ),
            'data': (
                'sentry.db.models.fields.gzippeddict.GzippedDictField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'first_release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']',
                    'null': 'True',
                    'on_delete': 'models.PROTECT'
                }
            ),
            'first_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_public': (
                'django.db.models.fields.NullBooleanField', [], {
                    'default': 'False',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'level': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '40',
                    'db_index': 'True',
                    'blank': 'True'
                }
            ),
            'logger': (
                'django.db.models.fields.CharField', [], {
                    'default': '''',
                    'max_length': '64',
                    'db_index': 'True',
                    'blank': 'True'
                }
            ),
            'message': ('django.db.models.fields.TextField', [], {}),
            'num_comments': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'null': 'True'
                }
            ),
            'platform':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'resolved_at':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'db_index': 'True'
            }),
            'score': ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'default': '0'
            }),
            'short_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'time_spent_count':
            ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'default': '0'
            }),
            'time_spent_total':
            ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'default': '0'
            }),
            'times_seen': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '1',
                    'db_index': 'True'
                }
            )
        },
        'sentry.groupassignee': {
            'Meta': {
                'object_name': 'GroupAssignee',
                'db_table': ''sentry_groupasignee''
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''assignee_set'',
                    'unique': 'True',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''assignee_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''sentry_assignee_set'',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.groupbookmark': {
            'Meta': {
                'unique_together': '(('project', 'user', 'group'),)',
                'object_name': 'GroupBookmark'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''bookmark_set'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''bookmark_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''sentry_bookmark_set'',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.groupcommitresolution': {
            'Meta': {
                'unique_together': '(('group_id', 'commit_id'),)',
                'object_name': 'GroupCommitResolution'
            },
            'commit_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'datetime': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            })
        },
        'sentry.groupemailthread': {
            'Meta': {
                'unique_together': '(('email', 'group'), ('email', 'msgid'))',
                'object_name': 'GroupEmailThread'
            },
            'date': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''groupemail_set'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'msgid': ('django.db.models.fields.CharField', [], {
                'max_length': '100'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''groupemail_set'',
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.grouphash': {
            'Meta': {
                'unique_together': '(('project', 'hash'),)',
                'object_name': 'GroupHash'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'null': 'True'
                }
            ),
            'hash': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            )
        },
        'sentry.groupmeta': {
            'Meta': {
                'unique_together': '(('group', 'key'),)',
                'object_name': 'GroupMeta'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'value': ('django.db.models.fields.TextField', [], {})
        },
        'sentry.groupredirect': {
            'Meta': {
                'object_name': 'GroupRedirect'
            },
            'group_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'db_index': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'previous_group_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'unique': 'True'
            })
        },
        'sentry.grouprelease': {
            'Meta': {
                'unique_together': '(('group_id', 'release_id', 'environment'),)',
                'object_name': 'GroupRelease'
            },
            'environment':
            ('django.db.models.fields.CharField', [], {
                'default': '''',
                'max_length': '64'
            }),
            'first_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            )
        },
        'sentry.groupresolution': {
            'Meta': {
                'object_name': 'GroupResolution'
            },
            'datetime': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'unique': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            ),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.grouprulestatus': {
            'Meta': {
                'unique_together': '(('rule', 'group'),)',
                'object_name': 'GroupRuleStatus'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_active': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'rule': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Rule']'
                }
            ),
            'status': ('django.db.models.fields.PositiveSmallIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.groupseen': {
            'Meta': {
                'unique_together': '(('user', 'group'),)',
                'object_name': 'GroupSeen'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'db_index': 'False'
                }
            )
        },
        'sentry.groupsnooze': {
            'Meta': {
                'object_name': 'GroupSnooze'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'unique': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'until': ('django.db.models.fields.DateTimeField', [], {})
        },
        'sentry.groupsubscription': {
            'Meta': {
                'unique_together': '(('group', 'user'),)',
                'object_name': 'GroupSubscription'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''subscription_set'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''subscription_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'reason':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.grouptagkey': {
            'Meta': {
                'unique_together': '(('project', 'group', 'key'),)',
                'object_name': 'GroupTagKey'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'values_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.grouptagvalue': {
            'Meta': {
                'unique_together': '(('group', 'key', 'value'),)',
                'object_name': 'GroupTagValue',
                'db_table': ''sentry_messagefiltervalue'',
                'index_together': '(('project', 'key', 'value', 'last_seen'),)'
            },
            'first_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''grouptag'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''grouptag'',
                    'null': 'True',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'times_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'value': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            })
        },
        'sentry.lostpasswordhash': {
            'Meta': {
                'object_name': 'LostPasswordHash'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'hash': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'unique': 'True'
                }
            )
        },
        'sentry.option': {
            'Meta': {
                'object_name': 'Option'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '64'
            }),
            'last_updated':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.organization': {
            'Meta': {
                'object_name': 'Organization'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'default_role':
            ('django.db.models.fields.CharField', [], {
                'default': ''member'',
                'max_length': '32'
            }),
            'flags': ('django.db.models.fields.BigIntegerField', [], {
                'default': '1'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'members': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'related_name': ''org_memberships'',
                    'symmetrical': 'False',
                    'through': 'orm['sentry.OrganizationMember']',
                    'to': 'orm['sentry.User']'
                }
            ),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'slug':
            ('django.db.models.fields.SlugField', [], {
                'unique': 'True',
                'max_length': '50'
            }),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.organizationaccessrequest': {
            'Meta': {
                'unique_together': '(('team', 'member'),)',
                'object_name': 'OrganizationAccessRequest'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'member': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.OrganizationMember']'
                }
            ),
            'team': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Team']'
                }
            )
        },
        'sentry.organizationavatar': {
            'Meta': {
                'object_name': 'OrganizationAvatar'
            },
            'avatar_type':
            ('django.db.models.fields.PositiveSmallIntegerField', [], {
                'default': '0'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']',
                    'unique': 'True',
                    'null': 'True',
                    'on_delete': 'models.SET_NULL'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': (
                'django.db.models.fields.CharField', [], {
                    'unique': 'True',
                    'max_length': '32',
                    'db_index': 'True'
                }
            ),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''avatar'',
                    'unique': 'True',
                    'to': 'orm['sentry.Organization']'
                }
            )
        },
        'sentry.organizationmember': {
            'Meta': {
                'unique_together': '(('organization', 'user'), ('organization', 'email'))',
                'object_name': 'OrganizationMember'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email': (
                'django.db.models.fields.EmailField', [], {
                    'max_length': '75',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'flags': ('django.db.models.fields.BigIntegerField', [], {
                'default': '0'
            }),
            'has_global_access': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''member_set'',
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'role':
            ('django.db.models.fields.CharField', [], {
                'default': ''member'',
                'max_length': '32'
            }),
            'teams': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.Team']',
                    'symmetrical': 'False',
                    'through': 'orm['sentry.OrganizationMemberTeam']',
                    'blank': 'True'
                }
            ),
            'token': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'unique': 'True',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'type': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '50',
                    'blank': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'blank': 'True',
                    'related_name': ''sentry_orgmember_set'',
                    'null': 'True',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.organizationmemberteam': {
            'Meta': {
                'unique_together': '(('team', 'organizationmember'),)',
                'object_name': 'OrganizationMemberTeam',
                'db_table': ''sentry_organizationmember_teams''
            },
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'organizationmember': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.OrganizationMember']'
                }
            ),
            'team': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Team']'
                }
            )
        },
        'sentry.organizationonboardingtask': {
            'Meta': {
                'unique_together': '(('organization', 'task'),)',
                'object_name': 'OrganizationOnboardingTask'
            },
            'data': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_completed':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'task': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True'
                }
            )
        },
        'sentry.organizationoption': {
            'Meta': {
                'unique_together': '(('organization', 'key'),)',
                'object_name': 'OrganizationOption',
                'db_table': ''sentry_organizationoptions''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.processingissue': {
            'Meta': {
                'unique_together': '(('project', 'checksum', 'type'),)',
                'object_name': 'ProcessingIssue'
            },
            'checksum':
            ('django.db.models.fields.CharField', [], {
                'max_length': '40',
                'db_index': 'True'
            }),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {}),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'type': ('django.db.models.fields.CharField', [], {
                'max_length': '30'
            })
        },
        'sentry.project': {
            'Meta': {
                'unique_together': '(('team', 'slug'), ('organization', 'slug'))',
                'object_name': 'Project'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'first_event': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'flags':
            ('django.db.models.fields.BigIntegerField', [], {
                'default': '0',
                'null': 'True'
            }),
            'forced_color': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '6',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'public': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'slug': ('django.db.models.fields.SlugField', [], {
                'max_length': '50',
                'null': 'True'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'team': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Team']'
                }
            )
        },
        'sentry.projectbookmark': {
            'Meta': {
                'unique_together': '(('project_id', 'user'),)',
                'object_name': 'ProjectBookmark'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.projectdsymfile': {
            'Meta': {
                'unique_together': '(('project', 'uuid'),)',
                'object_name': 'ProjectDSymFile'
            },
            'cpu_name': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object_name': ('django.db.models.fields.TextField', [], {}),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'uuid': ('django.db.models.fields.CharField', [], {
                'max_length': '36'
            })
        },
        'sentry.projectkey': {
            'Meta': {
                'object_name': 'ProjectKey'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'label': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''key_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'public_key': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'unique': 'True',
                    'null': 'True'
                }
            ),
            'roles': ('django.db.models.fields.BigIntegerField', [], {
                'default': '1'
            }),
            'secret_key': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'unique': 'True',
                    'null': 'True'
                }
            ),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            )
        },
        'sentry.projectoption': {
            'Meta': {
                'unique_together': '(('project', 'key'),)',
                'object_name': 'ProjectOption',
                'db_table': ''sentry_projectoptions''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.projectplatform': {
            'Meta': {
                'unique_together': '(('project_id', 'platform'),)',
                'object_name': 'ProjectPlatform'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'platform': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.rawevent': {
            'Meta': {
                'unique_together': '(('project', 'event_id'),)',
                'object_name': 'RawEvent'
            },
            'data':
            ('sentry.db.models.fields.node.NodeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '32',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.release': {
            'Meta': {
                'unique_together': '(('organization', 'version'),)',
                'object_name': 'Release'
            },
            'data': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'date_released':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'date_started':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'new_groups':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'owner': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'project_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'projects': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'related_name': ''releases'',
                    'symmetrical': 'False',
                    'through': 'orm['sentry.ReleaseProject']',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'ref': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'url': (
                'django.db.models.fields.URLField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'version': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            })
        },
        'sentry.releasecommit': {
            'Meta': {
                'unique_together': '(('release', 'commit'), ('release', 'order'))',
                'object_name': 'ReleaseCommit'
            },
            'commit': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Commit']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'order': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.releaseenvironment': {
            'Meta': {
                'unique_together': '(('project_id', 'release_id', 'environment_id'),)',
                'object_name': 'ReleaseEnvironment',
                'db_table': ''sentry_environmentrelease''
            },
            'environment_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'first_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'release_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            )
        },
        'sentry.releasefile': {
            'Meta': {
                'unique_together': '(('release', 'ident'),)',
                'object_name': 'ReleaseFile'
            },
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'name': ('django.db.models.fields.TextField', [], {}),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'project_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.releaseheadcommit': {
            'Meta': {
                'unique_together': '(('repository_id', 'release'),)',
                'object_name': 'ReleaseHeadCommit'
            },
            'commit': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Commit']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            ),
            'repository_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
        },
        'sentry.releaseproject': {
            'Meta': {
                'unique_together': '(('project', 'release'),)',
                'object_name': 'ReleaseProject',
                'db_table': ''sentry_release_project''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'new_groups': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.repository': {
            'Meta': {
                'unique_together':
                '(('organization_id', 'name'), ('organization_id', 'provider', 'external_id'))',
                'object_name':
                'Repository'
            },
            'config': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'external_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'provider':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'url': ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            })
        },
        'sentry.reprocessingreport': {
            'Meta': {
                'unique_together': '(('project', 'event_id'),)',
                'object_name': 'ReprocessingReport'
            },
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '32',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.rule': {
            'Meta': {
                'object_name': 'Rule'
            },
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {}),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'label': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            )
        },
        'sentry.savedsearch': {
            'Meta': {
                'unique_together': '(('project', 'name'),)',
                'object_name': 'SavedSearch'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_default': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'owner': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'query': ('django.db.models.fields.TextField', [], {})
        },
        'sentry.savedsearchuserdefault': {
            'Meta': {
                'unique_together': '(('project', 'user'),)',
                'object_name': 'SavedSearchUserDefault',
                'db_table': ''sentry_savedsearch_userdefault''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'savedsearch': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.SavedSearch']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.tagkey': {
            'Meta': {
                'unique_together': '(('project', 'key'),)',
                'object_name': 'TagKey',
                'db_table': ''sentry_filterkey''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'label':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'values_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.tagvalue': {
            'Meta': {
                'unique_together': '(('project', 'key', 'value'),)',
                'object_name': 'TagValue',
                'db_table': ''sentry_filtervalue''
            },
            'data': (
                'sentry.db.models.fields.gzippeddict.GzippedDictField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'first_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'times_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'value': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            })
        },
        'sentry.team': {
            'Meta': {
                'unique_together': '(('organization', 'slug'),)',
                'object_name': 'Team'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'slug': ('django.db.models.fields.SlugField', [], {
                'max_length': '50'
            }),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.user': {
            'Meta': {
                'object_name': 'User',
                'db_table': ''auth_user''
            },
            'date_joined':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email':
            ('django.db.models.fields.EmailField', [], {
                'max_length': '75',
                'blank': 'True'
            }),
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'is_managed': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'is_password_expired':
            ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'is_staff': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'is_superuser': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'last_login':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'last_password_change': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'name': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '200',
                    'db_column': ''first_name'',
                    'blank': 'True'
                }
            ),
            'password': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'session_nonce':
            ('django.db.models.fields.CharField', [], {
                'max_length': '12',
                'null': 'True'
            }),
            'username':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '128'
            })
        },
        'sentry.useravatar': {
            'Meta': {
                'object_name': 'UserAvatar'
            },
            'avatar_type':
            ('django.db.models.fields.PositiveSmallIntegerField', [], {
                'default': '0'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']',
                    'unique': 'True',
                    'null': 'True',
                    'on_delete': 'models.SET_NULL'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': (
                'django.db.models.fields.CharField', [], {
                    'unique': 'True',
                    'max_length': '32',
                    'db_index': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''avatar'',
                    'unique': 'True',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.useremail': {
            'Meta': {
                'unique_together': '(('user', 'email'),)',
                'object_name': 'UserEmail'
            },
            'date_hash_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_verified': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''emails'',
                    'to': 'orm['sentry.User']'
                }
            ),
            'validation_hash': (
                'django.db.models.fields.CharField', [], {
                    'default': 'u'bH7L6a0un6mlUhs5etg9Wvc3RiNZR7oI'',
                    'max_length': '32'
                }
            )
        },
        'sentry.useroption': {
            'Meta': {
                'unique_together': '(('user', 'project', 'key'),)',
                'object_name': 'UserOption'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            ),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.userreport': {
            'Meta': {
                'unique_together': '(('project', 'event_id'),)',
                'object_name': 'UserReport',
                'index_together': '(('project', 'event_id'), ('project', 'date_added'))'
            },
            'comments': ('django.db.models.fields.TextField', [], {}),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'event_id': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.versiondsymfile': {
            'Meta': {
                'unique_together': '(('dsym_file', 'version', 'build'),)',
                'object_name': 'VersionDSymFile'
            },
            'build':
            ('django.db.models.fields.CharField', [], {
                'max_length': '32',
                'null': 'True'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'dsym_app': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymApp']'
                }
            ),
            'dsym_file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ProjectDSymFile']',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'version': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            })
        }
    }
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'CommitAuthor.external_id'
        db.add_column(
            'sentry_commitauthor',
            'external_id',
            self.gf('django.db.models.fields.CharField')(max_length=164, null=True),
            keep_default=False
        )
    
        models = {
        'sentry.activity': {
            'Meta': {
                'object_name': 'Activity'
            },
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {
                'null': 'True'
            }),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'type': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True'
                }
            )
        },
        'sentry.apiapplication': {
            'Meta': {
                'object_name': 'ApiApplication'
            },
            'allowed_origins':
            ('django.db.models.fields.TextField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'client_id': (
                'django.db.models.fields.CharField', [], {
                    'default': ''66d08a120a2f46c7b652b03d49d751af623bd7be59bf4926ba41d3d53a008692'',
                    'unique': 'True',
                    'max_length': '64'
                }
            ),
            'client_secret': (
                'sentry.db.models.fields.encrypted.EncryptedTextField', [], {
                    'default': ''1ba80a3f2b3e414789a411e7d59abc39f11f43e2b7de4fb6b9ff42aa63abde46''
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'homepage_url':
            ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': (
                'django.db.models.fields.CharField', [], {
                    'default': ''Honest Seagull'',
                    'max_length': '64',
                    'blank': 'True'
                }
            ),
            'owner': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            ),
            'privacy_url':
            ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            }),
            'redirect_uris': ('django.db.models.fields.TextField', [], {}),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'terms_url':
            ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            })
        },
        'sentry.apiauthorization': {
            'Meta': {
                'unique_together': '(('user', 'application'),)',
                'object_name': 'ApiAuthorization'
            },
            'application': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiApplication']',
                    'null': 'True'
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.apigrant': {
            'Meta': {
                'object_name': 'ApiGrant'
            },
            'application': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiApplication']'
                }
            ),
            'code': (
                'django.db.models.fields.CharField', [], {
                    'default': ''eff00a86a1994431a2fbc7ee11f630d4'',
                    'max_length': '64',
                    'db_index': 'True'
                }
            ),
            'expires_at': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 4, 25, 0, 0)',
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'redirect_uri': ('django.db.models.fields.CharField', [], {
                'max_length': '255'
            }),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.apikey': {
            'Meta': {
                'object_name': 'ApiKey'
            },
            'allowed_origins':
            ('django.db.models.fields.TextField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '32'
            }),
            'label': (
                'django.db.models.fields.CharField', [], {
                    'default': ''Default'',
                    'max_length': '64',
                    'blank': 'True'
                }
            ),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''key_set'',
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            )
        },
        'sentry.apitoken': {
            'Meta': {
                'object_name': 'ApiToken'
            },
            'application': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiApplication']',
                    'null': 'True'
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'expires_at': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 5, 25, 0, 0)',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'refresh_token': (
                'django.db.models.fields.CharField', [], {
                    'default': ''7e2f82e502554820862dc94de1edaf00eff9f75849454dccabf6e3028abfd5d1'',
                    'max_length': '64',
                    'unique': 'True',
                    'null': 'True'
                }
            ),
            'scope_list': (
                'sentry.db.models.fields.array.ArrayField', [], {
                    'of': ('django.db.models.fields.TextField', [], {})
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'token': (
                'django.db.models.fields.CharField', [], {
                    'default': ''e70fa63b966e4e5c95a2112b89aad5535a3950425eb54d6d806a89d6fc6e2d4c'',
                    'unique': 'True',
                    'max_length': '64'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.auditlogentry': {
            'Meta': {
                'object_name': 'AuditLogEntry'
            },
            'actor': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'blank': 'True',
                    'related_name': ''audit_actors'',
                    'null': 'True',
                    'to': 'orm['sentry.User']'
                }
            ),
            'actor_key': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiKey']',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'actor_label': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {}),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ip_address': (
                'django.db.models.fields.GenericIPAddressField', [], {
                    'max_length': '39',
                    'null': 'True'
                }
            ),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'target_object':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'target_user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'blank': 'True',
                    'related_name': ''audit_targets'',
                    'null': 'True',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.authenticator': {
            'Meta': {
                'unique_together': '(('user', 'type'),)',
                'object_name': 'Authenticator',
                'db_table': ''auth_authenticator''
            },
            'config': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {}),
            'created_at':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {
                'primary_key': 'True'
            }),
            'last_used_at': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'type': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.authidentity': {
            'Meta': {
                'unique_together': '(('auth_provider', 'ident'), ('auth_provider', 'user'))',
                'object_name': 'AuthIdentity'
            },
            'auth_provider': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.AuthProvider']'
                }
            ),
            'data': ('sentry.db.models.fields.encrypted.EncryptedJsonField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'last_synced':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'last_verified':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.authprovider': {
            'Meta': {
                'object_name': 'AuthProvider'
            },
            'config':
            ('sentry.db.models.fields.encrypted.EncryptedJsonField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'default_global_access':
            ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'default_role':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '50'
            }),
            'default_teams': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.Team']',
                    'symmetrical': 'False',
                    'blank': 'True'
                }
            ),
            'flags': ('django.db.models.fields.BigIntegerField', [], {
                'default': '0'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_sync': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']',
                    'unique': 'True'
                }
            ),
            'provider': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'sync_time':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            })
        },
        'sentry.broadcast': {
            'Meta': {
                'object_name': 'Broadcast'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'date_expires': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 5, 2, 0, 0)',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active':
            ('django.db.models.fields.BooleanField', [], {
                'default': 'True',
                'db_index': 'True'
            }),
            'link': (
                'django.db.models.fields.URLField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'message': ('django.db.models.fields.CharField', [], {
                'max_length': '256'
            }),
            'title': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'upstream_id': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'null': 'True',
                    'blank': 'True'
                }
            )
        },
        'sentry.broadcastseen': {
            'Meta': {
                'unique_together': '(('broadcast', 'user'),)',
                'object_name': 'BroadcastSeen'
            },
            'broadcast': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Broadcast']'
                }
            ),
            'date_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.commit': {
            'Meta': {
                'unique_together': '(('repository_id', 'key'),)',
                'object_name': 'Commit',
                'index_together': '(('repository_id', 'date_added'),)'
            },
            'author': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.CommitAuthor']',
                    'null': 'True'
                }
            ),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'message': ('django.db.models.fields.TextField', [], {
                'null': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'repository_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
        },
        'sentry.commitauthor': {
            'Meta': {
                'unique_together':
                '(('organization_id', 'email'), ('organization_id', 'external_id'))',
                'object_name':
                'CommitAuthor'
            },
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'external_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '164',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name':
            ('django.db.models.fields.CharField', [], {
                'max_length': '128',
                'null': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            )
        },
        'sentry.commitfilechange': {
            'Meta': {
                'unique_together': '(('commit', 'filename'),)',
                'object_name': 'CommitFileChange'
            },
            'commit': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Commit']'
                }
            ),
            'filename': ('django.db.models.fields.CharField', [], {
                'max_length': '255'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'type': ('django.db.models.fields.CharField', [], {
                'max_length': '1'
            })
        },
        'sentry.counter': {
            'Meta': {
                'object_name': 'Counter',
                'db_table': ''sentry_projectcounter''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'unique': 'True'
                }
            ),
            'value': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.deploy': {
            'Meta': {
                'object_name': 'Deploy'
            },
            'date_finished':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'date_started':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'environment_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            ),
            'url': (
                'django.db.models.fields.URLField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'blank': 'True'
                }
            )
        },
        'sentry.distribution': {
            'Meta': {
                'unique_together': '(('release', 'name'),)',
                'object_name': 'Distribution'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.dsymapp': {
            'Meta': {
                'unique_together': '(('project', 'platform', 'app_id'),)',
                'object_name': 'DSymApp'
            },
            'app_id': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'data': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_synced':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'platform':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'sync_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            })
        },
        'sentry.dsymbundle': {
            'Meta': {
                'object_name': 'DSymBundle'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymObject']'
                }
            ),
            'sdk': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymSDK']'
                }
            )
        },
        'sentry.dsymobject': {
            'Meta': {
                'object_name': 'DSymObject'
            },
            'cpu_name': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object_path': ('django.db.models.fields.TextField', [], {
                'db_index': 'True'
            }),
            'uuid':
            ('django.db.models.fields.CharField', [], {
                'max_length': '36',
                'db_index': 'True'
            }),
            'vmaddr':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            }),
            'vmsize':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            })
        },
        'sentry.dsymsdk': {
            'Meta': {
                'object_name':
                'DSymSDK',
                'index_together':
                '[('version_major', 'version_minor', 'version_patchlevel', 'version_build')]'
            },
            'dsym_type':
            ('django.db.models.fields.CharField', [], {
                'max_length': '20',
                'db_index': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'sdk_name': ('django.db.models.fields.CharField', [], {
                'max_length': '20'
            }),
            'version_build': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'version_major': ('django.db.models.fields.IntegerField', [], {}),
            'version_minor': ('django.db.models.fields.IntegerField', [], {}),
            'version_patchlevel': ('django.db.models.fields.IntegerField', [], {})
        },
        'sentry.dsymsymbol': {
            'Meta': {
                'unique_together': '[('object', 'address')]',
                'object_name': 'DSymSymbol'
            },
            'address':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'db_index': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymObject']'
                }
            ),
            'symbol': ('django.db.models.fields.TextField', [], {})
        },
        'sentry.environment': {
            'Meta': {
                'unique_together': '(('project_id', 'name'),)',
                'object_name': 'Environment'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'project_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'projects': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.Project']',
                    'through': 'orm['sentry.EnvironmentProject']',
                    'symmetrical': 'False'
                }
            )
        },
        'sentry.environmentproject': {
            'Meta': {
                'unique_together': '(('project', 'environment'),)',
                'object_name': 'EnvironmentProject'
            },
            'environment': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Environment']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.event': {
            'Meta': {
                'unique_together': '(('project_id', 'event_id'),)',
                'object_name': 'Event',
                'db_table': ''sentry_message'',
                'index_together': '(('group_id', 'datetime'),)'
            },
            'data':
            ('sentry.db.models.fields.node.NodeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'datetime': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'event_id': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'null': 'True',
                    'db_column': ''message_id''
                }
            ),
            'group_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'message': ('django.db.models.fields.TextField', [], {}),
            'platform':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'time_spent':
            ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'null': 'True'
            })
        },
        'sentry.eventmapping': {
            'Meta': {
                'unique_together': '(('project_id', 'event_id'),)',
                'object_name': 'EventMapping'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.eventprocessingissue': {
            'Meta': {
                'unique_together': '(('raw_event', 'processing_issue'),)',
                'object_name': 'EventProcessingIssue'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'processing_issue': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ProcessingIssue']'
                }
            ),
            'raw_event': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.RawEvent']'
                }
            )
        },
        'sentry.eventtag': {
            'Meta': {
                'unique_together':
                '(('event_id', 'key_id', 'value_id'),)',
                'object_name':
                'EventTag',
                'index_together':
                '(('project_id', 'key_id', 'value_id'), ('group_id', 'key_id', 'value_id'))'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.eventuser': {
            'Meta': {
                'unique_together':
                '(('project', 'ident'), ('project', 'hash'))',
                'object_name':
                'EventUser',
                'index_together':
                '(('project', 'email'), ('project', 'username'), ('project', 'ip_address'))'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'email':
            ('django.db.models.fields.EmailField', [], {
                'max_length': '75',
                'null': 'True'
            }),
            'hash': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident':
            ('django.db.models.fields.CharField', [], {
                'max_length': '128',
                'null': 'True'
            }),
            'ip_address': (
                'django.db.models.fields.GenericIPAddressField', [], {
                    'max_length': '39',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'username':
            ('django.db.models.fields.CharField', [], {
                'max_length': '128',
                'null': 'True'
            })
        },
        'sentry.file': {
            'Meta': {
                'object_name': 'File'
            },
            'blob': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''legacy_blob'',
                    'null': 'True',
                    'to': 'orm['sentry.FileBlob']'
                }
            ),
            'blobs': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.FileBlob']',
                    'through': 'orm['sentry.FileBlobIndex']',
                    'symmetrical': 'False'
                }
            ),
            'checksum':
            ('django.db.models.fields.CharField', [], {
                'max_length': '40',
                'null': 'True'
            }),
            'headers': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'path': ('django.db.models.fields.TextField', [], {
                'null': 'True'
            }),
            'size':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'timestamp': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'type': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            })
        },
        'sentry.fileblob': {
            'Meta': {
                'object_name': 'FileBlob'
            },
            'checksum':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '40'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'path': ('django.db.models.fields.TextField', [], {
                'null': 'True'
            }),
            'size':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'timestamp': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            )
        },
        'sentry.fileblobindex': {
            'Meta': {
                'unique_together': '(('file', 'blob', 'offset'),)',
                'object_name': 'FileBlobIndex'
            },
            'blob': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.FileBlob']'
                }
            ),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'offset': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
        },
        'sentry.globaldsymfile': {
            'Meta': {
                'object_name': 'GlobalDSymFile'
            },
            'cpu_name': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object_name': ('django.db.models.fields.TextField', [], {}),
            'uuid':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '36'
            })
        },
        'sentry.group': {
            'Meta': {
                'unique_together': '(('project', 'short_id'),)',
                'object_name': 'Group',
                'db_table': ''sentry_groupedmessage'',
                'index_together': '(('project', 'first_release'),)'
            },
            'active_at':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'db_index': 'True'
            }),
            'culprit': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'db_column': ''view'',
                    'blank': 'True'
                }
            ),
            'data': (
                'sentry.db.models.fields.gzippeddict.GzippedDictField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'first_release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']',
                    'null': 'True',
                    'on_delete': 'models.PROTECT'
                }
            ),
            'first_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_public': (
                'django.db.models.fields.NullBooleanField', [], {
                    'default': 'False',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'level': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '40',
                    'db_index': 'True',
                    'blank': 'True'
                }
            ),
            'logger': (
                'django.db.models.fields.CharField', [], {
                    'default': '''',
                    'max_length': '64',
                    'db_index': 'True',
                    'blank': 'True'
                }
            ),
            'message': ('django.db.models.fields.TextField', [], {}),
            'num_comments': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'null': 'True'
                }
            ),
            'platform':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'resolved_at':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'db_index': 'True'
            }),
            'score': ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'default': '0'
            }),
            'short_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'null': 'True'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'time_spent_count':
            ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'default': '0'
            }),
            'time_spent_total':
            ('sentry.db.models.fields.bounded.BoundedIntegerField', [], {
                'default': '0'
            }),
            'times_seen': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '1',
                    'db_index': 'True'
                }
            )
        },
        'sentry.groupassignee': {
            'Meta': {
                'object_name': 'GroupAssignee',
                'db_table': ''sentry_groupasignee''
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''assignee_set'',
                    'unique': 'True',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''assignee_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''sentry_assignee_set'',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.groupbookmark': {
            'Meta': {
                'unique_together': '(('project', 'user', 'group'),)',
                'object_name': 'GroupBookmark'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''bookmark_set'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''bookmark_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''sentry_bookmark_set'',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.groupcommitresolution': {
            'Meta': {
                'unique_together': '(('group_id', 'commit_id'),)',
                'object_name': 'GroupCommitResolution'
            },
            'commit_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'datetime': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            })
        },
        'sentry.groupemailthread': {
            'Meta': {
                'unique_together': '(('email', 'group'), ('email', 'msgid'))',
                'object_name': 'GroupEmailThread'
            },
            'date': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''groupemail_set'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'msgid': ('django.db.models.fields.CharField', [], {
                'max_length': '100'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''groupemail_set'',
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.grouphash': {
            'Meta': {
                'unique_together': '(('project', 'hash'),)',
                'object_name': 'GroupHash'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'null': 'True'
                }
            ),
            'hash': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            )
        },
        'sentry.groupmeta': {
            'Meta': {
                'unique_together': '(('group', 'key'),)',
                'object_name': 'GroupMeta'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'value': ('django.db.models.fields.TextField', [], {})
        },
        'sentry.groupredirect': {
            'Meta': {
                'object_name': 'GroupRedirect'
            },
            'group_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'db_index': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'previous_group_id':
            ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                'unique': 'True'
            })
        },
        'sentry.grouprelease': {
            'Meta': {
                'unique_together': '(('group_id', 'release_id', 'environment'),)',
                'object_name': 'GroupRelease'
            },
            'environment':
            ('django.db.models.fields.CharField', [], {
                'default': '''',
                'max_length': '64'
            }),
            'first_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            )
        },
        'sentry.groupresolution': {
            'Meta': {
                'object_name': 'GroupResolution'
            },
            'datetime': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'unique': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            ),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.grouprulestatus': {
            'Meta': {
                'unique_together': '(('rule', 'group'),)',
                'object_name': 'GroupRuleStatus'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_active': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'rule': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Rule']'
                }
            ),
            'status': ('django.db.models.fields.PositiveSmallIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.groupseen': {
            'Meta': {
                'unique_together': '(('user', 'group'),)',
                'object_name': 'GroupSeen'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'db_index': 'False'
                }
            )
        },
        'sentry.groupsnooze': {
            'Meta': {
                'object_name': 'GroupSnooze'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'unique': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'until': ('django.db.models.fields.DateTimeField', [], {})
        },
        'sentry.groupsubscription': {
            'Meta': {
                'unique_together': '(('group', 'user'),)',
                'object_name': 'GroupSubscription'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''subscription_set'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''subscription_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'reason':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.grouptagkey': {
            'Meta': {
                'unique_together': '(('project', 'group', 'key'),)',
                'object_name': 'GroupTagKey'
            },
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'values_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.grouptagvalue': {
            'Meta': {
                'unique_together': '(('group', 'key', 'value'),)',
                'object_name': 'GroupTagValue',
                'db_table': ''sentry_messagefiltervalue'',
                'index_together': '(('project', 'key', 'value', 'last_seen'),)'
            },
            'first_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''grouptag'',
                    'to': 'orm['sentry.Group']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''grouptag'',
                    'null': 'True',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'times_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'value': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            })
        },
        'sentry.lostpasswordhash': {
            'Meta': {
                'object_name': 'LostPasswordHash'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'hash': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'unique': 'True'
                }
            )
        },
        'sentry.option': {
            'Meta': {
                'object_name': 'Option'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '64'
            }),
            'last_updated':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.organization': {
            'Meta': {
                'object_name': 'Organization'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'default_role':
            ('django.db.models.fields.CharField', [], {
                'default': ''member'',
                'max_length': '32'
            }),
            'flags': ('django.db.models.fields.BigIntegerField', [], {
                'default': '1'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'members': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'related_name': ''org_memberships'',
                    'symmetrical': 'False',
                    'through': 'orm['sentry.OrganizationMember']',
                    'to': 'orm['sentry.User']'
                }
            ),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'slug':
            ('django.db.models.fields.SlugField', [], {
                'unique': 'True',
                'max_length': '50'
            }),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.organizationaccessrequest': {
            'Meta': {
                'unique_together': '(('team', 'member'),)',
                'object_name': 'OrganizationAccessRequest'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'member': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.OrganizationMember']'
                }
            ),
            'team': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Team']'
                }
            )
        },
        'sentry.organizationavatar': {
            'Meta': {
                'object_name': 'OrganizationAvatar'
            },
            'avatar_type':
            ('django.db.models.fields.PositiveSmallIntegerField', [], {
                'default': '0'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']',
                    'unique': 'True',
                    'null': 'True',
                    'on_delete': 'models.SET_NULL'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': (
                'django.db.models.fields.CharField', [], {
                    'unique': 'True',
                    'max_length': '32',
                    'db_index': 'True'
                }
            ),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''avatar'',
                    'unique': 'True',
                    'to': 'orm['sentry.Organization']'
                }
            )
        },
        'sentry.organizationmember': {
            'Meta': {
                'unique_together': '(('organization', 'user'), ('organization', 'email'))',
                'object_name': 'OrganizationMember'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email': (
                'django.db.models.fields.EmailField', [], {
                    'max_length': '75',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'flags': ('django.db.models.fields.BigIntegerField', [], {
                'default': '0'
            }),
            'has_global_access': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''member_set'',
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'role':
            ('django.db.models.fields.CharField', [], {
                'default': ''member'',
                'max_length': '32'
            }),
            'teams': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'to': 'orm['sentry.Team']',
                    'symmetrical': 'False',
                    'through': 'orm['sentry.OrganizationMemberTeam']',
                    'blank': 'True'
                }
            ),
            'token': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'unique': 'True',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'type': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '50',
                    'blank': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'blank': 'True',
                    'related_name': ''sentry_orgmember_set'',
                    'null': 'True',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.organizationmemberteam': {
            'Meta': {
                'unique_together': '(('team', 'organizationmember'),)',
                'object_name': 'OrganizationMemberTeam',
                'db_table': ''sentry_organizationmember_teams''
            },
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'organizationmember': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.OrganizationMember']'
                }
            ),
            'team': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Team']'
                }
            )
        },
        'sentry.organizationonboardingtask': {
            'Meta': {
                'unique_together': '(('organization', 'task'),)',
                'object_name': 'OrganizationOnboardingTask'
            },
            'data': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_completed':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'task': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True'
                }
            )
        },
        'sentry.organizationoption': {
            'Meta': {
                'unique_together': '(('organization', 'key'),)',
                'object_name': 'OrganizationOption',
                'db_table': ''sentry_organizationoptions''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.processingissue': {
            'Meta': {
                'unique_together': '(('project', 'checksum', 'type'),)',
                'object_name': 'ProcessingIssue'
            },
            'checksum':
            ('django.db.models.fields.CharField', [], {
                'max_length': '40',
                'db_index': 'True'
            }),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {}),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'type': ('django.db.models.fields.CharField', [], {
                'max_length': '30'
            })
        },
        'sentry.project': {
            'Meta': {
                'unique_together': '(('team', 'slug'), ('organization', 'slug'))',
                'object_name': 'Project'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'first_event': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'flags':
            ('django.db.models.fields.BigIntegerField', [], {
                'default': '0',
                'null': 'True'
            }),
            'forced_color': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '6',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'public': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'slug': ('django.db.models.fields.SlugField', [], {
                'max_length': '50',
                'null': 'True'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'team': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Team']'
                }
            )
        },
        'sentry.projectbookmark': {
            'Meta': {
                'unique_together': '(('project_id', 'user'),)',
                'object_name': 'ProjectBookmark'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.projectdsymfile': {
            'Meta': {
                'unique_together': '(('project', 'uuid'),)',
                'object_name': 'ProjectDSymFile'
            },
            'cpu_name': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'object_name': ('django.db.models.fields.TextField', [], {}),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'uuid': ('django.db.models.fields.CharField', [], {
                'max_length': '36'
            })
        },
        'sentry.projectkey': {
            'Meta': {
                'object_name': 'ProjectKey'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'label': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''key_set'',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'public_key': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'unique': 'True',
                    'null': 'True'
                }
            ),
            'roles': ('django.db.models.fields.BigIntegerField', [], {
                'default': '1'
            }),
            'secret_key': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '32',
                    'unique': 'True',
                    'null': 'True'
                }
            ),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            )
        },
        'sentry.projectoption': {
            'Meta': {
                'unique_together': '(('project', 'key'),)',
                'object_name': 'ProjectOption',
                'db_table': ''sentry_projectoptions''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.projectplatform': {
            'Meta': {
                'unique_together': '(('project_id', 'platform'),)',
                'object_name': 'ProjectPlatform'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'platform': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {})
        },
        'sentry.rawevent': {
            'Meta': {
                'unique_together': '(('project', 'event_id'),)',
                'object_name': 'RawEvent'
            },
            'data':
            ('sentry.db.models.fields.node.NodeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '32',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.release': {
            'Meta': {
                'unique_together': '(('organization', 'version'),)',
                'object_name': 'Release'
            },
            'data': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'date_released':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'date_started':
            ('django.db.models.fields.DateTimeField', [], {
                'null': 'True',
                'blank': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'new_groups':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'owner': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'project_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'projects': (
                'django.db.models.fields.related.ManyToManyField', [], {
                    'related_name': ''releases'',
                    'symmetrical': 'False',
                    'through': 'orm['sentry.ReleaseProject']',
                    'to': 'orm['sentry.Project']'
                }
            ),
            'ref': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '64',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'url': (
                'django.db.models.fields.URLField', [], {
                    'max_length': '200',
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'version': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            })
        },
        'sentry.releasecommit': {
            'Meta': {
                'unique_together': '(('release', 'commit'), ('release', 'order'))',
                'object_name': 'ReleaseCommit'
            },
            'commit': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Commit']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'order': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.releaseenvironment': {
            'Meta': {
                'unique_together': '(('project_id', 'release_id', 'environment_id'),)',
                'object_name': 'ReleaseEnvironment',
                'db_table': ''sentry_environmentrelease''
            },
            'environment_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'first_seen':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'db_index': 'True'
                }
            ),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'project_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'release_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            )
        },
        'sentry.releasefile': {
            'Meta': {
                'unique_together': '(('release', 'ident'),)',
                'object_name': 'ReleaseFile'
            },
            'dist': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Distribution']',
                    'null': 'True'
                }
            ),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': ('django.db.models.fields.CharField', [], {
                'max_length': '40'
            }),
            'name': ('django.db.models.fields.TextField', [], {}),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'project_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'null': 'True'
            }),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.releaseheadcommit': {
            'Meta': {
                'unique_together': '(('repository_id', 'release'),)',
                'object_name': 'ReleaseHeadCommit'
            },
            'commit': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Commit']'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            ),
            'repository_id':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
        },
        'sentry.releaseproject': {
            'Meta': {
                'unique_together': '(('project', 'release'),)',
                'object_name': 'ReleaseProject',
                'db_table': ''sentry_release_project''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'new_groups': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'release': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Release']'
                }
            )
        },
        'sentry.repository': {
            'Meta': {
                'unique_together':
                '(('organization_id', 'name'), ('organization_id', 'provider', 'external_id'))',
                'object_name':
                'Repository'
            },
            'config': ('jsonfield.fields.JSONField', [], {
                'default': '{}'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'external_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            }),
            'organization_id': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'db_index': 'True'
                }
            ),
            'provider':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            ),
            'url': ('django.db.models.fields.URLField', [], {
                'max_length': '200',
                'null': 'True'
            })
        },
        'sentry.reprocessingreport': {
            'Meta': {
                'unique_together': '(('project', 'event_id'),)',
                'object_name': 'ReprocessingReport'
            },
            'datetime':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'event_id':
            ('django.db.models.fields.CharField', [], {
                'max_length': '32',
                'null': 'True'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.rule': {
            'Meta': {
                'object_name': 'Rule'
            },
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {}),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'label': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'status': (
                'sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                    'default': '0',
                    'db_index': 'True'
                }
            )
        },
        'sentry.savedsearch': {
            'Meta': {
                'unique_together': '(('project', 'name'),)',
                'object_name': 'SavedSearch'
            },
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_default': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'owner': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'query': ('django.db.models.fields.TextField', [], {})
        },
        'sentry.savedsearchuserdefault': {
            'Meta': {
                'unique_together': '(('project', 'user'),)',
                'object_name': 'SavedSearchUserDefault',
                'db_table': ''sentry_savedsearch_userdefault''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'savedsearch': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.SavedSearch']'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.tagkey': {
            'Meta': {
                'unique_together': '(('project', 'key'),)',
                'object_name': 'TagKey',
                'db_table': ''sentry_filterkey''
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'label':
            ('django.db.models.fields.CharField', [], {
                'max_length': '64',
                'null': 'True'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            ),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'values_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.tagvalue': {
            'Meta': {
                'unique_together': '(('project', 'key', 'value'),)',
                'object_name': 'TagValue',
                'db_table': ''sentry_filtervalue''
            },
            'data': (
                'sentry.db.models.fields.gzippeddict.GzippedDictField', [], {
                    'null': 'True',
                    'blank': 'True'
                }
            ),
            'first_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'last_seen': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True',
                    'db_index': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'times_seen':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            }),
            'value': ('django.db.models.fields.CharField', [], {
                'max_length': '200'
            })
        },
        'sentry.team': {
            'Meta': {
                'unique_together': '(('organization', 'slug'),)',
                'object_name': 'Team'
            },
            'date_added': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime.now',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']'
                }
            ),
            'slug': ('django.db.models.fields.SlugField', [], {
                'max_length': '50'
            }),
            'status':
            ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {
                'default': '0'
            })
        },
        'sentry.user': {
            'Meta': {
                'object_name': 'User',
                'db_table': ''auth_user''
            },
            'date_joined':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email':
            ('django.db.models.fields.EmailField', [], {
                'max_length': '75',
                'blank': 'True'
            }),
            'id': ('sentry.db.models.fields.bounded.BoundedAutoField', [], {
                'primary_key': 'True'
            }),
            'is_active': ('django.db.models.fields.BooleanField', [], {
                'default': 'True'
            }),
            'is_managed': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'is_password_expired':
            ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'is_staff': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'is_superuser': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'last_login':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'last_password_change': ('django.db.models.fields.DateTimeField', [], {
                'null': 'True'
            }),
            'name': (
                'django.db.models.fields.CharField', [], {
                    'max_length': '200',
                    'db_column': ''first_name'',
                    'blank': 'True'
                }
            ),
            'password': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'session_nonce':
            ('django.db.models.fields.CharField', [], {
                'max_length': '12',
                'null': 'True'
            }),
            'username':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '128'
            })
        },
        'sentry.useravatar': {
            'Meta': {
                'object_name': 'UserAvatar'
            },
            'avatar_type':
            ('django.db.models.fields.PositiveSmallIntegerField', [], {
                'default': '0'
            }),
            'file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.File']',
                    'unique': 'True',
                    'null': 'True',
                    'on_delete': 'models.SET_NULL'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'ident': (
                'django.db.models.fields.CharField', [], {
                    'unique': 'True',
                    'max_length': '32',
                    'db_index': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''avatar'',
                    'unique': 'True',
                    'to': 'orm['sentry.User']'
                }
            )
        },
        'sentry.useremail': {
            'Meta': {
                'unique_together': '(('user', 'email'),)',
                'object_name': 'UserEmail'
            },
            'date_hash_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'is_verified': ('django.db.models.fields.BooleanField', [], {
                'default': 'False'
            }),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'related_name': ''emails'',
                    'to': 'orm['sentry.User']'
                }
            ),
            'validation_hash': (
                'django.db.models.fields.CharField', [], {
                    'default': 'u'l4A21o5gpZSRDUpRQEb92qNepWS1An9R'',
                    'max_length': '32'
                }
            )
        },
        'sentry.useroption': {
            'Meta': {
                'unique_together': '(('user', 'project', 'key'), ('user', 'organization', 'key'))',
                'object_name': 'UserOption'
            },
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': ('django.db.models.fields.CharField', [], {
                'max_length': '64'
            }),
            'organization': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Organization']',
                    'null': 'True'
                }
            ),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']',
                    'null': 'True'
                }
            ),
            'user': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.User']'
                }
            ),
            'value': ('sentry.db.models.fields.encrypted.EncryptedPickledObjectField', [], {})
        },
        'sentry.userreport': {
            'Meta': {
                'unique_together': '(('project', 'event_id'),)',
                'object_name': 'UserReport',
                'index_together': '(('project', 'event_id'), ('project', 'date_added'))'
            },
            'comments': ('django.db.models.fields.TextField', [], {}),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'email': ('django.db.models.fields.EmailField', [], {
                'max_length': '75'
            }),
            'event_id': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            }),
            'group': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Group']',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'name': ('django.db.models.fields.CharField', [], {
                'max_length': '128'
            }),
            'project': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.Project']'
                }
            )
        },
        'sentry.versiondsymfile': {
            'Meta': {
                'unique_together': '(('dsym_file', 'version', 'build'),)',
                'object_name': 'VersionDSymFile'
            },
            'build':
            ('django.db.models.fields.CharField', [], {
                'max_length': '32',
                'null': 'True'
            }),
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'dsym_app': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.DSymApp']'
                }
            ),
            'dsym_file': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ProjectDSymFile']',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'version': ('django.db.models.fields.CharField', [], {
                'max_length': '32'
            })
        }
    }
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
from detectron.utils.net import get_group_gn
import detectron.modeling.ResNet as ResNet
import detectron.utils.blob as blob_utils
import detectron.utils.boxes as box_utils
    
    
def bottleneck_transformation(
    model,
    blob_in,
    dim_in,
    dim_out,
    stride,
    prefix,
    dim_inner,
    dilation=1,
    group=1
):
    '''Add a bottleneck transformation to the model.'''
    # In original resnet, stride=2 is on 1x1.
    # In fb.torch resnet, stride=2 is on 3x3.
    (str1x1, str3x3) = (stride, 1) if cfg.RESNETS.STRIDE_1X1 else (1, stride)
    
    
def get_func(func_name):
    '''Helper to return a function object by name. func_name must identify a
    function in this module or the path to a function relative to the base
    'modeling' module.
    '''
    if func_name == '':
        return None
    new_func_name = name_compat.get_new_name(func_name)
    if new_func_name != func_name:
        logger.warn(
            'Remapping old function name: {} -> {}'.
            format(func_name, new_func_name)
        )
        func_name = new_func_name
    try:
        parts = func_name.split('.')
        # Refers to a function in this module
        if len(parts) == 1:
            return globals()[parts[0]]
        # Otherwise, assume we're referencing a module under modeling
        module_name = 'detectron.modeling.' + '.'.join(parts[:-1])
        module = importlib.import_module(module_name)
        return getattr(module, parts[-1])
    except Exception:
        logger.error('Failed to find function: {}'.format(func_name))
        raise
    
    
def get_field_of_anchors(
    stride, anchor_sizes, anchor_aspect_ratios, octave=None, aspect=None
):
    global _threadlocal_foa
    if not hasattr(_threadlocal_foa, 'cache'):
        _threadlocal_foa.cache = {}
    
        num_keypoints = gt_keypoints.shape[2]
    sampled_keypoints = -np.ones(
        (len(sampled_fg_rois), gt_keypoints.shape[1], num_keypoints),
        dtype=gt_keypoints.dtype
    )
    for ii in range(len(sampled_fg_rois)):
        ind = box_to_gt_ind_map[ii]
        if ind >= 0:
            sampled_keypoints[ii, :, :] = gt_keypoints[gt_inds[ind], :, :]
            assert np.sum(sampled_keypoints[ii, 2, :]) > 0
    
    logger = logging.getLogger(__name__)
    
        def format(self, record):
        if isinstance(record.msg, six.binary_type):
            record.msg = record.msg.decode('utf-8')
        message = super(ConsoleWarningFormatter, self).format(record)
        return '{0}{1}'.format(self.get_level_message(record), message)

    
        def test_start_failure(self):
        with mock.patch('compose.service.Service.start_container', crash):
            with pytest.raises(Crash):
                self.project.up(strategy=ConvergenceStrategy.always)
    
            sorted_services = sort_service_dicts(services)
        assert len(sorted_services) == 3
        assert sorted_services[0]['name'] == 'child'
        assert sorted_services[1]['name'] == 'parent'
        assert sorted_services[2]['name'] == 'grandparent'
    
        def mock_register(self):
        '''Context manager for mocking out registration.
    
            self.amqp.assert_event_item(
            dict(
                event_topic='vote_server',
                event_type='server_vote',
                payload={
                    'vote_direction': 'up',
                    'target_type': 'magicmock',
                    'target_age_seconds': initial_vote.thing._age.total_seconds(),
                    'target_rank': initial_vote.data['rank'],
                    'sr_id': initial_vote.thing.subreddit_slow._id,
                    'sr_name': initial_vote.thing.subreddit_slow.name,
                    'target_fullname': initial_vote.thing._fullname,
                    'target_name': initial_vote.thing.name,
                    'target_id': initial_vote.thing._id,
                    'details_text': notes,
                    'process_notes': enum_name,
                    'auto_self_vote': True,
                }
            )
        )
    
        def test_filtered_modules_do_not_include_filtered_sources(self):
        test_files = ['foo.js', 'bar.js']
        filtered_files = ['baz.js', 'qux.js']
        all_files = test_files + filtered_files
        filter_module = TestModule('filter_module', *filtered_files)
        test_module = TestModule('test_module', filter_module=filter_module, *all_files)
        self.assertEqual(test_module.build(), concat_sources(test_files))

    
            u = UrlParser('http://examples.imgix.net/frog.jpg')
        u.update_query(w=100)
        signed_url = self.provider._sign_url(u, 'abcdef')
        self.assertEqual(signed_url.unparse(),
                'http://examples.imgix.net/frog.jpg?w=100&s=cd3bdf071108af73b15c21bdcee5e49c')
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'http://s3.amazonaws.com/a.jpg')

    
        def test_padding_roundtrip(self):
        from r2.lib.tracking import _unpad_message, _pad_message
        tested = _unpad_message(_pad_message(MESSAGE))
        self.assertEquals(MESSAGE, tested)