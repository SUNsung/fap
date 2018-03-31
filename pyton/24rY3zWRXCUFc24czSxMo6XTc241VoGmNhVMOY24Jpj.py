
        
        # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_errors['rpca'], label='RandomizedPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
        for name in sorted(selected_transformers):
        print_row(name,
                  np.mean(time_fit[name]),
                  np.mean(time_transform[name]))
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
        opener = build_opener()
    html_filename = os.path.join(html_folder, lang + '.html')
    if not os.path.exists(html_filename):
        print('Downloading %s' % page)
        request = Request(page)
        # change the User Agent to avoid being blocked by Wikipedia
        # downloading a couple of articles should not be considered abusive
        request.add_header('User-Agent', 'OpenAnything/1.0')
        html_content = opener.open(request).read()
        open(html_filename, 'wb').write(html_content)
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    In this examples we will use a movie review dataset.
    
    This example demonstrates how to generate a dataset and bicluster it
using the Spectral Co-Clustering algorithm.
    
        # View probabilities=
    probas = classifier.predict_proba(Xfull)
    n_classes = np.unique(y_pred).size
    for k in range(n_classes):
        plt.subplot(n_classifiers, n_classes, index * n_classes + k + 1)
        plt.title('Class %d' % k)
        if k == 0:
            plt.ylabel(name)
        imshow_handle = plt.imshow(probas[:, k].reshape((100, 100)),
                                   extent=(3, 9, 1, 5), origin='lower')
        plt.xticks(())
        plt.yticks(())
        idx = (y_pred == k)
        if idx.any():
            plt.scatter(X[idx, 0], X[idx, 1], marker='o', c='k')
    
    For more information on application-level routing see docs for `~.web.Application`.
    
        def _handle_events(self, fd, events):
        read_fd = pycares.ARES_SOCKET_BAD
        write_fd = pycares.ARES_SOCKET_BAD
        if events & IOLoop.READ:
            read_fd = fd
        if events & IOLoop.WRITE:
            write_fd = fd
        self.channel.process_fd(read_fd, write_fd)
    
                server = TCPServer()
            server.listen(0, address='127.0.0.1')
            IOLoop.current().run_sync(lambda: None)
            print('012', end='')
        ''')
        out = self.run_subproc(code)
        self.assertEqual(''.join(sorted(out)), '012')
    
    
class RootHandler(RequestHandler):
    def get(self):
        self.write('Hello, world')
    
        def wait_for_messages(self, cursor=None):
        # Construct a Future to return to our caller.  This allows
        # wait_for_messages to be yielded from a coroutine even though
        # it is not a coroutine itself.  We will set the result of the
        # Future when results are available.
        result_future = Future()
        if cursor:
            new_count = 0
            for msg in reversed(self.cache):
                if msg['id'] == cursor:
                    break
                new_count += 1
            if new_count:
                result_future.set_result(self.cache[-new_count:])
                return result_future
        self.waiters.add(result_future)
        return result_future
    
            ChatSocketHandler.update_cache(chat)
        ChatSocketHandler.send_updates(chat)
    
    
def human_report(options):
    if options.full:
        report = human(generate_all_reports(files=options.files))
    else:
        files = (options.files or
                 get_changed_files(get_merge_base(), get_current_ref()))
        logging.debug('changed files: %r', files)
        report = human(generate_all_reports(files=files))
    for line in report:
        print >> options.out, line
    
        def has_gold(self, user):
        if not user:
            return False
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        user=VAccountByName('username'),
        months=VInt('months', min=1, max=36),
        timeout=VNotInTimeout(),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/give/{username}',
    )
    def POST_give(self, user, months, timeout):
        self._gift_using_creddits(
            recipient=user,
            months=months,
            proxying_for=request.POST.get('proxying_for'),
        )

    
        def pre(self):
        super(APIv1LoginController, self).pre()
        c.extension = 'json'
        set_extension(request.environ, 'json')
    
        @validate(buttonimage = VInt('i', 0, 14),
              title = nop('title'),
              url = VSanitizedUrl('url'),
              newwindow = VBoolean('newwindow', default = False),
              styled = VBoolean('styled', default=True))
    def GET_button_lite(self, buttonimage, title, url, styled, newwindow):
        c.user = UnloggedUser([c.lang])
        c.user_is_loggedin = False
        c.render_style = 'js'
    
    from r2.controllers.reddit_base import MinimalController
from r2.lib import promote, cache