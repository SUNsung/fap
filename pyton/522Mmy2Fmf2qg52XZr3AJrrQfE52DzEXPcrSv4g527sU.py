
        
                # ensure server thread doesn't get stuck waiting for connections
        self._close_server_sock_ignore_errors()
        self.join()
        return False # allow exceptions to propagate

    
    import chardet
    
    '''
requests.structures
~~~~~~~~~~~~~~~~~~~
    
        def digest_response_handler(sock):
        # Respond to GET with a 200 containing www-authenticate header.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_200_chal)
    
    requires = [
    'chardet>=3.0.2,<3.1.0',
    'idna>=2.5,<2.9',
    'urllib3>=1.21.1,<1.26,!=1.25.0,!=1.25.1',
    'certifi>=2017.4.17'
    
        @pytest.mark.parametrize(
        'encoding', (
            'utf-32', 'utf-8-sig', 'utf-16', 'utf-8', 'utf-16-be', 'utf-16-le',
            'utf-32-be', 'utf-32-le'
        ))
    def test_encoded(self, encoding):
        data = '{}'.encode(encoding)
        assert guess_json_utf(data) == encoding
    
    When starting from the default values (alpha_init = 1.90, lambda_init = 1.),
the bias of the resulting curve is large, and the variance is small.
So, lambda_init should be relatively small (1.e-3) so as to reduce the bias.
    
    Note that this accuracy of this l1-penalized linear model is significantly
below what can be reached by an l2-penalized linear model or a non-linear
multi-layer perceptron model on this dataset.
    
        alpha = 0.01  # regularization parameter
    
    
def plot_batch_errors(all_errors, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_errors['pca'], label='PCA')
    plot_results(all_batch_sizes, all_errors['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Mean absolute error')
    
    REVISION_CMD = 'git rev-parse --short HEAD'
    
        # TASK: Predict the outcome on the testing set and store it in a variable
    # named y_predicted
    y_predicted = grid_search.predict(docs_test)
    
        output_file.close()

    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    plt.show()

    
            # Draw a box around the face
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 0, 255), 2)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
                # Draw a box around the face
            cv2.rectangle(frame_process, (left, top), (right, bottom), (0, 0, 255), 2)
    
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

    
        # 选取聚类中心
    centers = rand_center(data, k)
    
    
def clip_relu(x, max_value):
    '''截断 ReLU
    `o = min(max(0., x), max_value)`
    '''
    o = tf.nn.relu(x)
    o = tf.minimum(o, max_value)
    return o
    
      Args:
    pattern: regex pattern
    rep: replacement text
    s: search string
    
    def main(loc, colorscheme):