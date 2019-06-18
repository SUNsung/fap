
        
        with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
    import sys
import os
import subprocess
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            self.server_process.terminate()
        self.server_process.communicate()