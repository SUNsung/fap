
        
        cc_library(
    name = 'mst_ops_cc',
    srcs = [
        'ops/mst_op_kernels.cc',
        'ops/mst_ops.cc',
    ],
    deps = [
        ':mst_solver',
        '//syntaxnet:base',
        '@org_tensorflow//tensorflow/core:framework_headers_lib',
        '@org_tensorflow//tensorflow/core:lib',
    ],
    alwayslink = 1,
)

    
          # Cost = -2 + ln(1 + exp(2) + exp(-1))
      #        -1 + ln(exp(3) + exp(1) + exp(-2))
      self.assertAlmostEqual(cost, 2.3027, 4)
      self.assertEqual(correct, 1)
      self.assertEqual(total, 2)
    
      Args:
    arcs: [B,N,N] tensor of batched arc potentials.
    roots: [B,N] matrix of batched root potentials.
    
        n_iter = 40
    
    import numpy as np
import matplotlib.pyplot as plt
from matplotlib import ticker
    
    html_folder = u'html'
text_folder = u'paragraphs'
short_text_folder = u'short_paragraphs'
n_words_per_short_text = 5
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    # TASK: Predict the outcome on the testing set in a variable named y_predicted
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()
