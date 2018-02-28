
def register_blueprints(app):
    '''Register all blueprint modules
    
    
@app.route('/')
def timeline():
    '''Shows a users timeline or if no user is logged in it will
    redirect to the public timeline.  This timeline shows the user's
    messages as well as all the messages of followed users.
    '''
    if not g.user:
        return redirect(url_for('public_timeline'))
    return render_template('timeline.html', messages=query_db('''
        select message.*, user.* from message, user
        where message.author_id = user.user_id and (
            user.user_id = ? or
            user.user_id in (select whom_id from follower
                                    where who_id = ?))
        order by message.pub_date desc limit ?''',
        [session['user_id'], session['user_id'], PER_PAGE]))
    
    import os
import tempfile
import pytest
from minitwit import minitwit
    
    def py_scanstring(s, end, strict=True,
        _b=BACKSLASH, _m=STRINGCHUNK.match):
    '''Scan the string s for a JSON string. End is the index of the
    character in s after the quote that started the JSON string.
    Unescapes all valid JSON string escape sequences and raises ValueError
    on attempt to decode an invalid string. If strict is False then literal
    control characters are allowed in the string.
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
            # Add .lib files this module needs
        for modlib in moddefn.GetLinkerLibs():
            if modlib not in libs:
                libs.append(modlib)
    
        def test_format(self):
        # empty format string is same as str()
        self.assertEqual(format(1+3j, ''), str(1+3j))
        self.assertEqual(format(1.5+3.5j, ''), str(1.5+3.5j))
        self.assertEqual(format(3j, ''), str(3j))
        self.assertEqual(format(3.2j, ''), str(3.2j))
        self.assertEqual(format(3+0j, ''), str(3+0j))
        self.assertEqual(format(3.2+0j, ''), str(3.2+0j))
    
            self.assertRaises(TypeError, Array.from_buffer, bytearray(10))
        self.assertRaises(TypeError, Structure.from_buffer, bytearray(10))
        self.assertRaises(TypeError, Union.from_buffer, bytearray(10))
        self.assertRaises(TypeError, _CFuncPtr.from_buffer, bytearray(10))
        self.assertRaises(TypeError, _Pointer.from_buffer, bytearray(10))
        self.assertRaises(TypeError, _SimpleCData.from_buffer, bytearray(10))