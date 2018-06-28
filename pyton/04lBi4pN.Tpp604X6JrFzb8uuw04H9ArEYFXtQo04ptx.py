
        
                def check(self, value):
            return isinstance(value, Foo)
    
            export YOURAPPLICATION_SETTINGS='/path/to/config/file'
    
        #: Some implementations can detect whether a session is newly
    #: created, but that is not guaranteed. Use with caution. The mixin
    # default is hard-coded ``False``.
    new = False
    
    
def test_config_from_json():
    app = flask.Flask(__name__)
    current_dir = os.path.dirname(os.path.abspath(__file__))
    app.config.from_json(os.path.join(current_dir, 'static', 'config.json'))
    common_object_test(app)
    
        stream = StringIO()
    client.get('/', errors_stream=stream)
    assert 'ERROR in test_logging: test' in stream.getvalue()
    
        def __enter__(self):
        gc.disable()
        _gc_lock.acquire()
        loc = flask._request_ctx_stack._local
    
        def record_teardown(sender, **kwargs):
        recorded.append(('tear_down', kwargs))
    
        h = history.history
    assert_array_almost_equal(h['loss'], h['weighted_' + loss_full_name], decimal=decimal)
    
        assert g._keras_shape == c._keras_shape
    assert h._keras_shape == d._keras_shape
    
        filename = os.path.join(model_name, 'vae_mean.png')
    # display a 2D plot of the digit classes in the latent space
    z_mean, _, _ = encoder.predict(x_test,
                                   batch_size=batch_size)
    plt.figure(figsize=(12, 10))
    plt.scatter(z_mean[:, 0], z_mean[:, 1], c=y_test)
    plt.colorbar()
    plt.xlabel('z[0]')
    plt.ylabel('z[1]')
    plt.savefig(filename)
    plt.show()
    
    model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
    
    model.compile(loss='categorical_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
    
            model1 = get_model(shape, data_format)
        model2 = get_model(target_shape, target_data_format)
        conv = K.function([model1.input], [model1.layers[0].output])
    
    
def test_sigmoid():
    '''Test using a numerically stable reference sigmoid implementation.
    '''
    def ref_sigmoid(x):
        if x >= 0:
            return 1 / (1 + np.exp(-x))
        else:
            z = np.exp(x)
            return z / (1 + z)
    sigmoid = np.vectorize(ref_sigmoid)
    
                # if the state is not reset, output should be different
            assert(out1.max() != out2.max())
    
    plt.plot(range(epochs),
         history_model1.history['val_loss'],
         'g-',
         label='Network 1 Val Loss')
plt.plot(range(epochs),
         history_model2.history['val_loss'],
         'r-',
         label='Network 2 Val Loss')
plt.plot(range(epochs),
         history_model1.history['loss'],
         'g--',
         label='Network 1 Loss')
plt.plot(range(epochs),
         history_model2.history['loss'],
         'r--',
         label='Network 2 Loss')
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.legend()
plt.savefig('comparison_of_networks.png')

    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    iris = datasets.load_iris()
X = iris.data[:, 0:2]  # we only take the first two features for visualization
y = iris.target
    
    
# Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
            ## The token type for the current token
        self.type = None
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        mediatype, ext, size = 'mp4', 'mp4', 0
    print_info(site_info, title, mediatype, size)
    #
    # rtmpdump  -r 'rtmpe://cp30865.edgefcs.net/ondemand/mtviestor/_!/intlod/MTVInternational/MBUS/GeoLocals/00JP/VIAMTVI/PYC/201304/7122HVAQ4/00JPVIAMTVIPYC7122HVAQ4_640x_360_1200_m30.mp4' -o 'title.mp4' --swfVfy http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf
    #
    # because rtmpdump is unstable,may try serveral times
    #
    if not info_only:
        # import pdb
        # pdb.set_trace()
        download_rtmp_url(url=url, title=title, ext=ext, params={
                          '--swfVfy': 'http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf'}, output_dir=output_dir)
    
            # extract title
        self.title = match1(content,
                            r'<meta property='og:description' name='og:description' content='([^']+)'')
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 