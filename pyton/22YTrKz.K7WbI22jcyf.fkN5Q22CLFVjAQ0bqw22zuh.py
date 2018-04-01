
        
        # The master toctree document.
master_doc = 'index'
    
    
@bp.route('/add', methods=['POST'])
def add_entry():
    if not session.get('logged_in'):
        abort(401)
    db = get_db()
    db.execute('insert into entries (title, text) values (?, ?)',
               [request.form['title'], request.form['text']])
    db.commit()
    flash('New entry was successfully posted')
    return redirect(url_for('flaskr.show_entries'))
    
    from flask import Flask, jsonify, render_template, request
app = Flask(__name__)
    
    
@app.before_request
def before_request():
    g.user = None
    if 'user_id' in session:
        g.user = query_db('select * from user where user_id = ?',
                          [session['user_id']], one=True)
    
                # report after inserting so AW sees the token in the exception
            self.reportError(e)
            return inserted
    
    
def is_translated(msg):
    if isinstance(msg.string, basestring):
        return bool(msg.string)
    for item in msg.string:
        if not item:
            return False
    return True
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
        def url_features(self):
        return set(request.GET.getall('feature'))
    
            bjs = self.get_wrapped_link(url, wrapper = builder_wrapper)
        response.content_type = 'text/javascript'
        return bjs.render()
    
        def GET_faq(self):
        if c.default_sr:
            return self.redirect('/help/faq')
        else:
            return self.renderurl('/help/faqs/' + c.site.name)
