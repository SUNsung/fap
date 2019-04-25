
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
        def logout(self):
        return self._client.get('/auth/logout')
    
    
class Environment(BaseEnvironment):
    '''Works like a regular Jinja2 environment but has some additional
    knowledge of how Flask's blueprint works so that it can prepend the
    name of the blueprint to referenced templates if necessary.
    '''
    
            app.add_url_rule('/hello/<name>', view_func=MyView.as_view('myview'))
    
                version = match.group(1).strip()
    
        def __hash_double_function(self, key, data, increment):
        return (increment * self.__hash_function_2(key, data)) % self.size_table
    
        def _colision_resolution(self, key, data=None):
        i = 1
        new_key = self.hash_function(key + i*i)
    
            if isinstance(B,bytes):
            B = B.decode('ascii')
    
    # Mock test below
if False: # change to true to run this test case.
    import sklearn.datasets as ds
    dataset = ds.load_iris()
    k = 3
    heterogeneity = []
    initial_centroids = get_initial_centroids(dataset['data'], k, seed=0)
    centroids, cluster_assignment = kmeans(dataset['data'], k, initial_centroids, maxiter=400,
                                        record_heterogeneity=heterogeneity, verbose=True)
    plot_heterogeneity(heterogeneity, k)

    
        return res
    
        s = score_euclidean(data[0], data[1])
    print(s)
    
    
def leaky_relu(x, alpha=0.1):
    '''渗透 ReLU
    `o = max(alpha * x, x)`
    '''
    return tf.nn.leaky_relu(x, alpha)
    
        with tf.variable_scope(name or 'attention_flow', reuse=reuse):
        h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])  # [N, T, J, d]
        u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])  # [N, T, J, d]
        hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
        h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
        W_s = get_w([3 * d, 1])  # [3d, 1]
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()