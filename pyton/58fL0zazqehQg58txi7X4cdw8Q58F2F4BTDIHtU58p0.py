
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
        def fake_init_db():
        Recorder.called = True
    
            info.append('% 5d: trying loader of %s' % (
            idx + 1, src_info))
    
        def check(self, value):
        return isinstance(value, bytes)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        with app.app_context():
        pass
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    
    for connectivity in (None, knn_graph):
    for n_clusters in (30, 3):
        plt.figure(figsize=(10, 4))
        for index, linkage in enumerate(('average',
                                         'complete',
                                         'ward',
                                         'single')):
            plt.subplot(1, 4, index + 1)
            model = AgglomerativeClustering(linkage=linkage,
                                            connectivity=connectivity,
                                            n_clusters=n_clusters)
            t0 = time.time()
            model.fit(X)
            elapsed_time = time.time() - t0
            plt.scatter(X[:, 0], X[:, 1], c=model.labels_,
                        cmap=plt.cm.nipy_spectral)
            plt.title('linkage=%s\n(time %.2fs)' % (linkage, elapsed_time),
                      fontdict=dict(verticalalignment='top'))
            plt.axis('equal')
            plt.axis('off')
    
    ax.w_xaxis.set_ticklabels([])
ax.w_yaxis.set_ticklabels([])
ax.w_zaxis.set_ticklabels([])
ax.set_xlabel('Petal width')
ax.set_ylabel('Sepal length')
ax.set_zlabel('Petal length')
ax.set_title('Ground Truth')
ax.dist = 12
    
    plt.subplot(223)
plt.scatter(X_varied[:, 0], X_varied[:, 1], c=y_pred)
plt.title('Unequal Variance')
    
            else:
            colision_resolution = self._colision_resolution(key, data)
            if colision_resolution is not None:
                self._set_value(colision_resolution, data)
            else:
                self.rehashing()
                self.insert_data(data)
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function
    
        for j in range(int(s/2), -1, -1):
        if dp[n][j] == True:
            diff = s-2*j
            break;
    
    	Arguments:
		testString {[string]} -- [message]
	'''
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''

    
        search_txt = 'html a z'
    ret = search(search_txt, inverse_index, word_freq)
    # print(ret)
    printy(ret)
    r''' 
    ['html']
         ./data\b.txt
         ./data\c.txt
    ['a']
         ./data\b.txt
         ./data\a.txt
    ['z']
         -
    ['a', 'html']
         ./data\b.txt
    ['html', 'z']
         -
    ['a', 'z']
         -
    ['a', 'html', 'z']
         -
    '''

    
    
def parametric_relu(x, channel_shared=False, alpha_init=constant(0.), name='parametric_relu', reuse=None):
    '''参数化 ReLU
    
            o = tf.nn.conv2d(x, W, strides=strides, padding=padding) + b
        o = act_fn(o)
    
    
def permute(x, perm):
    '''
    Examples:
        x.shape == [128, 32, 1]
        x = permute(x, [0, 2, 1])
        x.shape == [128, 1, 32]