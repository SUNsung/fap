
        
        
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
    password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
    import youtube_dl
    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
            if in_options:
            if line.lstrip().startswith('-'):
                split = re.split(r'\s{2,}', line.lstrip())
                # Description string may start with `-` as well. If there is
                # only one piece then it's a description bit not an option.
                if len(split) > 1:
                    option, description = split
                    split_option = option.split(' ')
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        def test_decrypt_text(self):
        password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x17\x15\x93\xab\x8d\x80V\xcdV\xe0\t\xcdo\xc2\xa5\xd8ksM\r\xe27N\xae'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 16))
        self.assertEqual(decrypted, self.secret_msg)
    
            add_ie = getattr(self, self._testMethodName).add_ie
        return '%s (%s)%s:' % (self._testMethodName,
                               strclass(self.__class__),
                               ' [%s]' % add_ie if add_ie else '')
    
    
def ten_percent_discount(order):
    return order.price * 0.10
    
    
class Dog(object):
    def speak(self):
        return 'woof'
    
    
class ComplexHouse(ComplexBuilding):
    def build_floor(self):
        self.floor = 'One'
    
    
if __name__ == '__main__':
    # Create our localizers
    e, g = get_localizer(language='English'), get_localizer(language='Greek')
    # Localize some text
    for msgid in 'dog parrot cat bear'.split():
        print(e.get(msgid), g.get(msgid))
    
    *Where is the pattern used practically?
    
    
class ProductionCodeTimeProvider(object):
    '''
    Production code version of the time provider (just a wrapper for formatting
    datetime for this example).
    '''
    
    ### OUTPUT ###
# ['A', 'B', 'C', 'D']
# [['A', 'B', 'C', 'D'], ['A', 'B', 'D'], ['A', 'C', 'D']]
# ['A', 'B', 'D']

    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''