
        
        This module contains the authentication handlers for Requests.
'''
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.

    
            >>> to_key_val_list([('key', 'val')])
        [('key', 'val')]
        >>> to_key_val_list({'key': 'val'})
        [('key', 'val')]
        >>> to_key_val_list('string')
        ValueError: cannot encode objects that are not 2-tuples.
    
    '''
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
        cmd = cmds[cmdname]
    parser.usage = 'scrapy %s %s' % (cmdname, cmd.syntax())
    parser.description = cmd.long_desc()
    settings.setdict(cmd.default_settings, priority='command')
    cmd.settings = settings
    cmd.add_options(parser)
    opts, args = parser.parse_args(args=argv[1:])
    _run_print_help(parser, cmd.process_options, args, opts)
    
        def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
    
    
        def syntax(self):
        return '<spider>'
    
        def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
        def syntax(self):
        return '[options]'
    
        def __init__(self, *args, **kwargs):
        super(ReturnsContract, self).__init__(*args, **kwargs)
    
    
    @implementer(IPolicyForHTTPS)
    class BrowserLikeContextFactory(ScrapyClientContextFactory):
        '''
        Twisted-recommended context factory for web clients.
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
        def timeout(self):
        self.transport.loseConnection()
    
        test_suite = 'tests',
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    from ..common import *
import urllib.parse
    
    __all__ = ['ehow_download']
    
    
'''
http://open.iqiyi.com/lib/player.html
'''
iqiyi_patterns = [r'(?:\'|\')(https?://dispatcher\.video\.qiyi\.com\/disp\/shareplayer\.swf\?.+?)(?:\'|\')',
                  r'(?:\'|\')(https?://open\.iqiyi\.com\/developer\/player_js\/coopPlayerIndex\.html\?.+?)(?:\'|\')']
    
    site_info = 'funshion'
download = funshion_download
download_playlist = playlist_not_supported('funshion')

    
                if title is None:
                response = request.urlopen(request.Request(real_url))
                if response.headers['content-disposition']:
                    filename = parse.unquote(r1(r'filename='?(.+)'?', response.headers['content-disposition'])).split('.')
                    title = ''.join(filename[:-1])
        except: pass
    
        def show_sec(course_id, chap_id):
        ep = 'http://www.icourses.cn/jpk/getSectionNode.action?courseId={}&characId={}&mod=2'
        req = post_content(ep.format(course_id, chap_id), post_data={})
        return req
    
    # Add any paths that contain custom static files (such as style sheets)
# here, relative to this directory. They are copied after the builtin
# static files, so a file named 'default.css' will overwrite the builtin
# 'default.css'.
html_static_path = ['_static']
    
        # Resize frame of video to 1/4 size for faster face detection processing
    small_frame = cv2.resize(frame, (0, 0), fx=0.25, fy=0.25)
    
    for face_landmarks in face_landmarks_list:
    pil_image = Image.fromarray(image)
    d = ImageDraw.Draw(pil_image, 'RGBA')
    
    for face_location in face_locations:
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
            # If a match was found in known_face_encodings, just use the first one.
        if True in matches:
            first_match_index = matches.index(True)
            name = known_face_names[first_match_index]
    
        # Only process every other frame of video to save time
    if process_this_frame:
        # Find all the faces and face encodings in the current frame of video
        face_locations = face_recognition.face_locations(rgb_small_frame)
        face_encodings = face_recognition.face_encodings(rgb_small_frame, face_locations)
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        # If a match was found in known_face_encodings, just use the first one.
    if True in matches:
        first_match_index = matches.index(True)
        name = known_face_names[first_match_index]
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
        model_list = (
        sentry_models.ReleaseCommit, sentry_models.ReleaseEnvironment, sentry_models.ReleaseFile,
        sentry_models.ReleaseProject, sentry_models.GroupRelease, sentry_models.GroupResolution
    )
    for release in from_releases:
        for model in model_list:
            if hasattr(model, 'release'):
                update_kwargs = {'release': to_release}
            else:
                update_kwargs = {'release_id': to_release.id}
            try:
                with transaction.atomic():
                    model.objects.filter(release_id=release.id).update(**update_kwargs)
            except IntegrityError:
                for item in model.objects.filter(release_id=release.id):
                    try:
                        with transaction.atomic():
                            model.objects.filter(id=item.id).update(**update_kwargs)
                    except IntegrityError:
                        item.delete()
    
        def backwards(self, orm):
        # Removing unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.delete_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
            db.start_transaction()
    
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
                    'default': 'datetime.datetime(2017, 3, 2, 0, 0)',
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
                    'default': 'u'fKyAvmgARQPEgYgFFlJJYUyjwKjFoJSK'',
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
    
            for release_project in RangeQuerySetWrapperWithProgressBar(
            orm.ReleaseProject.objects.all()
        ):
            orm.ReleaseProject.objects.filter(id=release_project.id).update(
                new_groups=orm.Group.objects.filter(
                    project_id=release_project.project_id,
                    first_release_id=release_project.release_id,
                ).count()
            )
    
        complete_apps = ['sentry']

    
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
                    'default': ''39e1c00e14514560a1b5c4997b1482d575cce74c270c4cc9a149faf1b67121a7'',
                    'unique': 'True',
                    'max_length': '64'
                }
            ),
            'client_secret': (
                'sentry.db.models.fields.encrypted.EncryptedTextField', [], {
                    'default': ''4816d2082b9d407f9b147f8c81842b16760031d9dbae4f6dabe48ea29544b6f7''
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
                    'default': ''Undiscernable Marley'',
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
                    'default': ''9954eee7a2f1457e9f3287804256d7a2'',
                    'max_length': '64',
                    'db_index': 'True'
                }
            ),
            'expires_at': (
                'django.db.models.fields.DateTimeField', [], {
                    'default': 'datetime.datetime(2017, 4, 19, 0, 0)',
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
                    'default': 'datetime.datetime(2017, 5, 19, 0, 0)',
                    'null': 'True'
                }
            ),
            'id':
            ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {
                'primary_key': 'True'
            }),
            'refresh_token': (
                'django.db.models.fields.CharField', [], {
                    'default': ''57578933ddf2478396a8fdbc430468e0357b40e10c4f42e09d424c6b47363adc'',
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
                    'default': ''96f5154907924b20a6cb94126f0b503c53c89da5c56c460db1a8ce4d1113406b'',
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
                    'default': 'datetime.datetime(2017, 4, 26, 0, 0)',
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
                    'default': 'u'sOK4LVBQhrF1D3UgNb2yurDHRcNuO9WP'',
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
    
    *Where can the pattern be used practically?
The Factory Method can be seen in the popular web framework Django:
http://django.wikispaces.asu.edu/*NEW*+Django+Design+Patterns For
example, in a contact form of a web page, the subject and the message
fields are created using the same form factory (CharField()), even
though they have different implementations according to their
purposes.
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
    # initialization of new graph search object
graph1 = GraphSearch(graph)
    
        def on_fault_trigger(self):
        raise UnsupportedTransition
    
        def __get__(self, obj, klas):
        print('(Fetching from Data Store)')
        return {'products': self.products}
    
    
class Proxy:
    def __init__(self):
        self.busy = 'No'
        self.sales = None
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
    
    
def hard_sigmoid(x):
    '''
    x = 0.                  x < -2.5
      = 1.                  x > 2.5
      = 0.2 * x + 0.5       otherwise
    '''
    x = (0.2 * x) + 0.5
    x = tf.clip_by_value(x, 0., 1.)
    return x
    
        return x
    
    from .array_op import *
from .math_op import *
from ..regularizers import l2_regularizer
    
    # 构建 FastText 模型
sentences = [['Hello', 'World', '!'], ['I', 'am', 'huay', '.']]
min_ngrams, max_ngrams = 2, 4  # ngrams 范围
model = FastText(sentences, size=5, min_count=1, min_n=min_ngrams, max_n=max_ngrams)