
        
            return TemplateResponse(request, template_name, {'sitemaps': sites},
                            content_type=content_type)
    
    from argparse import ArgumentParser
    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
    buffer = ''