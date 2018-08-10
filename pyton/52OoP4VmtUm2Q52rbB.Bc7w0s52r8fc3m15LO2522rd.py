
        
                title_string = 'Varying %s' % quantity
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    import os
import tarfile
from contextlib import closing
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    import matplotlib
matplotlib.use('TkAgg')
    
    This example demonstrates how to generate a dataset and bicluster it
using the Spectral Co-Clustering algorithm.
    
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
    
    print('The data was generated from (random_state=%d):' % RANDOM_SEED)
print('Class', 'P(C)', 'P(w0|C)', 'P(w1|C)', sep='\t')
for k, p, p_w in zip(['red', 'blue', 'yellow'], p_c, p_w_c.T):
    print('%s\t%0.2f\t%0.2f\t%0.2f' % (k, p, p_w[0], p_w[1]))

    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')