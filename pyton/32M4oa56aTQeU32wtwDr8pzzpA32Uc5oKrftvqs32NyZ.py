
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
        flags = [opt.get_opt_string() for opt in opts]
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
    
if __name__ == '__main__':
    unittest.main()

    
                    mapping = KBaseMapping(base=int(base))
                sym_to_name = {}
                for no in range(int(size), 0, -1):
                    no_in_base = mapping.mapping(no)
                    val = names[no] if no < len(names) and names[no] else no_in_base
                    sym_to_name[no_in_base] = val
    
    # Add any paths that contain custom static files (such as style sheets)
# here, relative to this directory. They are copied after the builtin
# static files, so a file named 'default.css' will overwrite the builtin
# 'default.css'.
html_static_path = ['_static']
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    # See how far apart the test image is from the known faces
face_distances = face_recognition.face_distance(known_encodings, image_to_test_encoding)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment',
            'organization_id',
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
    
            # Adding field 'ReleaseFile.dist'
        db.add_column(
            'sentry_releasefile',
            'dist',
            self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['sentry.Distribution'], null=True
            ),
            keep_default=False
        )
    
        def backwards(self, orm):
        # Removing unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.delete_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])