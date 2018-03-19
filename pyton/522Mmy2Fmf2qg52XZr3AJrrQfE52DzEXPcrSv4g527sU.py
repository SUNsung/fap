
        
        import rsa
import json
from binascii import hexlify
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
        def download(self, x):
        self.result.append(x)
    
        def test_no_duplicated_ie_names(self):
        name_accu = collections.defaultdict(list)
        for ie in self.ies:
            name_accu[ie.IE_NAME.lower()].append(type(ie).__name__)
        for (ie_name, ie_list) in name_accu.items():
            self.assertEqual(
                len(ie_list), 1,
                'Multiple extractors with the same IE_NAME '%s' (%s)' % (ie_name, ', '.join(ie_list)))
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
            webpage = self._download_webpage(url, video_id)
    
            # Create flat baselines to compare the variation over batch size
        all_times['pca'].extend([results_dict['pca']['time']] *
                                len(batch_sizes))
        all_errors['pca'].extend([results_dict['pca']['error']] *
                                 len(batch_sizes))
        all_times['rpca'].extend([results_dict['rpca']['time']] *
                                 len(batch_sizes))
        all_errors['rpca'].extend([results_dict['rpca']['error']] *
                                  len(batch_sizes))
        for batch_size in batch_sizes:
            ipca = IncrementalPCA(n_components=n_components,
                                  batch_size=batch_size)
            results_dict = {k: benchmark(est, data) for k, est in [('ipca',
                                                                   ipca)]}
            all_times['ipca'].append(results_dict['ipca']['time'])
            all_errors['ipca'].append(results_dict['ipca']['error'])
    
                gc.collect()
            print('benchmarking lasso_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lasso_path(X, y, precompute=True)
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lasso_path (with Gram)'].append(delta)
    
        #------------------------------------------------------------
    # varying N
    N_results_build = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    N_results_query = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    mu_second = 0.0 + 10 ** 6  # number of microseconds in a second
    
    import os
import tarfile
from contextlib import closing
    
    skeleton_dir = os.path.abspath(os.path.join(exercise_dir, '..', 'skeletons'))
if not os.path.exists(skeleton_dir):
    os.makedirs(skeleton_dir)
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
            # a particularly bad case for the old algorithm:  gives an
        # error of close to 3.5 ulps.
        self.check_truediv(295147931372582273023, 295147932265116303360)
        for i in range(1000):
            self.check_truediv(10**(i+1), 10**i)
            self.check_truediv(10**i, 10**(i+1))
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
        def find_byname(self, name):
        '''Return (red, green, blue) for name'''
        name = name.lower()
        try:
            return self.__byname[name]
        except KeyError:
            raise BadColor(name) from None
    
            pt = pointer(Table(1, 2, 3))
    
    
if __name__ == '__main__':
    main()

    
        def __init__(self, application, host_pattern):
        self.application = application
        self.host_pattern = host_pattern
    
        def test_uimodule_resources(self):
        response = self.fetch('/uimodule_resources')
        self.assertEqual(response.body, b'''\
<html><head><link href='/base.css' type='text/css' rel='stylesheet'/><link href='/foo.css' type='text/css' rel='stylesheet'/>
<style type='text/css'>
.entry { margin-bottom: 1em; }
</style>
<meta>
</head><body>
    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test
    
            sock, port = bind_unused_port()
        server = namespace['TestServer']()
        server.add_socket(sock)
        client = IOStream(socket.socket())
        yield client.connect(('localhost', port))
        result = yield client.read_until_close()
        self.assertEqual(result, b'data')
        server.stop()
        client.close()
    
    
class MainHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    @tornado.web.authenticated
    @tornado.web.asynchronous
    def get(self):
        self.facebook_request('/me/home', self._on_stream,
                              access_token=self.current_user['access_token'])
    
        def on_close(self):
        ChatSocketHandler.waiters.remove(self)
    
        def __init__(self, name, msg_center):
        self.name = name
        self.provider = msg_center
    
        def test_tc1_output(self):
        self.tc1.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc1)
    
    from dft.constructor_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
        def undo(self):
        self.rename(self.dest, self.src)
    
    print()
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15
