
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    
@bp.route('/')
def index():
    '''Show all the posts, most recent first.'''
    db = get_db()
    posts = db.execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' ORDER BY created DESC'
    ).fetchall()
    return render_template('blog/index.html', posts=posts)
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
            if (
            not kwargs and len(args) == 1
            and isinstance(args[0], (EnvironBuilder, dict))
        ):
            environ = self.environ_base.copy()
    
    
def load_data(label_mode='fine'):
    '''Loads CIFAR100 dataset.
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = os.path.join('datasets', 'fashion-mnist')
    base = 'http://fashion-mnist.s3-website.eu-central-1.amazonaws.com/'
    files = ['train-labels-idx1-ubyte.gz', 'train-images-idx3-ubyte.gz',
             't10k-labels-idx1-ubyte.gz', 't10k-images-idx3-ubyte.gz']
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        target_devices = ['/cpu:0'] + ['/gpu:%d' % i for i in target_gpu_ids]
    for device in target_devices:
        if device not in available_devices:
            raise ValueError(
                'To call `multi_gpu_model` with `gpus=%s`, '
                'we expect the following devices to be available: %s. '
                'However this machine only has: %s. '
                'Try reducing `gpus`.' % (gpus,
                                          target_devices,
                                          available_devices))
    
        def build(self, input_shape):
        super(CuDNNGRU, self).build(input_shape)
        if isinstance(input_shape, list):
            input_shape = input_shape[0]
        input_dim = input_shape[-1]
    
        if hasattr(model, 'metrics'):
        for m in model.stateful_metric_functions:
            m.reset_states()
        stateful_metric_indices = [
            i for i, name in enumerate(model.metrics_names)
            if str(name) in model.stateful_metric_names]
    else:
        stateful_metric_indices = []
    
    # Save model and weights
if not os.path.isdir(save_dir):
    os.makedirs(save_dir)
model_path = os.path.join(save_dir, model_name)
model.save(model_path)
print('Saved trained model at %s ' % model_path)
    
    Gets to 0.89 test accuracy after 2 epochs.
90s/epoch on Intel i5 2.4Ghz CPU.
10s/epoch on Tesla K40 GPU.
'''
from __future__ import print_function
    
    # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
        def syntax(self):
        return '<spider>'
    
            name, domain = args[0:2]
        module = sanitize_module_name(name)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        if num in lowPrimes:
        return True
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
    if __name__ == '__main__':
	import sys
    
    #Some examples
    
    
    
    def getBlock(bitString):
	'''[summary]
	Iterator:
		Returns by each call a list of length 16 with the 32 bit
		integer blocks. 
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''

    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'GroupCommitResolution'
        db.create_table(
            'sentry_groupcommitresolution', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'group_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'commit_id',
                    self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
                ), (
                    'datetime', self.gf('django.db.models.fields.DateTimeField')(
                        db_index=True
                    )
                ),
            )
        )
        db.send_create_signal('sentry', ['GroupCommitResolution'])
    
            # Adding field 'Environment.organization_id'
        db.add_column(
            'sentry_environment',
            'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True),
            keep_default=False
        )
    
            # Changing field 'Environment.organization_id'
        db.alter_column(
            'sentry_environment', 'organization_id',
            self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()
        )
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
    
            # Adding field 'ApiToken.expires_at'
        db.add_column(
            'sentry_apitoken',
            'expires_at',
            self.gf('django.db.models.fields.DateTimeField')(null=True),
            keep_default=False
        )