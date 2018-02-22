
        
            def translation_scope
      'devise.confirmations'
    end
end

    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
    # For compatibility with jquery-rails (and other engines that need action_view) in pro
require 'action_controller/railtie'
require 'action_view/railtie'
    
    class SnifferFTP < BaseProtocolParser
    
          when nil
        # No matches, no saved state
      else
        sessions[s[:session]].merge!({k => matches})
      end # end case matched
    end # end of each_key
  end # end of parse
end
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    fileOutJar 	= clsFile.new_with_sig('Ljava.lang.String;', 'output.jar')
filesIn		= Array.new
    
      describe '::binary_osxfuse_installed?' do
    it 'returns false if fuse.h does not exist' do
      allow(File).to receive(:exist?).and_return(false)
      expect(described_class).not_to be_binary_osxfuse_installed
    end
    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[0..-3] # drop \Z anchor
            regex_str = interpret_string_escapes(regex_str)