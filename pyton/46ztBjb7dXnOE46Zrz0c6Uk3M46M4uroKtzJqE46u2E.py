
        
        
def load_json_preserve_order(s):
    return json.loads(s, object_pairs_hook=OrderedDict)
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    '''
*What is this pattern about?
Define a family of algorithms, encapsulate each one, and make them interchangeable.
Strategy lets the algorithm vary independently from clients that use it.
    
    
# Abstract Building
class Building(object):
    def __init__(self):
        self.build_floor()
        self.build_size()
    
    
def get_localizer(language='English'):
    '''The factory method'''
    languages = dict(English=EnglishGetter, Greek=GreekGetter)
    return languages[language]()
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    
class Blackboard(object):
    def __init__(self):
        self.experts = []
        self.common_state = {
            'problems': 0,
            'suggestions': 0,
            'contributions': [],
            'progress': 0,  # percentage, if 100 -> task is finished
        }
    
    
class Unit(object):
    def __init__(self, HierachicalStateMachine):
        self.hsm = HierachicalStateMachine
    
        def get_product_information(self, product):
        product_info = self.business_logic.product_information(product)
        if product_info:
            print('PRODUCT INFORMATION:')
            print(
                'Name: {0}, Price: {1:.2f}, Quantity: {2:}'.format(
                    product.title(), product_info.get('price', 0), product_info.get('quantity', 0)
                )
            )
        else:
            print('That product '{0}' does not exist in the records'.format(product))
    
        def show_item_information(self, item_name):
        try:
            item_info = self.model.get(item_name)
        except Exception:
            item_type = self.model.item_type
            self.view.item_not_found(item_type, item_name)
        else:
            item_type = self.model.item_type
            self.view.show_item_information(item_type, item_name, item_info)