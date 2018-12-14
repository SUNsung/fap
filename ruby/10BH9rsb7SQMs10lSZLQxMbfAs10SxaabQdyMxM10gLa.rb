
        
              expect(value_for(user.id, dt)).to eq(0)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def as_json
      @pages
    end
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
          if @account_moderation_note.save
        redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.created_msg')
      else
        @account          = @account_moderation_note.target_account
        @moderation_notes = @account.targeted_moderation_notes.latest
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
          @user.resend_confirmation_instructions
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
      def payload
    @_payload ||= request.body.read
  end
    
      private
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]