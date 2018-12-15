
        
            def destroy
      authorize @account_moderation_note, :destroy?
      @account_moderation_note.destroy!
      redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.destroyed_msg')
    end
    
          redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
        def create
      authorize :status, :update?
    
      private