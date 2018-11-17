
        
          # Print rows
  for i, label1 in enumerate(short_labels):
    row = '%{0}s '.format(columnwidth) % label1[:10]
    for j in range(len(short_labels)):
      value = int(cm[i, j]) if not np.isnan(cm[i, j]) else 0
      cell = ' %{0}d '.format(10) % value
      row += cell + ' '
    print(row)
    
        Returns:
      A dictionary with the averaged outputs of the model decoder, namely:
        prior g0 mean, prior g0 variance, approx. posterior mean, approx
        posterior mean, the generator initial conditions, the control inputs (if
        enabled), the state of the generator, the factors, and the output
        distribution parameters, e.g. (rates or mean and variances).
    '''
    hps = self.hps
    batch_size = hps.batch_size
    E, T, D  = data_extxd.shape
    E_to_process = hps.ps_nexamples_to_process
    if E_to_process > E:
      E_to_process = E
    
        tf.logging.info('Recovering Graph %s', gd_file)
    t = {}
    [t['states_init'], t['lstm/lstm_0/control_dependency'],
     t['lstm/lstm_1/control_dependency'], t['softmax_out'], t['class_ids_out'],
     t['class_weights_out'], t['log_perplexity_out'], t['inputs_in'],
     t['targets_in'], t['target_weights_in'], t['char_inputs_in'],
     t['all_embs'], t['softmax_weights'], t['global_step']
    ] = tf.import_graph_def(gd, {}, ['states_init',
                                     'lstm/lstm_0/control_dependency:0',
                                     'lstm/lstm_1/control_dependency:0',
                                     'softmax_out:0',
                                     'class_ids_out:0',
                                     'class_weights_out:0',
                                     'log_perplexity_out:0',
                                     'inputs_in:0',
                                     'targets_in:0',
                                     'target_weights_in:0',
                                     'char_inputs_in:0',
                                     'all_embs_out:0',
                                     'Reshape_3:0',
                                     'global_step:0'], name='')
    
    from models import bidirectional_zaremba
from models import cnn
from models import critic_vd
from models import feedforward
from models import rnn
from models import rnn_nas
from models import rnn_vd
from models import rnn_zaremba
from models import seq2seq
from models import seq2seq_nas
from models import seq2seq_vd
from models import seq2seq_zaremba
    
      Args:
    hparams:  MaskGAN hyperparameters.
    learning_rate:  tf.Variable scalar learning rate.
    final_gen_objective:  Scalar final REINFORCE objective for the sequence.
    averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
    global_step:  global_step tf.Variable.
    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_encoder_init_saver = init_savers['dis_encoder_init_saver']
      dis_decoder_init_saver = init_savers['dis_decoder_init_saver']
      dis_encoder_init_saver.restore(sess, load_ckpt)
      dis_decoder_init_saver.restore(sess, load_ckpt)
    
    import base64
import io
import json
import mimetypes
import netrc
import optparse
import os
import re
import sys
    
    
def build_completion(opt_parser):
    commands = []
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
if __name__ == '__main__':
    main()

    
    from __future__ import print_function
    
        def test_no_duplicates(self):
        ies = gen_extractors()
        for tc in gettestcases(include_onlymatching=True):
            url = tc['url']
            for ie in ies:
                if type(ie).__name__ in ('GenericIE', tc['name'] + 'IE'):
                    self.assertTrue(ie.suitable(url), '%s should match URL %r' % (type(ie).__name__, url))
                else:
                    self.assertFalse(
                        ie.suitable(url),
                        '%s should not match URL %r . That URL belongs to %s.' % (type(ie).__name__, url, tc['name']))
    
        print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
    print(__doc__)
    
        if args.metrics is None:
        args.metrics = sorted(METRICS)
    if args.formats is None:
        args.formats = sorted(FORMATS)
    
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
    
        plt.show()

    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    56                                           @profile
    57                                           def benchmark_sparse_predict():
    58         1        10854  10854.0      2.8      X_test_sparse = csr_matrix(X_test)
    59       301          477      1.6      0.1      for _ in range(300):
    60       300       381409   1271.4     97.1          clf.predict(X_test_sparse)
'''
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
    import os
import tarfile
from contextlib import closing
    
    
if __name__ == '__main__':
    
                if is_semver_like(version):
                # check ref string and urls
                refs = {release.ref for release in releases}
                urls = {release.url for release in releases}
                if (len(refs) == 1 and None not in refs) or (len(urls) == 1 and None not in urls):
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                    continue
                # if projects are across multiple environments, allow 1 week difference
                if projects_split_by_env and date_diff and date_diff < 604800:
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                    continue
                # +/- 30 mins
                if date_diff and date_diff > 1800:
                    for release in releases:
                        update_version(release, orm)
                else:
                    merge(to_release=to_release, from_releases=from_releases, sentry_models=orm)
                continue
    
            # Adding field 'Environment.organization_id'
        db.add_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True),
            keep_default=False
        )
    
            # Adding field 'ApiToken.scope_list'
        db.add_column(
            'sentry_apitoken',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
            # Adding unique constraint on 'Distribution', fields ['release', 'name']
        db.create_unique('sentry_distribution', ['release_id', 'name'])