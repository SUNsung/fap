
        
            data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        alpha = 0.01  # regularization parameter
    
            plt.gcf().suptitle('%s data set' % dataset.capitalize(), fontsize=16)
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
            for step in xrange(opts.n_steps):
            for it in xrange(opts.n_times):
                time[name][step, it] = bench_sample(sampling_algorithm[name],
                                                      opts.n_population,
                                                      n_samples[step])
    
    
if not os.path.exists(DATA_FOLDER):
    
    import os
import tarfile
from contextlib import closing
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)
    
    import numpy as np
import matplotlib.pyplot as plt
    
    from sklearn.cluster import AgglomerativeClustering
from sklearn.metrics import pairwise_distances
    
            ca_certs = os.path.join(current_path, 'cacert.pem')
        self.openssl_context = SSLContext(
            logger, ca_certs=ca_certs, support_http2=False,
            cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                           '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
        )
    
    import os
import sys
from .common import *
    
    	# Track the line at which the error occurred in case this is
	# generated from a lexer.  We need to track this since the
        # unexpected char doesn't carry the line info.
        self.line = None
    
            raise NotImplementedError
        
    
    def LT(self, i):
        '''
        Get the ith character of lookahead.  This is the same usually as
        LA(i).  This will be used for labels in the generated
        lexer code.  I'd prefer to return a char here type-wise, but it's
        probably better to be 32-bit clean and be consistent with LA.
        '''
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
    def mixcloud_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url, faker=True)
    title = r1(r'<meta property='og:title' content='([^']*)'', html)
    preview_url = r1(r'm-preview=\'([^\']+)\'', html)
    preview = r1(r'previews(.*)\.mp3$', preview_url)
    
    from ..common import *
from ..extractor import VideoExtractor
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))
    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
            facebook_api_key=options.facebook_api_key,
            facebook_secret=options.facebook_secret,
            ui_modules={'Post': PostModule},
            debug=True,
            autoescape=None,
        )
        tornado.web.Application.__init__(self, handlers, **settings)
    
    try:
    import pycares
except ImportError:
    pycares = None
    
    version = '6.0.dev1'