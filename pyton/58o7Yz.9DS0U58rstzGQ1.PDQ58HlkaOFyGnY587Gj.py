
        
                (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    
class Person(object):
    
    
class HashTable(object):
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post is None

    
    
def _collect_previous_mask(input_tensors):
    '''Retrieves the output mask(s) of the previous node.
    
    # we add a GlobalAveragePooling1D, which will average the embeddings
# of all words in the document
model.add(GlobalAveragePooling1D())
    
    
def contrastive_loss(y_true, y_pred):
    '''Contrastive loss from Hadsell-et-al.'06
    http://yann.lecun.com/exdb/publis/pdf/hadsell-chopra-lecun-06.pdf
    '''
    margin = 1
    square_pred = K.square(y_pred)
    margin_square = K.square(K.maximum(margin - y_pred, 0))
    return K.mean(y_true * square_pred + (1 - y_true) * margin_square)
    
        # Arguments
        layers: list of layers to add to the model.
        name: Name given to the model
    
    from .. import backend as K
from .. import initializers
from .. import regularizers
from .. import constraints
from ..engine.base_layer import Layer
from ..legacy import interfaces
from ..utils.generic_utils import to_list