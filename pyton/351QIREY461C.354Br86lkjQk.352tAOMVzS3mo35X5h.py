
        
        import io
import optparse
import os
import sys
    
    
if __name__ == '__main__':
    unittest.main()

    
    from __future__ import unicode_literals
    
        def debug(self, msg):
        pass
    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
        with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
        # Masking
        This layer supports masking for input data with a variable number
        of timesteps. To introduce masks to your data,
        use an [Embedding](embeddings.md) layer with the `mask_zero` parameter
        set to `True`.
    
    model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=input_shape))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
model.add(Flatten())
model.add(Dense(128, activation='relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes, activation='softmax'))
    
    To use this with Keras, we make a dataset out of elements
of the form (input batch, output batch). From there, we
create a one-shot iterator and a graph node corresponding
to its get_next() method. Its components are then provided
to the network's Input layer and the Model.compile() method,
respectively.
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    import random
import threading
import time
import os
from front_base.random_get_slice import RandomGetSlice
    
    IPv6 = CheckNetwork('IPv6')
IPv6.urls = ['http://[2001:41d0:8:e8ad::1]',
             'http://[2001:260:401:372::5f]',
             'http://[2a02:188:3e00::32]',
             'http://[2804:10:4068::202:82]'
             ]
IPv6.triger_check_network()
    
    
pteredor_is_running = False
    
    
class JWS(jose.JWS):
    '''ACME-specific JWS. Includes none, url, and kid in protected header.'''
    signature_cls = Signature
    __slots__ = jose.JWS._orig_slots  # pylint: disable=no-member
    
            self.assertRaises(
            jose.DeserializationError, nonce_field.decode, self.wrong_nonce)
        self.assertEqual(b'foo', nonce_field.decode(self.good_nonce))
    
            self.vhost1 = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
    autodoc_member_order = 'bysource'
autodoc_default_flags = ['show-inheritance', 'private-members']
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
    *What does this example do?
This particular implementation abstracts the creation of a pet and
does so depending on the factory we chose (Dog or Cat, or random_animal)
This works because both Dog/Cat and random_animal respect a common
interface (callable for creation and .speak()).
Now my application can create pets abstractly and decide later,
based on my own criteria, dogs over cats.
    
        graphic = CompositeGraphic()
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
        def show_item_information(self, item_name):
        try:
            item_info = self.model.get(item_name)
        except Exception:
            item_type = self.model.item_type
            self.view.item_not_found(item_type, item_name)
        else:
            item_type = self.model.item_type
            self.view.show_item_information(item_type, item_name, item_info)
    
        def test_data_name_shall_be_changeable(cls):
        cls.sub.name = 'New Data Name'
        cls.assertEqual(cls.sub.name, 'New Data Name')

    
        def test_subscriber_shall_be_detachable_from_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
        sub.unsubscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 0)
    
        def test_parents(self):
        for _ in range(2):
            self.assertEqual(self.John.parents, 'Father and mother')
        self.assertEqual(self.John.call_count2, 1)

    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())