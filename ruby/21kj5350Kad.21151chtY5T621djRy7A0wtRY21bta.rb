
        
                  opts[:SSLCertificate] = OpenSSL::X509::Certificate.new(read_file(src, cert))
          opts[:SSLPrivateKey]  = OpenSSL::PKey::RSA.new(read_file(src, key))
          opts[:SSLEnable] = true
        end
    
        # Convert this Convertible's data to a Hash suitable for use by Liquid.
    #
    # Returns the Hash representation of this Convertible.
    def to_liquid(attrs = nil)
      further_data = Hash[(attrs || self.class::ATTRIBUTES_FOR_LIQUID).map do |attribute|
        [attribute, send(attribute)]
      end]
    
          # return nil for `{{ site.config }}` even if --config was passed via CLI
      def config; end
    end
  end
end

    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
    desc 'Compile bootstrap-sass to tmp/ (or first arg)'
task :compile, :css_path do |t, args|
  require 'sass'
  require 'term/ansicolor'
    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
            TEMPLATE_REPO = 'https://github.com/CocoaPods/pod-template.git'.freeze
        TEMPLATE_INFO_URL = 'https://github.com/CocoaPods/pod-template'.freeze
        CREATE_NEW_POD_INFO_URL = 'http://guides.cocoapods.org/making/making-a-cocoapod'.freeze
    
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
    
        # Provide a wrapper for the SCM that loads a strategy for the user.
    #
    # @param [Rake] context     The context in which the strategy should run
    # @param [Module] strategy  A module to include into the SCM instance. The
    #    module should provide the abstract methods of Capistrano::SCM
    #
    def initialize(context, strategy)
      @context = context
      singleton = class << self; self; end
      singleton.send(:include, strategy)
    end
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)
    
        describe 'when defining hosts using the `role` syntax' do
      before do
        dsl.role :web, %w{example1.com example2.com example3.com}
        dsl.role :web, %w{example1.com}, active: true
        dsl.role :app, %w{example3.com example4.com}
        dsl.role :app, %w{example3.com}, active: true
        dsl.role :app, %w{example4.com}, primary: true
        dsl.role :db, %w{example5.com}, no_release: true
      end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end