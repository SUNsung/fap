
        
            def root?
      path == 'index'
    end
    
        def format_path(path)
      path.to_s.remove File.join(File.expand_path('.'), '')
    end
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
      def resource_params
    params.fetch(resource_name, {})
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
    gemfile(true) do
  source 'https://rubygems.org'
  # Activate the gem you are reporting the issue against.
  gem 'rails', '~> 4.2.0'
  gem 'devise', '~> 4.0'
  gem 'sqlite3'
  gem 'byebug'
end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
          def remove_domain_from_uri(uri)
        [uri.path.sub(/\A\/+/, '/'), uri.query].compact.join('?')
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          def remember_me!
        self.remember_token ||= self.class.remember_token if respond_to?(:remember_token)
        self.remember_created_at ||= Time.now.utc
        save(validate: false) if self.changed?
      end
    
      #
  # Updates the various parts of the HTTP response command string.
  #
  def update_cmd_parts(str)
    if (md = str.match(/HTTP\/(.+?)\s+(\d+)\s?(.+?)\r?\n?$/))
      self.message = md[3].gsub(/\r/, '')
      self.code    = md[2].to_i
      self.proto   = md[1]
    else
      raise RuntimeError, 'Invalid response command string', caller
    end
    
    
end
end
end

    
              res
        end
      end
    end
  end
end

    
                cipher = OpenSSL::Cipher.new('rc4')
            cipher.decrypt
            cipher.key = k3
            decrypted = cipher.update(data) + cipher.final
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              def initialize(options = {})
            self.class.attributes.each do |attr|
              if options.has_key?(attr)
                m = (attr.to_s + '=').to_sym
                self.send(m, options[attr])
              end
            end
          end
    
              # Decodes the flags field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_flags(input)
            input.value[0].value.to_i
          end
    
              # Encodes the Rex::Proto::Kerberos::Model::KdcRequest into an ASN.1 String
          #
          # @return [String]
          def encode
            pvno_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pvno], 1, :CONTEXT_SPECIFIC)
            msg_type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 2, :CONTEXT_SPECIFIC)
            pa_data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pa_data], 3, :CONTEXT_SPECIFIC)
            req_body_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_req_body], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([pvno_asn1, msg_type_asn1, pa_data_asn1, req_body_asn1])
            seq_asn1 = OpenSSL::ASN1::ASN1Data.new([seq], msg_type, :APPLICATION)
            seq_asn1.to_der
          end
    
              # Decodes the msg_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_msg_type(input)
            input.value[0].value.to_i
          end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
    http://capistranorb.com/documentation/advanced-features/custom-scm
    
          attr_reader :locations, :values, :fetched_keys
    
            PluginManager.ui.debug('Looking if package named: #{plugin_name} exists at #{uri}')
    
          warn_local_gems(plugins_with_path) if plugins_with_path.size > 0
    end
    update_gems!
  end
    
            expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                  '#{b}#{close}',
                                  suffix].join($RS))
      end
    end
  end
end

    
          # Checks whether this case statement has an `else` branch.
      #
      # @return [Boolean] whether the `case` statement has an `else` branch
      def else?
        loc.else
      end
    end
  end
end

    
          # Checks whether this `hash` uses a mix of hash rocket and colon
      # delimiters for its pairs.
      #
      # @return [Boolean] whether the `hash` uses mixed delimiters
      def mixed_delimiters?
        pairs.map(&:delimiter).uniq.size > 1
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
    # Require things that don't support autoload
require 'active_admin/engine'
require 'active_admin/error'
    
        # Build a BatchActionForm
    class BatchActionForm < ActiveAdmin::Component
      builder_method :batch_action_form
    
        def self.controllers_for_filters
      [SessionsController, PasswordsController, UnlocksController,
        RegistrationsController, ConfirmationsController
      ]
    end