
        
            def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
        # @include and @extend from LESS:
    #  .mixin()             -> @include mixin()
    #  #scope > .mixin()    -> @include scope-mixin()
    #  &:extend(.mixin all) -> @include mixin()
    def replace_mixins(less, mixin_names)
      mixin_pattern = /(?<=^|\s)((?:[#|\.][\w-]+\s*>\s*)*)\.([\w-]+)\((.*)\)(?!\s\{)/
    }
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end