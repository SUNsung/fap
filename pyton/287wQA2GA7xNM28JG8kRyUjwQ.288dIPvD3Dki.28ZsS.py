    return len(cmd) > 1 and 'x' in cmd[1]
    
        plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
        fig = plt.figure('scikit-learn Lasso path benchmark results')
    i = 1
    for c, (label, timings) in zip('bcry', sorted(results.items())):
        ax = fig.add_subplot(2, 2, i, projection='3d')
        X, Y = np.meshgrid(samples_range, features_range)
        Z = np.asarray(timings).reshape(samples_range.shape[0],
                                        features_range.shape[0])
    
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
    
       ###########################################################################
    # Set custom automatic method selection
    sampling_algorithm['custom-auto'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='auto',
                                       random_state=random_state)
    
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

    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
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
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    The second figure shows the calibration curve of a linear support-vector
classifier (LinearSVC). LinearSVC shows the opposite behavior as Gaussian
naive Bayes: the calibration curve has a sigmoid curve, which is typical for
an under-confident classifier. In the case of LinearSVC, this is caused by the
margin property of the hinge loss, which lets the model focus on hard samples
that are close to the decision boundary (the support vectors).
    
        What it should do it take a markdown file, and split it into more files. A targetfile should have the same
    number of lines as the original, with source code snippets and markdown non-words removed, for spell-checking.
    
      # Reset include state across preprocessor directives.  This is meant
  # to silence warnings for conditional includes.
  match = Match(r'^\s*#\s*(if|ifdef|ifndef|elif|else|endif)\b', line)
  if match:
    include_state.ResetSection(match.group(1))
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
    
try:
    # place all r2 specific imports in here.  If there is a code error, it'll
    # get caught and the stack trace won't be presented to the user in
    # production
    from r2.config import extensions
    from r2.controllers.reddit_base import RedditController, UnloggedUser
    from r2.lib.cookies import Cookies
    from r2.lib.errors import ErrorSet
    from r2.lib.filters import (
        safemarkdown,
        scriptsafe_dumps,
        websafe,
        websafe_json,
    )
    from r2.lib import log, pages
    from r2.lib.strings import get_funny_translated_string
    from r2.lib.template_helpers import static
    from r2.lib.base import abort
    from r2.models.link import Link
    from r2.models.subreddit import DefaultSR, Subreddit
except Exception, e:
    if g.debug:
        # if debug mode, let the error filter up to pylons to be handled
        raise e
    else:
        # production environment: protect the code integrity!
        print 'HuffmanEncodingError: make sure your python compiles before deploying, stupid!'
        # kill this app
        os._exit(1)