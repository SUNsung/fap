
        
            Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
        Uses the last ([-1]) value of other fields
    '''
    column_width = max(max(len(k) for k in formats) + 1, 8)
    first_width = max(len(k) for k in metrics)
    head_fmt = ('{:<{fw}s}' + '{:>{cw}s}' * len(formats))
    row_fmt = ('{:<{fw}s}' + '{:>{cw}.3f}' * len(formats))
    print(head_fmt.format('Metric', *formats,
                          cw=column_width, fw=first_width))
    for metric, row in zip(metrics, results[:, :, -1, -1, -1]):
        print(row_fmt.format(metric, *row,
                             cw=column_width, fw=first_width))
    
    import time
    
        ###########################################################################
    # List sampling algorithm
    ###########################################################################
    # We assume that sampling algorithm has the following signature:
    #   sample(n_population, n_sample)
    #
    sampling_algorithm = {}
    
        short_text_lang_folder = os.path.join(short_text_folder, lang)
    if not os.path.exists(short_text_lang_folder):
        os.makedirs(short_text_lang_folder)
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
            self.assertEqual(set([CANCELLED_AND_NOTIFIED_FUTURE,
                              EXCEPTION_FUTURE,
                              SUCCESSFUL_FUTURE,
                              future1]), finished)
        self.assertEqual(set([future2]), pending)
    
    
class BufferDict( dict ):
    
      AssertBuffersAreEqualAsBytes( [ 'aAa',
                                  'aEb',
                                  'bFb',
                                  'bGCa',
                                  'aDe' ], result_buffer )
    
    
# Both |line| and |column| need to be 1-based
def TryJumpLocationInTab( tab, filename, line, column ):
  for win in tab.windows:
    if GetBufferFilepath( win.buffer ) == filename:
      vim.current.tabpage = tab
      vim.current.window = win
      vim.current.window.cursor = ( line, column - 1 )
    
    
  def ToggleLogs( self, *filenames ):
    logfiles = self.GetLogfiles()
    if not filenames:
      sorted_logfiles = sorted( list( logfiles ) )
      try:
        logfile_index = vimsupport.SelectFromList(
          'Which logfile do you wish to open (or close if already open)?',
          sorted_logfiles )
      except RuntimeError as e:
        vimsupport.PostVimMessage( str( e ) )
        return
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer