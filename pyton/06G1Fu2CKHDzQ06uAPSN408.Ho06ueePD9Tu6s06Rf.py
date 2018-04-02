
        
        
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
    
    
@bp.route('/login', methods=['GET', 'POST'])
def login():
    error = None
    if request.method == 'POST':
        if request.form['username'] != current_app.config['USERNAME']:
            error = 'Invalid username'
        elif request.form['password'] != current_app.config['PASSWORD']:
            error = 'Invalid password'
        else:
            session['logged_in'] = True
            flash('You were logged in')
            return redirect(url_for('flaskr.show_entries'))
    return render_template('login.html', error=error)
    
    
def register(client, username, password, password2=None, email=None):
    '''Helper function to register a user'''
    if password2 is None:
        password2 = password
    if email is None:
        email = username + '@example.com'
    return client.post('/register', data={
        'username':     username,
        'password':     password,
        'password2':    password2,
        'email':        email,
    }, follow_redirects=True)
    
        project_id = response.json()[0]['id']
    
        # This matches a bare IPv4 address or hostname (or host pattern including
    # [x:y(:z)] ranges) with a port specification.
    
            # params1 has exclude fields, params2 doesn't. Should be equal
        actual = GCPUtils.are_params_equal(params1, params2)
        self.assertTrue(actual)
    
    from ansible.utils.vars import combine_vars