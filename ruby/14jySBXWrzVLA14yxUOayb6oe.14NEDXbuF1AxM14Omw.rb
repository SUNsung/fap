
        
              def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
        it 'raises Errno::ENOENT when `exception: true` is given and the specified command does not exist' do
      lambda { @object.system('feature_14386', exception: true) }.should raise_error(Errno::ENOENT)
    end
  end
    
      context 'time commands' do
    before :each do
      @tmp_file = File.new(tmp('file.kernel.test'), 'w')
    end
    
        context 'on a non visible post' do
      before do
        @post = stranger.post :status_message, :text => 'something', :public => false, :to => 'all'
      end
    
    require 'rake/testtask'
    
      # Compile a Sass or SCSS string to CSS.
  # Defaults to SCSS.
  #
  # @param contents [String] The contents of the Sass file.
  # @param options [{Symbol => Object}] An options hash;
  #   see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  def self.compile(contents, options = {})
    options[:syntax] ||= :scss
    Engine.new(contents, options).to_css
  end
    
              raise SyntaxError.new('Indentation can't use both tabs and spaces.',
            :line => index) if tab_str.include?(?\s) && tab_str.include?(?\t)
        end
        first &&= !tab_str.nil?
        if tab_str.nil?
          lines << Line.new(line.strip, 0, index, 0, @options[:filename], [])
          next
        end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
          targetted_select2 'black', from: '#s2id_variant_option_value_ids'
      fill_in 'variant_sku', with: 'A100'
      click_button 'Create'
      expect(page).to have_content('successfully created!')
    
          rescue_from ActionController::ParameterMissing, with: :error_during_processing
      rescue_from ActiveRecord::RecordInvalid, with: :error_during_processing
      rescue_from ActiveRecord::RecordNotFound, with: :not_found
      rescue_from CanCan::AccessDenied, with: :unauthorized
      rescue_from Spree::Core::GatewayError, with: :gateway_error
    
            def next
          authorize! :update, @order, order_token
          @order.next!
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        rescue StateMachines::InvalidTransition
          respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
        end
    
            def show
          @stock_item = scope.find(params[:id])
          respond_with(@stock_item)
        end