
        
            #------------------------------------------------------------
    # varying N
    N_results_build = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    N_results_query = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    
    
if __name__ == '__main__':
    ###########################################################################
    # Option parser
    ###########################################################################
    op = optparse.OptionParser()
    op.add_option('--n-times',
                  dest='n_times', default=5, type=int,
                  help='Benchmark results are average over n_times experiments')
    
        from sklearn.tree import DecisionTreeClassifier
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    
# TASK: Build a vectorizer that splits strings into sequence of 1 to 3
# characters instead of word tokens
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    from sklearn.datasets import make_blobs
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis