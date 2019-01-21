
        
        
class GITBuilder(GITInfoBuilder):
    def build(self):
        try:
            subprocess.check_output(['git', 'clone', 'git://github.com/%s/%s.git' % (self.user, self.repoName), self.buildPath])
            subprocess.check_output(['git', 'checkout', self.rev], cwd=self.buildPath)
        except subprocess.CalledProcessError as e:
            raise BuildError(e.output)
    
    print()

    
    
iv = key = [0x20, 0x15] + 14 * [0]
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)