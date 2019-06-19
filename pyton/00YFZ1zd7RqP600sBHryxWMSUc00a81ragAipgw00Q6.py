
        
        
class GroupTagKeyNotFound(Exception):
    pass
    
            # Removing unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.delete_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key', 'value'])
    
            # Removing unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.delete_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key_id', 'value_id'])