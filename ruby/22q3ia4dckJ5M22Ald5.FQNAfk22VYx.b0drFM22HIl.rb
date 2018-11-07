
        
          protected
    def after_resetting_password_path_for(resource)
      Devise.sign_in_after_reset_password ? after_sign_in_path_for(resource) : new_session_path(resource_name)
    end
    
            store.replace(path) do
          new.build_pages do |page|
            next unless store_page?(page)
            store.write page[:store_path], page[:output]
            index.add page[:entries]
            pages.add page[:path], page[:output]
          end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def path
      @path ||= url.path
    end
    
          request_all initial_urls do |response|
        next unless data = handle_response(response)
        yield data
        next unless data[:internal_urls].present?
        next_urls = data[:internal_urls].select { |url| history.add?(url.downcase) }
        instrument 'queued.scraper', urls: next_urls
        next_urls
      end
    end
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end
    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
          @user.resend_confirmation_instructions
    
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
    
      # The lexical environment for SassScript.
  # This keeps track of variable, mixin, and function definitions.
  #
  # A new environment is created for each level of Sass nesting.
  # This allows variables to be lexically scoped.
  # The new environment refers to the environment in the upper scope,
  # so it has access to variables defined in enclosing scopes,
  # but new variables are defined locally.
  #
  # Environment also keeps track of the {Engine} options
  # so that they can be made available to {Sass::Script::Functions}.
  class Environment < BaseEnvironment
    # The enclosing environment,
    # or nil if this is the global environment.
    #
    # @return [Environment]
    attr_reader :parent
    
        def path_for(file)
      return file.path if file.is_a?(File)
      return file if file.is_a?(String)
    end
    
          # If a full uri is passed, this removes the root from it
      # otherwise returns the name unchanged
      def remove_root(name)
        if name.index(@root + '/') == 0
          name[(@root.length + 1)..-1]
        else
          name
        end
      end
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
      end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
            def order_id
          super || params[:id]
        end
      end
    end
  end
end

    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update_attributes(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def new; end
    
            def current
          @order = find_current_order
          if @order
            respond_with(@order, default_template: :show, locals: { root_object: @order })
          else
            head :no_content
          end
        end
    
            def update
          if @property
            authorize! :update, @property
            @property.update_attributes(property_params)
            respond_with(@property, status: 200, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end