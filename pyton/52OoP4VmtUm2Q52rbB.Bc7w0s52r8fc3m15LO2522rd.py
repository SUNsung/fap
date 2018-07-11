
        
        
###############################################################################
# Data
    
    
def bench_sample(sampling, n_population, n_samples):
    gc.collect()
    # start time
    t_start = datetime.now()
    sampling(n_population, n_samples)
    delta = (datetime.now() - t_start)
    # stop time
    time = compute_time(t_start, delta)
    return time
    
    
URL = ('http://www.cs.cornell.edu/people/pabo/'
       'movie-review-data/review_polarity.tar.gz')
    
    #import matplotlib.pyplot as plt
#plt.matshow(cm, cmap=plt.cm.jet)
#plt.show()
    
        if f == os.path.basename(__file__):
        continue
    
    # Author: Kemal Eren <kemal@kemaleren.com>
# License: BSD 3 clause
    
        # add non-discriminative features
    if n_features > 1:
        X = np.hstack([X, np.random.randn(n_samples, n_features - 1)])
    return X, y
    
    
# Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
        def deploy_cert(self, domain, cert_path, key_path, chain_path=None,
                    fullchain_path=None):
        '''Installs cert'''
        cert_path, key_path, chain_path = self.copy_certs_and_keys(
            cert_path, key_path, chain_path)
        self._configurator.deploy_cert(
            domain, cert_path, key_path, chain_path, fullchain_path)

    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_everything_fails(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        proc.communicate.side_effect = OSError('What we have here is a '
                                               'failure to communicate.')
        self.assertFalse(notify('Goose', 'auntrhody@example.com',
                                'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
        result = False
    try:
        ret = urlopen(url, timeout=2)
        result = (ret.code == 200)
    except HTTPError as e:
        print(e, file=sys.stderr)
    except URLError as e:
        print(e, file=sys.stderr)
    except timeout as e:
        print(e, file=sys.stderr)
    except Exception as e:
        print(e, file=sys.stderr)
    
    
@click.command()
@click.argument('catalog_file', type=click.Path())
def cli(catalog_file):
    # Read the old ones back.  Once we are in, we will never go.
    with open(catalog_file) as f:
        rv = json.load(f)['supported_locales']