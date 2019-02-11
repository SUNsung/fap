
        
            def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          root.options = @options
      if @options[:cache] && key && sha
        begin
          old_options = root.options
          root.options = {}
          @options[:cache_store].store(key, sha, root)
        ensure
          root.options = old_options
        end
      end
      root
    rescue SyntaxError => e
      e.modify_backtrace(:filename => @options[:filename], :line => @line)
      e.sass_template = @template
      raise e
    end
    
        # @param msg [String] The error message
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def initialize(msg, attrs = {})
      @message = msg
      @sass_backtrace = []
      add_backtrace(attrs)
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
    
          get '/orders/mine', to: 'orders#mine', as: 'my_orders'
      get '/orders/current', to: 'orders#current', as: 'current_order'
    
      s.add_dependency 'activemerchant', '~> 1.67'
  s.add_dependency 'acts_as_list', '~> 0.8'
  s.add_dependency 'awesome_nested_set', '~> 3.1.4'
  s.add_dependency 'carmen', '~> 1.0.0'
  s.add_dependency 'cancancan', '~> 2.0'
  s.add_dependency 'deface', '~> 1.0'
  s.add_dependency 'ffaker', '~> 2.9'
  s.add_dependency 'friendly_id', '~> 5.2.1'
  s.add_dependency 'highline', '~> 2.0.0' # Necessary for the install generator
  s.add_dependency 'kaminari', '~> 1.0.1'
  s.add_dependency 'money', '~> 6.13'
  s.add_dependency 'monetize', '~> 1.9'
  s.add_dependency 'paranoia', '~> 2.4.1'
  s.add_dependency 'premailer-rails'
  s.add_dependency 'acts-as-taggable-on', '~> 6.0'
  s.add_dependency 'rails', '~> 5.2.1', '>= 5.2.1.1'
  s.add_dependency 'ransack', '~> 2.1.1'
  s.add_dependency 'responders'
  s.add_dependency 'state_machines-activerecord', '~> 0.5'
  s.add_dependency 'stringex'
  s.add_dependency 'twitter_cldr', '~> 4.3'
  s.add_dependency 'sprockets-rails'
  s.add_dependency 'mini_magick', '~> 4.8.0'
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
          def invalid_api_key
        render 'spree/api/errors/invalid_api_key', status: 401
      end
    
            def inventory_unit_params
          params.require(:inventory_unit).permit(permitted_inventory_unit_attributes)
        end
      end
    end
  end
end

    
            def update
          @line_item = find_line_item
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end