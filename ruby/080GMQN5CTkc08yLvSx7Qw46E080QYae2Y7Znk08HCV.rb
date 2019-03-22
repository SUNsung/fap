
        
                def preload_commit_authors
          # This also preloads the author of every commit. We're using 'lazy_author'
          # here since 'author' immediately loads the data on the first call.
          @pipeline.commit.try(:lazy_author)
        end
    
          # Sets multiple keys to a given value.
      #
      # mapping - A Hash mapping the cache keys to their values.
      # timeout - The time after which the cache key should expire.
      def self.write_multiple(mapping, timeout: TIMEOUT)
        Redis::Cache.with do |redis|
          redis.multi do |multi|
            mapping.each do |raw_key, value|
              multi.set(cache_key_for(raw_key), value, ex: timeout)
            end
          end
        end
      end
    
          def verify_ssl
        github_omniauth_provider.fetch('verify_ssl', true)
      end
    
            def find_target_id
          GithubImport::IssuableFinder.new(project, issue).database_id
        end
      end
    end
  end
end

    
            # Builds a new note using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
          private
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            # This returns all the registered configuration classes.
        #
        # @return [Hash]
        def config
          result = {}
    
              # Return the dummy object so that anything else works
          ::Vagrant::Config::V2::DummyConfig.new
        end
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
        def log_status(status)
      puts bold status
    end
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
    module RuboCop
  module AST
    # A node extension for `when` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `when` nodes within RuboCop.
    class WhenNode < Node
      # Returns an array of all the conditions in the `when` branch.
      #
      # @return [Array<Node>] an array of condition nodes
      def conditions
        node_parts[0...-1]
      end
    
        template '/engineyard/bin/sidekiq' do
      owner 'root'
      group 'root' 
      mode 0755
      source 'sidekiq.erb' 
    end
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>
    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
        def redis(&block)
      Sidekiq.redis(&block)
    end
    
          indifferent_hash.merge! request.params
      route_params.each {|k,v| indifferent_hash[k.to_s] = v }
    
              return WebAction.new(env, route.block)
        end
      end