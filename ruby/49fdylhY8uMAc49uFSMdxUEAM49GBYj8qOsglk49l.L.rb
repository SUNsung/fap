
        
            attr_reader :filters
    
            if root_path?
          (options[:skip] ||= []).concat ['', '/']
        end
    
          def base_urls
        @base_urls ||= self.class.base_urls.map { |url| URL.parse(url) }
      end
    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
    require 'vagrant/capability_host'
    
          with_index_lock do
        unlocked_reload
      end
    end
    
              result
        end
    
    require 'log4r'
    
            # This unregisters a plugin so that its components will no longer
        # be used. Note that this should only be used for testing purposes.
        def unregister(plugin)
          if @registered.include?(plugin)
            @logger.info('Unregistered: #{plugin.name}')
            @registered.delete(plugin)
          end
        end
      end
    end
  end
end

    
    require 'log4r'
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
        def self.enable_delay!
      if defined?(::ActiveSupport)
        require 'sidekiq/extensions/active_record'
        require 'sidekiq/extensions/action_mailer'
    
        def filterable_fields
      @filterable_fields ||= @model_config.list.fields.select(&:filterable?)
    end
    
        # Inspired by Kaminari
    def self.load!
      if compass?
        require 'rails_admin/bootstrap-sass/compass_functions'
        register_compass_extension
      elsif asset_pipeline?
        require 'rails_admin/bootstrap-sass/sass_functions'
      end