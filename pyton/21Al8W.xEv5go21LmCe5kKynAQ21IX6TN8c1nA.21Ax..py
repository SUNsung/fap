
        
            plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
        it = 0
    results = defaultdict(lambda: [])
    chunk = 100
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            dataset_kwargs = {
                'n_samples': n_samples,
                'n_features': n_features,
                'n_informative': n_features // 10,
                'effective_rank': min(n_samples, n_features) / 10,
                #'effective_rank': None,
                'bias': 0.0,
            }
            print('n_samples: %d' % n_samples)
            print('n_features: %d' % n_features)
            X, y = make_regression(**dataset_kwargs)
    
        for (sbplt, vals, quantity,
         build_time, query_time) in [(311, Nrange, 'N',
                                      N_results_build,
                                      N_results_query),
                                     (312, Drange, 'D',
                                      D_results_build,
                                      D_results_query),
                                     (313, krange, 'k',
                                      k_results_build,
                                      k_results_query)]:
        ax = plt.subplot(sbplt, yscale='log')
        plt.grid(True)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        bench['memory'] = '{:.1f}'.format(np.max(mem_usage))
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
    
def get_pdf_size(version):
    api_url = ROOT_URL + '%s/_downloads' % version
    for path_details in json_urlread(api_url):
        if path_details['name'] == 'scikit-learn-docs.pdf':
            return human_readable_data_quantity(path_details['size'], 1000)
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
            # split the paragraph into fake smaller paragraphs to make the
        # problem harder e.g. more similar to tweets
        if lang in ('zh', 'ja'):
        # FIXME: whitespace tokenizing does not work on chinese and japanese
            continue
        words = content.split()
        n_groups = len(words) / n_words_per_short_text
        if n_groups < 1:
            continue
        groups = np.array_split(words, n_groups)
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
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
