
        
        import os
import h5py
import numpy as np
from six.moves import xrange
    
      return data_e, x0s, inputs_e
    
      # print('Number of batches per epoch: %d' % epoch_size)
  for i in range(epoch_size):
    x = data[:, i * num_steps:(i + 1) * num_steps]
    y = data[:, i * num_steps + 1:(i + 1) * num_steps + 1]
    w = np.ones_like(x)
    yield (x, y, w)

    
        for index, pred in zip(index_batch, pred_batch):
      indices_predictions.append([str(id_to_word[index]), pred])
    batch_of_indices_predictions.append(indices_predictions)
  return batch_of_indices_predictions
    
      else:
    raise NotImplementedError
    
      # The unique ngrams in the training set.
  unique_ngrams_in_train = 0.
    
        def create_asset(self, release_id, asset):
        asset_name = os.path.basename(asset)
        url = self._UPLOADS_URL % (release_id, asset_name)
        # Our files are small enough to be loaded directly into memory.
        data = open(asset, 'rb').read()
        req = sanitized_Request(url, data)
        mime_type, _ = mimetypes.guess_type(asset_name)
        req.add_header('Content-Type', mime_type or 'application/octet-stream')
        return self._call(req)
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
    import youtube_dl
    
        infile, outfile = args
    
    import itertools
import json
import os
import re
import sys
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
class PrettyStream(EncodedStream):
    '''In addition to :class:`EncodedStream` behaviour, this stream applies
    content processing.
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    This allows the scaling of the algorithm with the problem size to be
visualized and understood.
'''
from __future__ import print_function
    
        ###########################################################################
    # Remove unspecified algorithm
    sampling_algorithm = dict((key, value)
                              for key, value in sampling_algorithm.items()
                              if key in selected_algorithm)
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    
# Symlinks should have same data as target
for src, dst in symlinks.items():
    if dst in dirs:
        dirs[src] = dirs[dst]
    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
        @classmethod
    def _format_parsed_parts(cls, drv, root, parts):
        if drv or root:
            return drv + root + cls._flavour.join(parts[1:])
        else:
            return cls._flavour.join(parts)
    
                self.assertEqual(realpath(ABSTFN+'1/x'), ABSTFN+'1/x')
            self.assertEqual(realpath(ABSTFN+'1/..'), dirname(ABSTFN))
            self.assertEqual(realpath(ABSTFN+'1/../x'), dirname(ABSTFN) + '/x')
            os.symlink(ABSTFN+'x', ABSTFN+'y')
            self.assertEqual(realpath(ABSTFN+'1/../' + basename(ABSTFN) + 'y'),
                             ABSTFN + 'y')
            self.assertEqual(realpath(ABSTFN+'1/../' + basename(ABSTFN) + '1'),
                             ABSTFN + '1')
    
        If the resulting string contains path separators, an exception is raised.
    '''
    parent, file_name = os.path.split(path)
    if parent:
        raise ValueError('{!r} must be only a file name'.format(path))
    else:
        return file_name
    
    # Add the html version.  This converts the message into a multipart/alternative
# container, with the original text message as the first part and the new html
# message as the second part.
asparagus_cid = make_msgid()
msg.add_alternative('''\
<html>
  <head></head>
  <body>
    <p>Salut!</p>
    <p>Cela ressemble à un excellent
        <a href='http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718'>
            recipie
        </a> déjeuner.
    </p>
    <img src='cid:{asparagus_cid}' />
  </body>
