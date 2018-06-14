
        
              module Locals
        attr_accessor :rendered_views
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
    require 'cases/helper'
    
        private
      attr_reader :table
    
          def inspect
        Kernel.instance_method(:inspect).bind(self).call
      end
    
        bulb = car.bulbs.build
    assert_equal 'defaulty', bulb.name
    
        assert_raise(RuntimeError) { assert_not @pirate.save }
    assert_equal before, [@pirate.reload.catchphrase, @pirate.ship.name]
  end
    
      validates_presence_of :name
    
      test 'subscription rejection' do
    subscriptions = Minitest::Mock.new
    subscriptions.expect(:remove_subscription, SecretChannel, [SecretChannel])
    
    class ActionCable::Connection::ClientSocketTest < ActionCable::TestCase
  class Connection < ActionCable::Connection::Base
    attr_reader :connected, :websocket, :errors
    
        Jekyll::Commands::Build.process({'source' => 'docs'})
    
          def warnings
        @template.warnings
      end
    
        # Require all the plugins which are allowed.
    #
    # Returns nothing
    def conscientious_require
      require_theme_deps if site.theme
      require_plugin_files
      require_gems
      deprecation_checks
    end
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          if argv.empty? || argv.length > 2
            raise Vagrant::Errors::CLIInvalidUsage,
              help: opts.help.chomp
          end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
        FileUtils.mkdir_p(target) unless File.directory?(target)
    
          def store_dir
        ':rails_root/public/system/:attachment/:id'
      end
    
          ##
      # Read the content type of the file
      #
      # === Returns
      #
      # [String] content type of the file
      #
      def content_type
        file.try(:content_type)
      end
    
          def serializable_hash(options = nil)
        {'url' => url}.merge Hash[versions.map { |name, version| [name, { 'url' => version.url }] }]
      end