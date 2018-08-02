
        
        ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        def _close_server_sock_ignore_errors(self):
        try:
            self.server_sock.close()
        except IOError:
            pass
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
            This method should not be called from user code, and is only
        exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
            return self.__dict__.get(key, None)
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
       ###########################################################################
    # Set custom automatic method selection
    sampling_algorithm['custom-auto'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='auto',
                                       random_state=random_state)
    
    
URL = ('http://www.cs.cornell.edu/people/pabo/'
       'movie-review-data/review_polarity.tar.gz')
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
TRAIN_FOLDER = '20news-bydate-train'
TEST_FOLDER = '20news-bydate-test'
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    # Plot boundaries of unit simplex
plt.plot([0.0, 1.0, 0.0, 0.0], [0.0, 0.0, 1.0, 0.0], 'k', label='Simplex')
    
    A Lexer emits Token objects which are usually buffered by a TokenStream. A
Parser can build a Tree, if the output=AST option has been set in the grammar.
    
    MIN_TOKEN_TYPE = UP+1
    
            :param str domain_name: The domain to use to associate the record with.
        :param str record_name: The record name (typically beginning with '_acme-challenge.').
        :param str record_content: The record content (typically the challenge validation).
        :raises certbot.errors.PluginError: if an error occurs communicating with the DigitalOcean
                                            API
        '''
    
    import mock
    
            self.assertFalse(self.vhost1.same_server(no_name1))
        self.assertFalse(no_name1.same_server(no_name3))
        self.assertFalse(no_name1.same_server(no_name4))
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
    from acme import errors as acme_errors
from certbot_compatibility_test import validator
    
    Local worker thread:
- reads work ids from the 'Work Ids' queue and looks up the corresponding
  WorkItem from the 'Work Items' dict: if the work item has been cancelled then
  it is simply removed from the dict, otherwise it is repackaged as a
  _CallItem and put in the 'Call Q'. New _CallItems are put in the 'Call Q'
  until 'Call Q' is full. NOTE: the size of the 'Call Q' is kept small because
  calls placed in the 'Call Q' can no longer be cancelled with Future.cancel().
- reads _ResultItems from 'Result Q', updates the future stored in the
  'Work Items' dict and deletes the dict entry
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title, author, documentclass [howto/manual]).
latex_documents = [
  ('index', 'futures.tex', u'futures Documentation',
   u'Brian Quinlan', 'manual'),
]
    
    def sequential():
    return list(map(is_prime, PRIMES))
    
            # When there are multiple fixit suggestions, present them as a list to
        # the user hand have her choose which one to apply.
        if len( self._response[ 'fixits' ] ) > 1:
          fixit_index = vimsupport.SelectFromList(
            'Multiple FixIt suggestions are available at this location. '
            'Which one would you like to apply?',
            [ fixit[ 'text' ] for fixit in self._response[ 'fixits' ] ] )
    
        vimsupport.JumpToLocation( os.path.realpath( u'different_uni¢𐍈d€' ),
                               2, 5, 'belowright' )
    
        if len( namespaces ) > 1:
      choices = [ '{0} {1}'.format( i + 1, n )
                  for i, n in enumerate( namespaces ) ]
      choice = vimsupport.PresentDialog( 'Insert which namespace:', choices )
      if choice < 0:
        return
      namespace = namespaces[ choice ]
    else:
      namespace = namespaces[ 0 ]
    
        elif isinstance( candidate, str ) or isinstance( candidate, bytes ):
      new_candidates.append(
        { 'abbr': candidate,
          'word': NewCandidateInsertionText( candidate, text_after_cursor ) } )
  return new_candidates