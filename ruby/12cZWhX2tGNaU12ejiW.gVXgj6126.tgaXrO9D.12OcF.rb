
        
                UI.message('Adding git tag '#{tag}' 🎯.')
        Actions.sh(cmd.join(' '))
      end
    
            message = 'builds/test/1337 (fastlane)'
        tag = 'builds/test/1337'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-fallback-url \'http://docset-fallback-url.com\' --exit-threshold \'2\' input/dir')
      end
    
            expect(result).to eq('carthage bootstrap --cache-builds')
      end
    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
          command :revoke_expired do |c|
        c.syntax = 'fastlane cert revoke_expired'
        c.description = 'Revoke expired iOS code signing certificates'
    
    class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
          private
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
        # Return modules for the mapping.
    def modules
      @modules ||= to.respond_to?(:devise_modules) ? to.devise_modules : []
    end
    
              if recoverable.persisted?
            if recoverable.reset_password_period_valid?
              recoverable.reset_password(attributes[:password], attributes[:password_confirmation])
            else
              recoverable.errors.add(:reset_password_token, :expired)
            end
          end
    
          def remember_expires_at
        self.class.remember_for.from_now
      end
    
      #
  # Initializes an HTTP server as listening on the provided port and
  # hostname.
  #
  def initialize(port = 80, listen_host = '0.0.0.0', ssl = false, context = {},
                 comm = nil, ssl_cert = nil, ssl_compression = false,
                 ssl_cipher = nil)
    self.listen_host     = listen_host
    self.listen_port     = port
    self.ssl             = ssl
    self.context         = context
    self.comm            = comm
    self.ssl_cert        = ssl_cert
    self.ssl_compression = ssl_compression
    self.ssl_cipher      = ssl_cipher
    self.listener        = nil
    self.resources       = {}
    self.server_name     = DefaultServer
  end
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
            # Creates a TCP connection using Rex::Socket::Tcp
        #
        # @return [Rex::Socket::Tcp]
        def create_tcp_connection
          self.connection = Rex::Socket::Tcp.create(
            'PeerHost'   => host,
            'PeerPort'   => port.to_i,
            'Context'    => context,
            'Timeout'    => timeout
          )
        end
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos Checksum definition.
        class Checksum < Element
    
              def self.attr_accessor(*vars)
            @attributes ||= []
            @attributes.concat vars
            super(*vars)
          end
    
              # Decodes the req_body from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::KdcRequestBody]
          def decode_asn1_req_body(input)
            Rex::Proto::Kerberos::Model::KdcRequestBody.decode(input.value[0])
          end
        end
      end
    end
  end
end

    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    namespace :bower do
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
        def roles
      ['--roles ROLES', '-r',
       'Run SSH commands only on hosts matching these roles',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:role, value)
       end]
    end
    
          def response
        return @response if defined? @response
    
          within('#sidebar') { click_link 'Variants' }
      expect(page).to have_content('To add variants, you must first define')
    end
    
          if simple_current_order.nil? || simple_current_order.item_count.zero?
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{Spree.t('empty')})'
        css_class = 'empty'
      else
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{simple_current_order.item_count})
                <span class='amount'>#{simple_current_order.display_total.to_html}</span>'
        css_class = 'full'
      end
    
            def remove_coupon_code
          find_order(true)
          authorize! :update, @order, order_token
          @handler = Spree::PromotionHandler::Coupon.new(@order).remove(params[:coupon_code])
          status = @handler.successful? ? 200 : 404
          render 'spree/api/v1/promotions/handler', status: status
        end