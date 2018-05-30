
        
        with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
    
if __name__ == '__main__':
    unittest.main()

    
    
class TestMultipleSocks(unittest.TestCase):
    @staticmethod
    def _check_params(attrs):
        params = get_params()
        for attr in attrs:
            if attr not in params:
                print('Missing %s. Skipping.' % attr)
                return
        return params
    
                    m = re.search(r'(?<=\s)u[\''](?!\)|,|$)', code)
                if m is not None:
                    self.assertTrue(
                        m is None,
                        'u present in %s, around %s' % (
                            fn, code[m.start() - 10:m.end() + 10]))
    
    from .common import InfoExtractor