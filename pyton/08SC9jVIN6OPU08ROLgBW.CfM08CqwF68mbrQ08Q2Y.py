
        
            with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
    
def build_lazy_ie(ie, name):
    valid_url = getattr(ie, '_VALID_URL', None)
    s = ie_template.format(
        name=name,
        bases=', '.join(map(get_base_name, ie.__bases__)),
        valid_url=valid_url,
        module=ie.__module__)
    if ie.suitable.__func__ is not InfoExtractor.suitable.__func__:
        s += '\n' + getsource(ie.suitable)
    if hasattr(ie, '_make_valid_url'):
        # search extractors
        s += make_valid_template.format(valid_url=ie._make_valid_url())
    return s
    
    
if __name__ == '__main__':
    main()

    
        def test_socks5(self):
        self.assertTrue(isinstance(self._get_ip('socks5'), compat_str))
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['de', 'en', 'es', 'fr']))
        self.assertEqual(md5(subtitles['en']), '8062383cf4dec168fc40a088aa6d5888')
        self.assertEqual(md5(subtitles['fr']), 'b6191146a6c5d3a452244d853fde6dc8')
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
        @property
    def data(self):
        '''
        Return the data for this BoundField, or None if it wasn't given.
        '''
        return self.field.widget.value_from_datadict(self.form.data, self.form.files, self.html_name)
    
        def ensure_absent(self):
        '''Ensures the rule and targets are absent'''
        rule_description = self.rule.describe()
        if not rule_description:
            # Rule doesn't exist so don't need to delete
            return
        self.rule.delete()
    
    
DOCUMENTATION = '''
---
module: ec2_snapshot
short_description: creates a snapshot from an existing volume
description:
    - creates an EC2 snapshot from an existing EBS volume
version_added: '1.5'
options:
  volume_id:
    description:
      - volume from which to take the snapshot
    required: false
  description:
    description:
      - description to be applied to the snapshot
    required: false
  instance_id:
    description:
    - instance that has the required volume to snapshot mounted
    required: false
  device_name:
    description:
    - device name of a mounted volume to be snapshotted
    required: false
  snapshot_tags:
    description:
      - a hash/dictionary of tags to add to the snapshot
    required: false
    version_added: '1.6'
  wait:
    description:
      - wait for the snapshot to be ready
    type: bool
    required: false
    default: yes
    version_added: '1.5.1'
  wait_timeout:
    description:
      - how long before wait gives up, in seconds
      - specify 0 to wait forever
    required: false
    default: 0
    version_added: '1.5.1'
  state:
    description:
      - whether to add or create a snapshot
    required: false
    default: present
    choices: ['absent', 'present']
    version_added: '1.9'
  snapshot_id:
    description:
      - snapshot id to remove
    required: false
    version_added: '1.9'
  last_snapshot_min_age:
    description:
      - If the volume's most recent snapshot has started less than `last_snapshot_min_age' minutes ago, a new snapshot will not be created.
    required: false
    default: 0
    version_added: '2.0'
    
        # build list of params
    params = {}
    
            if state == 'finished':
            body['status'] = 'success'
        else:
            body['status'] = 'failure'
    
        le_path = module.get_bin_path('le', True, ['/usr/local/bin'])
    
        xx = np.arange(100, 100 + n * step, step)
    plt.figure('scikit-learn vs. glmnet benchmark results')
    plt.title('Regression in high dimensional spaces (%d samples)' % n_samples)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    In both cases, only 10% of the features are informative.
'''
import gc
from time import time
import numpy as np
    
        plot_feature_times(all_times, batch_size, all_features, data)
    plot_feature_errors(all_errors, batch_size, all_features, data)
    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    plt.matshow(np.outer(np.sort(model.row_labels_) + 1,
                     np.sort(model.column_labels_) + 1),
            cmap=plt.cm.Blues)
plt.title('Checkerboard structure of rearranged data')
    
    import numpy as np
