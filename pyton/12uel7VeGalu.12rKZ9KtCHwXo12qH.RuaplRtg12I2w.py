
        
            def process_lhs(self, qn, connection):
        if not isinstance(self.lhs.output_field, SearchVectorField):
            self.lhs = SearchVector(self.lhs)
        lhs, lhs_params = super().process_lhs(qn, connection)
        return lhs, lhs_params
    
        def __init__(self, session_key=None):
        self._cache = caches[settings.SESSION_CACHE_ALIAS]
        super().__init__(session_key)
    
    Data comes from a random square matrix.
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
        for (sbplt, vals, quantity,
         build_time, query_time) in [(311, Nrange, 'N',
                                      N_results_build,
                                      N_results_query),
                                     (312, Drange, 'D',
                                      D_results_build,
                                      D_results_query),
                                     (313, krange, 'k',
                                      k_results_build,
                                      k_results_query)]:
        ax = plt.subplot(sbplt, yscale='log')
        plt.grid(True)
    
        max_it = len(samples_range) * len(features_range)
    for i_s, n_samples in enumerate(samples_range):
        for i_f, n_features in enumerate(features_range):
            it += 1
            n_informative = n_features / 10
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            # dataset_kwargs = {
            #     'n_train_samples': n_samples,
            #     'n_test_samples': 2,
            #     'n_features': n_features,
            #     'n_informative': n_informative,
            #     'effective_rank': min(n_samples, n_features) / 10,
            #     #'effective_rank': None,
            #     'bias': 0.0,
            # }
            dataset_kwargs = {
                'n_samples': 1,
                'n_components': n_features,
                'n_features': n_samples,
                'n_nonzero_coefs': n_informative,
                'random_state': 0
            }
            print('n_samples: %d' % n_samples)
            print('n_features: %d' % n_features)
            y, X, _ = make_sparse_coded_signal(**dataset_kwargs)
            X = np.asfortranarray(X)
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
    score(y_test, clf.predict(X_test), 'dense model')
benchmark_dense_predict()
clf.sparsify()
score(y_test, clf.predict(X_test), 'sparse model')
benchmark_sparse_predict()

    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
            sfile = sys.modules[spidercls.__module__].__file__
        sfile = sfile.replace('.pyc', '.py')
        self.exitcode = os.system('%s '%s'' % (editor, sfile))

    
        def short_desc(self):
        return 'Print Scrapy version'
    
            # Retrieve more data while providing more input
        out.append(bzd.decompress(self.BIG_DATA[len_:],
                                  max_length=max_length))
        self.assertLessEqual(len(out[-1]), max_length)
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
    def handleToc(slides):
    for slide in slides:
        title = slide.getElementsByTagName('title')[0]
        print('<p>%s</p>' % getText(title.childNodes))
    
    # Proxy type for generator objects
class GeneratorProxy(BaseProxy):
    _exposed_ = ['__next__']
    def __iter__(self):
        return self
    def __next__(self):
        return self._callmethod('__next__')
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
    _LOGGER = logging.getLogger(__name__)
    
    from homeassistant.const import CONF_ID
from homeassistant.components.config import EditIdBasedConfigView
from homeassistant.components.automation import (
    PLATFORM_SCHEMA, DOMAIN, async_reload)
import homeassistant.helpers.config_validation as cv
    
        url = '/api/config/core/check_config'
    name = 'api:config:core:check_config'
    
    
Device = namedtuple('Device', ['mac', 'ip', 'last_update'])
    
            if self._password is not None:
            authenticated = CONF_API_PASSWORD in data and compare_digest(
                self._password,
                data[CONF_API_PASSWORD]
            )
            if not authenticated:
                raise HTTPUnauthorized()