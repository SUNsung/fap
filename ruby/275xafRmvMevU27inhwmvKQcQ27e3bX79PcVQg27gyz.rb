
        
          def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
      def reemit
    @event.reemit!
    respond_to do |format|
      format.html { redirect_back event_path(@event), notice: 'Event re-emitted.' }
    end
  end
    
        respond_to do |format|
      format.html { redirect_to services_path }
      format.json { render json: @service }
    end
  end
end

    
      def new
    @user_credential = current_user.user_credentials.build
    
          included do
        before_create :generate_confirmation_token, if: :confirmation_required?
        after_create :skip_reconfirmation_in_callback!, if: :send_confirmation_notification?
        if defined?(ActiveRecord) && self < ActiveRecord::Base # ActiveRecord
          after_commit :send_on_create_confirmation_instructions, on: :create, if: :send_confirmation_notification?
          after_commit :send_reconfirmation_instructions, on: :update, if: :reconfirmation_required?
        else # Mongoid
          after_create :send_on_create_confirmation_instructions, if: :send_confirmation_notification?
          after_update :send_reconfirmation_instructions, if: :reconfirmation_required?
        end
        before_update :postpone_email_change_until_confirmation_and_regenerate_confirmation_token, if: :postpone_email_change?
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })
    
          buffer = ''
      n.pack('ccc', buffer: buffer).should == 'ABC'
    
      it 'does not modify a HOME string argument' do
    str = '~/a'
    File.expand_path(str).should == '#{Dir.home}/a'
    str.should == '~/a'
  end
    
          it 'allows Turkic as an extra option (and applies Turkic semantics)' do
        a = 'iß'
        a.capitalize!(:lithuanian, :turkic)
        a.should == 'İß'
      end
    
    describe 'String#swapcase!' do
  it 'modifies self in place' do
    a = 'cYbEr_PuNk11'
    a.swapcase!.should equal(a)
    a.should == 'CyBeR_pUnK11'
  end
    
        describe 'modifies self in place for full Unicode case mapping adapted for Lithuanian' do
      it 'currently works the same as full Unicode case mapping' do
        a = 'iß'
        a.upcase!(:lithuanian)
        a.should == 'ISS'
      end
    
        def rbdcv_cvar
      @@rbdcv_cvar if defined? @@rbdcv_cvar
    end
  end
    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
                  s[:proto]='pop3'
              s[:extra]='Failed Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Invalid POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
              s[:pass]=''
          end
        when nil
          # No matches, no saved state
        else
          s[:last]=matched
          sessions[s[:session]].merge!({k => matches})
      end # end case matched
    end # end of each_key
  end # end of parse
end
    
    # This is a completely hackish way to do this, and could break with future
# versions of the JDK.  Need to find a better way to use sun.security.tools.KeyTool
# and .JarSigner than modifying the source.  These rely on internal APIs that may
# change.
signer = Rjb::import('javaCompile.SignJar')
#clsKeyTool = Rjb::import('sun.security.tools.KeyTool')
#clsKeyTool = Rjb::import('sun.security.tools.KeyToolMSF')
#clsJarSigner = Rjb::import('javaCompile.SignJar.JarSignerMSF')
#clsJarSigner = Rjb::import('sun.security.tools.JarSigner')
#clsJarSigner = Rjb::import('sun.security.tools.JarSignerMSF')