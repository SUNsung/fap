
        
            def record(self, func):
        '''Registers a function that is called when the blueprint is
        registered on the application.  This function is called with the
        state as argument as returned by the :meth:`make_setup_state`
        method.
        '''
        if self._got_registered_once and self.warn_on_modifications:
            from warnings import warn
    
    from jinja2 import Markup
from werkzeug.http import http_date
from werkzeug.http import parse_date
    
        def inner(name, base=modules_tmpdir):
        if not isinstance(name, str):
            raise ValueError(name)
        base.join(name).ensure_dir()
        base.join(name).join('__init__.py').ensure()
    
        s.register(Tag1, index=-1)
    assert isinstance(s.order[-2], Tag1)
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
    import josepy as jose
import pytz
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
        def test_wildcard(self):
        self.assertFalse(self.addr.is_wildcard())
        self.assertTrue(self.addr1.is_wildcard())
        self.assertTrue(self.addr2.is_wildcard())
    
        with open(context.nginx_config_path, 'r') as file_h:
        current_nginx_config = file_h.read()
    
    
class C(A, B):
    pass
    
    *References:
https://fkromer.github.io/python-pattern-references/design/#singleton
    
    
class lazy_property(object):
    def __init__(self, function):
        self.function = function
        functools.update_wrapper(self, function)
    
    '''
*What is this pattern about?
The Adapter pattern provides a different interface for a class. We can
think about it as a cable adapter that allows you to charge a phone
somewhere that has outlets in a different shape. Following this idea,
the Adapter pattern is useful to integrate classes that couldn't be
integrated due to their incompatible interfaces.