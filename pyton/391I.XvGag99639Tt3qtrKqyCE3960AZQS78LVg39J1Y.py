
        
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='waf', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    - name: create an origin access identity
  cloudfront_origin_access_identity:
    state: present
    caller_reference: this is an example reference
    comment: this is an example comment
    
        def disable(self):
        '''Disables the rule in AWS'''
        try:
            response = self.client.disable_rule(Name=self.name)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not disable rule %s' % self.name)
        self.changed = True
        return response
    
        exit_params = {'msg': 'AMI deregister operation complete.', 'changed': True}
    
    try:
    import boto3
    HAS_BOTO3 = True
except ImportError:
    HAS_BOTO3 = False
    
        if limit:
        results = results[:int(limit)]
    
    
if __name__ == '__main__':
    main()

    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
    Note that LocalOutlierFactor is not meant to predict on a test set and its
performance is assessed in an outlier detection context:
1. The model is trained on the whole dataset which is assumed to contain
outliers.
2. The ROC curve is computed on the same dataset using the knowledge of the
labels.
In this context there is no need to shuffle the dataset because the model
is trained and tested on the whole dataset. The randomness of this benchmark
is only caused by the random selection of anomalies in the SA dataset.
    
            ax.set_xlabel('n_samples')
        ax.set_ylabel('n_features')
        ax.set_zlabel('Time (s)')
        ax.set_zlim3d(0.0, max_time * 1.1)
        ax.set_title(label)
        # ax.legend()
        i += 1
    plt.show()

    
    import numpy as np
import matplotlib.pyplot as plt
from matplotlib import ticker
    
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
    
    import time
    
        default_algorithms = 'custom-tracking-selection,custom-auto,' \
                         'custom-reservoir-sampling,custom-pool,'\
                         'python-core-sample,numpy-permutation'
    
    File: sparsity_benchmark.py
Function: benchmark_sparse_predict at line 56
Total time: 0.39274 s
    
    for Vectorizer, (analyzer, ngram_range) in itertools.product(
            [CountVectorizer, TfidfVectorizer, HashingVectorizer],
            [('word', (1, 1)),
             ('word', (1, 2)),
             ('word', (1, 4)),
             ('char', (4, 4)),
             ('char_wb', (4, 4))
             ]):
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
            :user:`sloria`
    '''
    options = options or {}
    content = content or []
    has_explicit_title, title, target = split_explicit_title(text)
    
    import os
try:
    # Python 2 compat
    from urllib2 import Request, build_opener
except ImportError:
    # Python 3
    from urllib.request import Request, build_opener