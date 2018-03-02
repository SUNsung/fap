
        
        # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
        with app.app_context():
        init_db()
        yield app
    
    
@app.route('/<username>/unfollow')
def unfollow_user(username):
    '''Removes the current user as follower of the given user.'''
    if not g.user:
        abort(401)
    whom_id = get_user_id(username)
    if whom_id is None:
        abort(404)
    db = get_db()
    db.execute('delete from follower where who_id=? and whom_id=?',
              [session['user_id'], whom_id])
    db.commit()
    flash('You are no longer following '%s'' % username)
    return redirect(url_for('user_timeline', username=username))
    
    
import argparse
import collections
import os
import sys
    
    
def secure_hash_s(data, hash_func=sha1):
    ''' Return a secure hash hex digest of data. '''
    
        if key:
        return key
    
        # new build
    
            # global, resource
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('urlMaps', actual['resource_name'])