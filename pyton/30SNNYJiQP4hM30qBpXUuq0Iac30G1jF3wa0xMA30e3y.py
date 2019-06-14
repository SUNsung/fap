
        
        
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
        :param client: AWS API client reference (boto3)
    :param module: Ansible module reference
    :return dict:
    '''
    
            :returns: `set` of unsaved files
        '''
        save_state = self.aug.get('/augeas/save')
        self.aug.set('/augeas/save', 'noop')
        # Existing Errors
        ex_errs = self.aug.match('/augeas//error')
        try:
            # This is a noop save
            self.aug.save()
        except (RuntimeError, IOError):
            self._log_save_errors(ex_errs)
            # Erase Save Notes
            self.save_notes = ''
            raise errors.PluginError(
                'Error saving files, check logs for more info.')
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
        return result
    
    
class GroupTagKeyNotFound(Exception):
    pass
    
            # Removing unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.delete_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key', 'value'])
    
            # Adding model 'GroupTagValue'
        db.create_table(u'tagstore_grouptagvalue', (
            ('_value', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagValue'], db_column='value')),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key')),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['GroupTagValue'])
    
    from datetime import timedelta
from django.utils import timezone