
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
    
def test_template_filter(app):
    bp = flask.Blueprint('bp', __name__)
    
        # ImportError
    with pytest.raises(click.BadParameter):
        run_command.make_context('run', ['--cert', 'not_here'])
    
        from main_app import app
    
            def check(self, value):
            return isinstance(value, Foo)
    
    from .models import (
    Author, BinaryTree, CapoFamiglia, Chapter, Child, ChildModel1, ChildModel2,
    Consigliere, EditablePKBook, ExtraTerrestrial, Fashionista, FootNote,
    Holder, Holder2, Holder3, Holder4, Inner, Inner2, Inner3, Inner4Stacked,
    Inner4Tabular, NonAutoPKBook, NonAutoPKBookChild, Novel,
    NovelReadonlyChapter, OutfitItem, ParentModelWithCustomPk, Poll, Profile,
    ProfileCollection, Question, ReadOnlyInline, ShoppingWeakness, Sighting,
    SomeChildModel, SomeParentModel, SottoCapo, Teacher, Title,
    TitleCollection,
)
    
        def test_inline_primary(self):
        person = Person.objects.create(firstname='Imelda')
        item = OutfitItem.objects.create(name='Shoes')
        # Imelda likes shoes, but can't carry her own bags.
        data = {
            'shoppingweakness_set-TOTAL_FORMS': 1,
            'shoppingweakness_set-INITIAL_FORMS': 0,
            'shoppingweakness_set-MAX_NUM_FORMS': 0,
            '_save': 'Save',
            'person': person.id,
            'max_weight': 0,
            'shoppingweakness_set-0-item': item.id,
        }
        response = self.client.post(reverse('admin:admin_inlines_fashionista_add'), data)
        self.assertEqual(response.status_code, 302)
        self.assertEqual(len(Fashionista.objects.filter(person__firstname='Imelda')), 1)
    
        def get_by_natural_key(self, codename, app_label, model):
        return self.get(
            codename=codename,
            content_type=ContentType.objects.db_manager(self.db).get_by_natural_key(app_label, model),
        )
    
    
