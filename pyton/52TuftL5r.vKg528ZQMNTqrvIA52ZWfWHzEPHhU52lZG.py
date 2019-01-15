
        
        print()

    
    
class GitHubReleaser(object):
    _API_URL = 'https://api.github.com/repos/rg3/youtube-dl/releases'
    _UPLOADS_URL = 'https://uploads.github.com/repos/rg3/youtube-dl/releases/%s/assets?name=%s'
    _NETRC_MACHINE = 'github.com'
    
    import rsa
import json
from binascii import hexlify
    
    entries = []
for v in versions:
    fields = v.split('.')
    year, month, day = map(int, fields[:3])
    faked = 0
    patchlevel = 0
    while True:
        try:
            datetime.date(year, month, day)
        except ValueError:
            day -= 1
            faked += 1
            assert day > 0
            continue
        break
    if len(fields) >= 4:
        try:
            patchlevel = int(fields[3])
        except ValueError:
            patchlevel = 1
    timestamp = '%04d-%02d-%02dT00:%02d:%02dZ' % (year, month, day, faked, patchlevel)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_no_duplicates(self):
        ies = gen_extractors()
        for tc in gettestcases(include_onlymatching=True):
            url = tc['url']
            for ie in ies:
                if type(ie).__name__ in ('GenericIE', tc['name'] + 'IE'):
                    self.assertTrue(ie.suitable(url), '%s should match URL %r' % (type(ie).__name__, url))
                else:
                    self.assertFalse(
                        ie.suitable(url),
                        '%s should not match URL %r . That URL belongs to %s.' % (type(ie).__name__, url, tc['name']))
    
    
class Unaccent(Transform):
    bilateral = True
    lookup_name = 'unaccent'
    function = 'UNACCENT'
    
    
class RangeMaxValueValidator(MaxValueValidator):
    def compare(self, a, b):
        return a.upper is None or a.upper > b
    message = _('Ensure that this range is completely less than or equal to %(limit_value)s.')
    
        def save(self, must_create=False):
        '''
        Save the current session data to the database. If 'must_create' is
        True, raise a database error if the saving operation doesn't create a
        new entry (as opposed to possibly updating an existing entry).
        '''
        if self.session_key is None:
            return self.create()
        data = self._get_session(no_load=must_create)
        obj = self.create_model_instance(data)
        using = router.db_for_write(self.model, instance=obj)
        try:
            with transaction.atomic(using=using):
                obj.save(force_insert=must_create, force_update=not must_create, using=using)
        except IntegrityError:
            if must_create:
                raise CreateError
            raise
        except DatabaseError:
            if not must_create:
                raise UpdateError
            raise
    
        def delete(self, session_key=None):
        '''
        To delete, clear the session key and the underlying data structure
        and set the modified flag so that the cookie is set on the client for
        the current request.
        '''
        self._session_key = ''
        self._session_cache = {}
        self.modified = True
    
        @classmethod
    def get_session_store_class(cls):
        raise NotImplementedError
    
            # Find all people in the image using a trained classifier model
        # Note: You can pass in either a classifier file name or a classifier model instance
        predictions = predict(full_file_path, model_path='trained_knn_model.clf')
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)
    
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
