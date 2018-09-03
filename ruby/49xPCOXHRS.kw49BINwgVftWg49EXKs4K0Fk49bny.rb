
        
        class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
        # Stores requested URI to redirect the user after signing in. We can't use
    # the scoped session provided by warden here, since the user is not
    # authenticated yet, but we still need to store the URI based on scope, so
    # different scopes would never use the same URI to redirect.
    def store_location!
      store_location_for(scope, attempted_path) if request.get? && !http_auth?
    end
    
      def scope_for_collection
    case params[:id]
    when 'featured'
      @account.statuses.permitted_for(@account, signed_request_account).tap do |scope|
        scope.merge!(@account.pinned_statuses)
      end
    else
      raise ActiveRecord::NotFound
    end
  end
    
          @account_moderation_note = current_account.account_moderation_notes.new(resource_params)
    
          @account.reset_avatar!
      @account.reset_header!
      @account.save!
    
          @user.resend_confirmation_instructions
    
        private
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
        if other.respond_to?(:to_str)
      return true if to_str == other.to_str
    end
    
    #
# `CacheStoreDatabase` acts as an interface to a persistent storage mechanism
# residing in the `HOMEBREW_CACHE`
#
class CacheStoreDatabase
  # Yields the cache store database.
  # Closes the database after use if it has been loaded.
  #
  # @param  [Symbol] type
  # @yield  [CacheStoreDatabase] self
  def self.use(type)
    database = CacheStoreDatabase.new(type)
    return_value = yield(database)
    database.close_if_open!
    return_value
  end
    
        # /RAND/../RAND../
    if self.junk_directories
      str.gsub!(/\//) {
        dirs = ''
        (rand(5)+5).times {
          dirs << '/' + Rex::Text.rand_text_alpha(rand(5) + 1) + '/..'
        }
        dirs + '/'
      }
    end
    
    require 'rex/proto/ipmi/utils'
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of a Principal stored in the Kerberos Credential Cache.
        class Principal < Element
          # @!attribute name_type
          #   @return [Integer]
          attr_accessor :name_type
          # @!attribute realm
          #   @return [String]
          attr_accessor :realm
          # @!attribute components
          #   @return [Array<String>]
          attr_accessor :components
    
                cipher = OpenSSL::Cipher.new('rc4')
            cipher.encrypt
            cipher.key = k3
            encrypted = cipher.update(data_encrypt) + cipher.final
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encrypts the Rex::Proto::Kerberos::Model::AuthorizationData
          #
          # @param etype [Integer] the crypto schema to encrypt
          # @param key [String] the key to encrypt
          # @return [String] the encrypted result
          # @raise [NotImplementedError] if encryption schema isn't supported
          def encrypt(etype, key)
            data = self.encode
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
      shared_examples 'no_braces and context_dependent offenses' do
    it 'registers an offense for one non-hash parameter followed by a hash ' \
       'parameter with braces' do
      expect_offense(<<-RUBY.strip_indent)
        where(1, { y: 2 })
                 ^^^^^^^^ Redundant curly braces around a hash parameter.
      RUBY
    end
    
            expect(new_source).to eq(construct(true, false))
      end
    end
  end
end

    
            expect(new_source).to eq(<<-RUBY.strip_indent)
          def func
            for n in [1, 2, 3] do
              puts n
            end
          end
        RUBY
      end
    
          if allow_implicit_return
        expect(cop.offenses.empty?).to be true
      else
        expect(cop.messages)
          .to match_array(start_with('Use `#{method}!` instead of `#{method}`' \
                             ' if the return value is not checked.'))
      end
    end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
    When /^I rollback a migration$/ do
  step %[I successfully run `rake db:rollback STEPS=1 --trace`]
end