
        
        install_requires = ['psutil', 'colorama', 'six', 'decorator', 'pyte']
extras_require = {':python_version<'3.4'': ['pathlib2'],
                  ':python_version<'3.3'': ['backports.shutil_get_terminal_size'],
                  ':sys_platform=='win32'': ['win_unicode_console']}
    
        def test_how_to_configure_when_config_not_found(self, shell,
                                                    config_exists):
        config_exists.return_value = False
        assert not shell.how_to_configure().can_configure_automatically
    
        def test_and_(self, shell):
        assert shell.and_('ls', 'cd') == '(ls) -and (cd)'
    
        @pytest.mark.parametrize('side_effect, exception', [
        ([b'\n'], IndexError), (OSError, OSError)])
    def test_get_version_error(self, side_effect, exception, shell, Popen):
        Popen.return_value.stdout.read.side_effect = side_effect
        with pytest.raises(exception):
            shell._get_version()
        assert Popen.call_args[0][0] == ['tcsh', '--version']

    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
            In most of shells we change history on shell-level, but not
        all shells support it (Fish).
    
    
@for_app('pyenv')
def match(command):
    return 'pyenv: no such command' in command.output
    
        def validate(self, value):
        '''Validate that the input is a list or tuple.'''
        if self.required and not value:
            raise ValidationError(self.error_messages['required'], code='required')
        # Validate that each value in the value list is in self.choices.
        for val in value:
            if not self.valid_value(val):
                raise ValidationError(
                    self.error_messages['invalid_choice'],
                    code='invalid_choice',
                    params={'value': val},
                )
    
            self.selenium.find_element_by_xpath('//input[@value='Save']').click()
        self.wait_page_loaded()
    
        def test_related_aggregates_m2m_and_fk(self):
        q = Q(friends__book__publisher__name='Apress') & ~Q(friends__name='test3')
        agg = Sum('friends__book__pages', filter=q)
        self.assertEqual(Author.objects.filter(name='test').aggregate(pages=agg)['pages'], 528)
    
    
def copytree(src, dst):
    shutil.copytree(src, dst, ignore=shutil.ignore_patterns('__pycache__'))
    
    
class Driver(GDALBase):
    '''
    Wrap a GDAL/OGR Data Source Driver.
    For more information, see the C API source code:
    https://www.gdal.org/gdal_8h.html - https://www.gdal.org/ogr__api_8h.html
    '''
    
        @property
    def num_fields(self):
        'Return the number of fields in the Feature.'
        return capi.get_feat_field_count(self.ptr)
    
            # Preprocess json inputs. This converts json strings to dictionaries,
        # which are parsed below the same way as direct dictionary inputs.
        if isinstance(ds_input, str) and json_regex.match(ds_input):
            ds_input = json.loads(ds_input)
    
        # #### Binary predicates. ####
    def contains(self, other):
        'Return true if other.within(this) returns true.'
        return capi.geos_contains(self.ptr, other.ptr)
    
        def test_mark_safe_lazy(self):
        s = lazystr('a&b')
    
        plot_feature_times(all_times, batch_size, all_features, data)
    plot_feature_errors(all_errors, batch_size, all_features, data)
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
    from time import time
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
    estimators = [('k_means_iris_8', KMeans(n_clusters=8)),
              ('k_means_iris_3', KMeans(n_clusters=3)),
              ('k_means_iris_bad_init', KMeans(n_clusters=3, n_init=1,
                                               init='random'))]
    
    plt.show()

    
    TEST_IMAGES = [
    'obama-240p.jpg',
    'obama-480p.jpg',
    'obama-720p.jpg',
    'obama-1080p.jpg'
]
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
    for face_landmarks in face_landmarks_list:
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_small_frame = small_frame[:, :, ::-1]
    
        # 图片上传失败，输出以下html代码
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
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
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
    ],
    test_suite='tests',
    tests_require=test_requirements
)

    
        #Unless specified otherwise by the user, this is the default colorscheme
    colorscheme = 'basic'