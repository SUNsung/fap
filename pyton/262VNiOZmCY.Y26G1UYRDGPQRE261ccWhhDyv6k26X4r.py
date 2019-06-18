
        
        
def test_boston_housing():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = boston_housing.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
    
            if self.state_spec is not None:
            # initial_state was passed in call, check compatibility
            if self.cell.data_format == 'channels_first':
                ch_dim = 1
            elif self.cell.data_format == 'channels_last':
                ch_dim = 3
            if not [spec.shape[ch_dim] for spec in self.state_spec] == state_size:
                raise ValueError(
                    'An initial_state was passed that is not compatible with '
                    '`cell.state_size`. Received `state_spec`={}; '
                    'However `cell.state_size` is '
                    '{}'.format([spec.shape for spec in self.state_spec],
                                self.cell.state_size))
        else:
            if self.cell.data_format == 'channels_first':
                self.state_spec = [InputSpec(shape=(None, dim, None, None))
                                   for dim in state_size]
            elif self.cell.data_format == 'channels_last':
                self.state_spec = [InputSpec(shape=(None, None, None, dim))
                                   for dim in state_size]
        if self.stateful:
            self.reset_states()
        self.built = True
    
    # create two datasets one with digits below 5 and one with 5 and above
x_train_lt5 = x_train[y_train < 5]
y_train_lt5 = y_train[y_train < 5]
x_test_lt5 = x_test[y_test < 5]
y_test_lt5 = y_test[y_test < 5]
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
def test_invalid_padding():
    with pytest.raises(ValueError):
        conv_utils.normalize_padding('diagonal')
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    solutions = os.listdir(exercise_dir)
    
    # We learn the digits on the first half of the digits
classifier.fit(data[:n_samples // 2], digits.target[:n_samples // 2])
    
                plt.subplots_adjust(bottom=0, top=.89, wspace=0,
                                left=0, right=1)
            plt.suptitle('n_cluster=%i, connectivity=%r' %
                         (n_clusters, connectivity is not None), size=17)
    
    plt.axis('tight')
plt.axis('off')
plt.suptitle('Ground truth', size=20)
    
    import numpy as np
import matplotlib.pyplot as plt
    
    #----------------------------------------------------------------------
# 2D embedding of the digits dataset
print('Computing embedding')
X_red = manifold.SpectralEmbedding(n_components=2).fit_transform(X)
print('Done.')
    
    Reference:
    
    # MiniBatchKMeans
ax = fig.add_subplot(1, 3, 2)
for k, col in zip(range(n_clusters), colors):
    my_members = mbk_means_labels == order[k]
    cluster_center = mbk_means_cluster_centers[order[k]]
    ax.plot(X[my_members, 0], X[my_members, 1], 'w',
            markerfacecolor=col, marker='.')
    ax.plot(cluster_center[0], cluster_center[1], 'o', markerfacecolor=col,
            markeredgecolor='k', markersize=6)
ax.set_title('MiniBatchKMeans')
ax.set_xticks(())
ax.set_yticks(())
plt.text(-3.5, 1.8, 'train time: %.2fs\ninertia: %f' %
         (t_mini_batch, mbk.inertia_))