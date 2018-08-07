
        
            parser = argparse.ArgumentParser()
    parser.add_argument('-e', '--estimators', nargs='+', required=True,
                        choices=ESTIMATORS)
    args = vars(parser.parse_args())
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
        print('Generating skeleton for %s' % f)
    
    First example
-------------
The first example illustrates how robust covariance estimation can help
concentrating on a relevant cluster when another one exists. Here, many
observations are confounded into one and break down the empirical covariance
estimation.
Of course, some screening tools would have pointed out the presence of two
clusters (Support Vector Machines, Gaussian Mixture Models, univariate
outlier detection, ...). But had it been a high-dimensional example, none
of these could be applied that easily.
    
    # plot shrinkage coefficient
plt.subplot(2, 1, 2)
plt.errorbar(n_samples_range, lw_shrinkage.mean(1), yerr=lw_shrinkage.std(1),
             label='Ledoit-Wolf', color='navy', lw=2)
plt.errorbar(n_samples_range, oa_shrinkage.mean(1), yerr=oa_shrinkage.std(1),
             label='OAS', color='darkorange', lw=2)
plt.xlabel('n_samples')
plt.ylabel('Shrinkage')
plt.legend(loc='lower right')
plt.ylim(plt.ylim()[0], 1. + (plt.ylim()[1] - plt.ylim()[0]) / 10.)
plt.xlim(5, 31)
    
    # -- General configuration -----------------------------------------------------
    
    
  def NeedsReparse( self ):
    return self._parse_tick != self._ChangedTick()
    
              present_dialog.assert_has_exact_calls( [
            PresentDialog_Confirm_Call( MESSAGE )
          ] )
          post_data_to_handler.assert_has_exact_calls( [
            call( { 'filepath': FILE_NAME }, 'load_extra_conf_file' )
          ] )
    
    
GENERIC_RESPONSE = {
  'clang': {
    'has_support': True,
    'version': 'Clang version'
  },
  'completer': {
    'items': [
      {
        'key': 'key',
        'value': 'value'
      }
    ],
    'name': 'Completer name',
    'servers': [
      {
        'address': '127.0.0.1',
        'executable': '/path/to/executable',
        'extras': [
          {
            'key': 'key',
            'value': 'value'
          }
        ],
        'is_running': True,
        'logfiles': [
          '/path/to/stdout/logfile',
          '/path/to/stderr/logfile'
        ],
        'name': 'Server name',
        'pid': 12345,
        'port': 1234
      }
    ]
  },
  'extra_conf': {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  },
  'python': {
    'executable': '/path/to/python/interpreter',
    'version': 'Python version'
  }
}
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        elif isinstance( candidate, str ) or isinstance( candidate, bytes ):
      new_candidates.append(
        { 'abbr': candidate,
          'word': NewCandidateInsertionText( candidate, text_after_cursor ) } )
  return new_candidates
    
    # This code finds all faces in a list of images using the CNN model.
#
# This demo is for the _special case_ when you need to find faces in LOTS of images very quickly and all the images
# are the exact same size. This is common in video processing applications where you have lots of video frames
# to process.
#
# If you are processing a lot of images and using a GPU with CUDA, batch processing can be ~3x faster then processing
# single images at a time. But if you aren't using a GPU, then batch processing isn't going to be very helpful.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read the video file.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.