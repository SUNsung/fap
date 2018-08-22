
        
          def use_sandbox?
    ENV['USE_EVERNOTE_SANDBOX'] == 'true'
  end
    
        def subscribe
      authorize @account, :subscribe?
      Pubsubhubbub::SubscribeWorker.perform_async(@account.id)
      redirect_to admin_account_path(@account.id)
    end
    
      def perform(user_id)
    @user = User.find(user_id)
    deliver_digest if @user.allows_digest_emails?
  end
    
    # Use this to fill in an entire form with data from a table. Example:
#
#   When I fill in the following:
#     | Account Number | 5002       |
#     | Expiry date    | 2009-11-01 |
#     | Note           | Nice guy   |
#     | Wants Email?   |            |
#
# TODO: Add support for checkbox, select og option
# based on naming conventions.
#
When /^(?:|I )fill in the following:$/ do |fields|
  fields.rows_hash.each do |name, value|
    When %{I fill in '#{name}' with '#{value}'}
  end
end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
            def matches? subject
          @subject = subject
          @subject = @subject.class unless Class === @subject
          responds? && has_column?
        end