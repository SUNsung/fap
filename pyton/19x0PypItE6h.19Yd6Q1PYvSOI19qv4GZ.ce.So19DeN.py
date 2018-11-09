
        
            if not advapi32.SetServiceStatus(handle, ctypes.byref(svcStatus)):
        raise OSError('SetServiceStatus failed: %r' % ctypes.FormatError())
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
from youtube_dl.version import __version__
version = __version__
# The full version, including alpha/beta/rc tags.
release = version
    
            info_dict = _make_result(formats)
        ydl = YDL({'format': 'best'})
        ie = YoutubeIE(ydl)
        ie._sort_formats(info_dict['formats'])
        ydl.process_ie_result(copy.deepcopy(info_dict))
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], 'aac-64')
    
        def test_cbc_encrypt(self):
        data = bytes_to_intlist(self.secret_msg)
        encrypted = intlist_to_bytes(aes_cbc_encrypt(data, self.key, self.iv))
        self.assertEqual(
            encrypted,
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd')
    
        def validate_origin_access_identity_id_from_caller_reference(
            self, caller_reference):
        try:
            origin_access_identities = self.__cloudfront_facts_mgr.list_origin_access_identities()
            origin_origin_access_identity_ids = [oai.get('Id') for oai in origin_access_identities]
            for origin_access_identity_id in origin_origin_access_identity_ids:
                oai_config = (self.__cloudfront_facts_mgr.get_origin_access_identity_config(origin_access_identity_id))
                temp_caller_reference = oai_config.get('CloudFrontOriginAccessIdentityConfig').get('CallerReference')
                if temp_caller_reference == caller_reference:
                    return origin_access_identity_id
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error getting Origin Access Identity from caller_reference.')
    
            for lc in response['LaunchConfigurations']:
            data = {
                'name': lc['LaunchConfigurationName'],
                'arn': lc['LaunchConfigurationARN'],
                'created_time': lc['CreatedTime'],
                'user_data': lc['UserData'],
                'instance_type': lc['InstanceType'],
                'image_id': lc['ImageId'],
                'ebs_optimized': lc['EbsOptimized'],
                'instance_monitoring': lc['InstanceMonitoring'],
                'classic_link_vpc_security_groups': lc['ClassicLinkVPCSecurityGroups'],
                'block_device_mappings': lc['BlockDeviceMappings'],
                'keyname': lc['KeyName'],
                'security_groups': lc['SecurityGroups'],
                'kernel_id': lc['KernelId'],
                'ram_disk_id': lc['RamdiskId'],
                'associate_public_address': lc.get('AssociatePublicIpAddress', False),
            }
    
        results = []
    for placement_group in response['PlacementGroups']:
        results.append({
            'name': placement_group['GroupName'],
            'state': placement_group['State'],
            'strategy': placement_group['Strategy'],
        })
    return results
    
    
def create_vpc(connection, module, cidr_block, tenancy):
    try:
        if not module.check_mode:
            vpc_obj = connection.create_vpc(CidrBlock=cidr_block, InstanceTenancy=tenancy)
        else:
            module.exit_json(changed=True)
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, 'Failed to create the VPC')
    
        :param registry_id: Optional string containing the registryId.
    :return: kwargs dict with registryId, if given
    '''
    if not registry_id:
        return dict()
    else:
        return dict(registryId=registry_id)
    
                if not res or not res.ok:
                xlog.debug('ip:%s fail', ip)
                continue
    
                    if self.eot[s] >= 0:
                    #print 'EOT to %d' % self.eot[s]
                    
                    s = self.eot[s]
                    input.consume()
                    continue
    
        @classmethod
    def default_encoder(cls, value):
        return pyrfc3339.generate(value)
    
    
class ResourceTest(unittest.TestCase):
    '''Tests for acme.fields.Resource.'''
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    # The name of an image file (relative to this directory) to place at the top of
# the title page.
#latex_logo = None
    
        :returns: filename of vhost
    :rtype: str
    
    MANAGED_COMMENT = 'DO NOT REMOVE - Managed by Certbot'
MANAGED_COMMENT_ID = MANAGED_COMMENT+', VirtualHost id: {0}'
'''Managed by Certbot comments and the VirtualHost identification template'''

    
            =========================================  =====
        ``127.0.0.1:\*.conflicts(127.0.0.1:443)``  True
        ``127.0.0.1:443.conflicts(127.0.0.1:\*)``  False
        ``\*:443.conflicts(\*:80)``                False
        ``_default_:443.conflicts(\*:443)``        True
        =========================================  =====
    
    from sentry.utils.query import RangeQuerySetWrapperWithProgressBar
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'EnvironmentProject'
        db.create_table(
            'sentry_environmentproject', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'environment', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Environment']
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['EnvironmentProject'])
    
            for project in RangeQuerySetWrapperWithProgressBar(orm.Project.objects.all()):
            orm.Environment.objects.filter(
                project_id=project.id, organization_id__isnull=True
            ).update(organization_id=project.organization_id)
    
            # User chose to not deal with backwards NULL issues for 'ReleaseEnvironment.project_id'
        raise RuntimeError(
            'Cannot reverse this migration. 'ReleaseEnvironment.project_id' and its values cannot be restored.'
        )
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'VersionDSymFile'
        db.create_table(
            'sentry_versiondsymfile', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'dsym_file', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ProjectDSymFile'], null=True
                    )
                ), (
                    'dsym_app', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.DSymApp']
                    )
                ), ('version', self.gf('django.db.models.fields.CharField')(max_length=32)),
                ('build', self.gf('django.db.models.fields.CharField')(max_length=32, null=True)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['VersionDSymFile'])
    
        complete_apps = ['sentry']
    symmetrical = True

    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding field 'UserOption.organization'
        db.add_column(
            'sentry_useroption',
            'organization',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Organization'], null=True
            ),
            keep_default=False
        )
    
        # STEP 2: Using the trained classifier, make predictions for unknown images
    for image_file in os.listdir('knn_examples/test'):
        full_file_path = os.path.join('knn_examples/test', image_file)
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
        :param face_image: image to search
    :param face_locations: Optionally provide a list of face locations to check.
    :param model: Optional - which model to use. 'large' (default) or 'small' which only returns 5 points but is faster.
    :return: A list of dicts of face feature locations (eyes, nose, etc)
    '''
    landmarks = _raw_face_landmarks(face_image, face_locations, model)
    landmarks_as_tuples = [[(p.x, p.y) for p in landmark.parts()] for landmark in landmarks]
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    
@app.route('/', methods=['GET', 'POST'])
def upload_image():
    # 检测图片是否上传成功
    if request.method == 'POST':
        if 'file' not in request.files:
            return redirect(request.url)