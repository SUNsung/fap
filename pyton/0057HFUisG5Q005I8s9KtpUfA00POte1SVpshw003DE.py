cc_test(
    name = 'mst_solver_test',
    size = 'small',
    srcs = ['mst_solver_test.cc'],
    deps = [
        ':mst_solver',
        '//dragnn/core/test:generic',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
    import tensorflow as tf
    
    
if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    ap.add_argument('metrics', nargs='*', default=sorted(METRICS),
                    help='Specifies metrics to benchmark, defaults to all. '
                         'Choices are: {}'.format(sorted(METRICS)))
    ap.add_argument('--formats', nargs='+', choices=sorted(FORMATS),
                    help='Specifies multilabel formats to benchmark '
                         '(defaults to all).')
    ap.add_argument('--samples', type=int, default=1000,
                    help='The number of samples to generate')
    ap.add_argument('--classes', type=int, default=10,
                    help='The number of classes')
    ap.add_argument('--density', type=float, default=.2,
                    help='The average density of labels per sample')
    ap.add_argument('--plot', choices=['classes', 'density', 'samples'],
                    default=None,
                    help='Plot time with respect to this parameter varying '
                         'up to the specified value')
    ap.add_argument('--n-steps', default=10, type=int,
                    help='Plot this many points for each metric')
    ap.add_argument('--n-times',
                    default=5, type=int,
                    help='Time performance over n_times trials')
    args = ap.parse_args()
    
        ###########################################################################
    # Numpy permutation based
    sampling_algorithm['numpy-permutation'] = \
        lambda n_population, n_sample: \
            np.random.permutation(n_population)[:n_sample]
    
        gc.collect()
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())