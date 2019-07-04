
        
            Validates that the username is not already taken. Hashes the
    password for security.
    '''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
    
        with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))
    
        # login request set the user_id in the session
    # check that the user is loaded from the session
    with client:
        client.get('/')
        assert session['user_id'] == 1
        assert g.user['username'] == 'test'
    
            if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id) VALUES (?, ?, ?)',
                (title, body, g.user['id']),
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
    
class TagTuple(JSONTag):
    __slots__ = ()
    key = ' t'
    
        Implements cookie based sessions based on itsdangerous.