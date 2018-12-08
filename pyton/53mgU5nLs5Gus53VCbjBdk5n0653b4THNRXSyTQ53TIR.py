
        
        # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
        def test_decrypt_text(self):
        password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x17\x15\x93\xab\x8d\x80V\xcdV\xe0\t\xcdo\xc2\xa5\xd8ksM\r\xe27N\xae'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 16))
        self.assertEqual(decrypted, self.secret_msg)
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
     install - install packages
 remove  - remove packages
    
    
def test_match():
    assert match(Command('sudo apt update', match_output))
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    
def rev_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'http://hg.scrapy.org/scrapy/changeset/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'r' + text, refuri=ref, **options)
    return [node], []

    
        def syntax(self):
        return '[options] <spider>'
    
            if self.settings.get('BOT_NAME') == module:
            print('Cannot create a spider with the same name as your project')
            return
    
        def set_spidercls(self, url, opts):
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            try:
                self.spidercls = spider_loader.load(opts.spider)
            except KeyError:
                logger.error('Unable to find spider: %(spider)s',
                             {'spider': opts.spider})
        else:
            self.spidercls = spidercls_for_request(spider_loader, Request(url))
            if not self.spidercls:
                logger.error('Unable to find spider for: %(url)s',
                             {'url': url})
    
    class Command(ScrapyCommand):
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
    if __name__ == '__main__':
	import sys
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''
