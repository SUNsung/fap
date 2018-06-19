
        
        from email.message import EmailMessage
from email.policy import SMTP
    
    # In a real program you'd get the filename from the arguments.
with open('outgoing.msg', 'rb') as fp:
    msg = BytesParser(policy=policy.default).parse(fp)
    
    while True:
    line = input()
    if line == '':
        break
    buffer += line
    if sqlite3.complete_statement(buffer):
        try:
            buffer = buffer.strip()
            cur.execute(buffer)
    
    # Register the adapter
sqlite3.register_adapter(Point, adapt_point)