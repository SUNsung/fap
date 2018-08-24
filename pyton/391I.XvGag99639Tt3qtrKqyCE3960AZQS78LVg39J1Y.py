
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        print('duration: %0.3fs' % delta)
    print('rmse: %f' % rmse(Y_test, clf.predict(X_test)))
    print('mean coef abs diff: %f' % abs(ref_coef - clf.coef_.ravel()).mean())
    return delta
    
    import numpy as np
import gc
from datetime import datetime
from sklearn.isotonic import isotonic_regression
from sklearn.utils.bench import total_seconds
import matplotlib.pyplot as plt
import argparse
    
        plt.show()

    
    
def get_data(N, D, dataset='dense'):
    if dataset == 'dense':
        np.random.seed(0)
        return np.random.random((N, D))
    elif dataset == 'digits':
        X = datasets.load_digits().data
        i = np.argsort(X[0])[::-1]
        X = X[:, i]
        return X[:N, :D]
    else:
        raise ValueError('invalid dataset: %s' % dataset)
    
        plt.subplots_adjust(0.1, 0.08, 0.96, 0.98, 0.4, 0.63)
    ax = plt.axes([0.1, 0.08, 0.8, 0.06])
    plt.colorbar(cax=ax, orientation='horizontal')
    plt.show()

    
        label = 'scikit-learn singular value decomposition benchmark results'
    fig = plt.figure(label)
    ax = fig.gca(projection='3d')
    for c, (label, timings) in zip('rbg', sorted(six.iteritems(results))):
        X, Y = np.meshgrid(samples_range, features_range)
        Z = np.asarray(timings).reshape(samples_range.shape[0],
                                        features_range.shape[0])
        # plot the actual surface
        ax.plot_surface(X, Y, Z, rstride=8, cstride=8, alpha=0.3,
                        color=c)
        # dummy point plot to stick the legend to since surface plot do not
        # support legends (yet?)
        ax.plot([1], [1], [1], color=c, label=label)
    
    from sklearn import clone
from sklearn.externals.six.moves import xrange
from sklearn.random_projection import (SparseRandomProjection,
                                       GaussianRandomProjection,
                                       johnson_lindenstrauss_min_dim)
    
        # Sort legend labels
    handles, labels = ax.get_legend_handles_labels()
    hl = sorted(zip(handles, labels), key=operator.itemgetter(1))
    handles2, labels2 = zip(*hl)
    ax.legend(handles2, labels2, loc=0)
    
        # Plot results
    i = 0
    m = len(list_n_features)
    plt.figure('scikit-learn SGD regression benchmark results',
               figsize=(5 * 2, 4 * m))
    for j in range(m):
        plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 0]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 0]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 0]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 0]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('RMSE')
        plt.title('Test error - %d features' % list_n_features[j])
        i += 1
    
    
# Symlinks should have same data as target
for src, dst in symlinks.items():
    if dst in dirs:
        dirs[src] = dirs[dst]
    
        # decode the payload explicitly as UTF-8 since lxml is confused for some
    # reason
    with codecs.open(html_filename,'r','utf-8') as html_file:
        html_content = html_file.read()
    tree = ElementTree(lxml.html.document_fromstring(html_content))
    i = 0
    j = 0
    for p in tree.findall('//p'):
        content = p.text_content()
        if len(content) < 100:
            # skip paragraphs that are too short - probably too noisy and not
            # representative of the actual language
            continue
    
        #Removing unnecessary intermediate files
    try:
        os.remove('htmlout.html')
        os.remove('title.html')
        os.remove('dir_title.html')
    except OSError:
        print('Error removing temporary file(s)')
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _NormalizeDiagnostic( diag ):
  def ClampToOne( value ):
    return value if value > 0 else 1
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    
@YouCompleteMeInstance()
@patch( 'ycm.client.base_request._logger', autospec = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ErrorFromServer_test( ycm,
                                                post_vim_message,
                                                logger ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerError( 'Server error' ) ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      logger.exception.assert_called_with( 'Error while handling server '
                                           'response' )
      post_vim_message.assert_has_exact_calls( [
        call( 'Server error', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': empty(),
          'completion_start_column': -1
        } )
      )

    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).