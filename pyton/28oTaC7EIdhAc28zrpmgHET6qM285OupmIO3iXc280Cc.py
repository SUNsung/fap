
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
            flash(error)
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
    
def parse_changelog():
    with open('CHANGES.rst') as f:
        lineiter = iter(f)
        for line in lineiter:
            match = re.search('^Version\s+(.*)', line.strip())
    
        def run(self):
        for i in range(0, 100):
            threading.Thread(target=self.checker).start()
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
            self.error(nvae)
        raise nvae
    
              stat -> expr -> atom -> expr -> atom
    
            @param channel Skip tokens on any channel but this one; this is how we
            skip whitespace...
            
        '''
        
        TokenStream.__init__(self)
        
        self.tokenSource = tokenSource
    
        def persistent_load(self, pid):
        # This method is invoked whenever a persistent ID is encountered.
        # Here, pid is the tuple returned by DBPickler.
        cursor = self.connection.cursor()
        type_tag, key_id = pid
        if type_tag == 'MemoRecord':
            # Fetch the referenced record from the database and return it.
            cursor.execute('SELECT * FROM memos WHERE key=?', (str(key_id),))
            key, task = cursor.fetchone()
            return MemoRecord(key, task)
        else:
            # Always raises an error if you cannot return the correct object.
            # Otherwise, the unpickler will think None is the object referenced
            # by the persistent ID.
            raise pickle.UnpicklingError('unsupported persistent object')
    
            print('Unordered results using pool.imap_unordered():')
        for x in imap_unordered_it:
            print('\t', x)
        print()
    
    def calculate(func, args):
    result = func(*args)
    return '%s says that %s%s = %s' % \
        (current_process().name, func.__name__, args, result)
    
        def test_insertion_sort(self):
        insertion_sort = InsertionSort()
    
            mocap_id = sim.model.body_mocapid[obj1_id]
        if mocap_id != -1:
            # obj1 is the mocap, obj2 is the welded body
            body_idx = obj2_id
        else:
            # obj2 is the mocap, obj1 is the welded body
            mocap_id = sim.model.body_mocapid[obj2_id]
            body_idx = obj1_id
    
    # Wrapper errors
    
    def test_record_breaking_render_method():
    env = BrokenRecordableEnv()
    rec = VideoRecorder(env)
    rec.capture_frame()
    rec.close()
    assert rec.empty
    assert rec.broken
    assert not os.path.exists(rec.path)
    
        existing = rollout_dict.get(spec.id)
    if existing:
        differs = False
        for key, new_hash in rollout.items():
            differs = differs or existing[key] != new_hash
        if not differs:
            logger.debug('Hashes match with existing for {}'.format(spec.id))
            return False
        else:
            logger.warn('Got new hash for {}. Overwriting.'.format(spec.id))