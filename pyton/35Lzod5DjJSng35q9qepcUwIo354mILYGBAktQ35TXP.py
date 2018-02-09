
        
                # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        Implements all methods and operations of
    ``collections.MutableMapping`` as well as dict's ``copy``. Also
    provides ``lower_items``.
    
    import pytest
    
        if cryptography_version < [1, 3, 4]:
        warning = 'Old version of cryptography ({0}) may cause slowdown.'.format(cryptography_version)
        warnings.warn(warning, RequestsDependencyWarning)
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            'application/xml',
            ('application/xml', {})
        ),
        (
            'application/json ; charset=utf-8',
            ('application/json', {'charset': 'utf-8'})
        ),
        (
            'text/plain',
            ('text/plain', {})
        ),
        (
            'multipart/form-data; boundary = something ; boundary2=\'something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
                'multipart/form-data; boundary = something ; boundary2='something_else' ; no_equals ',
                ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; \'boundary2=something_else\' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'multipart/form-data; boundary = something ; 'boundary2=something_else' ; no_equals ',
            ('multipart/form-data', {'boundary': 'something', 'boundary2': 'something_else', 'no_equals': True})
        ),
        (
            'application/json ; ; ',
            ('application/json', {})
        )
    ))
def test__parse_content_type_header(value, expected):
    assert _parse_content_type_header(value) == expected
    
    from tornado.test.util import unittest
    
    
if __name__ == '__main__':
    main()
