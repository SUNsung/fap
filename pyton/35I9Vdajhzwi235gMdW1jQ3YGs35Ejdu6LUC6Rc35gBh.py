
        
        import pytest
    
    
@app.route('/_add_numbers')
def add_numbers():
    '''Add two numbers server side, ridiculous but well...'''
    a = request.args.get('a', 0, type=int)
    b = request.args.get('b', 0, type=int)
    return jsonify(result=a + b)