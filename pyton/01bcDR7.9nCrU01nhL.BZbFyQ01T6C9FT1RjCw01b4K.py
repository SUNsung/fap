
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'UNEXPECTED_PROMPT_RESPONSE')
def test_auth_plugin_prompt_password_false(httpbin):
    
    import pytest
    
        def load(self):
        super(Config, self).load()
        self._migrate_implicit_content_type()
    
        Uses threading to periodically update the status (speed, ETA, etc.).
    
    
def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)  # select large prime number.
    e_1 = primitiveRoot(p)  # one primitive root on modulo p.
    d = random.randrange(3, p)  # private_key -> have to be greater than 2 for safety.
    e_2 = cryptoMath.findModInverse(pow(e_1, d, p), p)
    
    try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
    * @author chinmoy159
* @version 1.0 dated 10/08/2017
'''
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
    site_info = 'ifeng.com'
download = ifeng_download
download_playlist = playlist_not_supported('ifeng')

    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # See if the first face in the uploaded image matches the known face of Obama
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
        pool.starmap(test_image, function_parameters)
    
        function_parameters = zip(
        images_to_check,
        itertools.repeat(known_names),
        itertools.repeat(known_face_encodings),
        itertools.repeat(tolerance),
        itertools.repeat(show_distance)
    )
    
        # 载入用户上传的图片
    img = face_recognition.load_image_file(file_stream)
    # 为用户上传的图片中的人脸编码
    unknown_face_encodings = face_recognition.face_encodings(img)
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
        # Loop through each face in this frame of video
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # See if the face is a match for the known face(s)
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    # Release handle to the webcam
video_capture.release()
cv2.destroyAllWindows()

    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
        with tf.variable_scope(name or 'attention_for_rnn', reuse=reuse):
        a = permute(x, [0, 2, 1])  # [batch_size, n_input, n_step]
        a = tf.reshape(a, [-1, n_step])  # [batch_size*n_input, n_step]
    
    
def linear_dense(x, n_unit, name=None, reuse=None):
    '''线性全连接层
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit]
    
    
def update_version(release, sentry_models):
    old_version = release.version
    try:
        project_slug = release.projects.values_list('slug', flat=True)[0]
    except IndexError:
        # delete releases if they have no projects
        release.delete()
        return
    new_version = ('%s-%s' % (project_slug, old_version))[:64]
    sentry_models.Release.objects.filter(id=release.id).update(version=new_version)
    sentry_models.TagValue.objects.filter(
        project__in=release.projects.all(), key='sentry:release', value=old_version
    ).update(value=new_version)
    
        complete_apps = ['sentry']

    
    
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
    
            # Changing field 'ReleaseEnvironment.project_id'
        if is_postgres():
            db.execute(
                'ALTER TABLE sentry_environmentrelease ALTER COLUMN project_id DROP NOT NULL'
            )
        else:
            db.alter_column(
                'sentry_environmentrelease',
                'project_id',
                self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
            )
    
    
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
    
            # Adding field 'ApiKey.scope_list'
        db.add_column(
            'sentry_apikey',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
            for model in (
            orm['sentry.ApiAuthorization'], orm['sentry.ApiGrant'], orm['sentry.ApiKey'],
            orm['sentry.ApiToken'],
        ):
            queryset = model.objects.all()
            for obj in RangeQuerySetWrapperWithProgressBar(queryset):
                if not obj.scope_list:
                    handler = make_handler(obj.scopes)
                    model.objects.filter(
                        id=obj.id,
                    ).update(
                        scope_list=[k for k, v in six.iteritems(handler) if v],
                    )
    
            # Adding unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.create_unique('sentry_commitauthor', ['organization_id', 'external_id'])