class FilteredAggregateTests(TestCase):
    @classmethod
    def setUpTestData(cls):
        cls.a1 = Author.objects.create(name='test', age=40)
        cls.a2 = Author.objects.create(name='test2', age=60)
        cls.a3 = Author.objects.create(name='test3', age=100)
        cls.p1 = Publisher.objects.create(name='Apress', num_awards=3, duration=datetime.timedelta(days=1))
        cls.b1 = Book.objects.create(
            isbn='159059725', name='The Definitive Guide to Django: Web Development Done Right',
            pages=447, rating=4.5, price=Decimal('30.00'), contact=cls.a1, publisher=cls.p1,
            pubdate=datetime.date(2007, 12, 6),
        )
        cls.b2 = Book.objects.create(
            isbn='067232959', name='Sams Teach Yourself Django in 24 Hours',
            pages=528, rating=3.0, price=Decimal('23.09'), contact=cls.a2, publisher=cls.p1,
            pubdate=datetime.date(2008, 3, 3),
        )
        cls.b3 = Book.objects.create(
            isbn='159059996', name='Practical Django Projects',
            pages=600, rating=4.5, price=Decimal('29.69'), contact=cls.a3, publisher=cls.p1,
            pubdate=datetime.date(2008, 6, 23),
        )
        cls.a1.friends.add(cls.a2)
        cls.a1.friends.add(cls.a3)
        cls.b1.authors.add(cls.a1)
        cls.b1.authors.add(cls.a3)
        cls.b2.authors.add(cls.a2)
        cls.b3.authors.add(cls.a3)
    
        def get_distance(self, f, dist_val, lookup_type):
        '''
        Retrieve the distance parameters for the given geometry field,
        distance lookup value, and the distance lookup type.
    
        def test_suffix(self):
        self.assertEqual(HashIndex.suffix, 'hash')
    
    source_code_dir = os.path.dirname(__file__)
    
    
def _update_method_wrapper(_wrapper, decorator):
    # _multi_decorate()'s bound_method isn't available in this scope. Cheat by
    # using it on a dummy function.
    @decorator
    def dummy(*args, **kwargs):
        pass
    update_wrapper(_wrapper, dummy)
    
    
class RunTestsExceptionHandlingTests(unittest.TestCase):
    def test_run_checks_raises(self):
        '''
        Teardown functions are run when run_checks() raises SystemCheckError.
        '''
        with mock.patch('django.test.runner.DiscoverRunner.setup_test_environment'), \
                mock.patch('django.test.runner.DiscoverRunner.setup_databases'), \
                mock.patch('django.test.runner.DiscoverRunner.build_suite'), \
                mock.patch('django.test.runner.DiscoverRunner.run_checks', side_effect=SystemCheckError), \
                mock.patch('django.test.runner.DiscoverRunner.teardown_databases') as teardown_databases, \
                mock.patch('django.test.runner.DiscoverRunner.teardown_test_environment') as teardown_test_environment:
            runner = DiscoverRunner(verbosity=0, interactive=False)
            with self.assertRaises(SystemCheckError):
                runner.run_tests(['test_runner_apps.sample.tests_sample.TestDjangoTestCase'])
            self.assertTrue(teardown_databases.called)
            self.assertTrue(teardown_test_environment.called)
    
        def __getitem__(self, index):
        'Allows use of the index [] operator to get a layer at the index.'
        if isinstance(index, str):
            try:
                layer = capi.get_layer_by_name(self.ptr, force_bytes(index))
            except GDALException:
                raise IndexError('Invalid OGR layer name given: %s.' % index)
        elif isinstance(index, int):
            if 0 <= index < self.layer_count:
                layer = capi.get_layer(self._ptr, index)
            else:
                raise IndexError('Index out of range when accessing layers in a datasource: %s.' % index)
        else:
            raise TypeError('Invalid index type: %s' % type(index))
        return Layer(layer, self)
    
        def __init__(self, layer_ptr, ds):
        '''
        Initialize on an OGR C pointer to the Layer and the `DataSource` object
        that owns this layer.  The `DataSource` object is required so that a
        reference to it is kept with this Layer.  This prevents garbage
        collection of the `DataSource` while this Layer is still active.
        '''
        if not layer_ptr:
            raise GDALException('Cannot create Layer, invalid pointer given')
        self.ptr = layer_ptr
        self._ds = ds
        self._ldefn = capi.get_layer_defn(self._ptr)
        # Does the Layer support random reading?
        self._random_read = self.test_capability(b'RandomRead')
    
        def __init__(self, parent, category, command):
        logger.debug('Initializing %s: (category: '%s', command: '%s')',
                     self.__class__.__name__, category, command)
        super().__init__(parent)
    
        def flush_queue(self, q_name):
        ''' Empty out a specific queue '''
        logger.debug('QueueManager flushing: '%s'', q_name)
        queue = self.queues[q_name]
        while not queue.empty():
            queue.get(True, 1)
    
        def set_defaults(self):
        ''' Set the default values for config '''
        logger.debug('Setting defaults')
        current_dir = os.path.dirname(__file__)
        for dirpath, _, filenames in os.walk(current_dir):
            default_files = [fname for fname in filenames if fname.endswith('_defaults.py')]
            if not default_files:
                continue
            base_path = os.path.dirname(os.path.realpath(sys.argv[0]))
            import_path = '.'.join(full_path_split(dirpath.replace(base_path, ''))[1:])
            plugin_type = import_path.split('.')[-1]
            for filename in default_files:
                self.load_module(filename, import_path, plugin_type)
    
            For actions that occur identically for each frame (e.g. blend_box), constants can
        be placed into self.func_constants to be compiled at launch, then referenced for
        each face. '''
    def __init__(self, mask_type, output_size, predicted_available=False, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.mask = self.get_mask() if not self.skip else None
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.