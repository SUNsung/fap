
        
        
def test_duplicate_tag():
    class TagDict(JSONTag):
        key = ' d'
    
            os.environ = {'FOO_SETTINGS': __file__.rsplit('.', 1)[0] + '.py'}
        assert app.config.from_envvar('FOO_SETTINGS')
        common_object_test(app)
    finally:
        os.environ = env
    
        logger.propagate = False
    assert not has_level_handler(logger)
    logger.propagate = True
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
        '''
    if not env.stdout_isatty and not args.prettify:
        Stream = partial(
            RawStream,
            chunk_size=RawStream.CHUNK_SIZE_BY_LINE
            if args.stream
            else RawStream.CHUNK_SIZE
        )
    elif args.prettify:
        Stream = partial(
            PrettyStream if args.stream else BufferedPrettyStream,
            env=env,
            conversion=Conversion(),
            formatting=Formatting(
                env=env,
                groups=args.prettify,
                color_scheme=args.style,
                explicit_json=args.json,
            ),
        )
    else:
        Stream = partial(EncodedStream, env=env)
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    
class Downloader(object):
    
        def __call__(self, r):
        '''
        Override username/password serialization to allow unicode.
    
        def test_cert_pem(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_PEM)
        assert HTTP_OK in r
    
    
def get_response(requests_session, session_name,
                 config_dir, args, read_only=False):
    '''Like `client.get_responses`, but applies permanent
    aspects of the session to the request.
    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_times['rpca'], label='RandomizedPCA')
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
    import numpy as np
import scipy.sparse as sp
    
        xx = np.arange(start_dim, start_dim + n * step, step)
    plt.subplot(212)
    plt.title('Learning in high dimensional spaces')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of dimensions')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    
if not os.path.exists(DATA_FOLDER):
    
    for s, p in zip(sentences, predicted):
    print(u'The language of '%s' is '%s'' % (s, dataset.target_names[p]))

    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    y_min, y_max = -50, 50
x_min, x_max = -50, 50
    
    plt.show()

    
    if __name__ == '__main__':
    main()

    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
        fc2video_download_by_upid(upid, output_dir, merge, info_only)
    
    from ..common import *
from ..extractor import VideoExtractor