</html>
'''.format(asparagus_cid=asparagus_cid[1:-1]), subtype='html')
# note that we needed to peel the <> off the msgid for use in the html.
    
    from argparse import ArgumentParser
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
            print('Testing ApplyResult.get() with timeout:', end=' ')
        res = pool.apply_async(calculate, TASKS[0])
        while 1:
            sys.stdout.flush()
            try:
                sys.stdout.write('\n\t%s' % res.get(0.02))
                break
            except multiprocessing.TimeoutError:
                sys.stdout.write('.')
        print()
        print()
    
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
    
            # Adding model 'RawEvent'
        db.create_table(
            'sentry_rawevent', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'event_id',
                    self.gf('django.db.models.fields.CharField')(max_length=32, null=True)
                ), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
                ('data', self.gf('sentry.db.models.fields.node.NodeField')(null=True, blank=True)),
            )
        )
        db.send_create_signal('sentry', ['RawEvent'])
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
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
                    'default': ''135b6360d1764c58ba28e28e52d056db29d8b3aef78d44e3a1c6ceb7918584df'',
                    'unique': 'True',
                    'max_length': '64'
                }
            ),
            'client_secret': (
                'sentry.db.models.fields.encrypted.EncryptedTextField', [], {
                    'default': ''35c0167bca634f73bbdddf471c91d7a3afcaf4a4b5d345bd84fe06d63cfc1f27''
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
                    'default': ''Capitalistic Bertram'',
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
                    'default': ''4c2bd8b2bdd44293a026aa45041b0d46'',
                    'max_length': '64',
                    'db_index': 'True'
                }
            ),
            'expires_at': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 3, 21, 0, 0)',
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
                    'default': 'datetime.datetime(2017, 4, 20, 0, 0)',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'refresh_token': (
                'django.db.models.fields.CharField', [], {
                    'default': ''090b07daf204407997a0cb11512dc7ed45238bab733049c5a4c6ae2e026ea380'',
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
                    'default': ''555b5b6a1fb04abf92ec05642ce6eccdfc45f4dcabec48c6b4e5952595ae2a82'',
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
                    'default': 'datetime.datetime(2017, 3, 28, 0, 0)',
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
                    'default': 'u'vWbHmbYO18VmmrAcL4njpJeydgCctzV3'',
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
        }
    }
    
    
def make_handler(value):
    return BitHandler(
        keys=(
            'project:read', 'project:write', 'project:admin', 'project:releases', 'team:read',
            'team:write', 'team:admin', 'event:read', 'event:write', 'event:admin', 'org:read',
            'org:write', 'org:admin', 'member:read', 'member:write', 'member:admin',
        ),
        value=value,
    )
    
        def backwards(self, orm):
        # Removing unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.delete_unique('sentry_commitauthor', ['organization_id', 'external_id'])
    
            # Adding unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.create_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
            self.assertEqual(len(detected_faces), 1)
        self.assertAlmostEqual(detected_faces[0].rect.top(), 259, delta=25)
        self.assertAlmostEqual(detected_faces[0].rect.bottom(), 552, delta=25)
    
    setup(
    name='face_recognition',
    version='1.2.3',
    description='Recognize faces from Python or from the command line',
    long_description=readme + '\n\n' + history,
    author='Adam Geitgey',
    author_email='ageitgey@gmail.com',
    url='https://github.com/ageitgey/face_recognition',
    packages=[
        'face_recognition',
    ],
    package_dir={'face_recognition': 'face_recognition'},
    package_data={
        'face_recognition': ['models/*.dat']
    },
    entry_points={
        'console_scripts': [
            'face_recognition=face_recognition.face_recognition_cli:main',
            'face_detection=face_recognition.face_detection_cli:main'
        ]
    },
    install_requires=requirements,
    license='MIT license',
    zip_safe=False,
    keywords='face_recognition',
    classifiers=[
        'Development Status :: 4 - Beta',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    test_suite='tests',
    tests_require=test_requirements
)

    
    # 你需要一个2代以上的树莓派，并在树莓派上安装face_recognition，并连接上picamera摄像头
# 并确保picamera这个模块已经安装（树莓派一般会内置安装）
# 你可以参考这个教程配制你的树莓派：
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
    
class POSTHandler(tornado.web.RequestHandler):
    def post(self):
        for field_name, files in self.request.files.items():
            for info in files:
                filename, content_type = info['filename'], info['content_type']
                body = info['body']
                logging.info('POST '%s' '%s' %d bytes',
                             filename, content_type, len(body))
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/chatsocket', ChatSocketHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
        )
        super(Application, self).__init__(handlers, **settings)
    
        url_seeker = URLSeeker()
    url_seeker.feed(html)
    return url_seeker.urls
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
    RedHat and CentOS users should issue the following command: