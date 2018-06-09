
        
          test 'sign in with email including extra spaces should fail when email is NOT the list of strip whitespace keys' do
    swap Devise, strip_whitespace_keys: [] do
      create_user(email: 'foo@bar.com')
    
    lib_path = root.join('lib').to_path
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(\*\s+OK[^\n\r]*)/i,
      :login		=> /^CAPABILITY\s+LOGIN\s+([^\s]+)\s+([^\n\r]+)/i,
      :login_pass => /^CAPABILITY\s+OK\s+(Login[^\n\r]*)/i,
      :login_bad	=> /^CAPABILITY\s+BAD\s+(Login[^\n\r]*)/i,
      :login_fail => /^CAPABILITY\s+NO\s+(Login[^\n\r]*)/i
    }
  end
    
    require 'rubygems'
require 'rjb'
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
        # The type of interpolation deprecation for this node.
    #
    # This can be `:none`, indicating that the node doesn't use deprecated
    # interpolation; `:immediate`, indicating that a deprecation warning should
    # be emitted as soon as possible; or `:potential`, indicating that a
    # deprecation warning should be emitted if the resulting string is used in a
    # way that would distinguish it from a list.
    #
    # @return [Symbol]
    attr_reader :deprecation
    
        # The aspect ratio of the dimensions.
    def aspect
      width / height
    end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end