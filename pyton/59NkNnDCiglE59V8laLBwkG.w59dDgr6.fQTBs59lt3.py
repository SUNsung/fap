
        
                app.config.from_pyfile('yourconfig.cfg')
    
        if blueprint is not None and seems_fishy:
        info.append('  The template was looked up from an endpoint that '
                    'belongs to the blueprint '%s'.' % blueprint)
        info.append('  Maybe you did not place a template in the right folder?')
        info.append('  See http://flask.pocoo.org/docs/blueprints/#templates')
    
    :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
    
    
class SessionMixin(MutableMapping):
    '''Expands a basic dictionary with session attributes.'''
    
        def inject_version(match):
        before, old, after = match.groups()
        changed.append(True)
        return before + version_number + after
    
    
@pytest.mark.skipif(not PY2, reason='This only works under Python 2.')
def test_meta_path_loader_without_is_package(request, modules_tmpdir):
    app = modules_tmpdir.join('unimportable.py')
    app.write('import flask\napp = flask.Flask(__name__)')
    
        response = HttpResponse(template.render({'flatpage': f}, request))
    return response

    
    
###############################################################################
# Data
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
    Benchmarks for random projections.
    
    for f in solutions:
    if not f.endswith('.py'):
        continue
    
    '''
print(__doc__)
    
    acc_clf1, acc_clf2 = [], []
n_features_range = range(1, n_features_max + 1, step)
for n_features in n_features_range:
    score_clf1, score_clf2 = 0, 0
    for _ in range(n_averages):
        X, y = generate_data(n_train, n_features)
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
        def _add_middleware(self, mw):
        if hasattr(mw, 'process_request'):
            self.methods['process_request'].append(mw.process_request)
        if hasattr(mw, 'process_response'):
            self.methods['process_response'].insert(0, mw.process_response)
        if hasattr(mw, 'process_exception'):
            self.methods['process_exception'].insert(0, mw.process_exception)
    
        def log(self, request, spider):
        if self.debug:
            msg = 'Filtered duplicate request: %(request)s'
            self.logger.debug(msg, {'request': request}, extra={'spider': spider})
        elif self.logdupes:
            msg = ('Filtered duplicate request: %(request)s'
                   ' - no more duplicates will be shown'
                   ' (see DUPEFILTER_DEBUG to show all duplicates)')
            self.logger.debug(msg, {'request': request}, extra={'spider': spider})
            self.logdupes = False
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
        # If no valid image file was uploaded, show the file upload form:
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
        # Find encodings for faces in the test iamge
    faces_encodings = face_recognition.face_encodings(X_img, known_face_locations=X_face_locations)
    
    setup(
    name='face_recognition',
    version='1.2.2',
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

    
            result = runner.invoke(face_recognition_cli.main, args=[image_folder, image_file, '--tolerance', '0.55'])