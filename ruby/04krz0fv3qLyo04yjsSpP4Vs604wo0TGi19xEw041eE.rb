  # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
      end
    
        def fullpath
      '/#{@path_prefix}/#{@path}'.squeeze('/')
    end
    
          included do
        before_update :clear_reset_password_token, if: :clear_reset_password_token?
      end
    
          def self.required_fields(klass)
        [:remember_created_at]
      end
    
        def URIEncodeSingle(cc, result, index)
      x = (cc >> 12) & 0xF;
      y = (cc >> 6) & 63;
      z = cc & 63;
      octets = Array.new(3);
      if (cc <= 0x007F)
        octets[0] = cc;
      elsif (cc <= 0x07FF)
        octets[0] = y + 192;
        octets[1] = z + 128;
      else
        octets[0] = x + 224;
        octets[1] = y + 128;
        octets[2] = z + 128;
      end
      return URIEncodeOctets(octets, result, index);
    end
    
          def title
        @page.title
      end
    
          def bar_side
        @bar_side.to_s
      end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end