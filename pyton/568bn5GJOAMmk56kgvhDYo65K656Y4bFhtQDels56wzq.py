
        
        
class Fieldline:
    def __init__(self, form, field, readonly_fields=None, model_admin=None):
        self.form = form  # A django.forms.Form instance
        if not hasattr(field, '__iter__') or isinstance(field, str):
            self.fields = [field]
        else:
            self.fields = field
        self.has_visible_field = not all(
            field in self.form.fields and self.form.fields[field].widget.is_hidden
            for field in self.fields
        )
        self.model_admin = model_admin
        if readonly_fields is None:
            readonly_fields = ()
        self.readonly_fields = readonly_fields
    
    
class InnerInline2(admin.StackedInline):
    model = Inner2
    
        def test_inline_hidden_field_no_column(self):
        '''#18263 -- Make sure hidden fields don't get a column in tabular inlines'''
        parent = SomeParentModel.objects.create(name='a')
        SomeChildModel.objects.create(name='b', position='0', parent=parent)
        SomeChildModel.objects.create(name='c', position='1', parent=parent)
        response = self.client.get(reverse('admin:admin_inlines_someparentmodel_change', args=(parent.pk,)))
        self.assertNotContains(response, '<td class='field-position'>')
        self.assertInHTML(
            '<input id='id_somechildmodel_set-1-position' '
            'name='somechildmodel_set-1-position' type='hidden' value='1'>',
            response.rendered_content,
        )
    
    
class EmptyDefaultDatabaseTest(unittest.TestCase):
    def test_empty_default_database(self):
        '''
        An empty default database in settings does not raise an ImproperlyConfigured
        error when running a unit test that does not use a database.
        '''
        testcases.connections = db.ConnectionHandler({'default': {}})
        connection = testcases.connections[db.utils.DEFAULT_DB_ALIAS]
        self.assertEqual(connection.settings_dict['ENGINE'], 'django.db.backends.dummy')
        connections_support_transactions()
    
    
class NamedExpressionScopeTest(unittest.TestCase):
    
        def test_script_autotest(self):
        # Lib/test/autotest.py
        script = os.path.join(self.testdir, 'autotest.py')
        args = [*self.python_args, script, *self.regrtest_args, *self.tests]
        self.run_tests(args)
    
            Return value is a string giving a filename extension,
        including the leading dot ('.').  The extension is not
        guaranteed to have been associated with any particular data
        stream, but would be mapped to the MIME type `type' by
        guess_type().  If no extension can be guessed for `type', None
        is returned.
    
        def test_returns_pid(self):
        pidfile = support.TESTFN
        self.addCleanup(support.unlink, pidfile)
        script = f'''if 1:
            import os
            with open({pidfile!r}, 'w') as pidfile:
                pidfile.write(str(os.getpid()))
            '''
        args = self.python_args('-c', script)
        pid = self.spawn_func(args[0], args, os.environ)
        self.assertEqual(os.waitpid(pid, 0), (pid, 0))
        with open(pidfile) as f:
            self.assertEqual(f.read(), str(pid))
    
    import socket
import io
import re
import email.utils
import email.message
import email.generator
import base64
import hmac
import copy
import datetime
import sys
from email.base64mime import body_encode as encode_base64
    
    
async def test_humidity_sensor_read_state(hass, utcnow):
    '''Test reading the state of a HomeKit humidity sensor accessory.'''
    sensor = create_humidity_sensor_service()
    helper = await setup_test_component(hass, [sensor], suffix='humidity')