import scipy as sp
import matplotlib.pyplot as plt
    
    from sklearn import cluster, datasets
from sklearn.preprocessing import StandardScaler
from itertools import cycle, islice
    
    # #############################################################################
# Generate sample data
centers = [[1, 1], [-1, -1], [1, -1]]
X, _ = make_blobs(n_samples=10000, centers=centers, cluster_std=0.6)
    
    Some of the clusters learned without connectivity constraints do not
respect the structure of the swiss roll and extend across different folds of
the manifolds. On the opposite, when opposing connectivity constraints,
the clusters form a nice parcellation of the swiss roll.
'''
    
    
def source_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/blob/master/' + text
    set_classes(options)
    node = nodes.reference(rawtext, text, refuri=ref, **options)
    return [node], []
    
    '''
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
        def prepare_request(self, spider, request, opts):
        def callback(response):
            # memorize first request
            if not self.first_response:
                self.first_response = response
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
                    except ValueError as e:
                    logger.warning(
                        'Ignoring error while verifying certificate '
                        'from host '{}' (exception: {})'.format(
                            self._hostnameASCII, repr(e)))
    
            # Fixes Twisted 11.1.0+ support as HTTPClientFactory is expected
        # to have _disconnectedDeferred. See Twisted r32329.
        # As Scrapy implements it's own logic to handle redirects is not
        # needed to add the callback _waitForDisconnect.
        # Specifically this avoids the AttributeError exception when
        # clientConnectionFailed method is called.
        self._disconnectedDeferred = defer.Deferred()
    
        # Stripping scripts and comments is slow (about 20x slower than
    # just checking if a string is in text); this is a quick fail-fast
    # path that should work for most pages.
    if 'fragment' not in text:
        return False
    if 'content' not in text:
        return False
    
        inverse_index, word_freq = create_inverse_index(files)
    # print(inverse_index)
    
            W, b = get_wb([n_step, n_step])
        a = softmax(tf.matmul(a, W) + b)
        a = tf.reshape(a, [-1, n_input, n_step])  # [batch_size, n_input, n_step]
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')
    
    for i, backend in enumerate(backends):
    for prefix, path in prefix_map.items():
        if backend.startswith(prefix):
            models = __import__(path, globals(), locals(), ['models'], level=0).models
            if i == 0:
                # If this is the first iteration of the loop, we need to
                # emulate ``from x import *`` by copying the module contents
                # into the local (module) scope. This follows the same rules as
                # the import statement itself, as defined in the refrence docs:
                # https://docs.python.org/2.7/reference/simple_stmts.html#import
                if getattr(models, '__all__', None) is not None:
                    predicate = lambda name: name in models.__all__
                else:
                    predicate = lambda name: not name.startswith('_')
                locals().update({k: v for k, v in vars(models).items() if predicate(k)})
            break
    else:
        raise ImproperlyConfigured('Found unknown tagstore backend '%s'' % backend)

    
            # Adding unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.create_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key', 'value'])
    
            # Adding model 'TagValue'
        db.create_table(u'tagstore_tagvalue', (
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key')),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')(null=True, blank=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('value', self.gf('django.db.models.fields.CharField')(max_length=200)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['TagValue'])
    
            # Changing field 'TagValue.project_id'
        db.alter_column(u'tagstore_tagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
    
@instrumented_task(
    name='sentry.tagstore.tasks.delete_tag_key',
    queue='cleanup',
    default_retry_delay=60 * 5,
    max_retries=MAX_RETRIES
)
@retry(exclude=(DeleteAborted, ))
def delete_tag_key(object_id, model, transaction_id=None, **kwargs):
    from sentry import deletions
    
    import logging
import six
    
    
@instrumented_task(name='sentry.tasks.process_buffer.process_incr')
def process_incr(**kwargs):
    '''
    Processes a buffer event.
    '''
    from sentry import buffer