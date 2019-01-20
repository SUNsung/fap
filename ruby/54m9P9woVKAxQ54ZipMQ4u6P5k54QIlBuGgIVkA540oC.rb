
        
          def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      # Sets the flash message with :key, using I18n. By default you are able
  # to set up your messages using specific resource scope, and if no message is
  # found we look to the default scope. Set the 'now' options key to a true
  # value to populate the flash.now hash in lieu of the default flash hash (so
  # the flash message will be available to the current action instead of the
  # next action).
  # Example (i18n locale file):
  #
  #   en:
  #     devise:
  #       passwords:
  #         #default_scope_messages - only if resource_scope is not found
  #         user:
  #           #resource_scope_messages
  #
  # Please refer to README or en.yml locale file to check what messages are
  # available.
  def set_flash_message(key, kind, options = {})
    message = find_message(kind, options)
    if options[:now]
      flash.now[key] = message if message.present?
    else
      flash[key] = message if message.present?
    end
  end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
          # A callback initiated after successfully being remembered. This can be
      # used to insert your own logic that is only run after the user is
      # remembered.
      #
      # Example:
      #
      #   def after_remembered
      #     self.update_attribute(:invite_code, nil)
      #   end
      #
      def after_remembered
      end
    
    module Rex
  module Proto
    module Kerberos
      # This class is a representation of a kerberos client.
      class Client
        # @!attribute host
        #   @return [String] The kerberos server host
        attr_accessor :host
        # @!attribute port
        #   @return [Integer] The kerberos server port
        attr_accessor :port
        # @!attribute timeout
        #   @return [Integer] The connect / read timeout
        attr_accessor :timeout
        # @todo Support UDP
        # @!attribute protocol
        #   @return [String] The transport protocol used (tcp/udp)
        attr_accessor :protocol
        # @!attribute connection
        #   @return [IO] The connection established through Rex sockets
        attr_accessor :connection
        # @!attribute context
        #   @return [Hash] The Msf context where the connection belongs to
        attr_accessor :context
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
              # Encodes the Rex::Proto::Kerberos::Model::Element into an ASN.1 String. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def encode
            raise ::NoMethodError, 'Method designed to be overridden'
          end
        end
      end
    end
  end
end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptedData into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            etype_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_etype], 0, :CONTEXT_SPECIFIC)
            elems << etype_asn1
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.pvno = decode_pvno(val)
              when 1
                self.msg_type = decode_msg_type(val)
              when 2
                self.ctime = decode_ctime(val)
              when 3
                self.cusec = decode_cusec(val)
              when 4
                self.stime = decode_stime(val)
              when 5
                self.susec = decode_susec(val)
              when 6
                self.error_code = decode_error_code(val)
              when 7
                self.crealm = decode_crealm(val)
              when 8
                self.cname = decode_cname(val)
              when 9
                self.realm = decode_realm(val)
              when 10
                self.sname = decode_sname(val)
              when 12
                self.e_data = decode_e_data(val)
              else
                raise ::RuntimeError, 'Failed to decode KRB-ERROR SEQUENCE'
              end
            end
          end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
    When /^I put in my password in '([^']*)'$/ do |field|
 step %(I fill in '#{field}' with '#{@me.password}')
end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
              code = InvitationCode.create(user: bob)
    
          def has_footer
        @footer = (@page.footer || false) if @footer.nil? && @page
        !!@footer
      end
    
    ENV['RACK_ENV'] = 'test'
require 'gollum'
require 'gollum/app'
    
        assert_no_match /Delete this Page/, last_response.body, ''Delete this Page' link not blocked in page template'
    assert_no_match /New/,              last_response.body, ''New' button not blocked in page template'
    assert_no_match /Upload/,           last_response.body, ''Upload' link not blocked in page template'
    assert_no_match /Rename/,           last_response.body, ''Rename' link not blocked in page template'
    assert_no_match /Edit/,             last_response.body, ''Edit' link not blocked in page template'
    
      test 'edit page with empty message' do
    page_1 = @wiki.page('A')
    post '/edit/A', :content => 'abc', :page => 'A',
         :format             => page_1.format
    follow_redirect!
    assert last_response.ok?
    
      test 'heavy use 1' do
    post '/create', :content => '한글 text', :page => 'PG',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update_attributes(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end
    
        # Loops through the list of category pages and processes each one.
    def write_category_indexes
      if self.layouts.key? 'category_index'
        dir = self.config['category_dir'] || 'categories'
        self.categories.keys.each do |category|
          self.write_category_index(File.join(dir, category.to_url), category)
        end
    
    
module OctopressLiquidFilters
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end