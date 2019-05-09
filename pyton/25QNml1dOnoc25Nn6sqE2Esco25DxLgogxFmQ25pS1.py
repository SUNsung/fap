
        
                for project in RangeQuerySetWrapperWithProgressBar(orm.Project.objects.all()):
            orm.Environment.objects.filter(
                project_id=project.id, organization_id__isnull=True
            ).update(organization_id=project.organization_id)
    
        complete_apps = ['sentry']

    
            # Removing unique constraint on 'RawEvent', fields ['project', 'event_id']
        db.delete_unique('sentry_rawevent', ['project_id', 'event_id'])
    
            db.start_transaction()
    
            for user in RangeQuerySetWrapperWithProgressBar(users):
            orm.UserEmail.objects.get_or_create(user=user, email=user.email)