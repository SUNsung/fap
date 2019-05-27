
        
            num_train_samples = 50000
    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    inputs = Input(shape=x.shape)
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape)(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x[np.newaxis])[0].shape == x.shape
    
             try:
             parallel_model = multi_gpu_model(model, cpu_relocation=True)
             print('Training using multiple GPUs..')
         except ValueError:
             parallel_model = model
             print('Training using single GPU or CPU..')
         parallel_model.compile(..)
         ..
    ```
    
        t = now()
    model.fit(x_train, y_train,
              batch_size=batch_size,
              epochs=epochs,
              verbose=1,
              validation_data=(x_test, y_test))
    print('Training time: %s' % (now() - t))
    score = model.evaluate(x_test, y_test, verbose=0)
    print('Test score:', score[0])
    print('Test accuracy:', score[1])
    
    # Reference
    
    
def test_conv_input_length():
    assert conv_utils.conv_input_length(None, 7, 'same', 1) is None
    assert conv_utils.conv_input_length(112, 7, 'same', 1) == 112
    assert conv_utils.conv_input_length(112, 7, 'same', 2) == 223
    assert conv_utils.conv_input_length(28, 5, 'valid', 1) == 32
    assert conv_utils.conv_input_length(14, 5, 'valid', 2) == 31
    assert conv_utils.conv_input_length(36, 5, 'full', 1) == 32
    assert conv_utils.conv_input_length(18, 5, 'full', 2) == 31
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
                tstart = time()
            clf.fit(X_train, y_train)
            asgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                       y_test)
            asgd_results[i, j, 1] = time() - tstart
    
    fit_data = data[np.argsort(model.row_labels_)]
fit_data = fit_data[:, np.argsort(model.column_labels_)]
    
    
# Plot the distances
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    avg_dist = np.zeros((n_clusters, n_clusters))
    plt.figure(figsize=(5, 4.5))
    for i in range(n_clusters):
        for j in range(n_clusters):
            avg_dist[i, j] = pairwise_distances(X[y == i], X[y == j],
                                                metric=metric).mean()
    avg_dist /= avg_dist.max()
    for i in range(n_clusters):
        for j in range(n_clusters):
            plt.text(i, j, '%5.3f' % avg_dist[i, j],
                     verticalalignment='center',
                     horizontalalignment='center')
    
    
# Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
    plt.show()

    
    \note Please be warned that the line numbers in the API documentation do not
match the real locations in the source code of the package. This is an
unintended artifact of doxygen, which I could only convince to use the
correct module names by concatenating all files from the package into a single
module file...
    
                    # look for a normal char transition
                c = input.LA(1)
    
            pass
    
    # -- General configuration ---------------------------------------------
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
    Algorithm Description:
The knn classifier is first trained on a set of labeled (known) faces and can then predict the person
in an unknown image by finding the k most similar faces (images with closet face-features under eucledian distance)
in its training set, and performing a majority vote (possibly weighted) on their label.
    
    for face_location in face_locations:
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
            result = runner.invoke(face_detection_cli.main, args=[image_file])
        self.assertEqual(result.exit_code, 0)
        self.assertTrue('obama_partial_face2.jpg' in result.output)
        self.assertTrue('obama.jpg' in result.output)
        self.assertTrue('obama2.jpg' in result.output)
        self.assertTrue('obama3.jpg' in result.output)
        self.assertTrue('biden.jpg' in result.output)
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise