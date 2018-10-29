
        
        if __name__ == '__main__':
    main()

    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    import io
import optparse
import os.path
import re
    
    import youtube_dl.extractor
from youtube_dl import YoutubeDL
from youtube_dl.compat import (
    compat_os_name,
    compat_str,
)
from youtube_dl.utils import (
    preferredencoding,
    write_string,
)
    
        def test_cbc_encrypt(self):
        data = bytes_to_intlist(self.secret_msg)
        encrypted = intlist_to_bytes(aes_cbc_encrypt(data, self.key, self.iv))
        self.assertEqual(
            encrypted,
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd')
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
        dimensions = 500 * np.arange(1, n_iter + 1)
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
        #------------------------------------------------------------
    # varying D
    D_results_build = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    D_results_query = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            X = make_low_rank_matrix(n_samples, n_features,
                                  effective_rank=rank,
                                  tail_strength=0.2)
    
            for group in groups:
            small_content = u' '.join(group)