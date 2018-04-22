
        
            # Use the logger configured for ActionMailer::Base.
    def logger
      ActionMailer::Base.logger
    end
  end
end
    
    require 'active_support/test_case'
require 'rails-dom-testing'
    
    # These are the normal settings that will be set up by Railties
# TODO: Have these tests support other combinations of these values
silence_warnings do
  Encoding.default_internal = Encoding::UTF_8
  Encoding.default_external = Encoding::UTF_8
end
    
      class TestMailer < ActionMailer::Base
    def receive(mail)
      # Do nothing
    end
  end
    
      * item1
  * item2
  * item3
    TEXT
    assert_equal expected.gsub('\n', '\r\n'), mail.body.encoded
  end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER]).to match(/cd .* && agvtool next-version -all/)
      end
    
          it 'it increments all targets patch version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number
        end').runner.execute(:test)
    
            if Devise.activerecord51?
          def postpone_email_change_until_confirmation_and_regenerate_confirmation_token
            @reconfirmation_required = true
            self.unconfirmed_email = self.email
            self.email = self.email_in_database
            self.confirmation_token = nil
            generate_confirmation_token
          end
        else
          def postpone_email_change_until_confirmation_and_regenerate_confirmation_token
            @reconfirmation_required = true
            self.unconfirmed_email = self.email
            self.email = self.email_was
            self.confirmation_token = nil
            generate_confirmation_token
          end
        end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      # Proxy to devise map class
  def resource_class
    devise_mapping.to
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          protected
    
          format.json do
        @statuses = Status.as_tag_timeline(@tag, current_account, params[:local]).paginate_by_max_id(20, params[:max_id])
        @statuses = cache_collection(@statuses, Status)
    
      describe 'for a silence with reject media' do
    before do
      subject.call(DomainBlock.create!(domain: 'evil.org', severity: :silence, reject_media: true))
    end
    
    require 'metasploit/framework/common_engine'
require 'metasploit/framework/database'
    
          when :login_fail
        if(s[:user] and s[:pass])
          report_auth_info(s.merge({:active => false}))
          print_status('Failed FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
    
          case matched
      when :banner
        s[:info] = matches
        report_service(s)
    
    if (ip == nil || port == nil)
  puts 'Syntax: test.rb <ip> [port]\n'
  exit
end
    
        if ARGV.include?('--new-issue') || ARGV.switch?('n')
      url = create_issue(f.tap, '#{f.name} failed to build on #{MacOS.full_version}', url)
    end
    
        # Setup GitHub environment variables
    %w[GITHUB_USER GITHUB_PASSWORD GITHUB_TOKEN].each do |env|
      homebrew_env = ENV['HOMEBREW_#{env}']
      next unless homebrew_env
      next if homebrew_env.empty?
      ENV[env] = homebrew_env
    end