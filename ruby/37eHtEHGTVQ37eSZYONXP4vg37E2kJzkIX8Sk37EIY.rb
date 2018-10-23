
        
        When /^I submit the password reset form$/ do
  submit_password_reset_form
end
    
    Given /^I have been invited by '([^\']+)'$/ do |email|
  AppConfig.settings.enable_registrations = false
  @inviter = User.find_by_email(email)
  @inviter_invite_count = @inviter.invitation_code.count
  i = EmailInviter.new('new_invitee@example.com', @inviter)
  i.send!
end
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
      test_cases.each do |test_case|
    env = test_case['env']
    tasks = test_case['tasks']
    
      # An environment that can write to in-scope global variables, but doesn't
  # create new variables in the global scope. Useful for top-level control
  # directives.
  class SemiGlobalEnvironment < Environment
    def try_set_var(name, value)
      @vars ||= {}
      if @vars.include?(name)
        @vars[name] = value
        true
      elsif @parent
        @parent.try_set_var(name, value)
      else
        false
      end
    end
  end
end

    
        # Tells optparse how to parse the arguments
    # available for all executables.
    #
    # This is meant to be overridden by subclasses
    # so they can add their own options.
    #
    # @param opts [OptionParser]
    def set_opts(opts)
      Sass::Util.abstract(this)
    end
    
          if @options[:update]
        Sass::Plugin.update_stylesheets(files)
        exit 1 if had_error
        return
      end