
        
            publicKey = (n, e)
    privateKey = (n, d)
    return (publicKey, privateKey)
    
        def __hash_double_function(self, key, data, increment):
        return (increment * self.__hash_function_2(key, data)) % self.size_table
    
    if __name__ == '__main__':
        try:
            raw_input          # Python 2
        except NameError:
            raw_input = input  # Python 3
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
    def main():
    '''
    In this demonstration we're generating a sample data set from the sin function in numpy.
    We then train a decision tree on the data set and use the decision tree to predict the
    label of 10 different test values. Then the mean squared error over this test is displayed.
    '''
    X = np.arange(-1., 1., 0.005)
    y = np.sin(X)
    
        Using log and roots can be perceived as tools for penalizing big
    erors. However, using appropriate metrics depends on the situations,
    and types of data
'''
    
            a += a
        b >>= 1
    
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
            'date_added':
            ('django.db.models.fields.DateTimeField', [], {
                'default': 'datetime.datetime.now'
            }),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'key': (
                'sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {
                    'to': 'orm['sentry.ApiKey']',
                    'null': 'True'
                }
            ),
            'scopes': ('django.db.models.fields.BigIntegerField', [], {
                'default': 'None'
            }),
            'token':
            ('django.db.models.fields.CharField', [], {
                'unique': 'True',
                'max_length': '64'
            }),
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
            'config': ('sentry.db.models.fields.pickle.UnicodePickledObjectField', [], {}),
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
            'config': ('jsonfield.fields.JSONField', [], {
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
                    'default': 'datetime.datetime(2017, 2, 2, 0, 0)',
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
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {})
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
            'value': ('sentry.db.models.fields.pickle.UnicodePickledObjectField', [], {})
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
            'value': ('sentry.db.models.fields.pickle.UnicodePickledObjectField', [], {})
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
            'value': ('sentry.db.models.fields.pickle.UnicodePickledObjectField', [], {})
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
        'sentry.release': {
            'Meta': {
                'unique_together': '(('project_id', 'version'),)',
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
                    'default': 'u'hutiIQCjOcZ40FC5LkOIVljGBHRBy1Eo'',
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
            'value': ('sentry.db.models.fields.pickle.UnicodePickledObjectField', [], {})
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
    
            # Deleting field 'Environment.organization_id'
        db.delete_column('sentry_environment', 'organization_id')
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
        def _forwards(self, orm):
        'Write your forwards methods here.'
    
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
    
            if withWeight:
            tags = sorted(freq.items(), key=itemgetter(1), reverse=True)
        else:
            tags = sorted(freq, key=freq.__getitem__, reverse=True)
        if topK:
            return tags[:topK]
        else:
            return tags

    
    print(','.join(tags))

    
    print(','.join(tags))

    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)
    
    
test_contents = [
    '这是一个伸手不见五指的黑夜。我叫孙悟空，我爱北京，我爱Python和C++。',
    '我不喜欢日本和服。',
    '雷猴回归人间。',
    '工信处女干事每月经过下属科室都要亲口交代24口交换机等技术性器件的安装工作',
    '我需要廉租房',
    '永和服装饰品有限公司',
    '我爱北京天安门',
    'abc',
    '隐马尔可夫',
    '雷猴是个好网站',
    '“Microsoft”一词由“MICROcomputer（微型计算机）”和“SOFTware（软件）”两部分组成',
    '草泥马和欺实马是今年的流行词汇',
    '伊藤洋华堂总府店',
    '中国科学院计算技术研究所',
    '罗密欧与朱丽叶',
    '我购买了道具和服装',
    'PS: 我觉得开源有一个好处，就是能够敦促自己不断改进，避免敞帚自珍',
    '湖北省石首市',
    '湖北省十堰市',
    '总经理完成了这件事情',
    '电脑修好了',
    '做好了这件事情就一了百了了',
    '人们审美的观点是不同的',
    '我们买了一个美的空调',
    '线程初始化时我们要注意',
    '一个分子是由好多原子组织成的',
    '祝你马到功成',
    '他掉进了无底洞里',
    '中国的首都是北京',
    '孙君意',
    '外交部发言人马朝旭',
    '领导人会议和第四届东亚峰会',
    '在过去的这五年',
    '还需要很长的路要走',
    '60周年首都阅兵',
    '你好人们审美的观点是不同的',
    '买水果然后来世博园',
    '买水果然后去世博园',
    '但是后来我才知道你是对的',
    '存在即合理',
    '的的的的的在的的的的就以和和和',
    'I love你，不以为耻，反以为rong',
    '因',
    '',
    'hello你好人们审美的观点是不同的',
    '很好但主要是基于网页形式',
    'hello你好人们审美的观点是不同的',
    '为什么我不能拥有想要的生活',
    '后来我才',
    '此次来中国是为了',
    '使用了它就可以解决一些问题',
    ',使用了它就可以解决一些问题',
    '其实使用了它就可以解决一些问题',
    '好人使用了它就可以解决一些问题',
    '是因为和国家',
    '老年搜索还支持',
    '干脆就把那部蒙人的闲法给废了拉倒！RT @laoshipukong : 27日，全国人大常委会第三次审议侵权责任法草案，删除了有关医疗损害责任“举证倒置”的规定。在医患纠纷中本已处于弱势地位的消费者由此将陷入万劫不复的境地。 ',
    '大',
    '',
    '他说的确实在理',
    '长春市长春节讲话',
    '结婚的和尚未结婚的',
    '结合成分子时',
    '旅游和服务是最好的',
    '这件事情的确是我的错',
    '供大家参考指正',
    '哈尔滨政府公布塌桥原因',
    '我在机场入口处',
    '邢永臣摄影报道',
    'BP神经网络如何训练才能在分类时增加区分度？',
    '南京市长江大桥',
    '应一些使用者的建议，也为了便于利用NiuTrans用于SMT研究',
    '长春市长春药店',
    '邓颖超生前最喜欢的衣服',
    '胡锦涛是热爱世界和平的政治局常委',
    '程序员祝海林和朱会震是在孙健的左面和右面, 范凯在最右面.再往左是李松洪',
    '一次性交多少钱',
    '两块五一套，三块八一斤，四块七一本，五块六一条',
    '小和尚留了一个像大和尚一样的和尚头',
    '我是中华人民共和国公民;我爸爸是共和党党员; 地铁和平门站',
    '张晓梅去人民医院做了个B超然后去买了件T恤',
    'AT&T是一件不错的公司，给你发offer了吗？',
    'C++和c#是什么关系？11+122=133，是吗？PI=3.14159',
    '你认识那个和主席握手的的哥吗？他开一辆黑色的士。',
    '枪杆子中出政权']
    
    
    
    from . import constants
import re
    
    EUCKR_TABLE_SIZE = 2352
    
            aBuf = self.filter_high_bit_only(aBuf)
    
    JISCharToFreqOrder = (
  40,   1,   6, 182, 152, 180, 295,2127, 285, 381,3295,4304,3068,4606,3165,3510, #   16
3511,1822,2785,4607,1193,2226,5070,4608, 171,2996,1247,  18, 179,5071, 856,1661, #   32
1262,5072, 619, 127,3431,3512,3230,1899,1700, 232, 228,1294,1298, 284, 283,2041, #   48
2042,1061,1062,  48,  49,  44,  45, 433, 434,1040,1041, 996, 787,2997,1255,4305, #   64
2108,4609,1684,1648,5073,5074,5075,5076,5077,5078,3687,5079,4610,5080,3927,3928, #   80
5081,3296,3432, 290,2285,1471,2187,5082,2580,2825,1303,2140,1739,1445,2691,3375, #   96
1691,3297,4306,4307,4611, 452,3376,1182,2713,3688,3069,4308,5083,5084,5085,5086, #  112
5087,5088,5089,5090,5091,5092,5093,5094,5095,5096,5097,5098,5099,5100,5101,5102, #  128
5103,5104,5105,5106,5107,5108,5109,5110,5111,5112,4097,5113,5114,5115,5116,5117, #  144
5118,5119,5120,5121,5122,5123,5124,5125,5126,5127,5128,5129,5130,5131,5132,5133, #  160
5134,5135,5136,5137,5138,5139,5140,5141,5142,5143,5144,5145,5146,5147,5148,5149, #  176
5150,5151,5152,4612,5153,5154,5155,5156,5157,5158,5159,5160,5161,5162,5163,5164, #  192
5165,5166,5167,5168,5169,5170,5171,5172,5173,5174,5175,1472, 598, 618, 820,1205, #  208
1309,1412,1858,1307,1692,5176,5177,5178,5179,5180,5181,5182,1142,1452,1234,1172, #  224
1875,2043,2149,1793,1382,2973, 925,2404,1067,1241, 960,1377,2935,1491, 919,1217, #  240
1865,2030,1406,1499,2749,4098,5183,5184,5185,5186,5187,5188,2561,4099,3117,1804, #  256
2049,3689,4309,3513,1663,5189,3166,3118,3298,1587,1561,3433,5190,3119,1625,2998, #  272
3299,4613,1766,3690,2786,4614,5191,5192,5193,5194,2161,  26,3377,   2,3929,  20, #  288
3691,  47,4100,  50,  17,  16,  35, 268,  27, 243,  42, 155,  24, 154,  29, 184, #  304
   4,  91,  14,  92,  53, 396,  33, 289,   9,  37,  64, 620,  21,  39, 321,   5, #  320
  12,  11,  52,  13,   3, 208, 138,   0,   7,  60, 526, 141, 151,1069, 181, 275, #  336
1591,  83, 132,1475, 126, 331, 829,  15,  69, 160,  59,  22, 157,  55,1079, 312, #  352
 109,  38,  23,  25,  10,  19,  79,5195,  61, 382,1124,   8,  30,5196,5197,5198, #  368
5199,5200,5201,5202,5203,5204,5205,5206,  89,  62,  74,  34,2416, 112, 139, 196, #  384
 271, 149,  84, 607, 131, 765,  46,  88, 153, 683,  76, 874, 101, 258,  57,  80, #  400
  32, 364, 121,1508, 169,1547,  68, 235, 145,2999,  41, 360,3027,  70,  63,  31, #  416
  43, 259, 262,1383,  99, 533, 194,  66,  93, 846, 217, 192,  56, 106,  58, 565, #  432
 280, 272, 311, 256, 146,  82, 308,  71, 100, 128, 214, 655, 110, 261, 104,1140, #  448
  54,  51,  36,  87,  67,3070, 185,2618,2936,2020,  28,1066,2390,2059,5207,5208, #  464
5209,5210,5211,5212,5213,5214,5215,5216,4615,5217,5218,5219,5220,5221,5222,5223, #  480
5224,5225,5226,5227,5228,5229,5230,5231,5232,5233,5234,5235,5236,3514,5237,5238, #  496
5239,5240,5241,5242,5243,5244,2297,2031,4616,4310,3692,5245,3071,5246,3598,5247, #  512
4617,3231,3515,5248,4101,4311,4618,3808,4312,4102,5249,4103,4104,3599,5250,5251, #  528
5252,5253,5254,5255,5256,5257,5258,5259,5260,5261,5262,5263,5264,5265,5266,5267, #  544
5268,5269,5270,5271,5272,5273,5274,5275,5276,5277,5278,5279,5280,5281,5282,5283, #  560
5284,5285,5286,5287,5288,5289,5290,5291,5292,5293,5294,5295,5296,5297,5298,5299, #  576
5300,5301,5302,5303,5304,5305,5306,5307,5308,5309,5310,5311,5312,5313,5314,5315, #  592
5316,5317,5318,5319,5320,5321,5322,5323,5324,5325,5326,5327,5328,5329,5330,5331, #  608
5332,5333,5334,5335,5336,5337,5338,5339,5340,5341,5342,5343,5344,5345,5346,5347, #  624
5348,5349,5350,5351,5352,5353,5354,5355,5356,5357,5358,5359,5360,5361,5362,5363, #  640
5364,5365,5366,5367,5368,5369,5370,5371,5372,5373,5374,5375,5376,5377,5378,5379, #  656
5380,5381, 363, 642,2787,2878,2788,2789,2316,3232,2317,3434,2011, 165,1942,3930, #  672
3931,3932,3933,5382,4619,5383,4620,5384,5385,5386,5387,5388,5389,5390,5391,5392, #  688
5393,5394,5395,5396,5397,5398,5399,5400,5401,5402,5403,5404,5405,5406,5407,5408, #  704
5409,5410,5411,5412,5413,5414,5415,5416,5417,5418,5419,5420,5421,5422,5423,5424, #  720
5425,5426,5427,5428,5429,5430,5431,5432,5433,5434,5435,5436,5437,5438,5439,5440, #  736
5441,5442,5443,5444,5445,5446,5447,5448,5449,5450,5451,5452,5453,5454,5455,5456, #  752
5457,5458,5459,5460,5461,5462,5463,5464,5465,5466,5467,5468,5469,5470,5471,5472, #  768
5473,5474,5475,5476,5477,5478,5479,5480,5481,5482,5483,5484,5485,5486,5487,5488, #  784
5489,5490,5491,5492,5493,5494,5495,5496,5497,5498,5499,5500,5501,5502,5503,5504, #  800
5505,5506,5507,5508,5509,5510,5511,5512,5513,5514,5515,5516,5517,5518,5519,5520, #  816
5521,5522,5523,5524,5525,5526,5527,5528,5529,5530,5531,5532,5533,5534,5535,5536, #  832
5537,5538,5539,5540,5541,5542,5543,5544,5545,5546,5547,5548,5549,5550,5551,5552, #  848
5553,5554,5555,5556,5557,5558,5559,5560,5561,5562,5563,5564,5565,5566,5567,5568, #  864
5569,5570,5571,5572,5573,5574,5575,5576,5577,5578,5579,5580,5581,5582,5583,5584, #  880
5585,5586,5587,5588,5589,5590,5591,5592,5593,5594,5595,5596,5597,5598,5599,5600, #  896
5601,5602,5603,5604,5605,5606,5607,5608,5609,5610,5611,5612,5613,5614,5615,5616, #  912
5617,5618,5619,5620,5621,5622,5623,5624,5625,5626,5627,5628,5629,5630,5631,5632, #  928
5633,5634,5635,5636,5637,5638,5639,5640,5641,5642,5643,5644,5645,5646,5647,5648, #  944
5649,5650,5651,5652,5653,5654,5655,5656,5657,5658,5659,5660,5661,5662,5663,5664, #  960
5665,5666,5667,5668,5669,5670,5671,5672,5673,5674,5675,5676,5677,5678,5679,5680, #  976
5681,5682,5683,5684,5685,5686,5687,5688,5689,5690,5691,5692,5693,5694,5695,5696, #  992
5697,5698,5699,5700,5701,5702,5703,5704,5705,5706,5707,5708,5709,5710,5711,5712, # 1008
5713,5714,5715,5716,5717,5718,5719,5720,5721,5722,5723,5724,5725,5726,5727,5728, # 1024
5729,5730,5731,5732,5733,5734,5735,5736,5737,5738,5739,5740,5741,5742,5743,5744, # 1040
5745,5746,5747,5748,5749,5750,5751,5752,5753,5754,5755,5756,5757,5758,5759,5760, # 1056
5761,5762,5763,5764,5765,5766,5767,5768,5769,5770,5771,5772,5773,5774,5775,5776, # 1072
5777,5778,5779,5780,5781,5782,5783,5784,5785,5786,5787,5788,5789,5790,5791,5792, # 1088
5793,5794,5795,5796,5797,5798,5799,5800,5801,5802,5803,5804,5805,5806,5807,5808, # 1104
5809,5810,5811,5812,5813,5814,5815,5816,5817,5818,5819,5820,5821,5822,5823,5824, # 1120
5825,5826,5827,5828,5829,5830,5831,5832,5833,5834,5835,5836,5837,5838,5839,5840, # 1136
5841,5842,5843,5844,5845,5846,5847,5848,5849,5850,5851,5852,5853,5854,5855,5856, # 1152
5857,5858,5859,5860,5861,5862,5863,5864,5865,5866,5867,5868,5869,5870,5871,5872, # 1168
5873,5874,5875,5876,5877,5878,5879,5880,5881,5882,5883,5884,5885,5886,5887,5888, # 1184
5889,5890,5891,5892,5893,5894,5895,5896,5897,5898,5899,5900,5901,5902,5903,5904, # 1200
5905,5906,5907,5908,5909,5910,5911,5912,5913,5914,5915,5916,5917,5918,5919,5920, # 1216
5921,5922,5923,5924,5925,5926,5927,5928,5929,5930,5931,5932,5933,5934,5935,5936, # 1232
5937,5938,5939,5940,5941,5942,5943,5944,5945,5946,5947,5948,5949,5950,5951,5952, # 1248
5953,5954,5955,5956,5957,5958,5959,5960,5961,5962,5963,5964,5965,5966,5967,5968, # 1264
5969,5970,5971,5972,5973,5974,5975,5976,5977,5978,5979,5980,5981,5982,5983,5984, # 1280
5985,5986,5987,5988,5989,5990,5991,5992,5993,5994,5995,5996,5997,5998,5999,6000, # 1296
6001,6002,6003,6004,6005,6006,6007,6008,6009,6010,6011,6012,6013,6014,6015,6016, # 1312
6017,6018,6019,6020,6021,6022,6023,6024,6025,6026,6027,6028,6029,6030,6031,6032, # 1328
6033,6034,6035,6036,6037,6038,6039,6040,6041,6042,6043,6044,6045,6046,6047,6048, # 1344
6049,6050,6051,6052,6053,6054,6055,6056,6057,6058,6059,6060,6061,6062,6063,6064, # 1360
6065,6066,6067,6068,6069,6070,6071,6072,6073,6074,6075,6076,6077,6078,6079,6080, # 1376
6081,6082,6083,6084,6085,6086,6087,6088,6089,6090,6091,6092,6093,6094,6095,6096, # 1392
6097,6098,6099,6100,6101,6102,6103,6104,6105,6106,6107,6108,6109,6110,6111,6112, # 1408
6113,6114,2044,2060,4621, 997,1235, 473,1186,4622, 920,3378,6115,6116, 379,1108, # 1424
4313,2657,2735,3934,6117,3809, 636,3233, 573,1026,3693,3435,2974,3300,2298,4105, # 1440
 854,2937,2463, 393,2581,2417, 539, 752,1280,2750,2480, 140,1161, 440, 708,1569, # 1456
 665,2497,1746,1291,1523,3000, 164,1603, 847,1331, 537,1997, 486, 508,1693,2418, # 1472
1970,2227, 878,1220, 299,1030, 969, 652,2751, 624,1137,3301,2619,  65,3302,2045, # 1488
1761,1859,3120,1930,3694,3516, 663,1767, 852, 835,3695, 269, 767,2826,2339,1305, # 1504
 896,1150, 770,1616,6118, 506,1502,2075,1012,2519, 775,2520,2975,2340,2938,4314, # 1520
3028,2086,1224,1943,2286,6119,3072,4315,2240,1273,1987,3935,1557, 175, 597, 985, # 1536
3517,2419,2521,1416,3029, 585, 938,1931,1007,1052,1932,1685,6120,3379,4316,4623, # 1552
 804, 599,3121,1333,2128,2539,1159,1554,2032,3810, 687,2033,2904, 952, 675,1467, # 1568
3436,6121,2241,1096,1786,2440,1543,1924, 980,1813,2228, 781,2692,1879, 728,1918, # 1584
3696,4624, 548,1950,4625,1809,1088,1356,3303,2522,1944, 502, 972, 373, 513,2827, # 1600
 586,2377,2391,1003,1976,1631,6122,2464,1084, 648,1776,4626,2141, 324, 962,2012, # 1616
2177,2076,1384, 742,2178,1448,1173,1810, 222, 102, 301, 445, 125,2420, 662,2498, # 1632
 277, 200,1476,1165,1068, 224,2562,1378,1446, 450,1880, 659, 791, 582,4627,2939, # 1648
3936,1516,1274, 555,2099,3697,1020,1389,1526,3380,1762,1723,1787,2229, 412,2114, # 1664
1900,2392,3518, 512,2597, 427,1925,2341,3122,1653,1686,2465,2499, 697, 330, 273, # 1680
 380,2162, 951, 832, 780, 991,1301,3073, 965,2270,3519, 668,2523,2636,1286, 535, # 1696
1407, 518, 671, 957,2658,2378, 267, 611,2197,3030,6123, 248,2299, 967,1799,2356, # 1712
 850,1418,3437,1876,1256,1480,2828,1718,6124,6125,1755,1664,2405,6126,4628,2879, # 1728
2829, 499,2179, 676,4629, 557,2329,2214,2090, 325,3234, 464, 811,3001, 992,2342, # 1744
2481,1232,1469, 303,2242, 466,1070,2163, 603,1777,2091,4630,2752,4631,2714, 322, # 1760
2659,1964,1768, 481,2188,1463,2330,2857,3600,2092,3031,2421,4632,2318,2070,1849, # 1776
2598,4633,1302,2254,1668,1701,2422,3811,2905,3032,3123,2046,4106,1763,1694,4634, # 1792
1604, 943,1724,1454, 917, 868,2215,1169,2940, 552,1145,1800,1228,1823,1955, 316, # 1808
1080,2510, 361,1807,2830,4107,2660,3381,1346,1423,1134,4108,6127, 541,1263,1229, # 1824
1148,2540, 545, 465,1833,2880,3438,1901,3074,2482, 816,3937, 713,1788,2500, 122, # 1840
1575, 195,1451,2501,1111,6128, 859, 374,1225,2243,2483,4317, 390,1033,3439,3075, # 1856
2524,1687, 266, 793,1440,2599, 946, 779, 802, 507, 897,1081, 528,2189,1292, 711, # 1872
1866,1725,1167,1640, 753, 398,2661,1053, 246, 348,4318, 137,1024,3440,1600,2077, # 1888
2129, 825,4319, 698, 238, 521, 187,2300,1157,2423,1641,1605,1464,1610,1097,2541, # 1904
1260,1436, 759,2255,1814,2150, 705,3235, 409,2563,3304, 561,3033,2005,2564, 726, # 1920
1956,2343,3698,4109, 949,3812,3813,3520,1669, 653,1379,2525, 881,2198, 632,2256, # 1936
1027, 778,1074, 733,1957, 514,1481,2466, 554,2180, 702,3938,1606,1017,1398,6129, # 1952
1380,3521, 921, 993,1313, 594, 449,1489,1617,1166, 768,1426,1360, 495,1794,3601, # 1968
1177,3602,1170,4320,2344, 476, 425,3167,4635,3168,1424, 401,2662,1171,3382,1998, # 1984
1089,4110, 477,3169, 474,6130,1909, 596,2831,1842, 494, 693,1051,1028,1207,3076, # 2000
 606,2115, 727,2790,1473,1115, 743,3522, 630, 805,1532,4321,2021, 366,1057, 838, # 2016
 684,1114,2142,4322,2050,1492,1892,1808,2271,3814,2424,1971,1447,1373,3305,1090, # 2032
1536,3939,3523,3306,1455,2199, 336, 369,2331,1035, 584,2393, 902, 718,2600,6131, # 2048
2753, 463,2151,1149,1611,2467, 715,1308,3124,1268, 343,1413,3236,1517,1347,2663, # 2064
2093,3940,2022,1131,1553,2100,2941,1427,3441,2942,1323,2484,6132,1980, 872,2368, # 2080
2441,2943, 320,2369,2116,1082, 679,1933,3941,2791,3815, 625,1143,2023, 422,2200, # 2096
3816,6133, 730,1695, 356,2257,1626,2301,2858,2637,1627,1778, 937, 883,2906,2693, # 2112
3002,1769,1086, 400,1063,1325,3307,2792,4111,3077, 456,2345,1046, 747,6134,1524, # 2128
 884,1094,3383,1474,2164,1059, 974,1688,2181,2258,1047, 345,1665,1187, 358, 875, # 2144
3170, 305, 660,3524,2190,1334,1135,3171,1540,1649,2542,1527, 927, 968,2793, 885, # 2160
1972,1850, 482, 500,2638,1218,1109,1085,2543,1654,2034, 876,  78,2287,1482,1277, # 2176
 861,1675,1083,1779, 724,2754, 454, 397,1132,1612,2332, 893, 672,1237, 257,2259, # 2192
2370, 135,3384, 337,2244, 547, 352, 340, 709,2485,1400, 788,1138,2511, 540, 772, # 2208
1682,2260,2272,2544,2013,1843,1902,4636,1999,1562,2288,4637,2201,1403,1533, 407, # 2224
 576,3308,1254,2071, 978,3385, 170, 136,1201,3125,2664,3172,2394, 213, 912, 873, # 2240
3603,1713,2202, 699,3604,3699, 813,3442, 493, 531,1054, 468,2907,1483, 304, 281, # 2256
4112,1726,1252,2094, 339,2319,2130,2639, 756,1563,2944, 748, 571,2976,1588,2425, # 2272
2715,1851,1460,2426,1528,1392,1973,3237, 288,3309, 685,3386, 296, 892,2716,2216, # 2288
1570,2245, 722,1747,2217, 905,3238,1103,6135,1893,1441,1965, 251,1805,2371,3700, # 2304
2601,1919,1078,  75,2182,1509,1592,1270,2640,4638,2152,6136,3310,3817, 524, 706, # 2320
1075, 292,3818,1756,2602, 317,  98,3173,3605,3525,1844,2218,3819,2502, 814, 567, # 2336
 385,2908,1534,6137, 534,1642,3239, 797,6138,1670,1529, 953,4323, 188,1071, 538, # 2352
 178, 729,3240,2109,1226,1374,2000,2357,2977, 731,2468,1116,2014,2051,6139,1261, # 2368
1593, 803,2859,2736,3443, 556, 682, 823,1541,6140,1369,2289,1706,2794, 845, 462, # 2384
2603,2665,1361, 387, 162,2358,1740, 739,1770,1720,1304,1401,3241,1049, 627,1571, # 2400
2427,3526,1877,3942,1852,1500, 431,1910,1503, 677, 297,2795, 286,1433,1038,1198, # 2416
2290,1133,1596,4113,4639,2469,1510,1484,3943,6141,2442, 108, 712,4640,2372, 866, # 2432
3701,2755,3242,1348, 834,1945,1408,3527,2395,3243,1811, 824, 994,1179,2110,1548, # 2448
1453, 790,3003, 690,4324,4325,2832,2909,3820,1860,3821, 225,1748, 310, 346,1780, # 2464
2470, 821,1993,2717,2796, 828, 877,3528,2860,2471,1702,2165,2910,2486,1789, 453, # 2480
 359,2291,1676,  73,1164,1461,1127,3311, 421, 604, 314,1037, 589, 116,2487, 737, # 2496
 837,1180, 111, 244, 735,6142,2261,1861,1362, 986, 523, 418, 581,2666,3822, 103, # 2512
 855, 503,1414,1867,2488,1091, 657,1597, 979, 605,1316,4641,1021,2443,2078,2001, # 2528
1209,  96, 587,2166,1032, 260,1072,2153, 173,  94, 226,3244, 819,2006,4642,4114, # 2544
2203, 231,1744, 782,  97,2667, 786,3387, 887, 391, 442,2219,4326,1425,6143,2694, # 2560
 633,1544,1202, 483,2015, 592,2052,1958,2472,1655, 419, 129,4327,3444,3312,1714, # 2576
1257,3078,4328,1518,1098, 865,1310,1019,1885,1512,1734, 469,2444, 148, 773, 436, # 2592
1815,1868,1128,1055,4329,1245,2756,3445,2154,1934,1039,4643, 579,1238, 932,2320, # 2608
 353, 205, 801, 115,2428, 944,2321,1881, 399,2565,1211, 678, 766,3944, 335,2101, # 2624
1459,1781,1402,3945,2737,2131,1010, 844, 981,1326,1013, 550,1816,1545,2620,1335, # 2640
1008, 371,2881, 936,1419,1613,3529,1456,1395,2273,1834,2604,1317,2738,2503, 416, # 2656
1643,4330, 806,1126, 229, 591,3946,1314,1981,1576,1837,1666, 347,1790, 977,3313, # 2672
 764,2861,1853, 688,2429,1920,1462,  77, 595, 415,2002,3034, 798,1192,4115,6144, # 2688
2978,4331,3035,2695,2582,2072,2566, 430,2430,1727, 842,1396,3947,3702, 613, 377, # 2704
 278, 236,1417,3388,3314,3174, 757,1869, 107,3530,6145,1194, 623,2262, 207,1253, # 2720
2167,3446,3948, 492,1117,1935, 536,1838,2757,1246,4332, 696,2095,2406,1393,1572, # 2736
3175,1782, 583, 190, 253,1390,2230, 830,3126,3389, 934,3245,1703,1749,2979,1870, # 2752
2545,1656,2204, 869,2346,4116,3176,1817, 496,1764,4644, 942,1504, 404,1903,1122, # 2768
1580,3606,2945,1022, 515, 372,1735, 955,2431,3036,6146,2797,1110,2302,2798, 617, # 2784
6147, 441, 762,1771,3447,3607,3608,1904, 840,3037,  86, 939,1385, 572,1370,2445, # 2800
1336, 114,3703, 898, 294, 203,3315, 703,1583,2274, 429, 961,4333,1854,1951,3390, # 2816
2373,3704,4334,1318,1381, 966,1911,2322,1006,1155, 309, 989, 458,2718,1795,1372, # 2832
1203, 252,1689,1363,3177, 517,1936, 168,1490, 562, 193,3823,1042,4117,1835, 551, # 2848
 470,4645, 395, 489,3448,1871,1465,2583,2641, 417,1493, 279,1295, 511,1236,1119, # 2864
  72,1231,1982,1812,3004, 871,1564, 984,3449,1667,2696,2096,4646,2347,2833,1673, # 2880
3609, 695,3246,2668, 807,1183,4647, 890, 388,2333,1801,1457,2911,1765,1477,1031, # 2896
3316,3317,1278,3391,2799,2292,2526, 163,3450,4335,2669,1404,1802,6148,2323,2407, # 2912
1584,1728,1494,1824,1269, 298, 909,3318,1034,1632, 375, 776,1683,2061, 291, 210, # 2928
1123, 809,1249,1002,2642,3038, 206,1011,2132, 144, 975, 882,1565, 342, 667, 754, # 2944
1442,2143,1299,2303,2062, 447, 626,2205,1221,2739,2912,1144,1214,2206,2584, 760, # 2960
1715, 614, 950,1281,2670,2621, 810, 577,1287,2546,4648, 242,2168, 250,2643, 691, # 2976
 123,2644, 647, 313,1029, 689,1357,2946,1650, 216, 771,1339,1306, 808,2063, 549, # 2992
 913,1371,2913,2914,6149,1466,1092,1174,1196,1311,2605,2396,1783,1796,3079, 406, # 3008
2671,2117,3949,4649, 487,1825,2220,6150,2915, 448,2348,1073,6151,2397,1707, 130, # 3024
 900,1598, 329, 176,1959,2527,1620,6152,2275,4336,3319,1983,2191,3705,3610,2155, # 3040
3706,1912,1513,1614,6153,1988, 646, 392,2304,1589,3320,3039,1826,1239,1352,1340, # 3056
2916, 505,2567,1709,1437,2408,2547, 906,6154,2672, 384,1458,1594,1100,1329, 710, # 3072
 423,3531,2064,2231,2622,1989,2673,1087,1882, 333, 841,3005,1296,2882,2379, 580, # 3088
1937,1827,1293,2585, 601, 574, 249,1772,4118,2079,1120, 645, 901,1176,1690, 795, # 3104
2207, 478,1434, 516,1190,1530, 761,2080, 930,1264, 355, 435,1552, 644,1791, 987, # 3120
 220,1364,1163,1121,1538, 306,2169,1327,1222, 546,2645, 218, 241, 610,1704,3321, # 3136
1984,1839,1966,2528, 451,6155,2586,3707,2568, 907,3178, 254,2947, 186,1845,4650, # 3152
 745, 432,1757, 428,1633, 888,2246,2221,2489,3611,2118,1258,1265, 956,3127,1784, # 3168
4337,2490, 319, 510, 119, 457,3612, 274,2035,2007,4651,1409,3128, 970,2758, 590, # 3184
2800, 661,2247,4652,2008,3950,1420,1549,3080,3322,3951,1651,1375,2111, 485,2491, # 3200
1429,1156,6156,2548,2183,1495, 831,1840,2529,2446, 501,1657, 307,1894,3247,1341, # 3216
 666, 899,2156,1539,2549,1559, 886, 349,2208,3081,2305,1736,3824,2170,2759,1014, # 3232
1913,1386, 542,1397,2948, 490, 368, 716, 362, 159, 282,2569,1129,1658,1288,1750, # 3248
2674, 276, 649,2016, 751,1496, 658,1818,1284,1862,2209,2087,2512,3451, 622,2834, # 3264
 376, 117,1060,2053,1208,1721,1101,1443, 247,1250,3179,1792,3952,2760,2398,3953, # 3280
6157,2144,3708, 446,2432,1151,2570,3452,2447,2761,2835,1210,2448,3082, 424,2222, # 3296
1251,2449,2119,2836, 504,1581,4338, 602, 817, 857,3825,2349,2306, 357,3826,1470, # 3312
1883,2883, 255, 958, 929,2917,3248, 302,4653,1050,1271,1751,2307,1952,1430,2697, # 3328
2719,2359, 354,3180, 777, 158,2036,4339,1659,4340,4654,2308,2949,2248,1146,2232, # 3344
3532,2720,1696,2623,3827,6158,3129,1550,2698,1485,1297,1428, 637, 931,2721,2145, # 3360
 914,2550,2587,  81,2450, 612, 827,2646,1242,4655,1118,2884, 472,1855,3181,3533, # 3376
3534, 569,1353,2699,1244,1758,2588,4119,2009,2762,2171,3709,1312,1531,6159,1152, # 3392
1938, 134,1830, 471,3710,2276,1112,1535,3323,3453,3535, 982,1337,2950, 488, 826, # 3408
 674,1058,1628,4120,2017, 522,2399, 211, 568,1367,3454, 350, 293,1872,1139,3249, # 3424
1399,1946,3006,1300,2360,3324, 588, 736,6160,2606, 744, 669,3536,3828,6161,1358, # 3440
 199, 723, 848, 933, 851,1939,1505,1514,1338,1618,1831,4656,1634,3613, 443,2740, # 3456
3829, 717,1947, 491,1914,6162,2551,1542,4121,1025,6163,1099,1223, 198,3040,2722, # 3472
 370, 410,1905,2589, 998,1248,3182,2380, 519,1449,4122,1710, 947, 928,1153,4341, # 3488
2277, 344,2624,1511, 615, 105, 161,1212,1076,1960,3130,2054,1926,1175,1906,2473, # 3504
 414,1873,2801,6164,2309, 315,1319,3325, 318,2018,2146,2157, 963, 631, 223,4342, # 3520
4343,2675, 479,3711,1197,2625,3712,2676,2361,6165,4344,4123,6166,2451,3183,1886, # 3536
2184,1674,1330,1711,1635,1506, 799, 219,3250,3083,3954,1677,3713,3326,2081,3614, # 3552
1652,2073,4657,1147,3041,1752, 643,1961, 147,1974,3955,6167,1716,2037, 918,3007, # 3568
1994, 120,1537, 118, 609,3184,4345, 740,3455,1219, 332,1615,3830,6168,1621,2980, # 3584
1582, 783, 212, 553,2350,3714,1349,2433,2082,4124, 889,6169,2310,1275,1410, 973, # 3600
 166,1320,3456,1797,1215,3185,2885,1846,2590,2763,4658, 629, 822,3008, 763, 940, # 3616
1990,2862, 439,2409,1566,1240,1622, 926,1282,1907,2764, 654,2210,1607, 327,1130, # 3632
3956,1678,1623,6170,2434,2192, 686, 608,3831,3715, 903,3957,3042,6171,2741,1522, # 3648
1915,1105,1555,2552,1359, 323,3251,4346,3457, 738,1354,2553,2311,2334,1828,2003, # 3664
3832,1753,2351,1227,6172,1887,4125,1478,6173,2410,1874,1712,1847, 520,1204,2607, # 3680
 264,4659, 836,2677,2102, 600,4660,3833,2278,3084,6174,4347,3615,1342, 640, 532, # 3696
 543,2608,1888,2400,2591,1009,4348,1497, 341,1737,3616,2723,1394, 529,3252,1321, # 3712
 983,4661,1515,2120, 971,2592, 924, 287,1662,3186,4349,2700,4350,1519, 908,1948, # 3728
2452, 156, 796,1629,1486,2223,2055, 694,4126,1259,1036,3392,1213,2249,2742,1889, # 3744
1230,3958,1015, 910, 408, 559,3617,4662, 746, 725, 935,4663,3959,3009,1289, 563, # 3760
 867,4664,3960,1567,2981,2038,2626, 988,2263,2381,4351, 143,2374, 704,1895,6175, # 3776
1188,3716,2088, 673,3085,2362,4352, 484,1608,1921,2765,2918, 215, 904,3618,3537, # 3792
 894, 509, 976,3043,2701,3961,4353,2837,2982, 498,6176,6177,1102,3538,1332,3393, # 3808
1487,1636,1637, 233, 245,3962, 383, 650, 995,3044, 460,1520,1206,2352, 749,3327, # 3824
 530, 700, 389,1438,1560,1773,3963,2264, 719,2951,2724,3834, 870,1832,1644,1000, # 3840
 839,2474,3717, 197,1630,3394, 365,2886,3964,1285,2133, 734, 922, 818,1106, 732, # 3856
 480,2083,1774,3458, 923,2279,1350, 221,3086,  85,2233,2234,3835,1585,3010,2147, # 3872
1387,1705,2382,1619,2475, 133, 239,2802,1991,1016,2084,2383, 411,2838,1113, 651, # 3888
1985,1160,3328, 990,1863,3087,1048,1276,2647, 265,2627,1599,3253,2056, 150, 638, # 3904
2019, 656, 853, 326,1479, 680,1439,4354,1001,1759, 413,3459,3395,2492,1431, 459, # 3920
4355,1125,3329,2265,1953,1450,2065,2863, 849, 351,2678,3131,3254,3255,1104,1577, # 3936
 227,1351,1645,2453,2193,1421,2887, 812,2121, 634,  95,2435, 201,2312,4665,1646, # 3952
1671,2743,1601,2554,2702,2648,2280,1315,1366,2089,3132,1573,3718,3965,1729,1189, # 3968
 328,2679,1077,1940,1136, 558,1283, 964,1195, 621,2074,1199,1743,3460,3619,1896, # 3984
1916,1890,3836,2952,1154,2112,1064, 862, 378,3011,2066,2113,2803,1568,2839,6178, # 4000
3088,2919,1941,1660,2004,1992,2194, 142, 707,1590,1708,1624,1922,1023,1836,1233, # 4016
1004,2313, 789, 741,3620,6179,1609,2411,1200,4127,3719,3720,4666,2057,3721, 593, # 4032
2840, 367,2920,1878,6180,3461,1521, 628,1168, 692,2211,2649, 300, 720,2067,2571, # 4048
2953,3396, 959,2504,3966,3539,3462,1977, 701,6181, 954,1043, 800, 681, 183,3722, # 4064
1803,1730,3540,4128,2103, 815,2314, 174, 467, 230,2454,1093,2134, 755,3541,3397, # 4080
1141,1162,6182,1738,2039, 270,3256,2513,1005,1647,2185,3837, 858,1679,1897,1719, # 4096
2954,2324,1806, 402, 670, 167,4129,1498,2158,2104, 750,6183, 915, 189,1680,1551, # 4112
 455,4356,1501,2455, 405,1095,2955, 338,1586,1266,1819, 570, 641,1324, 237,1556, # 4128
2650,1388,3723,6184,1368,2384,1343,1978,3089,2436, 879,3724, 792,1191, 758,3012, # 4144
1411,2135,1322,4357, 240,4667,1848,3725,1574,6185, 420,3045,1546,1391, 714,4358, # 4160
1967, 941,1864, 863, 664, 426, 560,1731,2680,1785,2864,1949,2363, 403,3330,1415, # 4176
1279,2136,1697,2335, 204, 721,2097,3838,  90,6186,2085,2505, 191,3967, 124,2148, # 4192
1376,1798,1178,1107,1898,1405, 860,4359,1243,1272,2375,2983,1558,2456,1638, 113, # 4208
3621, 578,1923,2609, 880, 386,4130, 784,2186,2266,1422,2956,2172,1722, 497, 263, # 4224
2514,1267,2412,2610, 177,2703,3542, 774,1927,1344, 616,1432,1595,1018, 172,4360, # 4240
2325, 911,4361, 438,1468,3622, 794,3968,2024,2173,1681,1829,2957, 945, 895,3090, # 4256
 575,2212,2476, 475,2401,2681, 785,2744,1745,2293,2555,1975,3133,2865, 394,4668, # 4272
3839, 635,4131, 639, 202,1507,2195,2766,1345,1435,2572,3726,1908,1184,1181,2457, # 4288
3727,3134,4362, 843,2611, 437, 916,4669, 234, 769,1884,3046,3047,3623, 833,6187, # 4304
1639,2250,2402,1355,1185,2010,2047, 999, 525,1732,1290,1488,2612, 948,1578,3728, # 4320
2413,2477,1216,2725,2159, 334,3840,1328,3624,2921,1525,4132, 564,1056, 891,4363, # 4336
1444,1698,2385,2251,3729,1365,2281,2235,1717,6188, 864,3841,2515, 444, 527,2767, # 4352
2922,3625, 544, 461,6189, 566, 209,2437,3398,2098,1065,2068,3331,3626,3257,2137, # 4368  #last 512
#Everything below is of no interest for detection purpose
2138,2122,3730,2888,1995,1820,1044,6190,6191,6192,6193,6194,6195,6196,6197,6198, # 4384
6199,6200,6201,6202,6203,6204,6205,4670,6206,6207,6208,6209,6210,6211,6212,6213, # 4400
6214,6215,6216,6217,6218,6219,6220,6221,6222,6223,6224,6225,6226,6227,6228,6229, # 4416
6230,6231,6232,6233,6234,6235,6236,6237,3187,6238,6239,3969,6240,6241,6242,6243, # 4432
6244,4671,6245,6246,4672,6247,6248,4133,6249,6250,4364,6251,2923,2556,2613,4673, # 4448
4365,3970,6252,6253,6254,6255,4674,6256,6257,6258,2768,2353,4366,4675,4676,3188, # 4464
4367,3463,6259,4134,4677,4678,6260,2267,6261,3842,3332,4368,3543,6262,6263,6264, # 4480
3013,1954,1928,4135,4679,6265,6266,2478,3091,6267,4680,4369,6268,6269,1699,6270, # 4496
3544,4136,4681,6271,4137,6272,4370,2804,6273,6274,2593,3971,3972,4682,6275,2236, # 4512
4683,6276,6277,4684,6278,6279,4138,3973,4685,6280,6281,3258,6282,6283,6284,6285, # 4528
3974,4686,2841,3975,6286,6287,3545,6288,6289,4139,4687,4140,6290,4141,6291,4142, # 4544
6292,6293,3333,6294,6295,6296,4371,6297,3399,6298,6299,4372,3976,6300,6301,6302, # 4560
4373,6303,6304,3843,3731,6305,4688,4374,6306,6307,3259,2294,6308,3732,2530,4143, # 4576
6309,4689,6310,6311,6312,3048,6313,6314,4690,3733,2237,6315,6316,2282,3334,6317, # 4592
6318,3844,6319,6320,4691,6321,3400,4692,6322,4693,6323,3049,6324,4375,6325,3977, # 4608
6326,6327,6328,3546,6329,4694,3335,6330,4695,4696,6331,6332,6333,6334,4376,3978, # 4624
6335,4697,3979,4144,6336,3980,4698,6337,6338,6339,6340,6341,4699,4700,4701,6342, # 4640
6343,4702,6344,6345,4703,6346,6347,4704,6348,4705,4706,3135,6349,4707,6350,4708, # 4656
6351,4377,6352,4709,3734,4145,6353,2506,4710,3189,6354,3050,4711,3981,6355,3547, # 4672
3014,4146,4378,3735,2651,3845,3260,3136,2224,1986,6356,3401,6357,4712,2594,3627, # 4688
3137,2573,3736,3982,4713,3628,4714,4715,2682,3629,4716,6358,3630,4379,3631,6359, # 4704
6360,6361,3983,6362,6363,6364,6365,4147,3846,4717,6366,6367,3737,2842,6368,4718, # 4720
2628,6369,3261,6370,2386,6371,6372,3738,3984,4719,3464,4720,3402,6373,2924,3336, # 4736
4148,2866,6374,2805,3262,4380,2704,2069,2531,3138,2806,2984,6375,2769,6376,4721, # 4752
4722,3403,6377,6378,3548,6379,6380,2705,3092,1979,4149,2629,3337,2889,6381,3338, # 4768
4150,2557,3339,4381,6382,3190,3263,3739,6383,4151,4723,4152,2558,2574,3404,3191, # 4784
6384,6385,4153,6386,4724,4382,6387,6388,4383,6389,6390,4154,6391,4725,3985,6392, # 4800
3847,4155,6393,6394,6395,6396,6397,3465,6398,4384,6399,6400,6401,6402,6403,6404, # 4816
4156,6405,6406,6407,6408,2123,6409,6410,2326,3192,4726,6411,6412,6413,6414,4385, # 4832
4157,6415,6416,4158,6417,3093,3848,6418,3986,6419,6420,3849,6421,6422,6423,4159, # 4848
6424,6425,4160,6426,3740,6427,6428,6429,6430,3987,6431,4727,6432,2238,6433,6434, # 4864
4386,3988,6435,6436,3632,6437,6438,2843,6439,6440,6441,6442,3633,6443,2958,6444, # 4880
6445,3466,6446,2364,4387,3850,6447,4388,2959,3340,6448,3851,6449,4728,6450,6451, # 4896
3264,4729,6452,3193,6453,4389,4390,2706,3341,4730,6454,3139,6455,3194,6456,3051, # 4912
2124,3852,1602,4391,4161,3853,1158,3854,4162,3989,4392,3990,4731,4732,4393,2040, # 4928
4163,4394,3265,6457,2807,3467,3855,6458,6459,6460,3991,3468,4733,4734,6461,3140, # 4944
2960,6462,4735,6463,6464,6465,6466,4736,4737,4738,4739,6467,6468,4164,2403,3856, # 4960
6469,6470,2770,2844,6471,4740,6472,6473,6474,6475,6476,6477,6478,3195,6479,4741, # 4976
4395,6480,2867,6481,4742,2808,6482,2493,4165,6483,6484,6485,6486,2295,4743,6487, # 4992
6488,6489,3634,6490,6491,6492,6493,6494,6495,6496,2985,4744,6497,6498,4745,6499, # 5008
6500,2925,3141,4166,6501,6502,4746,6503,6504,4747,6505,6506,6507,2890,6508,6509, # 5024
6510,6511,6512,6513,6514,6515,6516,6517,6518,6519,3469,4167,6520,6521,6522,4748, # 5040
4396,3741,4397,4749,4398,3342,2125,4750,6523,4751,4752,4753,3052,6524,2961,4168, # 5056
6525,4754,6526,4755,4399,2926,4169,6527,3857,6528,4400,4170,6529,4171,6530,6531, # 5072
2595,6532,6533,6534,6535,3635,6536,6537,6538,6539,6540,6541,6542,4756,6543,6544, # 5088
6545,6546,6547,6548,4401,6549,6550,6551,6552,4402,3405,4757,4403,6553,6554,6555, # 5104
4172,3742,6556,6557,6558,3992,3636,6559,6560,3053,2726,6561,3549,4173,3054,4404, # 5120
6562,6563,3993,4405,3266,3550,2809,4406,6564,6565,6566,4758,4759,6567,3743,6568, # 5136
4760,3744,4761,3470,6569,6570,6571,4407,6572,3745,4174,6573,4175,2810,4176,3196, # 5152
4762,6574,4177,6575,6576,2494,2891,3551,6577,6578,3471,6579,4408,6580,3015,3197, # 5168
6581,3343,2532,3994,3858,6582,3094,3406,4409,6583,2892,4178,4763,4410,3016,4411, # 5184
6584,3995,3142,3017,2683,6585,4179,6586,6587,4764,4412,6588,6589,4413,6590,2986, # 5200
6591,2962,3552,6592,2963,3472,6593,6594,4180,4765,6595,6596,2225,3267,4414,6597, # 5216
3407,3637,4766,6598,6599,3198,6600,4415,6601,3859,3199,6602,3473,4767,2811,4416, # 5232
1856,3268,3200,2575,3996,3997,3201,4417,6603,3095,2927,6604,3143,6605,2268,6606, # 5248
3998,3860,3096,2771,6607,6608,3638,2495,4768,6609,3861,6610,3269,2745,4769,4181, # 5264
3553,6611,2845,3270,6612,6613,6614,3862,6615,6616,4770,4771,6617,3474,3999,4418, # 5280
4419,6618,3639,3344,6619,4772,4182,6620,2126,6621,6622,6623,4420,4773,6624,3018, # 5296
6625,4774,3554,6626,4183,2025,3746,6627,4184,2707,6628,4421,4422,3097,1775,4185, # 5312
3555,6629,6630,2868,6631,6632,4423,6633,6634,4424,2414,2533,2928,6635,4186,2387, # 5328
6636,4775,6637,4187,6638,1891,4425,3202,3203,6639,6640,4776,6641,3345,6642,6643, # 5344
3640,6644,3475,3346,3641,4000,6645,3144,6646,3098,2812,4188,3642,3204,6647,3863, # 5360
3476,6648,3864,6649,4426,4001,6650,6651,6652,2576,6653,4189,4777,6654,6655,6656, # 5376
2846,6657,3477,3205,4002,6658,4003,6659,3347,2252,6660,6661,6662,4778,6663,6664, # 5392
6665,6666,6667,6668,6669,4779,4780,2048,6670,3478,3099,6671,3556,3747,4004,6672, # 5408
6673,6674,3145,4005,3748,6675,6676,6677,6678,6679,3408,6680,6681,6682,6683,3206, # 5424
3207,6684,6685,4781,4427,6686,4782,4783,4784,6687,6688,6689,4190,6690,6691,3479, # 5440
6692,2746,6693,4428,6694,6695,6696,6697,6698,6699,4785,6700,6701,3208,2727,6702, # 5456
3146,6703,6704,3409,2196,6705,4429,6706,6707,6708,2534,1996,6709,6710,6711,2747, # 5472
6712,6713,6714,4786,3643,6715,4430,4431,6716,3557,6717,4432,4433,6718,6719,6720, # 5488
6721,3749,6722,4006,4787,6723,6724,3644,4788,4434,6725,6726,4789,2772,6727,6728, # 5504
6729,6730,6731,2708,3865,2813,4435,6732,6733,4790,4791,3480,6734,6735,6736,6737, # 5520
4436,3348,6738,3410,4007,6739,6740,4008,6741,6742,4792,3411,4191,6743,6744,6745, # 5536
6746,6747,3866,6748,3750,6749,6750,6751,6752,6753,6754,6755,3867,6756,4009,6757, # 5552
4793,4794,6758,2814,2987,6759,6760,6761,4437,6762,6763,6764,6765,3645,6766,6767, # 5568
3481,4192,6768,3751,6769,6770,2174,6771,3868,3752,6772,6773,6774,4193,4795,4438, # 5584
3558,4796,4439,6775,4797,6776,6777,4798,6778,4799,3559,4800,6779,6780,6781,3482, # 5600
6782,2893,6783,6784,4194,4801,4010,6785,6786,4440,6787,4011,6788,6789,6790,6791, # 5616
6792,6793,4802,6794,6795,6796,4012,6797,6798,6799,6800,3349,4803,3483,6801,4804, # 5632
4195,6802,4013,6803,6804,4196,6805,4014,4015,6806,2847,3271,2848,6807,3484,6808, # 5648
6809,6810,4441,6811,4442,4197,4443,3272,4805,6812,3412,4016,1579,6813,6814,4017, # 5664
6815,3869,6816,2964,6817,4806,6818,6819,4018,3646,6820,6821,4807,4019,4020,6822, # 5680
6823,3560,6824,6825,4021,4444,6826,4198,6827,6828,4445,6829,6830,4199,4808,6831, # 5696
6832,6833,3870,3019,2458,6834,3753,3413,3350,6835,4809,3871,4810,3561,4446,6836, # 5712
6837,4447,4811,4812,6838,2459,4448,6839,4449,6840,6841,4022,3872,6842,4813,4814, # 5728
6843,6844,4815,4200,4201,4202,6845,4023,6846,6847,4450,3562,3873,6848,6849,4816, # 5744
4817,6850,4451,4818,2139,6851,3563,6852,6853,3351,6854,6855,3352,4024,2709,3414, # 5760
4203,4452,6856,4204,6857,6858,3874,3875,6859,6860,4819,6861,6862,6863,6864,4453, # 5776
3647,6865,6866,4820,6867,6868,6869,6870,4454,6871,2869,6872,6873,4821,6874,3754, # 5792
6875,4822,4205,6876,6877,6878,3648,4206,4455,6879,4823,6880,4824,3876,6881,3055, # 5808
4207,6882,3415,6883,6884,6885,4208,4209,6886,4210,3353,6887,3354,3564,3209,3485, # 5824
2652,6888,2728,6889,3210,3755,6890,4025,4456,6891,4825,6892,6893,6894,6895,4211, # 5840
6896,6897,6898,4826,6899,6900,4212,6901,4827,6902,2773,3565,6903,4828,6904,6905, # 5856
6906,6907,3649,3650,6908,2849,3566,6909,3567,3100,6910,6911,6912,6913,6914,6915, # 5872
4026,6916,3355,4829,3056,4457,3756,6917,3651,6918,4213,3652,2870,6919,4458,6920, # 5888
2438,6921,6922,3757,2774,4830,6923,3356,4831,4832,6924,4833,4459,3653,2507,6925, # 5904
4834,2535,6926,6927,3273,4027,3147,6928,3568,6929,6930,6931,4460,6932,3877,4461, # 5920
2729,3654,6933,6934,6935,6936,2175,4835,2630,4214,4028,4462,4836,4215,6937,3148, # 5936
4216,4463,4837,4838,4217,6938,6939,2850,4839,6940,4464,6941,6942,6943,4840,6944, # 5952
4218,3274,4465,6945,6946,2710,6947,4841,4466,6948,6949,2894,6950,6951,4842,6952, # 5968
4219,3057,2871,6953,6954,6955,6956,4467,6957,2711,6958,6959,6960,3275,3101,4843, # 5984
6961,3357,3569,6962,4844,6963,6964,4468,4845,3570,6965,3102,4846,3758,6966,4847, # 6000
3878,4848,4849,4029,6967,2929,3879,4850,4851,6968,6969,1733,6970,4220,6971,6972, # 6016
6973,6974,6975,6976,4852,6977,6978,6979,6980,6981,6982,3759,6983,6984,6985,3486, # 6032
3487,6986,3488,3416,6987,6988,6989,6990,6991,6992,6993,6994,6995,6996,6997,4853, # 6048
6998,6999,4030,7000,7001,3211,7002,7003,4221,7004,7005,3571,4031,7006,3572,7007, # 6064
2614,4854,2577,7008,7009,2965,3655,3656,4855,2775,3489,3880,4222,4856,3881,4032, # 6080
3882,3657,2730,3490,4857,7010,3149,7011,4469,4858,2496,3491,4859,2283,7012,7013, # 6096
7014,2365,4860,4470,7015,7016,3760,7017,7018,4223,1917,7019,7020,7021,4471,7022, # 6112
2776,4472,7023,7024,7025,7026,4033,7027,3573,4224,4861,4034,4862,7028,7029,1929, # 6128
3883,4035,7030,4473,3058,7031,2536,3761,3884,7032,4036,7033,2966,2895,1968,4474, # 6144
3276,4225,3417,3492,4226,2105,7034,7035,1754,2596,3762,4227,4863,4475,3763,4864, # 6160
3764,2615,2777,3103,3765,3658,3418,4865,2296,3766,2815,7036,7037,7038,3574,2872, # 6176
3277,4476,7039,4037,4477,7040,7041,4038,7042,7043,7044,7045,7046,7047,2537,7048, # 6192
7049,7050,7051,7052,7053,7054,4478,7055,7056,3767,3659,4228,3575,7057,7058,4229, # 6208
7059,7060,7061,3660,7062,3212,7063,3885,4039,2460,7064,7065,7066,7067,7068,7069, # 6224
7070,7071,7072,7073,7074,4866,3768,4867,7075,7076,7077,7078,4868,3358,3278,2653, # 6240
7079,7080,4479,3886,7081,7082,4869,7083,7084,7085,7086,7087,7088,2538,7089,7090, # 6256
7091,4040,3150,3769,4870,4041,2896,3359,4230,2930,7092,3279,7093,2967,4480,3213, # 6272
4481,3661,7094,7095,7096,7097,7098,7099,7100,7101,7102,2461,3770,7103,7104,4231, # 6288
3151,7105,7106,7107,4042,3662,7108,7109,4871,3663,4872,4043,3059,7110,7111,7112, # 6304
3493,2988,7113,4873,7114,7115,7116,3771,4874,7117,7118,4232,4875,7119,3576,2336, # 6320
4876,7120,4233,3419,4044,4877,4878,4482,4483,4879,4484,4234,7121,3772,4880,1045, # 6336
3280,3664,4881,4882,7122,7123,7124,7125,4883,7126,2778,7127,4485,4486,7128,4884, # 6352
3214,3887,7129,7130,3215,7131,4885,4045,7132,7133,4046,7134,7135,7136,7137,7138, # 6368
7139,7140,7141,7142,7143,4235,7144,4886,7145,7146,7147,4887,7148,7149,7150,4487, # 6384
4047,4488,7151,7152,4888,4048,2989,3888,7153,3665,7154,4049,7155,7156,7157,7158, # 6400
7159,7160,2931,4889,4890,4489,7161,2631,3889,4236,2779,7162,7163,4891,7164,3060, # 6416
7165,1672,4892,7166,4893,4237,3281,4894,7167,7168,3666,7169,3494,7170,7171,4050, # 6432
7172,7173,3104,3360,3420,4490,4051,2684,4052,7174,4053,7175,7176,7177,2253,4054, # 6448
7178,7179,4895,7180,3152,3890,3153,4491,3216,7181,7182,7183,2968,4238,4492,4055, # 6464
7184,2990,7185,2479,7186,7187,4493,7188,7189,7190,7191,7192,4896,7193,4897,2969, # 6480
4494,4898,7194,3495,7195,7196,4899,4495,7197,3105,2731,7198,4900,7199,7200,7201, # 6496
4056,7202,3361,7203,7204,4496,4901,4902,7205,4497,7206,7207,2315,4903,7208,4904, # 6512
7209,4905,2851,7210,7211,3577,7212,3578,4906,7213,4057,3667,4907,7214,4058,2354, # 6528
3891,2376,3217,3773,7215,7216,7217,7218,7219,4498,7220,4908,3282,2685,7221,3496, # 6544
4909,2632,3154,4910,7222,2337,7223,4911,7224,7225,7226,4912,4913,3283,4239,4499, # 6560
7227,2816,7228,7229,7230,7231,7232,7233,7234,4914,4500,4501,7235,7236,7237,2686, # 6576
7238,4915,7239,2897,4502,7240,4503,7241,2516,7242,4504,3362,3218,7243,7244,7245, # 6592
4916,7246,7247,4505,3363,7248,7249,7250,7251,3774,4506,7252,7253,4917,7254,7255, # 6608
3284,2991,4918,4919,3219,3892,4920,3106,3497,4921,7256,7257,7258,4922,7259,4923, # 6624
3364,4507,4508,4059,7260,4240,3498,7261,7262,4924,7263,2992,3893,4060,3220,7264, # 6640
7265,7266,7267,7268,7269,4509,3775,7270,2817,7271,4061,4925,4510,3776,7272,4241, # 6656
4511,3285,7273,7274,3499,7275,7276,7277,4062,4512,4926,7278,3107,3894,7279,7280, # 6672
4927,7281,4513,7282,7283,3668,7284,7285,4242,4514,4243,7286,2058,4515,4928,4929, # 6688
4516,7287,3286,4244,7288,4517,7289,7290,7291,3669,7292,7293,4930,4931,4932,2355, # 6704
4933,7294,2633,4518,7295,4245,7296,7297,4519,7298,7299,4520,4521,4934,7300,4246, # 6720
4522,7301,7302,7303,3579,7304,4247,4935,7305,4936,7306,7307,7308,7309,3777,7310, # 6736
4523,7311,7312,7313,4248,3580,7314,4524,3778,4249,7315,3581,7316,3287,7317,3221, # 6752
7318,4937,7319,7320,7321,7322,7323,7324,4938,4939,7325,4525,7326,7327,7328,4063, # 6768
7329,7330,4940,7331,7332,4941,7333,4526,7334,3500,2780,1741,4942,2026,1742,7335, # 6784
7336,3582,4527,2388,7337,7338,7339,4528,7340,4250,4943,7341,7342,7343,4944,7344, # 6800
7345,7346,3020,7347,4945,7348,7349,7350,7351,3895,7352,3896,4064,3897,7353,7354, # 6816
7355,4251,7356,7357,3898,7358,3779,7359,3780,3288,7360,7361,4529,7362,4946,4530, # 6832
2027,7363,3899,4531,4947,3222,3583,7364,4948,7365,7366,7367,7368,4949,3501,4950, # 6848
3781,4951,4532,7369,2517,4952,4252,4953,3155,7370,4954,4955,4253,2518,4533,7371, # 6864
7372,2712,4254,7373,7374,7375,3670,4956,3671,7376,2389,3502,4065,7377,2338,7378, # 6880
7379,7380,7381,3061,7382,4957,7383,7384,7385,7386,4958,4534,7387,7388,2993,7389, # 6896
3062,7390,4959,7391,7392,7393,4960,3108,4961,7394,4535,7395,4962,3421,4536,7396, # 6912
4963,7397,4964,1857,7398,4965,7399,7400,2176,3584,4966,7401,7402,3422,4537,3900, # 6928
3585,7403,3782,7404,2852,7405,7406,7407,4538,3783,2654,3423,4967,4539,7408,3784, # 6944
3586,2853,4540,4541,7409,3901,7410,3902,7411,7412,3785,3109,2327,3903,7413,7414, # 6960
2970,4066,2932,7415,7416,7417,3904,3672,3424,7418,4542,4543,4544,7419,4968,7420, # 6976
7421,4255,7422,7423,7424,7425,7426,4067,7427,3673,3365,4545,7428,3110,2559,3674, # 6992
7429,7430,3156,7431,7432,3503,7433,3425,4546,7434,3063,2873,7435,3223,4969,4547, # 7008
4548,2898,4256,4068,7436,4069,3587,3786,2933,3787,4257,4970,4971,3788,7437,4972, # 7024
3064,7438,4549,7439,7440,7441,7442,7443,4973,3905,7444,2874,7445,7446,7447,7448, # 7040
3021,7449,4550,3906,3588,4974,7450,7451,3789,3675,7452,2578,7453,4070,7454,7455, # 7056
7456,4258,3676,7457,4975,7458,4976,4259,3790,3504,2634,4977,3677,4551,4260,7459, # 7072
7460,7461,7462,3907,4261,4978,7463,7464,7465,7466,4979,4980,7467,7468,2213,4262, # 7088
7469,7470,7471,3678,4981,7472,2439,7473,4263,3224,3289,7474,3908,2415,4982,7475, # 7104
4264,7476,4983,2655,7477,7478,2732,4552,2854,2875,7479,7480,4265,7481,4553,4984, # 7120
7482,7483,4266,7484,3679,3366,3680,2818,2781,2782,3367,3589,4554,3065,7485,4071, # 7136
2899,7486,7487,3157,2462,4072,4555,4073,4985,4986,3111,4267,2687,3368,4556,4074, # 7152
3791,4268,7488,3909,2783,7489,2656,1962,3158,4557,4987,1963,3159,3160,7490,3112, # 7168
4988,4989,3022,4990,4991,3792,2855,7491,7492,2971,4558,7493,7494,4992,7495,7496, # 7184
7497,7498,4993,7499,3426,4559,4994,7500,3681,4560,4269,4270,3910,7501,4075,4995, # 7200
4271,7502,7503,4076,7504,4996,7505,3225,4997,4272,4077,2819,3023,7506,7507,2733, # 7216
4561,7508,4562,7509,3369,3793,7510,3590,2508,7511,7512,4273,3113,2994,2616,7513, # 7232
7514,7515,7516,7517,7518,2820,3911,4078,2748,7519,7520,4563,4998,7521,7522,7523, # 7248
7524,4999,4274,7525,4564,3682,2239,4079,4565,7526,7527,7528,7529,5000,7530,7531, # 7264
5001,4275,3794,7532,7533,7534,3066,5002,4566,3161,7535,7536,4080,7537,3162,7538, # 7280
7539,4567,7540,7541,7542,7543,7544,7545,5003,7546,4568,7547,7548,7549,7550,7551, # 7296
7552,7553,7554,7555,7556,5004,7557,7558,7559,5005,7560,3795,7561,4569,7562,7563, # 7312
7564,2821,3796,4276,4277,4081,7565,2876,7566,5006,7567,7568,2900,7569,3797,3912, # 7328
7570,7571,7572,4278,7573,7574,7575,5007,7576,7577,5008,7578,7579,4279,2934,7580, # 7344
7581,5009,7582,4570,7583,4280,7584,7585,7586,4571,4572,3913,7587,4573,3505,7588, # 7360
5010,7589,7590,7591,7592,3798,4574,7593,7594,5011,7595,4281,7596,7597,7598,4282, # 7376
5012,7599,7600,5013,3163,7601,5014,7602,3914,7603,7604,2734,4575,4576,4577,7605, # 7392
7606,7607,7608,7609,3506,5015,4578,7610,4082,7611,2822,2901,2579,3683,3024,4579, # 7408
3507,7612,4580,7613,3226,3799,5016,7614,7615,7616,7617,7618,7619,7620,2995,3290, # 7424
7621,4083,7622,5017,7623,7624,7625,7626,7627,4581,3915,7628,3291,7629,5018,7630, # 7440
7631,7632,7633,4084,7634,7635,3427,3800,7636,7637,4582,7638,5019,4583,5020,7639, # 7456
3916,7640,3801,5021,4584,4283,7641,7642,3428,3591,2269,7643,2617,7644,4585,3592, # 7472
7645,4586,2902,7646,7647,3227,5022,7648,4587,7649,4284,7650,7651,7652,4588,2284, # 7488
7653,5023,7654,7655,7656,4589,5024,3802,7657,7658,5025,3508,4590,7659,7660,7661, # 7504
1969,5026,7662,7663,3684,1821,2688,7664,2028,2509,4285,7665,2823,1841,7666,2689, # 7520
3114,7667,3917,4085,2160,5027,5028,2972,7668,5029,7669,7670,7671,3593,4086,7672, # 7536
4591,4087,5030,3803,7673,7674,7675,7676,7677,7678,7679,4286,2366,4592,4593,3067, # 7552
2328,7680,7681,4594,3594,3918,2029,4287,7682,5031,3919,3370,4288,4595,2856,7683, # 7568
3509,7684,7685,5032,5033,7686,7687,3804,2784,7688,7689,7690,7691,3371,7692,7693, # 7584
2877,5034,7694,7695,3920,4289,4088,7696,7697,7698,5035,7699,5036,4290,5037,5038, # 7600
5039,7700,7701,7702,5040,5041,3228,7703,1760,7704,5042,3229,4596,2106,4089,7705, # 7616
4597,2824,5043,2107,3372,7706,4291,4090,5044,7707,4091,7708,5045,3025,3805,4598, # 7632
4292,4293,4294,3373,7709,4599,7710,5046,7711,7712,5047,5048,3806,7713,7714,7715, # 7648
5049,7716,7717,7718,7719,4600,5050,7720,7721,7722,5051,7723,4295,3429,7724,7725, # 7664
7726,7727,3921,7728,3292,5052,4092,7729,7730,7731,7732,7733,7734,7735,5053,5054, # 7680
7736,7737,7738,7739,3922,3685,7740,7741,7742,7743,2635,5055,7744,5056,4601,7745, # 7696
7746,2560,7747,7748,7749,7750,3923,7751,7752,7753,7754,7755,4296,2903,7756,7757, # 7712
7758,7759,7760,3924,7761,5057,4297,7762,7763,5058,4298,7764,4093,7765,7766,5059, # 7728
3925,7767,7768,7769,7770,7771,7772,7773,7774,7775,7776,3595,7777,4299,5060,4094, # 7744
7778,3293,5061,7779,7780,4300,7781,7782,4602,7783,3596,7784,7785,3430,2367,7786, # 7760
3164,5062,5063,4301,7787,7788,4095,5064,5065,7789,3374,3115,7790,7791,7792,7793, # 7776
7794,7795,7796,3597,4603,7797,7798,3686,3116,3807,5066,7799,7800,5067,7801,7802, # 7792
4604,4302,5068,4303,4096,7803,7804,3294,7805,7806,5069,4605,2690,7807,3026,7808, # 7808
7809,7810,7811,7812,7813,7814,7815,7816,7817,7818,7819,7820,7821,7822,7823,7824, # 7824
7825,7826,7827,7828,7829,7830,7831,7832,7833,7834,7835,7836,7837,7838,7839,7840, # 7840
7841,7842,7843,7844,7845,7846,7847,7848,7849,7850,7851,7852,7853,7854,7855,7856, # 7856
7857,7858,7859,7860,7861,7862,7863,7864,7865,7866,7867,7868,7869,7870,7871,7872, # 7872
7873,7874,7875,7876,7877,7878,7879,7880,7881,7882,7883,7884,7885,7886,7887,7888, # 7888
7889,7890,7891,7892,7893,7894,7895,7896,7897,7898,7899,7900,7901,7902,7903,7904, # 7904
7905,7906,7907,7908,7909,7910,7911,7912,7913,7914,7915,7916,7917,7918,7919,7920, # 7920
7921,7922,7923,7924,3926,7925,7926,7927,7928,7929,7930,7931,7932,7933,7934,7935, # 7936
7936,7937,7938,7939,7940,7941,7942,7943,7944,7945,7946,7947,7948,7949,7950,7951, # 7952
7952,7953,7954,7955,7956,7957,7958,7959,7960,7961,7962,7963,7964,7965,7966,7967, # 7968
7968,7969,7970,7971,7972,7973,7974,7975,7976,7977,7978,7979,7980,7981,7982,7983, # 7984
7984,7985,7986,7987,7988,7989,7990,7991,7992,7993,7994,7995,7996,7997,7998,7999, # 8000
8000,8001,8002,8003,8004,8005,8006,8007,8008,8009,8010,8011,8012,8013,8014,8015, # 8016
8016,8017,8018,8019,8020,8021,8022,8023,8024,8025,8026,8027,8028,8029,8030,8031, # 8032
8032,8033,8034,8035,8036,8037,8038,8039,8040,8041,8042,8043,8044,8045,8046,8047, # 8048
8048,8049,8050,8051,8052,8053,8054,8055,8056,8057,8058,8059,8060,8061,8062,8063, # 8064
8064,8065,8066,8067,8068,8069,8070,8071,8072,8073,8074,8075,8076,8077,8078,8079, # 8080
8080,8081,8082,8083,8084,8085,8086,8087,8088,8089,8090,8091,8092,8093,8094,8095, # 8096
8096,8097,8098,8099,8100,8101,8102,8103,8104,8105,8106,8107,8108,8109,8110,8111, # 8112
8112,8113,8114,8115,8116,8117,8118,8119,8120,8121,8122,8123,8124,8125,8126,8127, # 8128
8128,8129,8130,8131,8132,8133,8134,8135,8136,8137,8138,8139,8140,8141,8142,8143, # 8144
8144,8145,8146,8147,8148,8149,8150,8151,8152,8153,8154,8155,8156,8157,8158,8159, # 8160
8160,8161,8162,8163,8164,8165,8166,8167,8168,8169,8170,8171,8172,8173,8174,8175, # 8176
8176,8177,8178,8179,8180,8181,8182,8183,8184,8185,8186,8187,8188,8189,8190,8191, # 8192
8192,8193,8194,8195,8196,8197,8198,8199,8200,8201,8202,8203,8204,8205,8206,8207, # 8208
8208,8209,8210,8211,8212,8213,8214,8215,8216,8217,8218,8219,8220,8221,8222,8223, # 8224
8224,8225,8226,8227,8228,8229,8230,8231,8232,8233,8234,8235,8236,8237,8238,8239, # 8240
8240,8241,8242,8243,8244,8245,8246,8247,8248,8249,8250,8251,8252,8253,8254,8255, # 8256
8256,8257,8258,8259,8260,8261,8262,8263,8264,8265,8266,8267,8268,8269,8270,8271) # 8272
    
            # return its order if it is hiragana
        if len(aBuf) > 1:
            second_char = wrap_ord(aBuf[1])
            if (first_char == 0xA4) and (0xA1 <= second_char <= 0xF3):
                return second_char - 0xA1, charLen
    
    Win1250HungarianModel = {
  'charToOrderMap': win1250HungarianCharToOrderMap,
  'precedenceMatrix': HungarianLangModel,
  'mTypicalPositiveRatio': 0.947368,
  'keepEnglishLetter': True,
  'charsetName': 'windows-1250'
}
    
    # Character Mapping Table:
TIS620CharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253,182,106,107,100,183,184,185,101, 94,186,187,108,109,110,111,  # 40
188,189,190, 89, 95,112,113,191,192,193,194,253,253,253,253,253,  # 50
253, 64, 72, 73,114, 74,115,116,102, 81,201,117, 90,103, 78, 82,  # 60
 96,202, 91, 79, 84,104,105, 97, 98, 92,203,253,253,253,253,253,  # 70
209,210,211,212,213, 88,214,215,216,217,218,219,220,118,221,222,
223,224, 99, 85, 83,225,226,227,228,229,230,231,232,233,234,235,
236,  5, 30,237, 24,238, 75,  8, 26, 52, 34, 51,119, 47, 58, 57,
 49, 53, 55, 43, 20, 19, 44, 14, 48,  3, 17, 25, 39, 62, 31, 54,
 45,  9, 16,  2, 61, 15,239, 12, 42, 46, 18, 21, 76,  4, 66, 63,
 22, 10,  1, 36, 23, 13, 40, 27, 32, 35, 86,240,241,242,243,244,
 11, 28, 41, 29, 33,245, 50, 37,  6,  7, 67, 77, 38, 93,246,247,
 68, 56, 59, 65, 69, 60, 70, 80, 71, 87,248,249,250,251,252,253,
)