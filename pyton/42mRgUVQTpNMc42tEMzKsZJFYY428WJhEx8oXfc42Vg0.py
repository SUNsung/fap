
        
                webpage = webpage.decode('utf8', 'replace')
    
    password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    from youtube_dl.extractor import _ALL_CLASSES
from youtube_dl.extractor.common import InfoExtractor, SearchInfoExtractor
    
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
    
    
import hashlib
import io
import json
import socket
    
        def warning(self, msg):
        self.messages.append(msg)
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['en']))
        self.assertEqual(md5(subtitles['en']), '97e7670cbae3c4d26ae8bcc7fdd78d4b')
    
            label_suffix overrides the form's label_suffix.
        '''
        contents = contents or self.label
        if label_suffix is None:
            label_suffix = (self.field.label_suffix if self.field.label_suffix is not None
                            else self.form.label_suffix)
        # Only add the suffix if the label does not end in punctuation.
        # Translators: If found as last label character, these punctuation
        # characters will prevent the default label_suffix to be appended to the label
        if label_suffix and contents and contents[-1] not in _(':?.!'):
            contents = format_html('{}{}', contents, label_suffix)
        widget = self.field.widget
        id_ = widget.attrs.get('id') or self.auto_id
        if id_:
            id_for_label = widget.id_for_label(id_)
            if id_for_label:
                attrs = {**(attrs or {}), 'for': id_for_label}
            if self.field.required and hasattr(self.form, 'required_css_class'):
                attrs = attrs or {}
                if 'class' in attrs:
                    attrs['class'] += ' ' + self.form.required_css_class
                else:
                    attrs['class'] = self.form.required_css_class
            attrs = flatatt(attrs) if attrs else ''
            contents = format_html('<label{}>{}</label>', attrs, contents)
        else:
            contents = conditional_escape(contents)
        return mark_safe(contents)
    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
        if match:
        newfilename = match.group(1)
        errortype = match.group(2)
    
            idx = 0
        while True:
            url = urls[idx % len(urls)]
            yield Request(url, dont_filter=True)
            idx += 1
    
            if opts.pdb:
            failure.startDebugMode()
    
        def syntax(self):
        return '[options] <spider>'
    
                /patt/regex/replacement
    
        def response(self, flow):
        if self.stream:
            self.stream.add(flow)
            self.active_flows.discard(flow)
    
    
def domain_match(a: str, b: str) -> bool:
    if cookiejar.domain_match(a, b):  # type: ignore
        return True
    elif cookiejar.domain_match(a, b.strip('.')):  # type: ignore
        return True
    return False
    
        @classmethod
    def make_dummy(cls, address):
        return cls.from_state(dict(
            id=str(uuid.uuid4()),
            address=address,
            ip_address=address,
            cert=None,
            sni=address[0],
            alpn_proto_negotiated=None,
            tls_version=None,
            source_address=('', 0),
            tls_established=False,
            timestamp_start=None,
            timestamp_tcp_setup=None,
            timestamp_tls_setup=None,
            timestamp_end=None,
            via=None
        ))