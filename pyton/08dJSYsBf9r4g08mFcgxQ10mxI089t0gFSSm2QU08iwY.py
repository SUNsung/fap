
        
                e = d.__copy__()
        self.assertEqual(type(d), type(e))
        self.assertEqual(list(d), list(e))
    
    __all__ = ['make_scanner']
    
            for func, args, kwargs, expected in self.CALLS_KWARGS:
            with self.subTest(func=func, args=args, kwargs=kwargs):
                result = _testcapi.pyobject_fastcalldict(func, args, kwargs)
                self.check_result(result, expected)
    
            If the optional allow_dotted_names argument is true and the
        instance does not have a _dispatch method, method names
        containing dots are supported and resolved, as long as none of
        the name segments start with an '_'.
    
    class PyCFunctionObjectPtr(PyObjectPtr):
    '''
    Class wrapping a gdb.Value that's a PyCFunctionObject*
    (see Include/methodobject.h and Objects/methodobject.c)
    '''
    _typename = 'PyCFunctionObject'
    
            self.assertRaises(TypeError, complex, '1', '1')
        self.assertRaises(TypeError, complex, 1, '1')
    
            self.assertRaises(TypeError, Array.from_buffer_copy, b'123')
        self.assertRaises(TypeError, Structure.from_buffer_copy, b'123')
        self.assertRaises(TypeError, Union.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _CFuncPtr.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _Pointer.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _SimpleCData.from_buffer_copy, b'123')
    
        def test_4(self):
        class X(Structure):
            pass
        class Y(X):
            pass
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
        Y._fields_ = []
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])