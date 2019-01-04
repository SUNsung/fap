
        
        
def win_OpenSCManager():
    res = advapi32.OpenSCManagerW(None, None, SC_MANAGER_ALL_ACCESS)
    if not res:
        raise Exception('Opening service manager failed - '
                        'are you running this as administrator?')
    return res
    
    for test in gettestcases():
    if METHOD == 'EURISTIC':
        try:
            webpage = compat_urllib_request.urlopen(test['url'], timeout=10).read()
        except Exception:
            print('\nFail: {0}'.format(test['name']))
            continue
    
    
def main():
    parser = optparse.OptionParser(usage='%prog CHANGELOG VERSION BUILDPATH')
    options, args = parser.parse_args()
    if len(args) != 3:
        parser.error('Expected a version and a build directory')
    
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
    
    entries_str = textwrap.indent(''.join(entries), '\t')
atom_template = atom_template.replace('@ENTRIES@', entries_str)
    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
    
if __name__ == '__main__':
    main()

    
    import itertools
import json
import os
import re
import sys
    
    import os
from os.path import dirname as dirn
import sys
    
    # Allow direct execution
import os
import sys
import unittest
import collections
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
            sha1 = get_linux_ca_sha1(nss_path)
        ca_hash = CertUtil.ca_thumbprint.replace(':', '')
        if sha1 == ca_hash:
            xlog.info('Database $HOME/.pki/nssdb cert exist')
            return
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    
    
class Log(object):
    def __init__(self):
        self.fd = open(log_file, 'a')
    
                    if self.eot[s] >= 0:
                    #print 'EOT to %d' % self.eot[s]
                    
                    s = self.eot[s]
                    input.consume()
                    continue
    
            # Retrieve more data while providing more input
        out.append(bzd.decompress(self.BIG_DATA[len_:],
                                  max_length=max_length))
        self.assertLessEqual(len(out[-1]), max_length)
    
    # Add the html version.  This converts the message into a multipart/alternative
# container, with the original text message as the first part and the new html
# message as the second part.
asparagus_cid = make_msgid()
msg.add_alternative('''\
<html>
  <head></head>
  <body>
    <p>Salut!</p>
    <p>Cela ressemble à un excellent
        <a href='http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718'>
            recipie
        </a> déjeuner.
    </p>
    <img src='cid:{asparagus_cid}' />
  </body>
</html>
'''.format(asparagus_cid=asparagus_cid[1:-1]), subtype='html')
# note that we needed to peel the <> off the msgid for use in the html.
    
      # All the lines have been processed, report the errors found.
  for required_header_unstripped in sorted(required, key=required.__getitem__):
    template = required[required_header_unstripped][1]
    if required_header_unstripped.strip('<>'') not in include_dict:
      error(filename, required[required_header_unstripped][0],
            'build/include_what_you_use', 4,
            'Add #include ' + required_header_unstripped + ' for ' + template)