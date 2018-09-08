
        
            def deal_card(self):
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
            Emit key value pairs of the form:
    
    from mrjob.job import MRJob
    
        def move_to_front(self, node):
        ...
    
    
class PagesDataStore(object):
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.linkcode',
    'sphinx_autodoc_annotation',
    'edit_on_github'
]
    
    
class PasswordChangeRequired(CloudError):
    '''Raised when a password change is required.'''
    
            for key, value in states.items():
            if isinstance(value, (float, int)):
                attribute = '{}.{}'.format(metric, key.replace(' ', '_'))
                statsd.gauge(
                    attribute, value, sample_rate=sample_rate, tags=tags)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_SCAN_DURATION, default=10): cv.positive_int,
    vol.Optional(CONF_BLUETOOTH_DEVICE, default='hci0'): cv.string
})