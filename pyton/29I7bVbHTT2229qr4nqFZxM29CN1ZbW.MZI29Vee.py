
        
        
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
        def check(self, value):
        return isinstance(value, list)
    
            rv = app.config['SERVER_NAME']
    
    
def test_config_missing():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_pyfile('missing.cfg')
    msg = str(e.value)
    assert msg.startswith('[Errno 2] Unable to load configuration '
                          'file (No such file or directory):')
    assert msg.endswith('missing.cfg'')
    assert not app.config.from_pyfile('missing.cfg', silent=True)
    
    
def test_existing_handler(app):
    logging.root.addHandler(logging.StreamHandler())
    assert app.logger.level == logging.NOTSET
    assert not app.logger.handlers
    
        n_times : int
        Time calling the metric n_times times.
    
                gc.collect()
            print('benchmarking lars_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lars_path(X, y, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (without Gram)'].append(delta)
    
    
def bench_sample(sampling, n_population, n_samples):
    gc.collect()
    # start time
    t_start = datetime.now()
    sampling(n_population, n_samples)
    delta = (datetime.now() - t_start)
    # stop time
    time = compute_time(t_start, delta)
    return time
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    In this examples we will use a movie review dataset.
    
        def plot_support_vectors(self, support_vectors):
        '''Plot the support vectors by placing circles over the
        corresponding data points and adds the circle collection
        to the contours list.'''
        cs = self.ax.scatter(support_vectors[:, 0], support_vectors[:, 1],
                             s=80, edgecolors='k', facecolors='none')
        self.contours.append(cs)
    
    plt.plot(features_samples_ratio, acc_clf1, linewidth=2,
         label='Linear Discriminant Analysis with shrinkage', color='navy')
plt.plot(features_samples_ratio, acc_clf2, linewidth=2,
         label='Linear Discriminant Analysis', color='gold')
    
    
def uniform_labelings_scores(score_func, n_samples, n_clusters_range,
                             fixed_n_classes=None, n_runs=5, seed=42):
    '''Compute score for 2 random uniform cluster labelings.
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    __all__ = ['ehow_download']
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    from ..common import *
    
    site_info = 'Showroom'
download = showroom_download
download_playlist = playlist_not_supported('showroom')

    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
            # simple test to validate param value
        if param in self._static_method_choices.keys():
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
            # and can also be undone at will
        for cmd in reversed(command_stack):
            cmd.undo()
    finally:
        os.unlink('foo.txt')
    
    print()
    
        def notify(self, modifier=None):
        for observer in self._observers:
            if modifier != observer:
                observer.update(self)