
        
        import re
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'certbot-compatibility-test.tex',
     u'certbot-compatibility-test Documentation',
     u'Certbot Project', 'manual'),
]
    
    # If true, show page references after internal links.
#latex_show_pagerefs = False
    
    from certbot import errors
from certbot.display import util as display_util