
        
        WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    #
    
    module Jekyll
  # internal requires
  autoload :Cleaner,             'jekyll/cleaner'
  autoload :Collection,          'jekyll/collection'
  autoload :Configuration,       'jekyll/configuration'
  autoload :Convertible,         'jekyll/convertible'
  autoload :Deprecator,          'jekyll/deprecator'
  autoload :Document,            'jekyll/document'
  autoload :EntryFilter,         'jekyll/entry_filter'
  autoload :Errors,              'jekyll/errors'
  autoload :Excerpt,             'jekyll/excerpt'
  autoload :External,            'jekyll/external'
  autoload :FrontmatterDefaults, 'jekyll/frontmatter_defaults'
  autoload :Hooks,               'jekyll/hooks'
  autoload :Layout,              'jekyll/layout'
  autoload :CollectionReader,    'jekyll/readers/collection_reader'
  autoload :DataReader,          'jekyll/readers/data_reader'
  autoload :LayoutReader,        'jekyll/readers/layout_reader'
  autoload :PostReader,          'jekyll/readers/post_reader'
  autoload :PageReader,          'jekyll/readers/page_reader'
  autoload :StaticFileReader,    'jekyll/readers/static_file_reader'
  autoload :ThemeAssetsReader,   'jekyll/readers/theme_assets_reader'
  autoload :LogAdapter,          'jekyll/log_adapter'
  autoload :Page,                'jekyll/page'
  autoload :PageWithoutAFile,    'jekyll/page_without_a_file'
  autoload :PluginManager,       'jekyll/plugin_manager'
  autoload :Publisher,           'jekyll/publisher'
  autoload :Reader,              'jekyll/reader'
  autoload :Regenerator,         'jekyll/regenerator'
  autoload :RelatedPosts,        'jekyll/related_posts'
  autoload :Renderer,            'jekyll/renderer'
  autoload :LiquidRenderer,      'jekyll/liquid_renderer'
  autoload :Site,                'jekyll/site'
  autoload :StaticFile,          'jekyll/static_file'
  autoload :Stevenson,           'jekyll/stevenson'
  autoload :Theme,               'jekyll/theme'
  autoload :ThemeBuilder,        'jekyll/theme_builder'
  autoload :URL,                 'jekyll/url'
  autoload :Utils,               'jekyll/utils'
  autoload :VERSION,             'jekyll/version'
    
        # Private: The metadata file storing dependency tree and build history
    #
    # Returns an Array with the metdata file as the only item
    def metadata_file
      [site.regenerator.metadata_file]
    end
    
              # This is too noisy even for --verbose, but uncomment if you need it for
          # a specific WebSockets issue.  Adding ?LR-verbose=true onto the URL will
          # enable logging on the client side.
          # em_opts[:debug] = true
    
          # Replaces the given middlware object or index with the new
      # middleware.
      def replace(index, middleware, *args, &block)
        if index.is_a?(Integer)
          delete(index)
          insert(index, middleware, *args, &block)
        else
          insert_before(index, middleware, *args, &block)
          delete(index)
        end
      end
    
              @app.call(env)
        end
      end
    end
  end
end

    
                # The result of this matters on whether we reached our
            # proper target state or not.
            env[:result] = env[:machine].state.id == @target_state
    
    module Vagrant
  module Action
    module Builtin
      # This middleware class will detect and handle collisions with
      # forwarded ports, whether that means raising an error or repairing
      # them automatically.
      #
      # Parameters it takes from the environment hash:
      #
      #   * `:port_collision_repair` - If true, it will attempt to repair
      #     port collisions. If false, it will raise an exception when
      #     there is a collision.
      #
      #   * `:port_collision_extra_in_use` - An array of ports that are
      #     considered in use.
      #
      #   * `:port_collision_remap` - A hash remapping certain host ports
      #     to other host ports.
      #
      class HandleForwardedPortCollisions
        include Util::IsPortOpen
    
              # Get all the configured provisioners
          @_provisioner_instances = env[:machine].config.vm.provisioners.map do |provisioner|
            # Instantiate the provisioner
            klass  = Vagrant.plugin('2').manager.provisioners[provisioner.type]
    
            def call(env)
          # Grab the SSH info from the machine or the environment
          info = env[:ssh_info]
          info ||= env[:machine].ssh_info
    
    answer = to_array(solution).map do |p|
  to_string(p)
end