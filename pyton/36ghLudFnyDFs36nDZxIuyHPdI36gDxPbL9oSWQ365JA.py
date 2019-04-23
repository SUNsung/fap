
        
        from flask import Flask
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('', '', b'Username is required.'),
    ('a', '', b'Password is required.'),
    ('test', 'test', b'already registered'),
))
def test_register_validate_input(client, username, password, message):
    response = client.post(
        '/auth/register',
        data={'username': username, 'password': password}
    )
    assert message in response.data
    
        def default(self, o):
        '''Implement this method in a subclass such that it returns a
        serializable object for ``o``, or calls the base implementation (to
        raise a :exc:`TypeError`).
    
        def inner(name, base=modules_tmpdir):
        if not isinstance(name, str):
            raise ValueError(name)
        base.join(name).ensure_dir()
        base.join(name).join('__init__.py').ensure()
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
        new_command = get_new_command(Command('apt update', match_output))
    assert new_command == 'apt list --upgradable'

    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
                gc.collect()
            print('- benchmarking ElasticNet')
            clf = ElasticNet(alpha=alpha, l1_ratio=0.5, fit_intercept=False)
            tstart = time()
            clf.fit(X_train, y_train)
            elnet_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                        y_test)
            elnet_results[i, j, 1] = time() - tstart
    
        gc.collect()
    
    import numpy as np
from matplotlib import pyplot as plt
    
    X_restored = agglo.inverse_transform(X_reduced)
images_restored = np.reshape(X_restored, images.shape)
plt.figure(1, figsize=(4, 3.5))
plt.clf()
plt.subplots_adjust(left=.01, right=.99, bottom=.01, top=.91)
for i in range(4):
    plt.subplot(3, 4, i + 1)
    plt.imshow(images[i], cmap=plt.cm.gray, vmax=16, interpolation='nearest')
    plt.xticks(())
    plt.yticks(())
    if i == 1:
        plt.title('Original data')
    plt.subplot(3, 4, 4 + i + 1)
    plt.imshow(images_restored[i], cmap=plt.cm.gray, vmax=16,
               interpolation='nearest')
    if i == 1:
        plt.title('Agglomerated data')
    plt.xticks(())
    plt.yticks(())
    
    #----------------------------------------------------------------------
# 2D embedding of the digits dataset
print('Computing embedding')
X_red = manifold.SpectralEmbedding(n_components=2).fit_transform(X)
print('Done.')
    
    vmin = face.min()
vmax = face.max()
    
    While these examples give some intuition about the
algorithms, this intuition might not apply to very high
dimensional data.
'''
print(__doc__)
    
    
def score_euclidean(a, b):
    '''计算两个点之间的欧式距离'''
    s = np.sqrt(np.sum(np.power(a - b, 2)))
    return s
    
    
def softplus(x):
    ''''''
    return tf.nn.softplus(x)
    
    References:
    tensorlayer.layers.Conv2dLayer
'''
import tensorflow as tf
    
    References:
    [paper] Bidirectional Attention Flow for Machine Comprehension (https://arxiv.org/abs/1611.01603)
    [github/DuReader] https://github.com/baidu/DuReader/blob/master/tensorflow/layers/match_layer.py
    [github/BiDAF(PyTorch)] https://github.com/jojonki/BiDAF/blob/master/layers/bidaf.py
'''
    
        Examples:
        l2_regularizer = l2(0.01)
        tf.get_variable(..., regularizer=l2_regularizer, ...)
    '''