
        
            groups
  end
end

    
    module Devise
  module Models
    # Confirmable is responsible to verify if an account is already confirmed to
    # sign in, and to send emails with confirmation instructions.
    # Confirmation instructions are sent to the user email after creating a
    # record and when manually requested by a new confirmation instruction request.
    #
    # Confirmable tracks the following columns:
    #
    # * confirmation_token   - A unique random token
    # * confirmed_at         - A timestamp when the user clicked the confirmation link
    # * confirmation_sent_at - A timestamp when the confirmation_token was generated (not sent)
    # * unconfirmed_email    - An email address copied from the email attr. After confirmation
    #                          this value is copied to the email attr then cleared
    #
    # == Options
    #
    # Confirmable adds the following options to +devise+:
    #
    #   * +allow_unconfirmed_access_for+: the time you want to allow the user to access their account
    #     before confirming it. After this period, the user access is denied. You can
    #     use this to let your user access some features of your application without
    #     confirming the account, but blocking it after a certain period (ie 7 days).
    #     By default allow_unconfirmed_access_for is zero, it means users always have to confirm to sign in.
    #   * +reconfirmable+: requires any email changes to be confirmed (exactly the same way as
    #     initial account confirmation) to be applied. Requires additional unconfirmed_email
    #     db field to be set up (t.reconfirmable in migrations). Until confirmed, new email is
    #     stored in unconfirmed email column, and copied to email column on successful
    #     confirmation. Also, when used in conjunction with `send_email_changed_notification`,
    #     the notification is sent to the original email when the change is requested,
    #     not when the unconfirmed email is confirmed.
    #   * +confirm_within+: the time before a sent confirmation token becomes invalid.
    #     You can use this to force the user to confirm within a set period of time.
    #     Confirmable will not generate a new token if a repeat confirmation is requested
    #     during this time frame, unless the user's email changed too.
    #
    # == Examples
    #
    #   User.find(1).confirm       # returns true unless it's already confirmed
    #   User.find(1).confirmed?    # true/false
    #   User.find(1).send_confirmation_instructions # manually send instructions
    #
    module Confirmable
      extend ActiveSupport::Concern
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        def recall_app(app)
      controller, action = app.split('#')
      controller_name  = ActiveSupport::Inflector.camelize(controller)
      controller_klass = ActiveSupport::Inflector.constantize('#{controller_name}Controller')
      controller_klass.action(action)
    end
    
        def type=(value)
      @type = value.try :strip
    end
    
        self.base_url = 'http://localhost/'
    
              # Underscore methods
          if name.start_with?('Underscore')
            node.at_css('~ ul').css('li').each do |li|
              name = [type.downcase, li.at_css('a').content.split.first].join('.')
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type]
            end
            next
          end
    
            css('.function').each do |node|
          name = '#{node.at_css('.descname').content}()'
          id = node.at_css('dt[id]')['id']
          entries << [name, id]
        end
    
    require 'rubygems'  # install rubygems
require 'hpricot'   # gem install hpricot
require 'uri'
require 'timeout'
    
          when :login_fail
        if(s[:user] and s[:pass])
          report_auth_info(s.merge({:active => false}))
          print_status('Failed FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
    
    fileOutJar 	= clsFile.new_with_sig('Ljava.lang.String;', 'output.jar')
filesIn		= Array.new
    
    end
    
        SPREE_GEMS.each do |gem_name|
      Dir.chdir(gem_name) do
        sh 'gem build spree_#{gem_name}.gemspec'
        mv 'spree_#{gem_name}-#{version}.gem', pkgdir
      end
    end